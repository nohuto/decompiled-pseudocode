/*
 * XREFs of ?GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ @ 0x1C0142A70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall ForegroundManagement::GetForegroundWindow(ForegroundManagement *this)
{
  CActivationObjectManager *v1; // rdi
  CPushLock *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi

  v1 = qword_1C0296548;
  v2 = (CActivationObjectManager *)((char *)qword_1C0296548 + 16);
  CPushLock::AcquireLockShared((CActivationObjectManager *)((char *)qword_1C0296548 + 16));
  v3 = *((_QWORD *)v1 + 4);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 72);
  CPushLock::ReleaseLock(v2);
  return v4;
}
