/*
 * XREFs of ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C002E270
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMUnlockObjectInternal @ 0x1C0046AB0 (HMUnlockObjectInternal.c)
 *     HMUnlockObjectWorker @ 0x1C0046BE0 (HMUnlockObjectWorker.c)
 */

void __fastcall CHMRefHwndByHandle::~CHMRefHwndByHandle(CHMRefHwndByHandle *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    GetDomainLockRef(14LL);
    HMUnlockObjectWorker(v1);
    *(_QWORD *)this = 0LL;
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    GetDomainLockRef(14LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      HMUnlockObjectInternal(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
}
