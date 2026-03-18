/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x1407D53AC
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1406D7C60 (CmpConstructNameWithStatus.c)
 *     CmpPopulateKcbStack @ 0x1406D7E10 (CmpPopulateKcbStack.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406DD670 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1406E0370 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
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
