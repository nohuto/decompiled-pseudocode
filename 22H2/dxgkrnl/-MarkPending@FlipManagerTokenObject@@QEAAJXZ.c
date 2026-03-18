/*
 * XREFs of ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C007A774
 * Callers:
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A7D8 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000AEB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlipManagerTokenObject::MarkPending(FlipManagerTokenObject *this)
{
  int v2; // ebx

  v2 = CPushLock::AcquireLockShared((FlipManagerTokenObject *)((char *)this + 72));
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 16) )
      v2 = -1073741823;
    else
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 16LL))((char *)this + 40);
    CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 72));
  }
  return (unsigned int)v2;
}
