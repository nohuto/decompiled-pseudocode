/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C007944C
 * Callers:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     NtUserSetProp @ 0x1C00791E0 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     NtUserGetProp @ 0x1C00DA0E0 (NtUserGetProp.c)
 *     NtUserRemoveProp @ 0x1C00E0D20 (NtUserRemoveProp.c)
 *     _BuildPropList @ 0x1C00E5788 (_BuildPropList.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     IS_USERCRIT_OWNED @ 0x1C0079494 (IS_USERCRIT_OWNED.c)
 */

void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1)
{
  if ( !gbInDestroyHandleTableObjects
    && !(unsigned int)IS_USERCRIT_OWNED()
    && (!IS_USERCRIT_OWNED_SHARED() || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
