__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  KIRQL v6; // bp
  const EVENT_DESCRIPTOR *v7; // rsi
  const EVENT_DESCRIPTOR **p_Keyword; // rcx
  unsigned int v9; // edi
  const EVENT_DESCRIPTOR *v10; // rdx
  const EVENT_DESCRIPTOR *v11; // r8
  const EVENT_DESCRIPTOR **v12; // rax
  const EVENT_DESCRIPTOR *i; // rdx
  const EVENT_DESCRIPTOR *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v5 = a1 + 272;
  v6 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 272, 0LL);
  if ( !*(_BYTE *)(a1 + 373) )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v7 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  p_Keyword = &v14;
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v9 = 0;
  v14 = v7;
  if ( v7 )
  {
    v10 = v7;
    do
    {
      v11 = *(const EVENT_DESCRIPTOR **)&v10[2].Id;
      *(_QWORD *)&v10[2].Id = 0LL;
      p_Keyword = (const EVENT_DESCRIPTOR **)&(*p_Keyword)[1].Keyword;
      v12 = p_Keyword;
      for ( i = *p_Keyword; i; i = *(const EVENT_DESCRIPTOR **)&i[2].Id )
        v12 = (const EVENT_DESCRIPTOR **)&i[2];
      *v12 = v11;
      ++v9;
      v10 = *p_Keyword;
    }
    while ( *p_Keyword );
  }
  *(_DWORD *)(a1 + 256) -= v9;
  if ( !*(_BYTE *)(a1 + 373) )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280), v6);
  ExReleasePushLockExclusiveEx(v5, 0LL);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v7);
  return v9;
}
