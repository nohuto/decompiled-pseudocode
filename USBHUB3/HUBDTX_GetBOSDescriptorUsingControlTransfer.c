/*
 * XREFs of HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C002AD6C
 * Callers:
 *     HUBDSM_GettingAlternateBOSDescriptor @ 0x1C0022630 (HUBDSM_GettingAlternateBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002A598 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetBOSDescriptorUsingControlTransfer(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-20h]

  Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)(a1 + 1734), 1681082453LL);
  *(_QWORD *)(a1 + 2056) = Pool2;
  if ( Pool2 )
  {
    result = HUBDTX_GetDescriptor(a1, Pool2, *(unsigned __int16 *)(a1 + 1734), 15, 0, 0);
    if ( (int)result >= 0 )
      return result;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x34u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
    LODWORD(result) = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v4) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x35u,
      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
      v4);
  }
  return HUBSM_AddEvent(a1 + 504, 4004);
}
