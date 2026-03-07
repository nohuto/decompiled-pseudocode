void __fastcall ACPIDeviceRecordBlockedOnPhase3List(_QWORD **a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 *v6; // rax

  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = *a1;
  while ( v2 != a1 )
  {
    v3 = (__int64)v2;
    v2 = (_QWORD *)*v2;
    if ( !*(_DWORD *)(v3 + 48) )
    {
      ACPIDevicePowerEnumerateAssociatedPowerNodes(
        v3,
        (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIIsPowerNodeInTransition,
        v3);
      if ( (*(_DWORD *)(v3 + 56) & 0x8000000) != 0 )
      {
        v4 = *(_QWORD *)v3;
        if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3
          || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3)
          || (*v5 = v4,
              *(_QWORD *)(v4 + 8) = v5,
              v6 = (__int64 *)qword_1C006F1C8,
              *(__int64 **)qword_1C006F1C8 != &AcpiPowerBlockedOnPhase3List) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v3 = &AcpiPowerBlockedOnPhase3List;
        *(_QWORD *)(v3 + 8) = v6;
        *v6 = v3;
        qword_1C006F1C8 = v3;
        *(_DWORD *)(v3 + 56) &= ~0x8000000u;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
