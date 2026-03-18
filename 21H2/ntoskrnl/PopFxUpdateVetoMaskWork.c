/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x14098E120
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PoFxIdleDevice @ 0x1402D25CC (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1402D2848 (PoFxActivateDevice.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PopFxReleaseDevice @ 0x1405CD96C (PopFxReleaseDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1405D67D4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxUpdateVetoMaskWork(__int64 P)
{
  __int64 v1; // rbp
  __int64 *v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(P + 16);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
  if ( byte_140C23C78 )
  {
    v3 = (__int64 *)qword_140C23C70;
    if ( *(__int64 **)qword_140C23C70 != &qword_140C23C68 )
      __fastfail(3u);
    *(_QWORD *)P = &qword_140C23C68;
    *(_QWORD *)(P + 8) = v3;
    *v3 = P;
    qword_140C23C70 = P;
  }
  else
  {
    ++dword_140C23C7C;
    KeResetEvent(&stru_140C23C80);
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
    ZwUpdateWnfStateData((__int64)&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    if ( !--dword_140C23C7C )
      KeSetEvent(&stru_140C23C80, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxUpdateDripsConstraintContext);
  return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
}
