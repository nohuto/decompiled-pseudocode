void __fastcall CRenderingTechniqueFragment::AddIntermediateInput(CRenderingTechniqueFragment *this, int a2)
{
  __int64 *v2; // rdx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  CRenderingTechniqueFragment *v4; // [rsp+28h] [rbp-10h] BYREF

  v4 = 0LL;
  LODWORD(v3) = a2;
  v2 = (__int64 *)*((_QWORD *)this + 5);
  BYTE4(v3) = 1;
  if ( v2 == *((__int64 **)this + 6) )
  {
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
      (__int64 *)this + 4,
      v2,
      &v3);
  }
  else
  {
    *v2 = v3;
    v2[1] = (__int64)v4;
    *((_QWORD *)this + 5) += 16LL;
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v4);
}
