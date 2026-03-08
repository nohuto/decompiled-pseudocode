/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00724BC
 * Callers:
 *     DeleteProperties @ 0x1C0072500 (DeleteProperties.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008EA50 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008EDE4 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C008F1DC (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C0153B9C (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C017BC2C (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v6, v5, v7, v8) || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
