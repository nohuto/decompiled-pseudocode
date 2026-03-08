/*
 * XREFs of ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1802AED78
 * Callers:
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AE74C (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1802AED4C (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D8440 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetOverdrawRegion(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  std::_Ref_count_base *v2[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v2 = 0LL;
  std::shared_ptr<CRegion>::operator=((_QWORD *)this + 53, (__int64 *)v2);
  if ( v2[1] )
    std::_Ref_count_base::_Decref(v2[1]);
  *((_BYTE *)this + 440) = 0;
}
