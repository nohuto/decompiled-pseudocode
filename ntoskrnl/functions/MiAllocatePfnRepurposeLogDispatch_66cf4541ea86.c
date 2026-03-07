void MiAllocatePfnRepurposeLogDispatch()
{
  _SLIST_ENTRY *v0; // rsi
  struct _SLIST_ENTRY *Pool; // rax
  struct _SLIST_ENTRY *v2; // rdi
  PSLIST_ENTRY v3; // rbx
  struct _SLIST_ENTRY *Next; // rax
  __int64 v5; // rax
  unsigned int Alignment_low; // edi
  int v7; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  Pool = (struct _SLIST_ENTRY *)MiAllocatePool(64, 0x1000uLL, 0x70526D4Du);
  v2 = Pool;
  if ( Pool )
  {
    Pool->Next = 0LL;
    Pool[2].Next = (struct _SLIST_ENTRY *)((char *)Pool + 72);
    *((_QWORD *)&Pool[2].Next + 1) = (char *)Pool + 4088;
    *((_DWORD *)&Pool->Next + 2) = 2;
    Pool[1].Next = v0;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
  v3 = ListEntry;
  if ( !dword_140C67C68 )
  {
LABEL_13:
    ListEntry = 0LL;
    goto LABEL_6;
  }
  if ( v2 )
  {
    ListEntry = v2;
    v2 = 0LL;
    goto LABEL_6;
  }
  if ( ListEntry )
  {
    if ( ((__int64)ListEntry[2].Next & 0xFFFLL) != 0 )
    {
      v3 = 0LL;
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_6:
  KxReleaseQueuedSpinLock(&LockHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
  {
    Next = v3[2].Next;
    if ( Next == (struct _SLIST_ENTRY *)(&v3[4].Next + 1) )
      goto LABEL_27;
    if ( ((unsigned __int16)Next & 0xFFF) != 0 )
    {
      if ( v0 < v3[1].Next )
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      v5 = (__int64)(&v3[2].Next[-1].Next + 1);
      *((_QWORD *)&v3[1].Next + 1) = v0;
      *((_QWORD *)&v3[2].Next + 1) = v5;
    }
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 72);
    if ( !ExAcquireRundownProtection_0(&stru_140D0BE48) )
      goto LABEL_27;
    Alignment_low = LOWORD(stru_140D0BE80.Alignment);
    if ( LOWORD(stru_140D0BE80.Alignment) < (unsigned int)dword_140D0BE68 )
    {
      RtlpInterlockedPushEntrySList(&stru_140D0BE80, v3);
      if ( !Event.Header.SignalState && Alignment_low >= 8 )
        KeSetEvent(&Event, 0, 0);
      v7 = 1;
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C650D0, 0x64u);
      v7 = 0;
    }
    ExReleaseRundownProtection_0(&stru_140D0BE48);
    if ( !v7 )
LABEL_27:
      ExFreePoolWithTag(v3, 0);
  }
}
