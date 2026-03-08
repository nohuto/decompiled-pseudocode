/*
 * XREFs of ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180269034
 * Callers:
 *     ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268BE8 (-Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18003EE00 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D4394 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CTextVisualContent::GetDrawListCacheForTextObject(
        CTextVisualContent *this,
        const struct IDeviceTarget **a2,
        struct CTreeData *a3,
        int a4,
        struct CDrawListCache **a5)
{
  struct CDrawListCache *v5; // rbx
  int Cache; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CDrawListCache *v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  if ( *((_BYTE *)a2 + 8171) )
  {
    Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)a3 + 16), 3, a4, a2[4], &v10);
    v7 = Cache;
    if ( Cache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
        (const char *)(unsigned int)Cache);
      wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>((volatile signed __int32 **)&v10);
      return v7;
    }
    v5 = v10;
  }
  *a5 = v5;
  return 0LL;
}
