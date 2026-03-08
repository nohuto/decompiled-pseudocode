/*
 * XREFs of ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1802B29DC
 * Callers:
 *     ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ACBC0 (-NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ADFC0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AF620 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AFE1C (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1802B2A44 (-erase@-$vector@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@C.c)
 */

char __fastcall CD2DBitmapCache::RemoveFromCache(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  __int64 v2; // r8
  char v4; // r9
  __int64 v5; // rdx
  const struct IDeviceResource *v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  v4 = 0;
  while ( v2 != *((_QWORD *)this + 7) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    if ( v5 )
      v6 = (const struct IDeviceResource *)(*(int *)(*(_QWORD *)(v5 + 16) + 8LL) + v5 + 16);
    else
      v6 = 0LL;
    if ( v6 == a2 )
    {
      std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::erase((char *)this + 48, &v8, v2, 0LL);
      return 1;
    }
    v2 += 8LL;
  }
  return v4;
}
