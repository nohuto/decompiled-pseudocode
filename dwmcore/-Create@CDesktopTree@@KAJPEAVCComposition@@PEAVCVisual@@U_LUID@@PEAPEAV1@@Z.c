__int64 __fastcall CDesktopTree::Create(
        struct CComposition *a1,
        struct CVisual *a2,
        struct _LUID a3,
        struct _LUID **a4)
{
  CDesktopTree *v8; // rax
  CDesktopTree *v9; // rax
  struct _LUID *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  CResource *v15; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CDesktopTree *)CDesktopTree::operator new();
  if ( v8 )
  {
    v9 = CDesktopTree::CDesktopTree(v8, a1);
    v15 = v9;
    v10 = (struct _LUID *)v9;
    if ( v9 )
      CMILRefCountImpl::AddReference((CDesktopTree *)((char *)v9 + 8));
  }
  else
  {
    v10 = 0LL;
    v15 = 0LL;
  }
  v11 = CDesktopTree::SetLuid(v10, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 22LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>::~com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>(&v15);
    return v12;
  }
  v11 = CDesktopTree::Initialize((struct CComposition **)v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 24LL;
    goto LABEL_11;
  }
  v11 = CDesktopTree::SetRootVisual((CComposition ***)v10, a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 26LL;
    goto LABEL_11;
  }
  *a4 = v10;
  return 0LL;
}
