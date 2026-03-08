/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0101318
 * Callers:
 *     InternalRemoveProp @ 0x1C002484C (InternalRemoveProp.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00469D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     NtUserGetProp @ 0x1C00B6C30 (NtUserGetProp.c)
 *     NtUserRemoveProp @ 0x1C00C6A70 (NtUserRemoveProp.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 *     _BuildPropList @ 0x1C01023EC (_BuildPropList.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1)
{
  __int64 v2; // rcx

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1)
    && (!IS_USERCRIT_OWNED_AT_ALL(v2) || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
