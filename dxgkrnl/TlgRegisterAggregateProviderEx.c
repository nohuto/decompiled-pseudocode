/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C0210A1C
 * Callers:
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0021DF4 (-DxgkInitializeTelemetry@@YAXXZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0210B58 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x1C0210C04 (CreateTlgAggregateSession.c)
 *     ComputeFlushPeriod @ 0x1C0210D54 (ComputeFlushPeriod.c)
 *     DestroyAggregateSession @ 0x1C03D3654 (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(_QWORD *CallbackContext, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned int v4; // ebp
  bool v5; // si
  __int64 v6; // r14
  _QWORD *v7; // rdi
  __int64 TlgAggregateSession; // rax
  void *v9; // rbx
  int v10; // esi
  __int64 v11; // rax
  __int64 *v12; // rcx

  v4 = a4 & 0xF;
  v5 = a4 < 0;
  v6 = a2;
  v7 = CallbackContext;
  if ( v4 >= 3 )
    return 3221225485LL;
  LOBYTE(CallbackContext) = a4 < 0;
  LOBYTE(a2) = v4 != 0;
  TlgAggregateSession = CreateTlgAggregateSession(CallbackContext, a2);
  v9 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v7);
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 328) = v6;
  *(_QWORD *)(TlgAggregateSession + 344) = v7;
  *(_BYTE *)(TlgAggregateSession + 373) = v5;
  if ( v4 )
    *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession, v4);
  v10 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v7);
  if ( v10 < 0 )
  {
    v7[5] = 0LL;
    DestroyAggregateSession(v9);
    return (unsigned int)v10;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C013C060, 0LL);
    v11 = qword_1C013CC80;
    if ( !qword_1C013CC80 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013AA48);
      v11 = qword_1C013CC80;
    }
    v12 = &qword_1C013CC80;
    while ( v11 )
    {
      if ( *(_QWORD **)(v11 + 344) == v7 )
        goto LABEL_11;
      v12 = (__int64 *)(v11 + 352);
      v11 = *(_QWORD *)(v11 + 352);
    }
    *v12 = (__int64)v9;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_1C013C060, 0LL);
    return 0LL;
  }
}
