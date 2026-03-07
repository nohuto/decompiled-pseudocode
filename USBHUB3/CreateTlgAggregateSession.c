_QWORD *__fastcall CreateTlgAggregateSession(__int64 a1, char a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  _QWORD *v9; // rax
  __int64 Timer; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x178uLL, 0x47417254u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 0x178uLL);
  v6[34] = 0LL;
  v7 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x47417254u);
  v8 = v7;
  if ( v7 )
    memset(v7, 0, 0x40uLL);
  v6[33] = v8;
  if ( !v8 )
    goto LABEL_7;
  KeInitializeEvent((PRKEVENT)(v8 + 32), NotificationEvent, 0);
  v9 = (_QWORD *)v6[33];
  v9[2] = TlgAggregateInternalFlushWorkItemRoutineKernelMode;
  v9[3] = v6;
  *v9 = 0LL;
  *(_WORD *)(v6[33] + 56LL) = 0;
  if ( a2 )
  {
    Timer = ExAllocateTimer(TlgAggregateInternalFlushTimerCallbackKernelMode, v6[33], 8LL);
    v6[45] = Timer;
    if ( !Timer )
    {
LABEL_7:
      DestroyAggregateSession(v6, v4, v5);
      return 0LL;
    }
  }
  return v6;
}
