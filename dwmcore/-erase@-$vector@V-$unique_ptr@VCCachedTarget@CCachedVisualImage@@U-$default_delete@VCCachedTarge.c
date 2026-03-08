/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D044
 * Callers:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18003A624 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003A7C0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C8B4 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CDAF4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800CE364 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 * Callees:
 *     ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x1800F3B7C (--1CCachedTarget@CCachedVisualImage@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CCachedVisualImage::CCachedTarget ***__fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
        __int64 a1,
        CCachedVisualImage::CCachedTarget ***a2,
        CCachedVisualImage::CCachedTarget **a3)
{
  CCachedVisualImage::CCachedTarget **v3; // r12
  CCachedVisualImage::CCachedTarget **v4; // rdi
  __int64 v8; // rax
  void *v9; // rdi
  CCachedVisualImage::CCachedTarget ***result; // rax
  CCachedVisualImage::CCachedTarget **v11; // rsi
  CCachedVisualImage::CCachedTarget *v12; // rax
  CCachedVisualImage::CCachedTarget *v13; // r15

  v3 = *(CCachedVisualImage::CCachedTarget ***)(a1 + 8);
  v4 = a3 + 1;
  if ( a3 + 1 != v3 )
  {
    v11 = a3;
    do
    {
      if ( v11 != v4 )
      {
        v12 = *v4;
        *v4 = 0LL;
        v13 = *v11;
        *v11 = v12;
        if ( v13 )
        {
          CCachedVisualImage::CCachedTarget::~CCachedTarget(v13);
          operator delete(v13, 0x40uLL);
        }
      }
      ++v4;
      ++v11;
    }
    while ( v4 != v3 );
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(void **)(v8 - 8);
  if ( v9 )
  {
    CCachedVisualImage::CCachedTarget::~CCachedTarget(*(CCachedVisualImage::CCachedTarget **)(v8 - 8));
    operator delete(v9, 0x40uLL);
  }
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
