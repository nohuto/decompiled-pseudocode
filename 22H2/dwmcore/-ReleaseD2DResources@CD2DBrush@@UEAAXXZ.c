/*
 * XREFs of ?ReleaseD2DResources@CD2DBrush@@UEAAXXZ @ 0x18029D2B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DBrush::ReleaseD2DResources(CD2DBrush *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
