__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, char a3)
{
  char v3; // al
  unsigned int v5; // esi
  char v6; // dl
  signed __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  int v11; // ebp
  unsigned __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  __int64 v16; // rcx
  volatile signed __int32 *PageTableLockBuffer; // rbx
  int v18; // ebp
  unsigned __int32 v19; // r8d
  char v20; // cl
  signed __int32 v21; // eax
  volatile __int64 *v22; // r8
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  signed __int64 v24; // rdx
  signed __int64 v25; // rax
  char v26; // al
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v28; // edx
  signed __int32 v29; // eax
  volatile LONG *v30; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // [rsp+78h] [rbp+10h] BYREF
  int v35; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a1 + 184);
  v5 = 0;
  v6 = v3 & 7;
  v34 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v6 )
    {
      v26 = v3 & 7;
      if ( v26 == 7 )
      {
        v22 = (volatile __int64 *)&unk_140C66E80;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v26 == 5 )
        {
          v22 = (volatile __int64 *)&unk_140C66E78;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v22 = (volatile __int64 *)&unk_140C66E90;
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v22 = (volatile __int64 *)(a1 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (a3 & 1) != 0 )
      return KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(v22, SelfmapLockHandle);
    SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v22;
    SelfmapLockHandle->LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v22);
      return 1LL;
    }
    if ( _InterlockedExchange64(v22, (__int64)SelfmapLockHandle) )
    {
      KxWaitForLockOwnerShip(SelfmapLockHandle);
      return 1LL;
    }
    return 1LL;
  }
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_3;
  if ( v6 )
  {
    if ( a2 > 0xFFFFF6FB7DBEDFFFuLL )
      goto LABEL_3;
    v35 = 0;
    PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v34);
    v18 = a3 & 1;
    v19 = *PageTableLockBuffer;
LABEL_18:
    while ( 1 )
    {
      v20 = v34;
      while ( ((v19 >> v20) & 1) != 0 )
      {
        if ( v18 )
          return 0LL;
        if ( ((v19 >> v20) & 2) == 0 )
        {
          v28 = v19 | (2 << v20);
          v29 = _InterlockedCompareExchange(PageTableLockBuffer, v28, v19);
          v13 = v19 == v29;
          v19 = v29;
          if ( v13 )
            v19 = v28;
          goto LABEL_18;
        }
        do
        {
          KeYieldProcessorEx(&v35);
          v19 = *PageTableLockBuffer;
          v20 = v34;
        }
        while ( (((unsigned __int32)*PageTableLockBuffer >> v34) & 1) != 0 );
      }
      v21 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << v20) & (v19 | (1 << v20)), v19);
      v13 = v19 == v21;
      v19 = v21;
      if ( v13 )
        return 1LL;
      if ( v18 )
        return 0LL;
    }
  }
  if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v16 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624);
    if ( v16 )
    {
      v30 = (volatile LONG *)(v16 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (a3 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v30);
      }
      else if ( (a3 & 1) != 0 )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v30) )
          return 0LL;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v30);
      }
      return 1LL;
    }
  }
LABEL_3:
  v8 = *(_QWORD *)a2;
  v9 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v32 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v33 = v8 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = *(_QWORD *)a2;
      v8 = v33;
      if ( (v32 & 0x42) != 0 )
        v8 = v33 | 0x42;
    }
  }
  v10 = v8;
  if ( (v8 & 1) != 0 )
  {
    v11 = a3 & 1;
    do
    {
      if ( (v10 & 0x1000000000000000LL) != 0 )
      {
        if ( v11 )
          return v5;
        if ( ((v10 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
            {
              HvlNotifyLongSpinWait(v9);
            }
            else
            {
              _mm_pause();
            }
            v8 = *(_QWORD *)a2;
          }
          while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
        }
        else
        {
          v24 = v10 | 0x2000000000000000LL;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v24, v8);
          v13 = v8 == v25;
          v8 = v25;
          if ( v13 )
            v8 = v24;
        }
      }
      else
      {
        v12 = v10 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v12, v8);
        v13 = v8 == v14;
        v8 = v14;
        if ( v13 )
          return 1;
        if ( v11 )
          return v5;
      }
      v10 = v8;
    }
    while ( (v8 & 1) != 0 );
  }
  return v5;
}
