/*
 * XREFs of WdipSemEnableAllProviders @ 0x140833A4C
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140832BA4 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x140833B40 (WdipSemEnableDisableTrace.c)
 */

void WdipSemEnableAllProviders()
{
  __int64 v0; // rdi
  unsigned __int16 v1; // bp
  unsigned __int16 i; // si
  __int64 v3; // rbx
  __int64 v4; // rax

  v0 = 0LL;
  v1 = _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId);
  for ( i = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
        (unsigned int)v0 < dword_140C34AA0;
        v0 = (unsigned int)(v0 + 1) )
  {
    v3 = WdipSemProviderTable[v0];
    v4 = *(_QWORD *)v3 - *(_QWORD *)&WDI_SEM_PROVIDER.Data1;
    if ( *(_QWORD *)v3 == *(_QWORD *)&WDI_SEM_PROVIDER.Data1 )
      v4 = *(_QWORD *)(v3 + 8) - *(_QWORD *)WDI_SEM_PROVIDER.Data4;
    if ( v4 && *(_DWORD *)(v3 + 40) && *(_BYTE *)(v3 + 36) )
    {
      if ( (int)WdipSemEnableDisableTrace(
                  v1,
                  WdipSemProviderTable[v0],
                  *(_BYTE *)(v3 + 16),
                  *(_QWORD *)(v3 + 24),
                  *(_DWORD *)(v3 + 32),
                  1) < 0 )
      {
        *(_OWORD *)(v3 + 16) = 0LL;
        *(_OWORD *)(v3 + 32) = 0LL;
        *(_OWORD *)(v3 + 48) = 0LL;
        *(_OWORD *)(v3 + 64) = 0LL;
      }
      else
      {
        *(_BYTE *)(v3 + 37) = 1;
        if ( *(_BYTE *)(v3 + 68) )
        {
          if ( (int)WdipSemEnableDisableTrace(i, v3, *(_BYTE *)(v3 + 48), *(_QWORD *)(v3 + 56), *(_DWORD *)(v3 + 64), 1) < 0 )
          {
            *(_OWORD *)(v3 + 48) = 0LL;
            *(_OWORD *)(v3 + 64) = 0LL;
          }
          else
          {
            *(_BYTE *)(v3 + 69) = 1;
          }
        }
      }
    }
  }
}
