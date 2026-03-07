signed __int64 *__fastcall EtwpGetNextGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // r15
  ULONG_PTR v4; // rdi
  char v5; // r13
  signed __int64 *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r14
  signed __int64 *v9; // rbp
  signed __int64 *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 **v12; // rax
  signed __int64 *j; // rsi

  v3 = a1 + 464;
  v4 = (ULONG_PTR)a2;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
    v7 = v3 + 56LL * (((unsigned __int8)a2[10] ^ (unsigned __int8)(a2[11] ^ a2[12] ^ a2[13])) & 0x3F);
  else
    v7 = a1 + 464;
  v8 = 2LL * a3;
  v9 = (signed __int64 *)(v8 * 8 + v7);
  for ( i = (signed __int64 *)(v7 + 48); ; v9 = &i[v8 - 6] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)i, 0LL);
    v12 = (signed __int64 **)v9;
    if ( v4 )
      v12 = (signed __int64 **)v4;
    for ( j = *v12; j != v9; j = (signed __int64 *)*j )
    {
      v6 = j;
      if ( (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)j) )
      {
        v5 = 1;
        break;
      }
    }
    if ( _InterlockedCompareExchange64(i, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(i);
    KeAbPostRelease((ULONG_PTR)i);
    KeLeaveCriticalRegion();
    if ( v4 )
      EtwpUnreferenceGuidEntry(v4);
    if ( v5 )
      return v6;
    i += 7;
    if ( i == (signed __int64 *)(v3 + 3632) )
      break;
    v4 = 0LL;
  }
  return 0LL;
}
