/*******************************************************************************
* Copyright (c) 2000, 2003 IBM Corporation and others. All rights reserved.
* The contents of this file are made available under the terms
* of the GNU Lesser General Public License (LGPL) Version 2.1 that
* accompanies this distribution (lgpl-v21.txt).  The LGPL is also
* available at http://www.gnu.org/licenses/lgpl.html.  If the version
* of the LGPL at http://www.gnu.org is different to the version of
* the LGPL accompanying this distribution and there is any conflict
* between the two license versions, the terms of the LGPL accompanying
* this distribution shall govern.
* 
* Contributors:
*     IBM Corporation - initial API and implementation
*******************************************************************************/

#ifdef NATIVE_STATS
int OS_nativeFunctionCallCount[];
char* OS_nativeFunctionNames[];
#define OS_NATIVE_ENTER(env, that, func) OS_nativeFunctionCallCount[func]++;
#define OS_NATIVE_EXIT(env, that, func) 
#else
#define OS_NATIVE_ENTER(env, that, func) 
#define OS_NATIVE_EXIT(env, that, func) 
#endif

#define GDK_1DISPLAY_FUNC 0
#define GDK_1ROOT_1PARENT_FUNC 1
#define GDK_1TYPE_1COLOR_FUNC 2
#define GDK_1TYPE_1PIXBUF_FUNC 3
#define GDK_1WINDOWING_1X11_FUNC 4
#define GTK_1ACCEL_1LABEL_1GET_1ACCEL_1STRING_FUNC 5
#define GTK_1ACCEL_1LABEL_1SET_1ACCEL_1STRING_FUNC 6
#define GTK_1ENTRY_1IM_1CONTEXT_FUNC 7
#define GTK_1IS_1BUTTON_FUNC 8
#define GTK_1IS_1CELL_1RENDERER_1PIXBUF_FUNC 9
#define GTK_1IS_1IMAGE_1MENU_1ITEM_FUNC 10
#define GTK_1SCROLLED_1WINDOW_1HSCROLLBAR_FUNC 11
#define GTK_1SCROLLED_1WINDOW_1SCROLLBAR_1SPACING_FUNC 12
#define GTK_1SCROLLED_1WINDOW_1VSCROLLBAR_FUNC 13
#define GTK_1TEXTVIEW_1IM_1CONTEXT_FUNC 14
#define GTK_1WIDGET_1FLAGS_FUNC 15
#define GTK_1WIDGET_1HAS_1DEFAULT_FUNC 16
#define GTK_1WIDGET_1HAS_1FOCUS_FUNC 17
#define GTK_1WIDGET_1HEIGHT_FUNC 18
#define GTK_1WIDGET_1IS_1SENSITIVE_FUNC 19
#define GTK_1WIDGET_1MAPPED_FUNC 20
#define GTK_1WIDGET_1SENSITIVE_FUNC 21
#define GTK_1WIDGET_1SET_1FLAGS_FUNC 22
#define GTK_1WIDGET_1UNSET_1FLAGS_FUNC 23
#define GTK_1WIDGET_1VISIBLE_FUNC 24
#define GTK_1WIDGET_1WIDTH_FUNC 25
#define GTK_1WIDGET_1WINDOW_FUNC 26
#define GTK_1WIDGET_1X_FUNC 27
#define GTK_1WIDGET_1Y_FUNC 28
#define G_1TYPE_1BOOLEAN_FUNC 29
#define G_1TYPE_1INT_FUNC 30
#define G_1TYPE_1STRING_FUNC 31
#define GdkColor_1sizeof_FUNC 32
#define GdkDragContext_1sizeof_FUNC 33
#define GdkEventButton_1sizeof_FUNC 34
#define GdkEventCrossing_1sizeof_FUNC 35
#define GdkEventExpose_1sizeof_FUNC 36
#define GdkEventFocus_1sizeof_FUNC 37
#define GdkEventKey_1sizeof_FUNC 38
#define GdkEventWindowState_1sizeof_FUNC 39
#define GdkEvent_1sizeof_FUNC 40
#define GdkGCValues_1sizeof_FUNC 41
#define GdkImage_1sizeof_FUNC 42
#define GdkRectangle_1sizeof_FUNC 43
#define GdkVisual_1sizeof_FUNC 44
#define GdkWindowAttr_1sizeof_FUNC 45
#define GtkAdjustment_1sizeof_FUNC 46
#define GtkAllocation_1sizeof_FUNC 47
#define GtkColorSelectionDialog_1sizeof_FUNC 48
#define GtkCombo_1sizeof_FUNC 49
#define GtkFileSelection_1sizeof_FUNC 50
#define GtkFixed_1sizeof_FUNC 51
#define GtkRequisition_1sizeof_FUNC 52
#define GtkSelectionData_1sizeof_FUNC 53
#define GtkTargetEntry_1sizeof_FUNC 54
#define GtkTargetPair_1sizeof_FUNC 55
#define GtkTextIter_1sizeof_FUNC 56
#define GtkTreeIter_1sizeof_FUNC 57
#define PANGO_1PIXELS_FUNC 58
#define PANGO_1TYPE_1FONT_1DESCRIPTION_FUNC 59
#define PTR_1sizeof_FUNC 60
#define PangoAttribute_1sizeof_FUNC 61
#define PangoItem_1sizeof_FUNC 62
#define PangoLayoutLine_1sizeof_FUNC 63
#define PangoLayoutRun_1sizeof_FUNC 64
#define PangoLogAttr_1sizeof_FUNC 65
#define PangoRectangle_1sizeof_FUNC 66
#define XAnyEvent_1sizeof_FUNC 67
#define XCheckMaskEvent_FUNC 68
#define XCheckWindowEvent_FUNC 69
#define XClientMessageEvent_1sizeof_FUNC 70
#define XDefaultScreen_FUNC 71
#define XEvent_1sizeof_FUNC 72
#define XExposeEvent_1sizeof_FUNC 73
#define XGetSelectionOwner_FUNC 74
#define XKeysymToKeycode_FUNC 75
#define XReconfigureWMWindow_FUNC 76
#define XSendEvent_FUNC 77
#define XSetInputFocus_FUNC 78
#define XSynchronize_FUNC 79
#define XTestFakeButtonEvent_FUNC 80
#define XTestFakeKeyEvent_FUNC 81
#define XTestFakeMotionEvent_FUNC 82
#define XWindowChanges_1sizeof_FUNC 83
#define g_1filename_1from_1uri_FUNC 84
#define g_1filename_1from_1utf8_FUNC 85
#define g_1filename_1to_1uri_FUNC 86
#define g_1filename_1to_1utf8_FUNC 87
#define g_1free_FUNC 88
#define g_1list_1append_FUNC 89
#define g_1list_1data_FUNC 90
#define g_1list_1free_FUNC 91
#define g_1list_1free_11_FUNC 92
#define g_1list_1length_FUNC 93
#define g_1list_1next_FUNC 94
#define g_1list_1nth_FUNC 95
#define g_1list_1nth_1data_FUNC 96
#define g_1list_1prepend_FUNC 97
#define g_1list_1previous_FUNC 98
#define g_1list_1remove_1link_FUNC 99
#define g_1list_1reverse_FUNC 100
#define g_1list_1set_1next_FUNC 101
#define g_1list_1set_1previous_FUNC 102
#define g_1locale_1from_1utf8_FUNC 103
#define g_1locale_1to_1utf8_FUNC 104
#define g_1log_1default_1handler_FUNC 105
#define g_1log_1remove_1handler_FUNC 106
#define g_1log_1set_1handler_FUNC 107
#define g_1malloc_FUNC 108
#define g_1object_1get_1qdata_FUNC 109
#define g_1object_1ref_FUNC 110
#define g_1object_1set__I_3BFI_FUNC 111
#define g_1object_1set__I_3BII_FUNC 112
#define g_1object_1set__I_3BZI_FUNC 113
#define g_1object_1set_1qdata_FUNC 114
#define g_1object_1unref_FUNC 115
#define g_1quark_1from_1string_FUNC 116
#define g_1signal_1connect_FUNC 117
#define g_1signal_1connect_1after_FUNC 118
#define g_1signal_1emit_1by_1name__I_3B_FUNC 119
#define g_1signal_1emit_1by_1name__I_3BI_FUNC 120
#define g_1signal_1emit_1by_1name__I_3BII_FUNC 121
#define g_1signal_1emit_1by_1name__I_3B_3B_FUNC 122
#define g_1signal_1handler_1disconnect_FUNC 123
#define g_1signal_1handlers_1block_1matched_FUNC 124
#define g_1signal_1handlers_1disconnect_1matched_FUNC 125
#define g_1signal_1handlers_1unblock_1matched_FUNC 126
#define g_1signal_1lookup_FUNC 127
#define g_1signal_1stop_1emission_1by_1name_FUNC 128
#define g_1slist_1data_FUNC 129
#define g_1slist_1next_FUNC 130
#define g_1strfreev_FUNC 131
#define g_1thread_1init_FUNC 132
#define g_1thread_1supported_FUNC 133
#define g_1utf16_1to_1utf8_FUNC 134
#define g_1utf8_1offset_1to_1pointer_FUNC 135
#define g_1utf8_1pointer_1to_1offset_FUNC 136
#define g_1utf8_1strlen_FUNC 137
#define g_1utf8_1to_1utf16__II_3I_3I_3I_FUNC 138
#define g_1utf8_1to_1utf16___3BI_3I_3I_3I_FUNC 139
#define gdk_1atom_1intern_FUNC 140
#define gdk_1atom_1name_FUNC 141
#define gdk_1beep_FUNC 142
#define gdk_1bitmap_1create_1from_1data_FUNC 143
#define gdk_1color_1white_FUNC 144
#define gdk_1colormap_1alloc_1color_FUNC 145
#define gdk_1colormap_1free_1colors_FUNC 146
#define gdk_1colormap_1get_1system_FUNC 147
#define gdk_1colormap_1query_1color_FUNC 148
#define gdk_1cursor_1destroy_FUNC 149
#define gdk_1cursor_1new_FUNC 150
#define gdk_1cursor_1new_1from_1pixmap_FUNC 151
#define gdk_1drag_1status_FUNC 152
#define gdk_1draw_1arc_FUNC 153
#define gdk_1draw_1drawable_FUNC 154
#define gdk_1draw_1layout_FUNC 155
#define gdk_1draw_1layout_1with_1colors_FUNC 156
#define gdk_1draw_1line_FUNC 157
#define gdk_1draw_1lines_FUNC 158
#define gdk_1draw_1point_FUNC 159
#define gdk_1draw_1polygon_FUNC 160
#define gdk_1draw_1rectangle_FUNC 161
#define gdk_1drawable_1get_1image_FUNC 162
#define gdk_1drawable_1get_1size_FUNC 163
#define gdk_1drawable_1get_1visible_1region_FUNC 164
#define gdk_1error_1trap_1pop_FUNC 165
#define gdk_1error_1trap_1push_FUNC 166
#define gdk_1event_1copy_FUNC 167
#define gdk_1event_1free_FUNC 168
#define gdk_1event_1get_FUNC 169
#define gdk_1event_1get_1coords_FUNC 170
#define gdk_1event_1get_1graphics_1expose_FUNC 171
#define gdk_1event_1get_1root_1coords_FUNC 172
#define gdk_1event_1get_1state_FUNC 173
#define gdk_1event_1get_1time_FUNC 174
#define gdk_1event_1handler_1set_FUNC 175
#define gdk_1event_1put_FUNC 176
#define gdk_1flush_FUNC 177
#define gdk_1free_1text_1list_FUNC 178
#define gdk_1gc_1get_1values_FUNC 179
#define gdk_1gc_1new_FUNC 180
#define gdk_1gc_1set_1background_FUNC 181
#define gdk_1gc_1set_1clip_1mask_FUNC 182
#define gdk_1gc_1set_1clip_1origin_FUNC 183
#define gdk_1gc_1set_1clip_1rectangle_FUNC 184
#define gdk_1gc_1set_1clip_1region_FUNC 185
#define gdk_1gc_1set_1dashes_FUNC 186
#define gdk_1gc_1set_1exposures_FUNC 187
#define gdk_1gc_1set_1fill_FUNC 188
#define gdk_1gc_1set_1foreground_FUNC 189
#define gdk_1gc_1set_1function_FUNC 190
#define gdk_1gc_1set_1line_1attributes_FUNC 191
#define gdk_1gc_1set_1stipple_FUNC 192
#define gdk_1gc_1set_1subwindow_FUNC 193
#define gdk_1gc_1set_1values_FUNC 194
#define gdk_1image_1get_FUNC 195
#define gdk_1image_1get_1pixel_FUNC 196
#define gdk_1keyboard_1ungrab_FUNC 197
#define gdk_1keymap_1get_1default_FUNC 198
#define gdk_1keymap_1translate_1keyboard_1state_FUNC 199
#define gdk_1keyval_1to_1lower_FUNC 200
#define gdk_1keyval_1to_1unicode_FUNC 201
#define gdk_1pango_1context_1get_FUNC 202
#define gdk_1pango_1context_1set_1colormap_FUNC 203
#define gdk_1pango_1layout_1get_1clip_1region_FUNC 204
#define gdk_1pixbuf_1get_1from_1drawable_FUNC 205
#define gdk_1pixbuf_1get_1pixels_FUNC 206
#define gdk_1pixbuf_1get_1rowstride_FUNC 207
#define gdk_1pixbuf_1new_FUNC 208
#define gdk_1pixbuf_1render_1pixmap_1and_1mask_FUNC 209
#define gdk_1pixbuf_1render_1to_1drawable_FUNC 210
#define gdk_1pixbuf_1render_1to_1drawable_1alpha_FUNC 211
#define gdk_1pixbuf_1scale_FUNC 212
#define gdk_1pixbuf_1scale_1simple_FUNC 213
#define gdk_1pixmap_1new_FUNC 214
#define gdk_1pointer_1grab_FUNC 215
#define gdk_1pointer_1is_1grabbed_FUNC 216
#define gdk_1pointer_1ungrab_FUNC 217
#define gdk_1property_1get_FUNC 218
#define gdk_1region_1destroy_FUNC 219
#define gdk_1region_1empty_FUNC 220
#define gdk_1region_1get_1clipbox_FUNC 221
#define gdk_1region_1get_1rectangles_FUNC 222
#define gdk_1region_1intersect_FUNC 223
#define gdk_1region_1new_FUNC 224
#define gdk_1region_1offset_FUNC 225
#define gdk_1region_1point_1in_FUNC 226
#define gdk_1region_1polygon_FUNC 227
#define gdk_1region_1rect_1in_FUNC 228
#define gdk_1region_1rectangle_FUNC 229
#define gdk_1region_1subtract_FUNC 230
#define gdk_1region_1union_FUNC 231
#define gdk_1region_1union_1with_1rect_FUNC 232
#define gdk_1rgb_1init_FUNC 233
#define gdk_1screen_1get_1default_FUNC 234
#define gdk_1screen_1get_1monitor_1at_1window_FUNC 235
#define gdk_1screen_1get_1monitor_1geometry_FUNC 236
#define gdk_1screen_1get_1n_1monitors_FUNC 237
#define gdk_1screen_1get_1number_FUNC 238
#define gdk_1screen_1height_FUNC 239
#define gdk_1screen_1width_FUNC 240
#define gdk_1screen_1width_1mm_FUNC 241
#define gdk_1set_1program_1class_FUNC 242
#define gdk_1text_1property_1to_1utf8_1list_FUNC 243
#define gdk_1threads_1enter_FUNC 244
#define gdk_1threads_1init_FUNC 245
#define gdk_1threads_1leave_FUNC 246
#define gdk_1unicode_1to_1keyval_FUNC 247
#define gdk_1utf8_1to_1compound_1text_FUNC 248
#define gdk_1visual_1get_1system_FUNC 249
#define gdk_1window_1at_1pointer_FUNC 250
#define gdk_1window_1begin_1paint_1rect_FUNC 251
#define gdk_1window_1destroy_FUNC 252
#define gdk_1window_1end_1paint_FUNC 253
#define gdk_1window_1focus_FUNC 254
#define gdk_1window_1freeze_1updates_FUNC 255
#define gdk_1window_1get_1events_FUNC 256
#define gdk_1window_1get_1frame_1extents_FUNC 257
#define gdk_1window_1get_1origin_FUNC 258
#define gdk_1window_1get_1parent_FUNC 259
#define gdk_1window_1get_1pointer_FUNC 260
#define gdk_1window_1get_1user_1data_FUNC 261
#define gdk_1window_1invalidate_1rect_FUNC 262
#define gdk_1window_1invalidate_1region_FUNC 263
#define gdk_1window_1lookup_FUNC 264
#define gdk_1window_1lower_FUNC 265
#define gdk_1window_1move_FUNC 266
#define gdk_1window_1new_FUNC 267
#define gdk_1window_1process_1all_1updates_FUNC 268
#define gdk_1window_1process_1updates_FUNC 269
#define gdk_1window_1raise_FUNC 270
#define gdk_1window_1resize_FUNC 271
#define gdk_1window_1scroll_FUNC 272
#define gdk_1window_1set_1accept_1focus_FUNC 273
#define gdk_1window_1set_1back_1pixmap_FUNC 274
#define gdk_1window_1set_1cursor_FUNC 275
#define gdk_1window_1set_1decorations_FUNC 276
#define gdk_1window_1set_1events_FUNC 277
#define gdk_1window_1set_1icon_FUNC 278
#define gdk_1window_1set_1icon_1list_FUNC 279
#define gdk_1window_1set_1keep_1above_FUNC 280
#define gdk_1window_1set_1override_1redirect_FUNC 281
#define gdk_1window_1set_1user_1data_FUNC 282
#define gdk_1window_1shape_1combine_1region_FUNC 283
#define gdk_1window_1show_FUNC 284
#define gdk_1window_1thaw_1updates_FUNC 285
#define gdk_1x11_1atom_1to_1xatom_FUNC 286
#define gdk_1x11_1drawable_1get_1xdisplay_FUNC 287
#define gdk_1x11_1drawable_1get_1xid_FUNC 288
#define gtk_1accel_1group_1new_FUNC 289
#define gtk_1accel_1groups_1activate_FUNC 290
#define gtk_1accel_1label_1set_1accel_1widget_FUNC 291
#define gtk_1adjustment_1changed_FUNC 292
#define gtk_1adjustment_1new_FUNC 293
#define gtk_1adjustment_1set_1value_FUNC 294
#define gtk_1adjustment_1value_1changed_FUNC 295
#define gtk_1arrow_1new_FUNC 296
#define gtk_1arrow_1set_FUNC 297
#define gtk_1bin_1get_1child_FUNC 298
#define gtk_1button_1new_FUNC 299
#define gtk_1button_1set_1relief_FUNC 300
#define gtk_1cell_1renderer_1get_1size_FUNC 301
#define gtk_1cell_1renderer_1pixbuf_1new_FUNC 302
#define gtk_1cell_1renderer_1text_1new_FUNC 303
#define gtk_1cell_1renderer_1toggle_1new_FUNC 304
#define gtk_1check_1button_1new_FUNC 305
#define gtk_1check_1menu_1item_1get_1active_FUNC 306
#define gtk_1check_1menu_1item_1new_1with_1label_FUNC 307
#define gtk_1check_1menu_1item_1set_1active_FUNC 308
#define gtk_1check_1version_FUNC 309
#define gtk_1clipboard_1clear_FUNC 310
#define gtk_1clipboard_1get_FUNC 311
#define gtk_1clipboard_1set_1with_1data_FUNC 312
#define gtk_1clipboard_1wait_1for_1contents_FUNC 313
#define gtk_1color_1selection_1dialog_1new_FUNC 314
#define gtk_1color_1selection_1get_1current_1color_FUNC 315
#define gtk_1color_1selection_1set_1current_1color_FUNC 316
#define gtk_1combo_1disable_1activate_FUNC 317
#define gtk_1combo_1new_FUNC 318
#define gtk_1combo_1set_1case_1sensitive_FUNC 319
#define gtk_1combo_1set_1popdown_1strings_FUNC 320
#define gtk_1container_1add_FUNC 321
#define gtk_1container_1get_1border_1width_FUNC 322
#define gtk_1container_1get_1children_FUNC 323
#define gtk_1container_1remove_FUNC 324
#define gtk_1container_1resize_1children_FUNC 325
#define gtk_1container_1set_1border_1width_FUNC 326
#define gtk_1dialog_1add_1button_FUNC 327
#define gtk_1dialog_1run_FUNC 328
#define gtk_1drag_1begin_FUNC 329
#define gtk_1drag_1check_1threshold_FUNC 330
#define gtk_1drag_1dest_1find_1target_FUNC 331
#define gtk_1drag_1dest_1set_FUNC 332
#define gtk_1drag_1dest_1unset_FUNC 333
#define gtk_1drag_1finish_FUNC 334
#define gtk_1drag_1get_1data_FUNC 335
#define gtk_1drawing_1area_1new_FUNC 336
#define gtk_1editable_1copy_1clipboard_FUNC 337
#define gtk_1editable_1cut_1clipboard_FUNC 338
#define gtk_1editable_1delete_1selection_FUNC 339
#define gtk_1editable_1delete_1text_FUNC 340
#define gtk_1editable_1get_1chars_FUNC 341
#define gtk_1editable_1get_1editable_FUNC 342
#define gtk_1editable_1get_1position_FUNC 343
#define gtk_1editable_1get_1selection_1bounds_FUNC 344
#define gtk_1editable_1insert_1text_FUNC 345
#define gtk_1editable_1paste_1clipboard_FUNC 346
#define gtk_1editable_1select_1region_FUNC 347
#define gtk_1editable_1set_1editable_FUNC 348
#define gtk_1editable_1set_1position_FUNC 349
#define gtk_1entry_1get_1invisible_1char_FUNC 350
#define gtk_1entry_1get_1layout_FUNC 351
#define gtk_1entry_1get_1max_1length_FUNC 352
#define gtk_1entry_1get_1text_FUNC 353
#define gtk_1entry_1get_1visibility_FUNC 354
#define gtk_1entry_1new_FUNC 355
#define gtk_1entry_1set_1activates_1default_FUNC 356
#define gtk_1entry_1set_1alignment_FUNC 357
#define gtk_1entry_1set_1has_1frame_FUNC 358
#define gtk_1entry_1set_1invisible_1char_FUNC 359
#define gtk_1entry_1set_1max_1length_FUNC 360
#define gtk_1entry_1set_1text_FUNC 361
#define gtk_1entry_1set_1visibility_FUNC 362
#define gtk_1events_1pending_FUNC 363
#define gtk_1file_1selection_1complete_FUNC 364
#define gtk_1file_1selection_1get_1filename_FUNC 365
#define gtk_1file_1selection_1get_1selections_FUNC 366
#define gtk_1file_1selection_1hide_1fileop_1buttons_FUNC 367
#define gtk_1file_1selection_1new_FUNC 368
#define gtk_1file_1selection_1set_1filename_FUNC 369
#define gtk_1file_1selection_1set_1select_1multiple_FUNC 370
#define gtk_1fixed_1move_FUNC 371
#define gtk_1fixed_1new_FUNC 372
#define gtk_1fixed_1set_1has_1window_FUNC 373
#define gtk_1font_1selection_1dialog_1get_1font_1name_FUNC 374
#define gtk_1font_1selection_1dialog_1new_FUNC 375
#define gtk_1font_1selection_1dialog_1set_1font_1name_FUNC 376
#define gtk_1frame_1get_1label_1widget_FUNC 377
#define gtk_1frame_1new_FUNC 378
#define gtk_1frame_1set_1label_FUNC 379
#define gtk_1frame_1set_1label_1widget_FUNC 380
#define gtk_1frame_1set_1shadow_1type_FUNC 381
#define gtk_1get_1current_1event_FUNC 382
#define gtk_1get_1current_1event_1state_FUNC 383
#define gtk_1get_1current_1event_1time_FUNC 384
#define gtk_1get_1default_1language_FUNC 385
#define gtk_1get_1event_1widget_FUNC 386
#define gtk_1grab_1add_FUNC 387
#define gtk_1grab_1get_1current_FUNC 388
#define gtk_1grab_1remove_FUNC 389
#define gtk_1hbox_1new_FUNC 390
#define gtk_1hscale_1new_FUNC 391
#define gtk_1hscrollbar_1new_FUNC 392
#define gtk_1hseparator_1new_FUNC 393
#define gtk_1icon_1factory_1lookup_1default_FUNC 394
#define gtk_1icon_1set_1render_1icon_FUNC 395
#define gtk_1im_1context_1filter_1keypress_FUNC 396
#define gtk_1im_1context_1focus_1in_FUNC 397
#define gtk_1im_1context_1focus_1out_FUNC 398
#define gtk_1im_1context_1get_1preedit_1string_FUNC 399
#define gtk_1im_1context_1get_1type_FUNC 400
#define gtk_1im_1context_1reset_FUNC 401
#define gtk_1im_1context_1set_1client_1window_FUNC 402
#define gtk_1im_1context_1set_1cursor_1location_FUNC 403
#define gtk_1im_1multicontext_1append_1menuitems_FUNC 404
#define gtk_1im_1multicontext_1new_FUNC 405
#define gtk_1image_1menu_1item_1new_1with_1label_FUNC 406
#define gtk_1image_1menu_1item_1set_1image_FUNC 407
#define gtk_1image_1new_FUNC 408
#define gtk_1image_1new_1from_1pixmap_FUNC 409
#define gtk_1image_1set_1from_1pixmap_FUNC 410
#define gtk_1init_1check_FUNC 411
#define gtk_1label_1get_1mnemonic_1keyval_FUNC 412
#define gtk_1label_1new_FUNC 413
#define gtk_1label_1new_1with_1mnemonic_FUNC 414
#define gtk_1label_1set_1attributes_FUNC 415
#define gtk_1label_1set_1justify_FUNC 416
#define gtk_1label_1set_1line_1wrap_FUNC 417
#define gtk_1label_1set_1text_FUNC 418
#define gtk_1label_1set_1text_1with_1mnemonic_FUNC 419
#define gtk_1list_1store_1append_FUNC 420
#define gtk_1list_1store_1clear_FUNC 421
#define gtk_1list_1store_1insert_FUNC 422
#define gtk_1list_1store_1newv_FUNC 423
#define gtk_1list_1store_1remove_FUNC 424
#define gtk_1list_1store_1set__IIIII_FUNC 425
#define gtk_1list_1store_1set__IIIJI_FUNC 426
#define gtk_1list_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I_FUNC 427
#define gtk_1list_1store_1set__IIIZI_FUNC 428
#define gtk_1list_1store_1set__III_3BI_FUNC 429
#define gtk_1main_FUNC 430
#define gtk_1main_1do_1event_FUNC 431
#define gtk_1main_1iteration_FUNC 432
#define gtk_1major_1version_FUNC 433
#define gtk_1menu_1bar_1new_FUNC 434
#define gtk_1menu_1item_1remove_1submenu_FUNC 435
#define gtk_1menu_1item_1set_1submenu_FUNC 436
#define gtk_1menu_1new_FUNC 437
#define gtk_1menu_1popdown_FUNC 438
#define gtk_1menu_1popup_FUNC 439
#define gtk_1menu_1shell_1deactivate_FUNC 440
#define gtk_1menu_1shell_1insert_FUNC 441
#define gtk_1menu_1shell_1select_1item_FUNC 442
#define gtk_1message_1dialog_1new_FUNC 443
#define gtk_1micro_1version_FUNC 444
#define gtk_1minor_1version_FUNC 445
#define gtk_1misc_1set_1alignment_FUNC 446
#define gtk_1notebook_1get_1current_1page_FUNC 447
#define gtk_1notebook_1get_1scrollable_FUNC 448
#define gtk_1notebook_1insert_1page_FUNC 449
#define gtk_1notebook_1new_FUNC 450
#define gtk_1notebook_1remove_1page_FUNC 451
#define gtk_1notebook_1set_1current_1page_FUNC 452
#define gtk_1notebook_1set_1scrollable_FUNC 453
#define gtk_1notebook_1set_1show_1tabs_FUNC 454
#define gtk_1notebook_1set_1tab_1pos_FUNC 455
#define gtk_1object_1sink_FUNC 456
#define gtk_1paint_1handle_FUNC 457
#define gtk_1plug_1get_1id_FUNC 458
#define gtk_1plug_1new_FUNC 459
#define gtk_1progress_1bar_1new_FUNC 460
#define gtk_1progress_1bar_1pulse_FUNC 461
#define gtk_1progress_1bar_1set_1bar_1style_FUNC 462
#define gtk_1progress_1bar_1set_1fraction_FUNC 463
#define gtk_1progress_1bar_1set_1orientation_FUNC 464
#define gtk_1radio_1button_1get_1group_FUNC 465
#define gtk_1radio_1button_1new_FUNC 466
#define gtk_1radio_1menu_1item_1new_1with_1label_FUNC 467
#define gtk_1range_1get_1adjustment_FUNC 468
#define gtk_1range_1set_1increments_FUNC 469
#define gtk_1range_1set_1range_FUNC 470
#define gtk_1range_1set_1value_FUNC 471
#define gtk_1rc_1parse_1string_FUNC 472
#define gtk_1rc_1style_1get_1bg_1pixmap_1name_FUNC 473
#define gtk_1rc_1style_1get_1color_1flags_FUNC 474
#define gtk_1rc_1style_1set_1bg_FUNC 475
#define gtk_1rc_1style_1set_1bg_1pixmap_1name_FUNC 476
#define gtk_1rc_1style_1set_1color_1flags_FUNC 477
#define gtk_1scale_1set_1digits_FUNC 478
#define gtk_1scale_1set_1draw_1value_FUNC 479
#define gtk_1scrolled_1window_1get_1hadjustment_FUNC 480
#define gtk_1scrolled_1window_1get_1policy_FUNC 481
#define gtk_1scrolled_1window_1get_1shadow_1type_FUNC 482
#define gtk_1scrolled_1window_1get_1vadjustment_FUNC 483
#define gtk_1scrolled_1window_1new_FUNC 484
#define gtk_1scrolled_1window_1set_1placement_FUNC 485
#define gtk_1scrolled_1window_1set_1policy_FUNC 486
#define gtk_1scrolled_1window_1set_1shadow_1type_FUNC 487
#define gtk_1selection_1data_1free_FUNC 488
#define gtk_1selection_1data_1set_FUNC 489
#define gtk_1separator_1menu_1item_1new_FUNC 490
#define gtk_1set_1locale_FUNC 491
#define gtk_1socket_1get_1id_FUNC 492
#define gtk_1socket_1new_FUNC 493
#define gtk_1style_1get_1base_FUNC 494
#define gtk_1style_1get_1bg_FUNC 495
#define gtk_1style_1get_1black_FUNC 496
#define gtk_1style_1get_1dark_FUNC 497
#define gtk_1style_1get_1fg_FUNC 498
#define gtk_1style_1get_1font_1desc_FUNC 499
#define gtk_1style_1get_1light_FUNC 500
#define gtk_1style_1get_1text_FUNC 501
#define gtk_1style_1get_1xthickness_FUNC 502
#define gtk_1style_1get_1ythickness_FUNC 503
#define gtk_1target_1list_1new_FUNC 504
#define gtk_1target_1list_1unref_FUNC 505
#define gtk_1text_1buffer_1copy_1clipboard_FUNC 506
#define gtk_1text_1buffer_1cut_1clipboard_FUNC 507
#define gtk_1text_1buffer_1delete_FUNC 508
#define gtk_1text_1buffer_1get_1bounds_FUNC 509
#define gtk_1text_1buffer_1get_1char_1count_FUNC 510
#define gtk_1text_1buffer_1get_1end_1iter_FUNC 511
#define gtk_1text_1buffer_1get_1insert_FUNC 512
#define gtk_1text_1buffer_1get_1iter_1at_1line_FUNC 513
#define gtk_1text_1buffer_1get_1iter_1at_1mark_FUNC 514
#define gtk_1text_1buffer_1get_1iter_1at_1offset_FUNC 515
#define gtk_1text_1buffer_1get_1line_1count_FUNC 516
#define gtk_1text_1buffer_1get_1selection_1bound_FUNC 517
#define gtk_1text_1buffer_1get_1selection_1bounds_FUNC 518
#define gtk_1text_1buffer_1get_1text_FUNC 519
#define gtk_1text_1buffer_1insert__II_3BI_FUNC 520
#define gtk_1text_1buffer_1insert__I_3B_3BI_FUNC 521
#define gtk_1text_1buffer_1move_1mark_FUNC 522
#define gtk_1text_1buffer_1paste_1clipboard_FUNC 523
#define gtk_1text_1buffer_1place_1cursor_FUNC 524
#define gtk_1text_1buffer_1set_1text_FUNC 525
#define gtk_1text_1iter_1get_1line_FUNC 526
#define gtk_1text_1iter_1get_1offset_FUNC 527
#define gtk_1text_1view_1buffer_1to_1window_1coords_FUNC 528
#define gtk_1text_1view_1get_1buffer_FUNC 529
#define gtk_1text_1view_1get_1editable_FUNC 530
#define gtk_1text_1view_1get_1iter_1location_FUNC 531
#define gtk_1text_1view_1get_1line_1at_1y_FUNC 532
#define gtk_1text_1view_1get_1visible_1rect_FUNC 533
#define gtk_1text_1view_1get_1window_FUNC 534
#define gtk_1text_1view_1new_FUNC 535
#define gtk_1text_1view_1scroll_1mark_1onscreen_FUNC 536
#define gtk_1text_1view_1scroll_1to_1iter_FUNC 537
#define gtk_1text_1view_1set_1editable_FUNC 538
#define gtk_1text_1view_1set_1justification_FUNC 539
#define gtk_1text_1view_1set_1tabs_FUNC 540
#define gtk_1text_1view_1set_1wrap_1mode_FUNC 541
#define gtk_1timeout_1add_FUNC 542
#define gtk_1timeout_1remove_FUNC 543
#define gtk_1toggle_1button_1get_1active_FUNC 544
#define gtk_1toggle_1button_1new_FUNC 545
#define gtk_1toggle_1button_1set_1active_FUNC 546
#define gtk_1toggle_1button_1set_1mode_FUNC 547
#define gtk_1toolbar_1insert_1widget_FUNC 548
#define gtk_1toolbar_1new_FUNC 549
#define gtk_1toolbar_1set_1orientation_FUNC 550
#define gtk_1tooltips_1disable_FUNC 551
#define gtk_1tooltips_1enable_FUNC 552
#define gtk_1tooltips_1new_FUNC 553
#define gtk_1tooltips_1set_1tip_FUNC 554
#define gtk_1tree_1model_1get__III_3II_FUNC 555
#define gtk_1tree_1model_1get__III_3JI_FUNC 556
#define gtk_1tree_1model_1get_1iter_FUNC 557
#define gtk_1tree_1model_1get_1iter_1first_FUNC 558
#define gtk_1tree_1model_1get_1n_1columns_FUNC 559
#define gtk_1tree_1model_1get_1path_FUNC 560
#define gtk_1tree_1model_1get_1type_FUNC 561
#define gtk_1tree_1model_1iter_1children_FUNC 562
#define gtk_1tree_1model_1iter_1n_1children_FUNC 563
#define gtk_1tree_1model_1iter_1next_FUNC 564
#define gtk_1tree_1model_1iter_1nth_1child_FUNC 565
#define gtk_1tree_1path_1append_1index_FUNC 566
#define gtk_1tree_1path_1free_FUNC 567
#define gtk_1tree_1path_1get_1depth_FUNC 568
#define gtk_1tree_1path_1get_1indices_FUNC 569
#define gtk_1tree_1path_1new_FUNC 570
#define gtk_1tree_1path_1new_1first_FUNC 571
#define gtk_1tree_1path_1new_1from_1string__I_FUNC 572
#define gtk_1tree_1path_1new_1from_1string___3B_FUNC 573
#define gtk_1tree_1path_1up_FUNC 574
#define gtk_1tree_1selection_1get_1selected_FUNC 575
#define gtk_1tree_1selection_1path_1is_1selected_FUNC 576
#define gtk_1tree_1selection_1select_1all_FUNC 577
#define gtk_1tree_1selection_1select_1iter_FUNC 578
#define gtk_1tree_1selection_1selected_1foreach_FUNC 579
#define gtk_1tree_1selection_1set_1mode_FUNC 580
#define gtk_1tree_1selection_1unselect_1all_FUNC 581
#define gtk_1tree_1selection_1unselect_1iter_FUNC 582
#define gtk_1tree_1store_1append_FUNC 583
#define gtk_1tree_1store_1clear_FUNC 584
#define gtk_1tree_1store_1insert_FUNC 585
#define gtk_1tree_1store_1newv_FUNC 586
#define gtk_1tree_1store_1remove_FUNC 587
#define gtk_1tree_1store_1set__IIIII_FUNC 588
#define gtk_1tree_1store_1set__IIIJI_FUNC 589
#define gtk_1tree_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I_FUNC 590
#define gtk_1tree_1store_1set__IIIZI_FUNC 591
#define gtk_1tree_1store_1set__III_3BI_FUNC 592
#define gtk_1tree_1view_1collapse_1row_FUNC 593
#define gtk_1tree_1view_1column_1add_1attribute_FUNC 594
#define gtk_1tree_1view_1column_1cell_1get_1position_FUNC 595
#define gtk_1tree_1view_1column_1cell_1get_1size_FUNC 596
#define gtk_1tree_1view_1column_1cell_1set_1cell_1data_FUNC 597
#define gtk_1tree_1view_1column_1clear_FUNC 598
#define gtk_1tree_1view_1column_1get_1cell_1renderers_FUNC 599
#define gtk_1tree_1view_1column_1get_1resizable_FUNC 600
#define gtk_1tree_1view_1column_1get_1spacing_FUNC 601
#define gtk_1tree_1view_1column_1get_1visible_FUNC 602
#define gtk_1tree_1view_1column_1get_1width_FUNC 603
#define gtk_1tree_1view_1column_1new_FUNC 604
#define gtk_1tree_1view_1column_1pack_1end_FUNC 605
#define gtk_1tree_1view_1column_1pack_1start_FUNC 606
#define gtk_1tree_1view_1column_1set_1alignment_FUNC 607
#define gtk_1tree_1view_1column_1set_1cell_1data_1func_FUNC 608
#define gtk_1tree_1view_1column_1set_1clickable_FUNC 609
#define gtk_1tree_1view_1column_1set_1fixed_1width_FUNC 610
#define gtk_1tree_1view_1column_1set_1resizable_FUNC 611
#define gtk_1tree_1view_1column_1set_1sizing_FUNC 612
#define gtk_1tree_1view_1column_1set_1title_FUNC 613
#define gtk_1tree_1view_1column_1set_1visible_FUNC 614
#define gtk_1tree_1view_1column_1set_1widget_FUNC 615
#define gtk_1tree_1view_1expand_1row_FUNC 616
#define gtk_1tree_1view_1get_1bin_1window_FUNC 617
#define gtk_1tree_1view_1get_1cell_1area_FUNC 618
#define gtk_1tree_1view_1get_1column_FUNC 619
#define gtk_1tree_1view_1get_1cursor_FUNC 620
#define gtk_1tree_1view_1get_1expander_1column_FUNC 621
#define gtk_1tree_1view_1get_1headers_1visible_FUNC 622
#define gtk_1tree_1view_1get_1path_1at_1pos_FUNC 623
#define gtk_1tree_1view_1get_1rules_1hint_FUNC 624
#define gtk_1tree_1view_1get_1selection_FUNC 625
#define gtk_1tree_1view_1get_1visible_1rect_FUNC 626
#define gtk_1tree_1view_1insert_1column_FUNC 627
#define gtk_1tree_1view_1new_1with_1model_FUNC 628
#define gtk_1tree_1view_1remove_1column_FUNC 629
#define gtk_1tree_1view_1row_1expanded_FUNC 630
#define gtk_1tree_1view_1scroll_1to_1cell_FUNC 631
#define gtk_1tree_1view_1scroll_1to_1point_FUNC 632
#define gtk_1tree_1view_1set_1cursor_FUNC 633
#define gtk_1tree_1view_1set_1drag_1dest_1row_FUNC 634
#define gtk_1tree_1view_1set_1headers_1visible_FUNC 635
#define gtk_1tree_1view_1set_1model_FUNC 636
#define gtk_1tree_1view_1set_1rules_1hint_FUNC 637
#define gtk_1tree_1view_1tree_1to_1widget_1coords_FUNC 638
#define gtk_1tree_1view_1unset_1rows_1drag_1dest_FUNC 639
#define gtk_1tree_1view_1widget_1to_1tree_1coords_FUNC 640
#define gtk_1vbox_1new_FUNC 641
#define gtk_1vscale_1new_FUNC 642
#define gtk_1vscrollbar_1new_FUNC 643
#define gtk_1vseparator_1new_FUNC 644
#define gtk_1widget_1add_1accelerator_FUNC 645
#define gtk_1widget_1add_1events_FUNC 646
#define gtk_1widget_1child_1focus_FUNC 647
#define gtk_1widget_1create_1pango_1layout__II_FUNC 648
#define gtk_1widget_1create_1pango_1layout__I_3B_FUNC 649
#define gtk_1widget_1destroy_FUNC 650
#define gtk_1widget_1event_FUNC 651
#define gtk_1widget_1get_1default_1direction_FUNC 652
#define gtk_1widget_1get_1default_1style_FUNC 653
#define gtk_1widget_1get_1direction_FUNC 654
#define gtk_1widget_1get_1modifier_1style_FUNC 655
#define gtk_1widget_1get_1pango_1context_FUNC 656
#define gtk_1widget_1get_1parent_FUNC 657
#define gtk_1widget_1get_1style_FUNC 658
#define gtk_1widget_1grab_1focus_FUNC 659
#define gtk_1widget_1hide_FUNC 660
#define gtk_1widget_1is_1focus_FUNC 661
#define gtk_1widget_1mnemonic_1activate_FUNC 662
#define gtk_1widget_1modify_1base_FUNC 663
#define gtk_1widget_1modify_1bg_FUNC 664
#define gtk_1widget_1modify_1fg_FUNC 665
#define gtk_1widget_1modify_1font_FUNC 666
#define gtk_1widget_1modify_1style_FUNC 667
#define gtk_1widget_1modify_1text_FUNC 668
#define gtk_1widget_1realize_FUNC 669
#define gtk_1widget_1remove_1accelerator_FUNC 670
#define gtk_1widget_1reparent_FUNC 671
#define gtk_1widget_1set_1default_1direction_FUNC 672
#define gtk_1widget_1set_1direction_FUNC 673
#define gtk_1widget_1set_1double_1buffered_FUNC 674
#define gtk_1widget_1set_1name_FUNC 675
#define gtk_1widget_1set_1redraw_1on_1allocate_FUNC 676
#define gtk_1widget_1set_1sensitive_FUNC 677
#define gtk_1widget_1set_1size_1request_FUNC 678
#define gtk_1widget_1set_1state_FUNC 679
#define gtk_1widget_1shape_1combine_1mask_FUNC 680
#define gtk_1widget_1show_FUNC 681
#define gtk_1widget_1show_1now_FUNC 682
#define gtk_1widget_1size_1allocate_FUNC 683
#define gtk_1widget_1size_1request_FUNC 684
#define gtk_1widget_1style_1get_FUNC 685
#define gtk_1widget_1unrealize_FUNC 686
#define gtk_1window_1activate_1default_FUNC 687
#define gtk_1window_1add_1accel_1group_FUNC 688
#define gtk_1window_1deiconify_FUNC 689
#define gtk_1window_1get_1focus_FUNC 690
#define gtk_1window_1get_1mnemonic_1modifier_FUNC 691
#define gtk_1window_1get_1position_FUNC 692
#define gtk_1window_1get_1size_FUNC 693
#define gtk_1window_1iconify_FUNC 694
#define gtk_1window_1maximize_FUNC 695
#define gtk_1window_1move_FUNC 696
#define gtk_1window_1new_FUNC 697
#define gtk_1window_1present_FUNC 698
#define gtk_1window_1remove_1accel_1group_FUNC 699
#define gtk_1window_1resize_FUNC 700
#define gtk_1window_1set_1default_FUNC 701
#define gtk_1window_1set_1destroy_1with_1parent_FUNC 702
#define gtk_1window_1set_1modal_FUNC 703
#define gtk_1window_1set_1resizable_FUNC 704
#define gtk_1window_1set_1title_FUNC 705
#define gtk_1window_1set_1transient_1for_FUNC 706
#define gtk_1window_1set_1type_1hint_FUNC 707
#define gtk_1window_1unmaximize_FUNC 708
#define memmove__ILorg_eclipse_swt_internal_gtk_GdkEventButton_2I_FUNC 709
#define memmove__ILorg_eclipse_swt_internal_gtk_GtkAdjustment_2_FUNC 710
#define memmove__ILorg_eclipse_swt_internal_gtk_GtkFixed_2_FUNC 711
#define memmove__ILorg_eclipse_swt_internal_gtk_GtkTargetEntry_2I_FUNC 712
#define memmove__ILorg_eclipse_swt_internal_gtk_PangoAttribute_2I_FUNC 713
#define memmove__ILorg_eclipse_swt_internal_gtk_XClientMessageEvent_2I_FUNC 714
#define memmove__I_3BI_FUNC 715
#define memmove__I_3II_FUNC 716
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkColor_2II_FUNC 717
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkDragContext_2II_FUNC 718
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkEventButton_2II_FUNC 719
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkEventCrossing_2II_FUNC 720
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkEventExpose_2II_FUNC 721
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkEventFocus_2II_FUNC 722
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkEventKey_2II_FUNC 723
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkEventWindowState_2II_FUNC 724
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkEvent_2II_FUNC 725
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkImage_2I_FUNC 726
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkRectangle_2II_FUNC 727
#define memmove__Lorg_eclipse_swt_internal_gtk_GdkVisual_2I_FUNC 728
#define memmove__Lorg_eclipse_swt_internal_gtk_GtkAdjustment_2I_FUNC 729
#define memmove__Lorg_eclipse_swt_internal_gtk_GtkColorSelectionDialog_2I_FUNC 730
#define memmove__Lorg_eclipse_swt_internal_gtk_GtkCombo_2I_FUNC 731
#define memmove__Lorg_eclipse_swt_internal_gtk_GtkFileSelection_2I_FUNC 732
#define memmove__Lorg_eclipse_swt_internal_gtk_GtkFixed_2I_FUNC 733
#define memmove__Lorg_eclipse_swt_internal_gtk_GtkSelectionData_2II_FUNC 734
#define memmove__Lorg_eclipse_swt_internal_gtk_GtkTargetPair_2II_FUNC 735
#define memmove__Lorg_eclipse_swt_internal_gtk_PangoAttribute_2II_FUNC 736
#define memmove__Lorg_eclipse_swt_internal_gtk_PangoItem_2II_FUNC 737
#define memmove__Lorg_eclipse_swt_internal_gtk_PangoLayoutLine_2II_FUNC 738
#define memmove__Lorg_eclipse_swt_internal_gtk_PangoLayoutRun_2II_FUNC 739
#define memmove__Lorg_eclipse_swt_internal_gtk_PangoLogAttr_2II_FUNC 740
#define memmove__Lorg_eclipse_swt_internal_gtk_XExposeEvent_2II_FUNC 741
#define memmove___3BII_FUNC 742
#define memmove___3CII_FUNC 743
#define memmove___3III_FUNC 744
#define memmove___3I_3BI_FUNC 745
#define memmove___3JII_FUNC 746
#define memset_FUNC 747
#define pango_1attr_1background_1new_FUNC 748
#define pango_1attr_1font_1desc_1new_FUNC 749
#define pango_1attr_1foreground_1new_FUNC 750
#define pango_1attr_1list_1change_FUNC 751
#define pango_1attr_1list_1insert_FUNC 752
#define pango_1attr_1list_1new_FUNC 753
#define pango_1attr_1list_1unref_FUNC 754
#define pango_1attr_1shape_1new_FUNC 755
#define pango_1attr_1strikethrough_1new_FUNC 756
#define pango_1attr_1underline_1new_FUNC 757
#define pango_1attr_1weight_1new_FUNC 758
#define pango_1context_1get_1base_1dir_FUNC 759
#define pango_1context_1get_1language_FUNC 760
#define pango_1context_1get_1metrics_FUNC 761
#define pango_1context_1list_1families_FUNC 762
#define pango_1context_1set_1base_1dir_FUNC 763
#define pango_1context_1set_1language_FUNC 764
#define pango_1font_1description_1copy_FUNC 765
#define pango_1font_1description_1free_FUNC 766
#define pango_1font_1description_1from_1string_FUNC 767
#define pango_1font_1description_1get_1family_FUNC 768
#define pango_1font_1description_1get_1size_FUNC 769
#define pango_1font_1description_1get_1style_FUNC 770
#define pango_1font_1description_1get_1weight_FUNC 771
#define pango_1font_1description_1new_FUNC 772
#define pango_1font_1description_1set_1family_FUNC 773
#define pango_1font_1description_1set_1size_FUNC 774
#define pango_1font_1description_1set_1stretch_FUNC 775
#define pango_1font_1description_1set_1style_FUNC 776
#define pango_1font_1description_1set_1weight_FUNC 777
#define pango_1font_1description_1to_1string_FUNC 778
#define pango_1font_1face_1describe_FUNC 779
#define pango_1font_1family_1list_1faces_FUNC 780
#define pango_1font_1get_1metrics_FUNC 781
#define pango_1font_1metrics_1get_1approximate_1char_1width_FUNC 782
#define pango_1font_1metrics_1get_1ascent_FUNC 783
#define pango_1font_1metrics_1get_1descent_FUNC 784
#define pango_1font_1metrics_1unref_FUNC 785
#define pango_1language_1from_1string_FUNC 786
#define pango_1layout_1context_1changed_FUNC 787
#define pango_1layout_1get_1alignment_FUNC 788
#define pango_1layout_1get_1attributes_FUNC 789
#define pango_1layout_1get_1iter_FUNC 790
#define pango_1layout_1get_1line_FUNC 791
#define pango_1layout_1get_1line_1count_FUNC 792
#define pango_1layout_1get_1log_1attrs_FUNC 793
#define pango_1layout_1get_1size_FUNC 794
#define pango_1layout_1get_1spacing_FUNC 795
#define pango_1layout_1get_1tabs_FUNC 796
#define pango_1layout_1get_1text_FUNC 797
#define pango_1layout_1get_1width_FUNC 798
#define pango_1layout_1index_1to_1pos_FUNC 799
#define pango_1layout_1iter_1free_FUNC 800
#define pango_1layout_1iter_1get_1index_FUNC 801
#define pango_1layout_1iter_1get_1line_1extents_FUNC 802
#define pango_1layout_1iter_1get_1run_FUNC 803
#define pango_1layout_1iter_1next_1line_FUNC 804
#define pango_1layout_1iter_1next_1run_FUNC 805
#define pango_1layout_1line_1get_1extents_FUNC 806
#define pango_1layout_1line_1x_1to_1index_FUNC 807
#define pango_1layout_1new_FUNC 808
#define pango_1layout_1set_1alignment_FUNC 809
#define pango_1layout_1set_1attributes_FUNC 810
#define pango_1layout_1set_1font_1description_FUNC 811
#define pango_1layout_1set_1single_1paragraph_1mode_FUNC 812
#define pango_1layout_1set_1spacing_FUNC 813
#define pango_1layout_1set_1tabs_FUNC 814
#define pango_1layout_1set_1text_FUNC 815
#define pango_1layout_1set_1width_FUNC 816
#define pango_1layout_1set_1wrap_FUNC 817
#define pango_1layout_1xy_1to_1index_FUNC 818
#define pango_1tab_1array_1free_FUNC 819
#define pango_1tab_1array_1get_1size_FUNC 820
#define pango_1tab_1array_1get_1tabs_FUNC 821
#define pango_1tab_1array_1new_FUNC 822
#define pango_1tab_1array_1set_1tab_FUNC 823
#define strlen_FUNC 824
