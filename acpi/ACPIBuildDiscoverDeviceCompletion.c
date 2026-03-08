/*
 * XREFs of ACPIBuildDiscoverDeviceCompletion @ 0x1C000CD20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000BC30 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C0015C08 (WPP_RECORDER_SF_sqqDqss.c)
 */

void __fastcall ACPIBuildDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // r8
  void *v7; // rax
  void *v8; // rdx
  signed __int32 v9; // edx

  v4 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v4 + 944) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v4 + 1008), 0x4000000uLL);
    v6 = *(_QWORD *)(v4 + 8);
    v7 = &unk_1C00622D0;
    v8 = &unk_1C00622D0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(void **)(v4 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = *(void **)(v4 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sqqDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v8,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        90,
        (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
        (__int64)"ACPIBuildDiscoverDeviceCompletion",
        v4,
        *(_QWORD *)(v4 + 944),
        a2,
        v4,
        (__int64)v7,
        (__int64)v8);
  }
  v9 = *(_DWORD *)(a1 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v9);
}
