/*
 * XREFs of ?ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ @ 0x18029C670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDeviceTextureTarget::ReleaseD2DResources(CDeviceTextureTarget *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CD2DBitmap::ReleaseD2DResources(this);
}
