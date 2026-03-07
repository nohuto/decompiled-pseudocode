unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  volatile signed __int64 *v5; // rdi
  unsigned __int64 HandlePointer; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (__int64 *)ExMapHandleToPointer(*(unsigned int **)(a1 + 16), (unsigned int)(4 * a2));
  v5 = v4;
  if ( v4 )
  {
    HandlePointer = ExGetHandlePointer(v4);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = HandlePointer;
    _InterlockedExchangeAdd64(v5, 1uLL);
    _InterlockedOr(v10, 0);
    if ( *(_QWORD *)(v7 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
  }
  else
  {
    v8 = 0LL;
  }
  KeLeaveCriticalRegion();
  return v8;
}
