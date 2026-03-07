__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // eax
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  _QWORD *i; // rdi
  _QWORD *v13; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx

  CurrentThread = KeGetCurrentThread();
  v8 = PspHashKeyValue();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = PspQuotaBlockTable + 24LL * v8;
  if ( a4 )
    ExAcquirePushLockExclusiveEx(v10, 0LL);
  else
    ExAcquirePushLockSharedEx(v10, 0LL);
  if ( a1 )
  {
    for ( i = *(_QWORD **)(v10 + 8); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v10 + 8) )
        goto LABEL_6;
      if ( RtlEqualSid(a1, i + 7) )
        break;
    }
    v9 = (__int64)(i - 65);
  }
  else
  {
    if ( !a3 )
      goto LABEL_6;
    v9 = PspDefaultQuotaBlock;
  }
  if ( v9 )
  {
    if ( (unsigned int)PspSafeReferenceQuotaBlock(v9) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 516));
    }
    else
    {
      if ( a4 && !a3 )
      {
        v15 = (_QWORD *)(v9 + 520);
        v16 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_31;
        v17 = (_QWORD *)v15[1];
        if ( (_QWORD *)*v17 != v15 )
          goto LABEL_31;
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *v15 = 0LL;
      }
      v9 = 0LL;
    }
  }
LABEL_6:
  if ( a4 )
  {
    if ( v9 )
    {
LABEL_17:
      PspUnlockQuotaListExclusive((__int64)CurrentThread, (volatile signed __int64 *)v10);
      return v9;
    }
    v13 = (_QWORD *)(a4 + 520);
    if ( a3 )
    {
      PspDefaultQuotaBlock = a4;
      *v13 = 1LL;
      goto LABEL_17;
    }
    v18 = *(_QWORD **)(v10 + 16);
    if ( *v18 == v10 + 8 )
    {
      *v13 = v10 + 8;
      *(_QWORD *)(a4 + 528) = v18;
      *v18 = v13;
      *(_QWORD *)(v10 + 16) = v13;
      goto LABEL_17;
    }
LABEL_31:
    __fastfail(3u);
  }
  PspUnlockQuotaListShared((__int64)CurrentThread, (signed __int64 *)v10);
  return v9;
}
