/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x1408E5970
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036FE64 (PoFxActivateDevice.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     PopFxReleaseDevice @ 0x14056C5A0 (PopFxReleaseDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576340 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char __fastcall PopFxUpdateVetoMaskWork(__int64 P)
{
  __int64 v1; // rbp
  __int64 *v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(P + 16);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
  if ( byte_140C24A38 )
  {
    v3 = (__int64 *)qword_140C24A30;
    if ( *(__int64 **)qword_140C24A30 != &qword_140C24A28 )
      __fastfail(3u);
    *(_QWORD *)P = &qword_140C24A28;
    *(_QWORD *)(P + 8) = v3;
    *v3 = P;
    qword_140C24A30 = P;
  }
  else
  {
    ++dword_140C24A3C;
    KeResetEvent(&stru_140C24A40);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
    PoFxActivateDevice(v4);
    PopPepUpdateDripsDeviceVetoMask(v1, *(_DWORD *)(P + 24));
    PoFxIdleDevice(v4);
    PopFxReleaseDevice(v1);
    ExFreePoolWithTag((PVOID)P, 0x4D584650u);
    ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL, 0, 0LL, 0LL, 0, 0);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    if ( !--dword_140C24A3C )
      KeSetEvent(&stru_140C24A40, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxUpdateDripsConstraintContext);
  return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
}
