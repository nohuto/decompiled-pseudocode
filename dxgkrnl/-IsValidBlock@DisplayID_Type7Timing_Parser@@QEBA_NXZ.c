/*
 * XREFs of ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x1C0073690
 * Callers:
 *     ?DisplayID_GetNumberOfTimingDescriptors@@YAXAEBUDisplayIDObj@@AEAG1@Z @ 0x1C0072BE4 (-DisplayID_GetNumberOfTimingDescriptors@@YAXAEBUDisplayIDObj@@AEAG1@Z.c)
 *     ?DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0072DA4 (-DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0072FCC (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayID_Type7Timing_Parser::IsValidBlock(DisplayID_Type7Timing_Parser *this)
{
  return **(_BYTE **)this == 34
      && *((_BYTE *)this + 8) <= 0x14u
      && *(unsigned __int8 *)(*(_QWORD *)this + 2LL) == 20 * (*(unsigned __int8 *)(*(_QWORD *)this + 2LL) / 0x14uLL);
}
