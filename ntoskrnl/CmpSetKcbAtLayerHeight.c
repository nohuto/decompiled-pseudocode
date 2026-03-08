/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x140785EE8
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpPopulateKcbStack @ 0x1407AF248 (CmpPopulateKcbStack.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407B0C90 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1407B4730 (CmQueryValueKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetKcbAtLayerHeight(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 >= 2 )
  {
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8LL * a2 - 16) = a3;
  }
  else
  {
    *(_QWORD *)(a1 + 8LL * a2 + 8) = a3;
  }
  return result;
}
