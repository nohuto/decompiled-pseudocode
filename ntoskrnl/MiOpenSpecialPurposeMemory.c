/*
 * XREFs of MiOpenSpecialPurposeMemory @ 0x140A44A2C
 * Callers:
 *     NtManagePartition @ 0x140705650 (NtManagePartition.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiOpenSpecialPurposeMemory(__int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int64 *v6; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rbp
  _QWORD *v9; // rax
  bool v10; // zf

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( (*(_DWORD *)(a2 + 8) & (a3 != 0 ? 7666 : 73714)) == *(_DWORD *)(a2 + 8) )
  {
    if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
    {
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire(a1 + 16992, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16992), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 16992), 0, v8, a1 + 16992);
      if ( v8 )
        *(_BYTE *)(v8 + 18) = 1;
      v9 = *(_QWORD **)(a1 + 16944);
      if ( v9 != (_QWORD *)(a1 + 16944) )
      {
        while ( v9[2] != *(_QWORD *)a2 )
        {
          v9 = (_QWORD *)*v9;
          if ( v9 == (_QWORD *)(a1 + 16944) )
            goto LABEL_15;
        }
        v6 = *(volatile signed __int64 **)(v9[8] + 200LL);
        if ( _InterlockedIncrement64(v6 + 4) <= 1 )
          __fastfail(0xEu);
      }
LABEL_15:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16992), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 16992));
      KeAbPostRelease(a1 + 16992);
      v10 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v10
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v6 )
      {
        v7 = ObOpenObjectByPointer(
               (PVOID)v6,
               *(_DWORD *)(a2 + 8),
               0LL,
               *(_DWORD *)(a2 + 12),
               PsPartitionType,
               0,
               (PHANDLE)(a2 + 16));
        if ( v7 >= 0 )
          v7 = 0;
        PsDereferencePartition((__int64)v6);
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
    else
    {
      return (unsigned int)-1073741727;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
