/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C02C80F8
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C02C81EC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x1C02C8298 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C02C8730 (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(_QWORD *CallbackContext)
{
  _QWORD *v1; // rdi
  __int64 TlgAggregateSession; // rax
  void *v3; // rbx
  int v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rcx

  v1 = CallbackContext;
  LOBYTE(CallbackContext) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(CallbackContext, 0LL);
  v3 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v1);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = v1;
  *(_BYTE *)(TlgAggregateSession + 373) = 1;
  v4 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v1);
  if ( v4 < 0 )
  {
    v1[5] = 0LL;
    DestroyAggregateSession(v3);
    return (unsigned int)v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C029A6A8, 0LL);
    v5 = qword_1C029A6B0;
    if ( !qword_1C029A6B0 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C028DB58);
      v5 = qword_1C029A6B0;
    }
    v6 = &qword_1C029A6B0;
    while ( v5 )
    {
      if ( *(_QWORD **)(v5 + 344) == v1 )
        goto LABEL_8;
      v6 = (__int64 *)(v5 + 352);
      v5 = *(_QWORD *)(v5 + 352);
    }
    *v6 = (__int64)v3;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C029A6A8, 0LL);
    return 0LL;
  }
}
