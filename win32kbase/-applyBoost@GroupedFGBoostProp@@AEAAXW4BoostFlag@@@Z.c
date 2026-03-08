/*
 * XREFs of ?applyBoost@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1C000D768
 * Callers:
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1C008F128 (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GroupedFGBoostProp::applyBoost(__int64 a1, int a2)
{
  __int64 v2; // rbx
  BOOL v4; // esi
  __int64 result; // rax

  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v4 = a2 == 1;
    do
    {
      result = PsSetProcessPriorityByClass(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2), v4);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
