/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x180100100
 * Callers:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032B7C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180034308 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800EC864 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@UEAAKXZ @ 0x1801000F0 (-Release@CSecondarySysmemBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease(volatile signed __int32 *a1)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rcx

  v2 = a1 + 4;
  v3 = _InterlockedDecrement(a1 + 4);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 4));
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 56LL))(a1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *(_QWORD *)a1;
      --*v2;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v4 + 48))(a1, 1LL);
    }
  }
  return v3;
}
