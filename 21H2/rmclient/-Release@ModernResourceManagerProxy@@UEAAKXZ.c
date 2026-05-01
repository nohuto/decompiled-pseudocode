/*
 * XREFs of ?Release@ModernResourceManagerProxy@@UEAAKXZ @ 0x180010480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceManagerProxy::Release(ModernResourceManagerProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(ModernResourceManagerProxy *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
