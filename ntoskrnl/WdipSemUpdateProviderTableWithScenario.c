/*
 * XREFs of WdipSemUpdateProviderTableWithScenario @ 0x14083372C
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140832BA4 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemUpdateProviderTableWithEvent @ 0x1408337A0 (WdipSemUpdateProviderTableWithEvent.c)
 */

__int64 __fastcall WdipSemUpdateProviderTableWithScenario(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 i; // rdi

  if ( !a1 )
    return 3221225485LL;
  result = ((__int64 (*)(void))WdipSemUpdateProviderTableWithEvent)();
  if ( (int)result >= 0 )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(a1 + 48) )
    {
      while ( 1 )
      {
        result = WdipSemUpdateProviderTableWithEvent(*(_QWORD *)(a1 + 8 * v3 + 56));
        if ( (int)result < 0 )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 48) )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 52); i = (unsigned int)(i + 1) )
      {
        result = WdipSemUpdateProviderTableWithEvent(*(_QWORD *)(a1 + 8 * i + 1048));
        if ( (int)result < 0 )
          break;
      }
    }
  }
  return result;
}
