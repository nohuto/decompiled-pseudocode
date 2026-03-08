/*
 * XREFs of HUBDSM_GetMsOs20DescriptorSet @ 0x1C00224F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C002A50C (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GetMsOs20DescriptorSet(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  __int64 Pool2; // rax
  int v4; // r8d
  int MsOsFeatureDescriptor; // eax
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2488);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)(v1 + 2484), 1681082453LL);
  *(_QWORD *)(v1 + 2488) = Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(v1 + 2052) = *(_BYTE *)(v1 + 2486);
    v8 = *(unsigned __int16 *)(v1 + 2484);
    *(_DWORD *)(v1 + 408) = 0x40000000;
    MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(v1, 0, v4, 7, Pool2, v8);
    if ( MsOsFeatureDescriptor >= 0 )
      return 1000LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x30u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
    MsOsFeatureDescriptor = -1073741670;
  }
  *(_DWORD *)(v1 + 408) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x31u,
      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
      v7);
  }
  HUBSM_AddEvent(v1 + 504, 4004);
  return 1000LL;
}
