/*
 * XREFs of ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x1800F3950
 * Callers:
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180215110 (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateVisualTree(CCachedVisualImage *this)
{
  struct CVisualTree **v1; // rbx
  __int64 v3; // rcx
  CVisual *v4; // rdi
  int VisualTree; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct CVisualTree **)((char *)this + 184);
  v3 = *((_QWORD *)this + 23);
  if ( v3 && *(_QWORD *)(v3 + 64) != *((_QWORD *)this + 18) )
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(v1);
  if ( *v1 )
    return 0LL;
  v4 = (CVisual *)*((_QWORD *)this + 18);
  if ( !v4 )
    return 0LL;
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(v1);
  VisualTree = CVisual::GetVisualTree(v4, v1);
  v6 = VisualTree;
  if ( VisualTree >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A4,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
    (const char *)(unsigned int)VisualTree,
    v8);
  return v6;
}
