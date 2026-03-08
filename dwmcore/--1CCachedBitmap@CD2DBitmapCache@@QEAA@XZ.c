/*
 * XREFs of ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x1800F8DF0
 * Callers:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032B7C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180034308 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECA7C (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1800F6B8C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1802B2A44 (-erase@-$vector@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@C.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180029318 (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

void __fastcall CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(CD2DBitmapCache::CCachedBitmap *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v2 + 104), *(const struct IDeviceResourceNotify **)this);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v3 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v3);
}
