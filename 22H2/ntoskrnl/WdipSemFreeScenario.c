/*
 * XREFs of WdipSemFreeScenario @ 0x140795290
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140794808 (WdipSemLoadScenarioTable.c)
 *     WdipSemAddScenarioToTable @ 0x140795664 (WdipSemAddScenarioToTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x140788894 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemFreeScenario(__int64 a1)
{
  __int64 i; // rdi
  __int64 j; // rdi
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *v5; // rdx
  _SLIST_ENTRY *v6; // rdx

  if ( a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 48); i = (unsigned int)(i + 1) )
    {
      v5 = *(_SLIST_ENTRY **)(a1 + 8 * i + 56);
      if ( v5 )
      {
        WdipSemFastFree(0, v5);
        *(_QWORD *)(a1 + 8 * i + 56) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 48) = 0;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 52); j = (unsigned int)(j + 1) )
    {
      v6 = *(_SLIST_ENTRY **)(a1 + 8 * j + 1048);
      if ( v6 )
      {
        WdipSemFastFree(0, v6);
        *(_QWORD *)(a1 + 8 * j + 1048) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 52) = 0;
    return WdipSemFastFree(1, (_SLIST_ENTRY *)a1);
  }
  return result;
}
