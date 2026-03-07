__int64 __fastcall CRenderTarget::SetRootVisual(CRenderTarget *this, struct CVisual *a2)
{
  struct CVisualTree *v4; // rdx
  int VisualTree; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CVisualTree *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)&v9);
  VisualTree = CVisual::GetVisualTree(a2, &v9);
  v6 = VisualTree;
  if ( VisualTree >= 0 )
  {
    v4 = v9;
LABEL_5:
    CRenderTarget::SetVisualTree(this, v4);
    v6 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\rendertarget.cpp",
    (const char *)(unsigned int)VisualTree);
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  return v6;
}
