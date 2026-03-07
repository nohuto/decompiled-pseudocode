char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, int a5)
{
  int v7; // r13d
  int *HandleExtraInfo; // rdi
  struct _KTHREAD *CurrentThread; // r15
  char v11; // di
  int v12; // r12d
  __int64 *v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  signed __int32 v17[12]; // [rsp+0h] [rbp-68h] BYREF

  v7 = a2;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (int *)ExpGetHandleExtraInfo((unsigned int *)a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExLockHandleTableEntry(a1, a3) )
  {
    _m_prefetchw(HandleExtraInfo);
    v12 = *HandleExtraInfo;
    if ( a4 == ExGetHandlePointer(a3) )
    {
      if ( (a5 & v12) != 0 )
      {
        v14 = 0LL;
        *HandleExtraInfo = v12 & ~a5;
        if ( (*(_BYTE *)(a4 + 26) & 0x20) != 0 )
        {
          v15 = ObpInfoMaskToOffset[*(_BYTE *)(a4 + 26) & 0x3F];
          v13 = (__int64 *)(a4 - v15);
          if ( a4 != v15 )
            v14 = *v13;
        }
        SeOperationAuditAlarm(
          (_DWORD)v13,
          a4 + 48,
          v7,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
        + 16,
          a5 & v12,
          v17[10],
          v14);
      }
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    _InterlockedExchangeAdd64(a3, 1uLL);
    _InterlockedOr(v17, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    v11 = 0;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v11;
}
