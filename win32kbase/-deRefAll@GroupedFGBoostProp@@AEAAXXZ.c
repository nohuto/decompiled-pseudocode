/*
 * XREFs of ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1C000CDAC
 * Callers:
 *     ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1C000CD70 (-Delete@GroupedFGBoostProp@@UEAAXXZ.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008EDE4 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C0153B9C (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GroupedFGBoostProp::deRefAll(GroupedFGBoostProp *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
    ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 4) + 8 * i));
}
