/*
 * XREFs of ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C00AC6AC
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0064DF0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1C00AC5F8 (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C012CBB4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     RealGetProp @ 0x1C0045D80 (RealGetProp.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0056F9C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<GroupedFGBoostProp>(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bx
  __int64 Prop; // rax

  v4 = GroupedFGBoostProp::s_atom;
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), (__int64)a2, a3, a4);
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v4, 1);
  *a2 = Prop;
  return Prop != 0;
}
