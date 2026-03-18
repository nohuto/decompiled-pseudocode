/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C03776E4
 * Callers:
 *     EnableUserkTraceLogging @ 0x1C0118980 (EnableUserkTraceLogging.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C03777C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x1C0377874 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C0377C9C (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1)
{
  __int64 TlgAggregateSession; // rax
  void *v2; // rbx
  int v3; // esi
  __int64 v4; // rax
  __int64 *v5; // rcx

  LOBYTE(a1) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(a1, 0LL);
  v2 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C03263C0);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C03263C0;
  *(_BYTE *)(TlgAggregateSession + 373) = 1;
  v3 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C03263C0);
  if ( v3 < 0 )
  {
    qword_1C03263E8 = 0LL;
    DestroyAggregateSession(v2);
    return (unsigned int)v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C0337A60, 0LL);
    v4 = qword_1C0337A68;
    if ( !qword_1C0337A68 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C03262F8);
      v4 = qword_1C0337A68;
    }
    v5 = &qword_1C0337A68;
    while ( v4 )
    {
      if ( *(int **)(v4 + 344) == &dword_1C03263C0 )
        goto LABEL_8;
      v5 = (__int64 *)(v4 + 352);
      v4 = *(_QWORD *)(v4 + 352);
    }
    *v5 = (__int64)v2;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C0337A60, 0LL);
    return 0LL;
  }
}
