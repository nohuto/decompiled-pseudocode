__int64 __fastcall CDesktopTree::Initialize(struct CComposition **this)
{
  CVisual *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CVisual *)CContent::operator new(0x2C0uLL);
  if ( v2 )
    v2 = CVisual::CVisual(v2, this[2]);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(this + 590, v2);
  this[8] = this[590];
  v3 = CVisualTree::Initialize((CVisualTree *)this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
