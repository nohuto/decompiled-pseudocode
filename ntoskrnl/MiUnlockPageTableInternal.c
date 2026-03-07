void __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  char v4; // dl
  signed __int64 v5; // rdx
  bool v6; // zf
  signed __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v10; // eax
  int v11; // edx
  signed __int32 v12; // ett
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rdi
  __int64 Next; // rax
  __int64 Lock; // rcx
  char v16; // al
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v18; // r9
  int v19; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  signed __int32 v23[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v25; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v4 = v2 & 7;
  v25 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v4 )
    {
      v16 = v2 & 7;
      if ( v16 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v16 == 5 )
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        else
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(SelfmapLockHandle, retaddr);
      return;
    }
    _m_prefetchw(SelfmapLockHandle);
    Next = (__int64)SelfmapLockHandle->LockQueue.Next;
    if ( !SelfmapLockHandle->LockQueue.Next )
    {
      if ( SelfmapLockHandle == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                         (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
                                                         0LL,
                                                         (signed __int64)SelfmapLockHandle) )
        return;
      Next = KxWaitForLockChainValid(SelfmapLockHandle);
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    Lock = (__int64)SelfmapLockHandle->LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), Lock)) & 4) != 0 )
    {
      _InterlockedOr(v23, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(Next + 8) >> 5) & 0x7F], 0LL));
    }
  }
  else
  {
    if ( a2 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_3;
    if ( v4 )
    {
      if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v25);
        v10 = *PageTableLockBuffer;
        v11 = ~(3 << v25);
        do
        {
          v12 = v10;
          v10 = _InterlockedCompareExchange(PageTableLockBuffer, v10 & v11, v10);
        }
        while ( v12 != v10 );
        return;
      }
      goto LABEL_3;
    }
    if ( a2 > 0xFFFFF6FB7DBEDFFFuLL
      || (v8 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624)) == 0 )
    {
LABEL_3:
      v5 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v5 & 1) != 0
        && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v21 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
          v22 = v5 | 0x20;
          if ( (v21 & 0x20) == 0 )
            v22 = *(_QWORD *)a2;
          v5 = v22;
          if ( (v21 & 0x42) != 0 )
            v5 = v22 | 0x42;
        }
      }
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v5 & 0xCFFFFFFFFFFFFFFFuLL, v5);
        v6 = v5 == v7;
        v5 = v7;
      }
      while ( !v6 );
      return;
    }
    v18 = (a2 >> 3) & 0x1FF;
    v19 = *(_DWORD *)(v8 + 4 * v18);
    if ( (v19 & 0x3FFFFFFF) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 4 * v18));
    }
    else
    {
      if ( v19 >= 0 )
        KeBugCheckEx(0x10u, v8 + 4 * v18, 0x100uLL, 0LL, 0LL);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 4 * v18));
    }
  }
}
