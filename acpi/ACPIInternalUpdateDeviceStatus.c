void __fastcall ACPIInternalUpdateDeviceStatus(__int64 a1, char a2)
{
  __int64 v2; // rax
  int v4; // edx
  KIRQL v5; // al
  __int64 v6; // rbx
  __int64 v7; // r9

  v2 = *(_QWORD *)(a1 + 8);
  if ( (a2 & 8) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFF7FFFFFFFFFFFFFuLL);
  else
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x80000000000000uLL);
  if ( (a2 & 4) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFDFFFFFFFuLL);
  else
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x20000000uLL);
  if ( (a2 & 2) != 0 )
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x40000000000000uLL);
  else
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFBFFFFFFFFFFFFFuLL);
  v4 = a2 & 1;
  if ( v4 )
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFDuLL);
  else
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 2uLL);
  if ( (v2 & 2) == 0 && !v4 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = *(_QWORD *)(a1 + 792);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v6 )
      ACPIBuildSynchronizationRequestInternal(v6, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v6, v7, 1);
  }
}
