/*
 * XREFs of ?UnLockShared@tagObjLock@@QEBAXXZ @ 0x1C01175A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagObjLock::UnLockShared(tagObjLock *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this + 4);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
}
