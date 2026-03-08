/*
 * XREFs of ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECCC8
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECA7C (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B96A4 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 */

CD2DBitmapCache::CCachedBitmap *__fastcall CD2DBitmapCache::CCachedBitmap::CCachedBitmap(
        CD2DBitmapCache::CCachedBitmap *this,
        struct IDeviceResourceNotify *a2,
        struct CSecondaryD2DBitmap *a3)
{
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  struct IDeviceResourceNotify *v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CSecondaryD2DBitmap *)((char *)a3 + 8));
  v5 = *((_QWORD *)this + 1) + 56LL;
  v8 = a2;
  v6 = *(_BYTE **)(v5 + 8);
  if ( v6 == *(_BYTE **)(v5 + 16) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
      (const void **)v5,
      v6,
      &v8);
  }
  else
  {
    *(_QWORD *)v6 = a2;
    *(_QWORD *)(v5 + 8) += 8LL;
  }
  return this;
}
