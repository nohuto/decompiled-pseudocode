/*
 * XREFs of HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C002B534
 * Callers:
 *     HUBDSM_GettingBOSDescriptorHeader @ 0x1C0022660 (HUBDSM_GettingBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002A598 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  PVOID *v3; // rax
  void *v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[257];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  v3 = (PVOID *)a1[331];
  if ( v3 && *v3 )
    ExFreePoolWithTag(*v3, 0x64334855u);
  v4 = (void *)a1[331];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  a1[257] = 0LL;
  a1[331] = 0LL;
  result = HUBDTX_GetDescriptor((__int64)a1, (__int64)a1 + 1732, 255, 15, 0, 0);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        5u,
        0x3Du,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v6);
    }
    return HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
  return result;
}
