__int64 __fastcall AcpiDeviceResetInvokeReset(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  KIRQL v8; // bp
  __int64 v9; // rcx
  _QWORD *i; // rbx
  _QWORD *v11; // r10
  __int64 v12; // r10
  int v13; // edx
  __int64 v15; // [rsp+20h] [rbp-28h]

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v7 = *(_QWORD *)(a1 + 952);
  v8 = v4;
  *(_QWORD *)(v7 + 24) = a2;
  if ( !*(_BYTE *)(v7 + 16) )
  {
    v9 = *(_QWORD *)(v7 + 72);
    for ( i = *(_QWORD **)(v9 + 48); i != (_QWORD *)(v9 + 48); v9 = *(_QWORD *)(v7 + 72) )
    {
      v11 = i - 5;
      i = (_QWORD *)*i;
      if ( !(unsigned __int8)AcpiResetDeviceAlreadyProcessed(v9, v11, v5, v6, v15) )
      {
        *(_QWORD *)(*(_QWORD *)(v12 + 32) + 1008LL) |= 0x10000000uLL;
        ACPIDeviceInitializePowerRequest(*(_QWORD *)(v12 + 32), 4, 0LL, 0LL, 0LL, 0, 0, 0);
      }
    }
    goto LABEL_10;
  }
  v13 = *(_DWORD *)(a1 + 384);
  *(_QWORD *)(*(_QWORD *)(v7 + 72) + 16LL) |= 0x2000uLL;
  if ( *(_BYTE *)(v7 + 18) )
  {
    ACPIDeviceInitializePowerRequest(a1, v13, 0LL, 0LL, v7, 0, 0, 0);
LABEL_10:
    ACPIDeviceInternalSynchronizeRequest(
      (_QWORD *)a1,
      (void (__fastcall *)(__int64, __int64, __int64))AcpiDeviceResetCompleteReset,
      v7);
    goto LABEL_11;
  }
  ACPIDeviceInitializePowerRequest(
    a1,
    v13,
    0LL,
    (void (__fastcall *)(__int64, __int64, __int64))AcpiDeviceResetCompleteReset,
    v7,
    0,
    0,
    0);
LABEL_11:
  KeReleaseSpinLock(&AcpiPowerLock, v8);
  return 259LL;
}
