void __fastcall ACPIInterruptServiceRoutineDPC(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  signed __int32 v5; // edi
  unsigned __int32 v6; // ebx
  signed __int32 v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // di
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdx

  while ( 1 )
  {
    v5 = DeferredContext[22];
    do
    {
      v6 = v5;
      v7 = 0x80000000;
      if ( (v5 & 0x7FFFFFFF) == 0 )
      {
        KeAcquireSpinLockAtDpcLevel(&AcpiPm1EnableRegisterLock);
        WRITE_PM1_ENABLE(*((unsigned __int16 *)AcpiInformation + 56));
        KeReleaseSpinLockFromDpcLevel(&AcpiPm1EnableRegisterLock);
        v7 = 0;
      }
      v5 = _InterlockedCompareExchange(DeferredContext + 22, v7, v5);
    }
    while ( v6 != v5 );
    if ( !v7 )
      break;
    v8 = (v6 >> 8) & 1;
    v9 = (v6 >> 8) & 1 | 2;
    if ( (v6 & 0x200) == 0 )
      v9 = (unsigned int)v8;
    if ( (_DWORD)v9 )
    {
      if ( (v6 & 0x8000) != 0 )
        v9 = 0x80000000LL;
      ACPIButtonEvent(FixedButtonDeviceObject, v9, SystemArgument1, SystemArgument2);
    }
    if ( (v6 & 0x20) != 0 )
    {
      v10 = 0;
      LOBYTE(v12) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
      v13 = (_QWORD *)((char *)AcpiInformation + 48);
      if ( (_QWORD *)*v13 != v13 )
        v10 = ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5), v13, v11, v12);
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v12);
      if ( v10 )
        ACPIStartNextGlobalLockRequest();
    }
    if ( (v6 & 0x20000) != 0 )
      ACPIPccProcessSci(v8, v9, SystemArgument1, SystemArgument2);
    if ( (v6 & 0x10000) != 0 )
      ACPIInterruptDispatchEvents();
  }
}
