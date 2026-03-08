/*
 * XREFs of ?ReleaseD2DResources@CD2DBrush@@UEAAXXZ @ 0x180299B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DBrush::ReleaseD2DResources(CD2DBrush *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
