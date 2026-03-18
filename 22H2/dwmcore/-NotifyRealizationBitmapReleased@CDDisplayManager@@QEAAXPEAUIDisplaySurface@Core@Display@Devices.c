/*
 * XREFs of ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x18029786C
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003DB54 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802B2E20 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802B4740 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDDisplayManager::NotifyRealizationBitmapReleased(
        CDDisplayManager *this,
        struct Windows::Devices::Display::Core::IDisplaySurface *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)xmmword_1803E6550;
  for ( i = (_QWORD *)*((_QWORD *)&xmmword_1803E6540 + 1); i != v2; ++i )
    (**(void (__fastcall ***)(_QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *))*i)(*i, a2);
}
