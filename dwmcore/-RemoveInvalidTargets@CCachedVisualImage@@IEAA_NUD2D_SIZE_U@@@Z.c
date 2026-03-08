/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800CE364
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003A7C0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CDAF4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D044 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1800395D0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CCachedVisualImage::RemoveInvalidTargets(CCachedVisualImage *this, struct D2D_SIZE_U a2)
{
  UINT32 height; // r12d
  char *v3; // r15
  CCachedVisualImage::CCachedTarget **v4; // rbx
  UINT32 width; // edi
  char v7; // si
  CCachedVisualImage::CCachedTarget *v8; // r14
  void (__fastcall ***v9)(_QWORD, int *); // rcx
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]
  struct D2D_SIZE_U v13; // [rsp+68h] [rbp+10h]
  CCachedVisualImage::CCachedTarget **v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = a2;
  height = a2.height;
  v3 = (char *)this + 192;
  v4 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
  width = a2.width;
  v7 = 0;
  while ( v4 != *((CCachedVisualImage::CCachedTarget ***)this + 25) )
  {
    v8 = *v4;
    if ( CCachedVisualImage::CCachedTarget::IsValid(*v4)
      && (v9 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)v8 + 1)
                                                    + 8LL
                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) + 16LL)),
          (**v9)(v9, &v11),
          v11 == width)
      && v12 == height )
    {
      ++v4;
    }
    else
    {
      v7 = 1;
      v4 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase((__int64)v3, &v14, v4);
    }
  }
  return v7;
}
