/*
 * XREFs of ?Freeze@CDragVisual@@UEAAXXZ @ 0x180494B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDragVisual::Freeze(CDragVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1);
}
