__int64 __fastcall CVisualTree::Create(struct CComposition *a1, struct CVisual *a2, struct CVisualTree **a3)
{
  CVisualTree *v6; // rax
  struct CVisualTree *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CVisualTree *v13; // [rsp+48h] [rbp+20h] BYREF

  v6 = (CVisualTree *)CVisualTree::operator new((unsigned __int64)a1);
  if ( v6 )
    v6 = CVisualTree::CVisualTree(v6, a1, a2);
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::com_ptr_t<CVisualTree,wil::err_returncode_policy>(&v13, v6);
  v7 = v13;
  v8 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v13 + 48LL))(v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
      (const char *)(unsigned int)v8,
      v11);
  }
  else
  {
    v13 = 0LL;
    v9 = 0;
    *a3 = v7;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v9;
}
