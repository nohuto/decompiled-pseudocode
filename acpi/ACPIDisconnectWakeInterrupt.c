void __fastcall ACPIDisconnectWakeInterrupt(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // r11
  _QWORD *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( *(_QWORD *)a1 == a1
    || (int)ACPIFindWakeInterruptForVector(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 32), &v5) < 0 )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v2);
  }
  else
  {
    if ( *(_QWORD *)(v3 + 8) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)(a1 + 8) = a1;
    *(_QWORD *)a1 = a1;
    KeReleaseSpinLock(&AcpiPowerLock, v2);
    ACPIDereferenceWakeInterrupt(&v5);
  }
}
