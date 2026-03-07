volatile signed __int64 *__fastcall ObpReferenceObjectByHandle(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 *a3,
        volatile signed __int64 **a4)
{
  volatile signed __int64 *v8; // rax
  volatile signed __int64 *v9; // rbx
  int v10; // r15d
  volatile signed __int64 *HandlePointer; // rax
  int v13; // ecx
  int v14; // eax
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( (BugCheckParameter1 & 0x3FC) != 0 )
  {
    v8 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)BugCheckParameter2, BugCheckParameter1);
    v9 = v8;
    if ( v8 )
    {
      v10 = ExFastReferenceHandleTableEntry(BugCheckParameter2, v8, a3);
      if ( !v10 )
      {
        *a4 = (volatile signed __int64 *)ExGetHandlePointer(a3);
        return v9;
      }
      if ( v10 > 0 )
      {
        HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(a3);
        *a4 = HandlePointer;
        ObpIncrPointerCountEx(HandlePointer, v10);
        v13 = ExFastReplenishHandleTableEntry(v9, a3, v10);
        if ( v13 )
          _InterlockedExchangeAdd64(*a4, -v13);
        return v9;
      }
      if ( ExLockHandleTableEntry(BugCheckParameter2, v9) )
      {
        *a4 = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)v9);
        *(_OWORD *)a3 = *(_OWORD *)v9;
        v14 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v9);
        ObpIncrPointerCountEx(*a4, v14 + 1);
        _InterlockedExchangeAdd64(v9, 1uLL);
        _InterlockedOr(v15, 0);
        if ( *(_QWORD *)(BugCheckParameter2 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(BugCheckParameter2 + 48), 0LL);
        return v9;
      }
    }
  }
  if ( BugCheckParameter1 )
    ExHandleLogBadReference(BugCheckParameter2, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
  return 0LL;
}
