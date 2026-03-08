/*
 * XREFs of EtwpTrackProviderRegistration @ 0x1406952D0
 * Callers:
 *     EtwpRegisterKMProvider @ 0x140690D64 (EtwpRegisterKMProvider.c)
 *     EtwpRegisterUMProvider @ 0x140694950 (EtwpRegisterUMProvider.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x140775208 (EtwpProviderArrivalCallback.c)
 */

void __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // r13
  bool v4; // r15
  __int64 v5; // r12
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned int *v9; // rax
  unsigned int *v10; // r14
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  unsigned int *v13; // rax
  unsigned int *v14; // r14

  v1 = *(_WORD *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (v1 & 1) == 0;
  v5 = *(_QWORD *)(v3 + 392);
  if ( (v1 & 8) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 91) & 1) != 0 )
    {
      v11 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v3 + 392), *(unsigned __int16 *)(v3 + 88), 0);
      v12 = v11;
      if ( v11 )
      {
        EtwpProviderArrivalCallback(v11, v4, a1);
        EtwpReleaseLoggerContext(v12, 0);
      }
    }
  }
  else
  {
    v6 = 1;
    v7 = 0LL;
    v8 = 8LL;
    do
    {
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 100)) != 0 )
      {
        v9 = EtwpAcquireLoggerContextByLoggerId(v5, *(unsigned __int16 *)(v7 + v3 + 134), 0);
        v10 = v9;
        if ( v9 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (v9[204] & 0x2000000) != 0 )
            EtwpProviderArrivalCallback(v9, v4, a1);
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 137) + 448LL) + 8LL * *v10),
            1u);
        }
      }
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 102)) != 0 )
      {
        v13 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(v3 + 400) + v7 + 134),
                0);
        v14 = v13;
        if ( v13 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (v13[204] & 0x2000000) != 0 )
            EtwpProviderArrivalCallback(v13, v4, a1);
          EtwpReleaseLoggerContext(v14, 0);
        }
      }
      v6 = __ROL4__(v6, 1);
      v7 += 32LL;
      --v8;
    }
    while ( v8 );
  }
}
