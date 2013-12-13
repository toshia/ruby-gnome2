/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2006-2011  Ruby-GNOME2 Project Team
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */

#ifndef __RBPOPPLERCONVERSIONS_H__
#define __RBPOPPLERCONVERSIONS_H__

#define POPPLERANNOT2RVAL(o)                    (GOBJ2RVAL(o))
#define POPPLERFORMFIELD2RVAL(o)                (rb_poppler_ruby_object_from_form_field(o))
#define RVAL2POPPLERACTION(o)                   (rb_poppler_rval2poppler_action_event(o))
#define POPPLERACTION2RVAL(o)                   (rb_poppler_action2rval(o))
#define RVAL2POPPLERCOLOR(o)                    (rb_poppler_ruby_object_to_color(o))
#define POPPLERCOLOR2RVAL(o)                    (BOXED2RVAL(o, POPPLER_TYPE_COLOR))
#define POPPLERCOLOR2RVAL_FREE(o)               (rb_poppler_ruby_object_from_color_with_free(o))

#define RVAL2POPPLERANNOT(o)                    (POPPLER_ANNOT(RVAL2GOBJ(o)))
#define RVAL2POPPLERANNOTFREETEXT(o)            (POPPLER_ANNOT_FREE_TEXT(RVAL2GOBJ(o)))
#define RVAL2POPPLERANNOTMARKUP(o)              (POPPLER_ANNOT_MARKUP(RVAL2GOBJ(o)))
#define RVAL2POPPLERANNOTTEXT(o)                (POPPLER_ANNOT_TEXT(RVAL2GOBJ(o)))
#define RVAL2POPPLERATTACHMENT(o)               (POPPLER_ATTACHMENT(RVAL2GOBJ(o)))
#define RVAL2POPPLERDOCUMENT(o)                 (POPPLER_DOCUMENT(RVAL2GOBJ(o)))
#define RVAL2POPPLERFORMFIELD(o)                (POPPLER_FORM_FIELD(RVAL2GOBJ(o)))
#define RVAL2POPPLERPAGE(o)                     (POPPLER_PAGE(RVAL2GOBJ(o)))

#define RVAL2POPPLERANNOTCALLOUTLINE(o)         ((PopplerAnnotCalloutLine*)RVAL2BOXED(o, POPPLER_TYPE_ANNOT_CALLOUT_LINE))
#define POPPLERANNOTCALLOUTLINE2RVAL(o)         (BOXED2RVAL(o, POPPLER_TYPE_ANNOT_CALLOUT_LINE))
#define RVAL2POPPLERANNOTMAPPING(o)             ((PopplerAnnotMapping*)RVAL2BOXED(o, POPPLER_TYPE_ANNOT_MAPPING))
#define POPPLERANNOTMAPPING2RVAL(o)             (BOXED2RVAL(o, POPPLER_TYPE_ANNOT_MAPPING))
#define RVAL2POPPLERDEST(o)                     ((PopplerDest*)RVAL2BOXED(o, POPPLER_TYPE_DEST))
#define POPPLERDEST2RVAL(o)                     (BOXED2RVAL(o, POPPLER_TYPE_DEST))
#define RVAL2FONTINFO(o)                        ((PopplerFontInfo*)RVAL2BOXED(o, POPPLER_TYPE_FONT_INFO))
#define FONTINFO2RVAL(o)                        (BOXED2RVAL(o, POPPLER_TYPE_FONT_INFO))
#define RVAL2POPPLERFONTSITER(o)                ((PopplerFontsIter*)RVAL2BOXED(o, POPPLER_TYPE_FONTS_ITER))
#define POPPLERFONTSITER2RVAL(o)                (BOXED2RVAL(o, POPPLER_TYPE_FONTS_ITER))
#define RVAL2POPPLERFORMFIELDMAPPING(o)         ((PopplerFormFieldMapping*)RVAL2BOXED(o, POPPLER_TYPE_FORM_FIELD_MAPPING))
#define POPPLERFORMFIELDMAPPING2RVAL(o)         (BOXED2RVAL(o, POPPLER_TYPE_FORM_FIELD_MAPPING))
#define RVAL2POPPLERIMAGEMAPPING(o)             ((PopplerImageMapping*)RVAL2BOXED(o, POPPLER_TYPE_IMAGE_MAPPING))
#define POPPLERIMAGEMAPPING2RVAL(o)             (BOXED2RVAL(o, POPPLER_TYPE_IMAGE_MAPPING))
#define RVAL2POPPLERINDEXITER(o)                ((PopplerIndexIter*)RVAL2BOXED(o, POPPLER_TYPE_INDEX_ITER))
#define POPPLERINDEXITER2RVAL(o)                (BOXED2RVAL(o, POPPLER_TYPE_INDEX_ITER))
#define RVAL2POPPLERLINKMAPPING(o)              ((PopplerLinkMapping*)RVAL2BOXED(o, POPPLER_TYPE_LINK_MAPPING))
#define POPPLERLINKMAPPING2RVAL(o)              (BOXED2RVAL(o, POPPLER_TYPE_LINK_MAPPING))
#define RVAL2POPPLERPAGETRANSITION(o)           ((PopplerPageTransition*)RVAL2BOXED(o, POPPLER_TYPE_PAGE_TRANSITION))
#define POPPLERPAGETRANSITION2RVAL(o)           (BOXED2RVAL(o, POPPLER_TYPE_PAGE_TRANSITION))
#define RVAL2POPPLERPSFILE(o)                   ((PopplerPSFile*)RVAL2BOXED(o, POPPLER_TYPE_PS_FILE))
#define POPPLERPSFILE2RVAL(o)                   (BOXED2RVAL(o, POPPLER_TYPE_PS_FILE))
#define RVAL2POPPLERRECTANGLE(o)                ((PopplerRectangle*)RVAL2BOXED(o, POPPLER_TYPE_RECTANGLE))
#define POPPLERRECTANGLE2RVAL(o)                (BOXED2RVAL(o, POPPLER_TYPE_RECTANGLE))

