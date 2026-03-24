/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0045640
 * Callers:
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C002CE00 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     HMAssignmentLock @ 0x1C0030310 (HMAssignmentLock.c)
 *     HMAssignmentUnlock @ 0x1C0030630 (HMAssignmentUnlock.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004264C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C00456A8 (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00456E0 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0113B88 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 __fastcall HMUnlockObjectInternal(__int64 a1)
{
  struct _HANDLEENTRY *v2; // rdi
  char v3; // al
  char *v5; // rcx

  v2 = (struct _HANDLEENTRY *)((char *)qword_1C024FD58 + dword_1C024FD60 * (unsigned int)(unsigned __int16)*(_DWORD *)a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() || (unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
  {
    GetDomainLockRef(12);
    v5 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)a1;
    if ( !*((_QWORD *)v5 + 2) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      AddToDeferredUserCritThreadUnlockList(v5);
    }
  }
  else
  {
    HMDestroyUnlockedObjectWorker(v2);
  }
  return 0LL;
}
