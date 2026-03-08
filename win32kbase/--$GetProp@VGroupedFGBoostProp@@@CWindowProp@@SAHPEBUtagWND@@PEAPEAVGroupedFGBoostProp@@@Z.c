/*
 * XREFs of ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C008F1DC
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008EDE4 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1C008F128 (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C0153B9C (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00724BC (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealGetProp @ 0x1C008F240 (RealGetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<GroupedFGBoostProp>(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 Prop; // rax

  v4 = GroupedFGBoostProp::s_atom;
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), (__int64)a2, a3, a4);
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v4, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
