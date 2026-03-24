/*
 * XREFs of UsbhLanguageSupported @ 0x1C005193C
 * Callers:
 *     UsbhGetProductIdString @ 0x1C00514DC (UsbhGetProductIdString.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhLanguageSupported(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // esi
  _DWORD *v4; // rax
  _WORD *v5; // rcx

  v3 = a3;
  v4 = PdoExt(a2);
  v5 = (_WORD *)*((_QWORD *)v4 + 273);
  if ( v5 )
  {
    if ( v4[545] )
    {
      while ( *v5 )
      {
        if ( *v5 == (_WORD)v3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0x14u,
              (__int64)&WPP_702859756c5835a51fae8c331fd03d9d_Traceguids,
              v3);
          }
          return 1;
        }
        ++v5;
      }
    }
    goto LABEL_15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x15u,
        (__int64)&WPP_702859756c5835a51fae8c331fd03d9d_Traceguids);
LABEL_15:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0x16u,
          (__int64)&WPP_702859756c5835a51fae8c331fd03d9d_Traceguids,
          v3);
    }
  }
  return 0;
}
