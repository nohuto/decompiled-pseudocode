__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1)
{
  __int64 TlgAggregateSession; // rax
  _QWORD *v2; // rbx
  int v3; // esi
  __int64 v4; // rax
  __int64 *v5; // rcx

  LOBYTE(a1) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(a1, 0LL);
  v2 = (_QWORD *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0357060);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C0357060;
  *(_BYTE *)(TlgAggregateSession + 373) = 1;
  v3 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0357060);
  if ( v3 < 0 )
  {
    qword_1C0357088 = 0LL;
    DestroyAggregateSession(v2);
    return (unsigned int)v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C0362428, 0LL);
    v4 = qword_1C0362430;
    if ( !qword_1C0362430 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0357188);
      v4 = qword_1C0362430;
    }
    v5 = &qword_1C0362430;
    while ( v4 )
    {
      if ( *(int **)(v4 + 344) == &dword_1C0357060 )
        goto LABEL_8;
      v5 = (__int64 *)(v4 + 352);
      v4 = *(_QWORD *)(v4 + 352);
    }
    *v5 = (__int64)v2;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C0362428, 0LL);
    return 0LL;
  }
}
