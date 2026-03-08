/*
 * XREFs of ?GetAndClearSyncId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0026E80
 * Callers:
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079B08 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0051E98 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::GetAndClearSyncId(FlipManagerTokenObject *this, unsigned __int64 *a2)
{
  int v4; // ebx
  unsigned __int64 v5; // r8

  v4 = CPushLock::AcquireLockShared((FlipManagerTokenObject *)((char *)this + 72));
  if ( v4 >= 0 )
  {
    v5 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    *a2 = v5;
    CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 72));
  }
  return (unsigned int)v4;
}
