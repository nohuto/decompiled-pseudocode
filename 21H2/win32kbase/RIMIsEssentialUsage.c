/*
 * XREFs of RIMIsEssentialUsage @ 0x1C0194698
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C018C3A8 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMIsEssentialUsage(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // ax
  char v3; // dl

  v1 = 0;
  if ( a1 <= 0x4D30u )
  {
    if ( a1 != 19760 )
    {
      if ( a1 < 0x1130u )
        goto LABEL_20;
      if ( a1 > 0x1131u && a1 != 7472 )
      {
        if ( a1 <= 0x1D3Cu )
          goto LABEL_20;
        if ( a1 > 0x1D3Eu && a1 != 7489 )
        {
          if ( a1 <= 0x412Fu )
            goto LABEL_20;
          v2 = 16689;
          goto LABEL_19;
        }
      }
    }
    return 1;
  }
  if ( a1 == 19775 )
    return 1;
  if ( a1 <= 0x4D47u )
    goto LABEL_20;
  if ( a1 <= 0x4D49u )
    return 1;
  if ( a1 <= 0x512Fu )
    goto LABEL_20;
  if ( a1 <= 0x5131u || a1 == 23856 )
    return 1;
  if ( a1 <= 0x5D47u )
    goto LABEL_20;
  v2 = 23881;
LABEL_19:
  if ( a1 <= v2 )
    return 1;
LABEL_20:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      36,
      (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
  return v1;
}
