void __fastcall CRenderingTechniqueFragment::GetSurfaceDescription(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        struct CRenderingTechniqueFragment::SurfaceDescription *a4)
{
  char v7; // al
  __int64 v8; // rax

  *(_QWORD *)a4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * a3);
  *((_BYTE *)a4 + 10) = CRenderingTechniqueFragment::IsUVClampingRequiredForInput(
                          this,
                          a3,
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 8),
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 9));
  v7 = 0;
  if ( *(_QWORD *)this )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 64LL))(
           v8,
           *((unsigned int *)this + 4),
           a3);
  }
  *((_BYTE *)a4 + 11) = v7;
}
