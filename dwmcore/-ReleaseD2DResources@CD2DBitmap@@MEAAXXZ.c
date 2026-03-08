/*
 * XREFs of ?ReleaseD2DResources@CD2DBitmap@@MEAAXXZ @ 0x18029C3C0
 * Callers:
 *     ?ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ @ 0x18029C670 (-ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmap::ReleaseD2DResources(CD2DBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
