_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v3; // rdi
  _QWORD **v5; // r13
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  int v8; // esi
  _QWORD *v9; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 1080);
  v5 = (_QWORD **)(a1 + 1504);
  v6 = 0LL;
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[167];
  else
    v9 = *v5;
  if ( v9 != v5 )
  {
    while ( 1 )
    {
      v7 = v9 - 167;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 167)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v5 )
        goto LABEL_6;
    }
    v8 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v8 )
    return v7;
  return (_QWORD *)v6;
}
