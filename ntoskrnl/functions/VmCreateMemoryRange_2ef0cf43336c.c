__int64 __fastcall VmCreateMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *MemoryRanges; // rsi
  _KPROCESS *Process; // rbx
  unsigned __int64 v11; // rdi
  int inserted; // edi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12

  MemoryRanges = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !VmTbFlushEnabled )
    VmTbFlushEnabled = 1;
  v11 = Process[2].Affinity.StaticBitmap[5];
  if ( !v11 )
  {
    inserted = VmpProcessContextSetup(a4);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v11 = Process[2].Affinity.StaticBitmap[5];
  }
  if ( a5 )
    MemoryRanges = (_QWORD *)VmpDecodePreallocationRangeHandle(v11);
  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a4) )
  {
    inserted = -1073741811;
  }
  else
  {
    v13 = *(_QWORD *)(v11 + 72);
    if ( v13 == -1 || v13 == a4 )
    {
      if ( !MemoryRanges )
      {
        MemoryRanges = (_QWORD *)VmpAllocateMemoryRanges(1LL);
        if ( !MemoryRanges )
          return (unsigned int)-1073741670;
      }
      CurrentThread = KeGetCurrentThread();
      v15 = (volatile signed __int64 *)(v11 + 88);
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v11 + 88, 0LL);
      v16 = MemoryRanges[5];
      v17 = a2 >> 12;
      MemoryRanges[3] = v17;
      MemoryRanges[4] = v17 + a3 - 1;
      v18 = a1 >> 12;
      *(_QWORD *)(v16 + 48) = v18;
      *(_QWORD *)(v16 + 56) = v18 + a3 - 1;
      inserted = VmpInsertMemoryRange((PEX_SPIN_LOCK)v11, MemoryRanges, a4);
      if ( inserted >= 0 )
      {
        MemoryRanges = 0LL;
        inserted = 0;
      }
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KeLeaveCriticalRegion();
    }
    else
    {
      inserted = -1073740007;
    }
  }
  if ( MemoryRanges )
    VmpFreeMemoryRanges(MemoryRanges);
  return (unsigned int)inserted;
}
