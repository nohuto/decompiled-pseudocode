/*
 * XREFs of HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C002A9A4
 * Callers:
 *     HUBDSM_GettingConfigDescriptorWhileRenuemrating @ 0x1C00212F0 (HUBDSM_GettingConfigDescriptorWhileRenuemrating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002A598 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[252];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  a1[252] = 0LL;
  a1[251] = 0LL;
  result = HUBDTX_GetDescriptor((__int64)a1, (__int64)a1 + 1732, 255, 2, 0, 0);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        5u,
        0x25u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v4);
    }
    return HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
  return result;
}
