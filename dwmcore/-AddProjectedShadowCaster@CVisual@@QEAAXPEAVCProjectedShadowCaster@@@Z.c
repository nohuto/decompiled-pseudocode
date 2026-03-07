void __fastcall CVisual::AddProjectedShadowCaster(CComposition **this, struct CProjectedShadowCaster *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowCasters; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  struct CProjectedShadowCaster *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( (*(_DWORD *)this[29] & 0x40000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    CVisual::SetProjectedShadowCasters(this, v4);
  }
  ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
  v6 = (_QWORD *)ProjectedShadowCasters;
  v7 = *(_QWORD **)(ProjectedShadowCasters + 8);
  if ( v7 == *(_QWORD **)(ProjectedShadowCasters + 16) )
  {
    std::vector<CProjectedShadowCaster *>::_Emplace_reallocate<CProjectedShadowCaster * const &>(
      ProjectedShadowCasters,
      v7,
      &v8);
  }
  else
  {
    *v7 = a2;
    *(_QWORD *)(ProjectedShadowCasters + 8) += 8LL;
  }
  if ( ((v6[1] - *v6) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
    CComposition::AddProjectedShadowCasterVisual(this[2], (struct CVisual *)this);
}