#define RVAL2POPPLERACTIONTYPE(o)               (RVAL2GENUM(o, POPPLER_TYPE_ACTION_TYPE))
#define POPPLERACTIONTYPE2RVAL(o)               (GENUM2RVAL(o, POPPLER_TYPE_ACTION_TYPE))
#define RVAL2POPPLERANNOTEXTERNALDATATYPE(o)    (RVAL2GENUM(o, POPPLER_TYPE_ANNOT_EXTERNAL_DATA_TYPE))
#define POPPLERANNOTEXTERNALDATATYPE2RVAL(o)    (GENUM2RVAL(o, POPPLER_TYPE_ANNOT_EXTERNAL_DATA_TYPE))
#define RVAL2POPPLERANNOTFLAG(o)                (RVAL2GENUM(o, POPPLER_TYPE_ANNOT_FLAG))
#define POPPLERANNOTFLAG2RVAL(o)                (GENUM2RVAL(o, POPPLER_TYPE_ANNOT_FLAG))
#define RVAL2POPPLERANNOTFREETEXTQUADDING(o)    (RVAL2GENUM(o, POPPLER_TYPE_ANNOT_FREE_TEXT_QUADDING))
#define POPPLERANNOTFREETEXTQUADDING2RVAL(o)    (GENUM2RVAL(o, POPPLER_TYPE_ANNOT_FREE_TEXT_QUADDING))
#define RVAL2POPPLERANNOTMARKUPREPLYTYPE(o)     (RVAL2GENUM(o, POPPLER_TYPE_ANNOT_MARKUP_REPLY_TYPE))
#define POPPLERANNOTMARKUPREPLYTYPE2RVAL(o)     (GENUM2RVAL(o, POPPLER_TYPE_ANNOT_MARKUP_REPLY_TYPE))
#define RVAL2POPPLERANNOTTEXTICON(o)            (RVAL2GENUM(o, POPPLER_TYPE_ANNOT_TEXT_ICON))
#define POPPLERANNOTTEXTICON2RVAL(o)            (GENUM2RVAL(o, POPPLER_TYPE_ANNOT_TEXT_ICON))
#define RVAL2POPPLERANNOTTEXTSTATE(o)           (RVAL2GENUM(o, POPPLER_TYPE_ANNOT_TEXT_STATE))
#define POPPLERANNOTTEXTSTATE2RVAL(o)           (GENUM2RVAL(o, POPPLER_TYPE_ANNOT_TEXT_STATE))
#define RVAL2POPPLERANNOTTYPE(o)                (RVAL2GENUM(o, POPPLER_TYPE_ANNOT_TYPE))
#define POPPLERANNOTTYPE2RVAL(o)                (GENUM2RVAL(o, POPPLER_TYPE_ANNOT_TYPE))
#define RVAL2POPPLERBACKEND(o)                  (RVAL2GENUM(o, POPPLER_TYPE_BACKEND))
#define POPPLERBACKEND2RVAL(o)                  (GENUM2RVAL(o, POPPLER_TYPE_BACKEND))
#define RVAL2POPPLERDESTTYPE(o)                 (RVAL2GENUM(o, POPPLER_TYPE_DEST_TYPE))
#define POPPLERDESTTYPE2RVAL(o)                 (GENUM2RVAL(o, POPPLER_TYPE_DEST_TYPE))
#define RVAL2POPPLERFONTTYPE(o)                 (RVAL2GENUM(o, POPPLER_TYPE_FONT_TYPE))
#define POPPLERFONTTYPE2RVAL(o)                 (GENUM2RVAL(o, POPPLER_TYPE_FONT_TYPE))
#define RVAL2POPPLERFORMBUTTONTYPE(o)           (RVAL2GENUM(o, POPPLER_TYPE_FORM_BUTTON_TYPE))
#define POPPLERFORMBUTTONTYPE2RVAL(o)           (GENUM2RVAL(o, POPPLER_TYPE_FORM_BUTTON_TYPE))
#define RVAL2POPPLERFORMCHOICETYPE(o)           (RVAL2GENUM(o, POPPLER_TYPE_FORM_CHOICE_TYPE))
#define POPPLERFORMCHOICETYPE2RVAL(o)           (GENUM2RVAL(o, POPPLER_TYPE_FORM_CHOICE_TYPE))
#define RVAL2POPPLERFORMFIELDTYPE(o)            (RVAL2GENUM(o, POPPLER_TYPE_FORM_FIELD_TYPE))
#define POPPLERFORMFIELDTYPE2RVAL(o)            (GENUM2RVAL(o, POPPLER_TYPE_FORM_FIELD_TYPE))
#define RVAL2POPPLERFORMTEXTTYPE(o)             (RVAL2GENUM(o, POPPLER_TYPE_FORM_TEXT_TYPE))
#define POPPLERFORMTEXTTYPE2RVAL(o)             (GENUM2RVAL(o, POPPLER_TYPE_FORM_TEXT_TYPE))
#define RVAL2POPPLERPAGETRANSITIONALIGNMENT(o)  (RVAL2GENUM(o, POPPLER_TYPE_PAGE_TRANSITION_ALIGNMENT))
#define POPPLERPAGETRANSITIONALIGNMENT2RVAL(o)  (GENUM2RVAL(o, POPPLER_TYPE_PAGE_TRANSITION_ALIGNMENT))
#define RVAL2POPPLERPAGETRANSITIONDIRECTION(o)  (RVAL2GENUM(o, POPPLER_TYPE_PAGE_TRANSITION_DIRECTION))
#define POPPLERPAGETRANSITIONDIRECTION2RVAL(o)  (GENUM2RVAL(o, POPPLER_TYPE_PAGE_TRANSITION_DIRECTION))
#define RVAL2POPPLERPAGETRANSITIONTYPE(o)       (RVAL2GENUM(o, POPPLER_TYPE_PAGE_TRANSITION_TYPE))
#define POPPLERPAGETRANSITIONTYPE2RVAL(o)       (GENUM2RVAL(o, POPPLER_TYPE_PAGE_TRANSITION_TYPE))
#define RVAL2POPPLERSELECTIONSTYLE(o)           (RVAL2GENUM(o, POPPLER_TYPE_SELECTION_STYLE))
#define POPPLERSELECTIONSTYLE2RVAL(o)           (GENUM2RVAL(o, POPPLER_TYPE_SELECTION_STYLE))

#endif /* __RBPOPPLERCONVERSIONS_H__ */
