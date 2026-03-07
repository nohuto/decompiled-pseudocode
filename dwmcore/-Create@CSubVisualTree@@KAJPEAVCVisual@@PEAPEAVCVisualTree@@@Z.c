__int64 __fastcall CSubVisualTree::Create(struct CVisual *a1, struct CVisualTree **a2)
{
  unsigned __int64 v4; // rcx
  CVisualTree *v6; // rax
  CVisualTree *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (int)CVisual::GetVisualTree(a1, a2, 0) >= 0 )
    return 0LL;
  v6 = (CVisualTree *)CVisualTree::operator new(v4);
  v7 = v6;
  if ( v6 )
  {
    CVisualTree::CVisualTree(v6, g_pComposition, a1);
    ++CSubVisualTree::s_cSubTrees;
    *(_QWORD *)v7 = &CSubVisualTree::`vftable';
    *((_DWORD *)v7 + 1151) = 0;
    *((_DWORD *)v7 + 1150) = 0;
    *((_DWORD *)v7 + 1149) = 0;
    *((_DWORD *)v7 + 1148) = 0;
    *((_BYTE *)v7 + 4712) = 0;
    CMILRefCountImpl::AddReference((CVisualTree *)((char *)v7 + 8));
  }
  else
  {
    v7 = 0LL;
  }
  v8 = CVisual::CalcRootBounds(*((CLayerVisual **)v7 + 8));
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a2 = v7;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subvisualtree.cpp",
    (const char *)(unsigned int)v8,
    v10);
  CResource::InternalRelease(v7);
  return v9;
}
