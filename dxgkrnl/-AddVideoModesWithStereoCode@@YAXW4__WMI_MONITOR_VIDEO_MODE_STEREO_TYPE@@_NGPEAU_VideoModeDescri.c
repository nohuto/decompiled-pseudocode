/*
 * XREFs of ?AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescriptor@@AEAG2@Z @ 0x1C00729CC
 * Callers:
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0072FCC (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall AddVideoModesWithStereoCode(char a1, char a2, __int64 a3, __int64 a4, _WORD *a5, __int64 a6)
{
  char v6; // di
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx

  v6 = 0;
  v8 = (unsigned __int16)*a5;
  v9 = 56 * v8;
  LOBYTE(v10) = *(_BYTE *)(56 * v8 + a6 + 45);
  if ( (_BYTE)v10 )
  {
    if ( (_BYTE)v10 == 2 )
    {
      v6 = 1;
      *(_BYTE *)(v9 + a6 + 45) = 0;
      LOBYTE(v10) = 0;
    }
    else
    {
      LOBYTE(v10) = a1;
      *(_BYTE *)(v9 + a6 + 45) = a1;
    }
  }
  if ( a4 )
  {
    if ( !(_BYTE)v10 )
      goto LABEL_11;
  }
  else
  {
    LOWORD(v8) = v8 + 1;
    *a5 = v8;
    if ( a2 || v6 )
    {
      LOBYTE(v10) = v8;
      v11 = 56LL * (unsigned __int16)v8;
      if ( !*(_BYTE *)(v11 + a6 - 11) )
      {
        v10 = 56LL * (unsigned __int16)v8;
        *(_OWORD *)(v10 + a6) = *(_OWORD *)(v11 + a6 - 56);
        *(_OWORD *)(v10 + a6 + 16) = *(_OWORD *)(v11 + a6 - 40);
        *(_OWORD *)(v10 + a6 + 32) = *(_OWORD *)(v11 + a6 - 24);
        *(_QWORD *)(v10 + a6 + 48) = *(_QWORD *)(v11 + a6 - 8);
        *(_BYTE *)(v10 + a6 + 45) = a1;
LABEL_11:
        *a5 = v8 + 1;
      }
    }
  }
  return v10;
}
