/*
 * XREFs of WdipSemEnableContextProviders @ 0x140832180
 * Callers:
 *     WdipSemEnableScenario @ 0x1407966C0 (WdipSemEnableScenario.c)
 * Callees:
 *     WdipSemEnableContextProvider @ 0x14083224C (WdipSemEnableContextProvider.c)
 */

void __fastcall WdipSemEnableContextProviders(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int i; // edi
  __int64 v4; // rbx
  int v5; // eax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 32);
    for ( i = 0; i < *(_DWORD *)(v1 + 48); *(_DWORD *)(a1 + 4 * v4 + 48) = v5 )
    {
      v4 = i;
      v5 = WdipSemEnableContextProvider(*(_QWORD *)(v1 + 8LL * i++ + 56));
    }
  }
}
