/*
 * XREFs of ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x1802940EC
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003DA64 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802AF6A0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802B0FC0 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDDisplayManager::NotifyRealizationBitmapReleased(
        CDDisplayManager *this,
        struct Windows::Devices::Display::Core::IDisplaySurface *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)xmmword_1803E32D0;
  for ( i = (_QWORD *)*((_QWORD *)&xmmword_1803E32C0 + 1); i != v2; ++i )
    (**(void (__fastcall ***)(_QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *))*i)(*i, a2);
}
