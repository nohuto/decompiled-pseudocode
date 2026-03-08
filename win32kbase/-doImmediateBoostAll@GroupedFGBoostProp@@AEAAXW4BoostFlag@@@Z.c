/*
 * XREFs of ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1C008F05C
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008EDE4 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C0153B9C (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x1C008F0C8 (-doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z.c)
 */

__int64 __fastcall GroupedFGBoostProp::doImmediateBoostAll(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 i; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  result = *(_QWORD *)(v3 + 16);
  if ( gpqForeground == *(_QWORD *)(result + 432) && *(_QWORD *)(gpqForeground + 128) == v3 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
      result = GroupedFGBoostProp::doBoost(v3, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i), a2);
  }
  return result;
}
