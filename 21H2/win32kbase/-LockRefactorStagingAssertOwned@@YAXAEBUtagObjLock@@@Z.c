/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368
 * Callers:
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C0052744 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     CreateProp @ 0x1C0086858 (CreateProp.c)
 *     _FindProp @ 0x1C0090D48 (_FindProp.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C00D7CE4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00D7F60 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     DeleteProperties @ 0x1C0149E10 (DeleteProperties.c)
 *     RealInternalSetProp @ 0x1C0149FC0 (RealInternalSetProp.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C0166160 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 */

void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !gbInDestroyHandleTableObjects
    && !(unsigned int)UserIsUserCritSecInExclusive(a1, a2, a3, a4)
    && (!(unsigned int)IS_USERCRIT_OWNED_SHARED() || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
