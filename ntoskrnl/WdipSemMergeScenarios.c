/*
 * XREFs of WdipSemMergeScenarios @ 0x140831ABC
 * Callers:
 *     WdipSemAddScenarioToTable @ 0x140833C3C (WdipSemAddScenarioToTable.c)
 * Callees:
 *     WdipSemAddContextEventToScenario @ 0x140831B4C (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x140834704 (WdipSemAddEndEventToScenario.c)
 *     WdipSemMergeEvents @ 0x1408347B8 (WdipSemMergeEvents.c)
 */

__int64 __fastcall WdipSemMergeScenarios(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 i; // rdi

  if ( a1 && a2 )
  {
    WdipSemMergeEvents(a1, a2, a3, 0LL);
    v6 = 0LL;
    if ( *(_DWORD *)(v7 + 48) )
    {
      while ( 1 )
      {
        v5 = WdipSemAddContextEventToScenario(a1, *(_QWORD *)(a2 + 8 * v6 + 56));
        if ( v5 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 48) )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 52); i = (unsigned int)(i + 1) )
      {
        v5 = WdipSemAddEndEventToScenario(a1, *(_QWORD *)(a2 + 8 * i + 1048));
        if ( v5 < 0 )
          break;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
