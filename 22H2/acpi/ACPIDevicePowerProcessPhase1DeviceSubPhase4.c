/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001C330
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001C214 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001CD30 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rax
  char v3; // r8
  __int64 v4; // rbx
  void *v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // bl
  __int64 v9; // r8
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C00701BA;
  v3 = 0;
  v4 = a1 + 216;
  v6 = &unk_1C00701BA;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 568);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(void **)(v1 + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      10,
      61,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      v3,
      (__int64)v2,
      v11);
  }
  dword_1C0082908 = 0;
  pszDest = 0;
  FreeData(v4);
  *(_OWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  ACPIDevicePowerEnumerateAssociatedPowerNodes(
    a1,
    (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes,
    a1);
  *(_DWORD *)(v1 + 504) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(v1 + 344);
  *(_DWORD *)(v1 + 344) = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v8);
  ACPIDeviceCompletePhase3Common(a1 + 208, 0LL, v9);
  return 0LL;
}
