/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800DED78
 * Callers:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800DED0C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180048078 (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

const struct IDeviceResourceNotify ****__fastcall std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::erase(
        __int64 a1,
        const struct IDeviceResourceNotify ****a2,
        const struct IDeviceResourceNotify ***a3)
{
  const struct IDeviceResourceNotify ***v3; // r14
  const struct IDeviceResourceNotify ***v4; // rdi
  const struct IDeviceResourceNotify **v8; // rdi
  const struct IDeviceResourceNotify *v9; // rcx
  CRenderTargetBitmap *v10; // rcx
  const struct IDeviceResourceNotify ****result; // rax
  const struct IDeviceResourceNotify ***v12; // rsi
  const struct IDeviceResourceNotify **v13; // rax
  const struct IDeviceResourceNotify **v14; // r15
  const struct IDeviceResourceNotify *v15; // rcx
  CRenderTargetBitmap *v16; // rcx

  v3 = *(const struct IDeviceResourceNotify ****)(a1 + 8);
  v4 = a3 + 1;
  if ( a3 + 1 != v3 )
  {
    v12 = a3;
    do
    {
      if ( v12 != v4 )
      {
        v13 = *v4;
        *v4 = 0LL;
        v14 = *v12;
        *v12 = v13;
        if ( v14 )
        {
          v15 = v14[1];
          if ( v15 )
          {
            CD2DResource::RemoveResourceNotifier((const struct IDeviceResourceNotify *)((char *)v15 + 104), *v14);
            v16 = v14[1];
            if ( v16 )
              CRenderTargetBitmap::Release(v16);
          }
          operator delete(v14);
        }
      }
      ++v4;
      ++v12;
    }
    while ( v4 != v3 );
    v3 = *(const struct IDeviceResourceNotify ****)(a1 + 8);
  }
  v8 = *(v3 - 1);
  if ( v8 )
  {
    v9 = v8[1];
    if ( v9 )
    {
      CD2DResource::RemoveResourceNotifier((const struct IDeviceResourceNotify *)((char *)v9 + 104), *v8);
      v10 = v8[1];
      if ( v10 )
        CRenderTargetBitmap::Release(v10);
    }
    operator delete(v8);
  }
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
