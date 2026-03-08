/*
 * XREFs of ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18003A624
 * Callers:
 *     ?OnChanged@CCachedVisualImage@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003A600 (-OnChanged@CCachedVisualImage@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C8B4 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180081BBC (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800A43BC (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800A8B1C (-ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x180214728 (-SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D044 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1800395D0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18003A690 (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 */

void __fastcall CCachedVisualImage::MarkAllTargetsDirty(CCachedVisualImage *this)
{
  char *v1; // r14
  CCachedVisualImage::CCachedTarget **v3; // rbx
  CCachedVisualImage::CCachedTarget *v4; // rsi
  CCachedVisualImage::CCachedTarget **v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 192;
  v3 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
  while ( v3 != *((CCachedVisualImage::CCachedTarget ***)this + 25) )
  {
    v4 = *v3;
    if ( CCachedVisualImage::CCachedTarget::IsValid(*v3) )
    {
      CCachedVisualImage::CCachedTarget::MarkDirty(v4);
      ++v3;
    }
    else
    {
      v3 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase((__int64)v1, &v5, v3);
    }
  }
}
