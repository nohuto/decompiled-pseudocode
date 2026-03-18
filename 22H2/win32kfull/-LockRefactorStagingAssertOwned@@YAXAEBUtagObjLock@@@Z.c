/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00C6854
 * Callers:
 *     _BuildPropList @ 0x1C0071C8C (_BuildPropList.c)
 *     NtUserGetProp @ 0x1C008B300 (NtUserGetProp.c)
 *     NtUserRemoveProp @ 0x1C0092B50 (NtUserRemoveProp.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00F0584 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1)
{
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
