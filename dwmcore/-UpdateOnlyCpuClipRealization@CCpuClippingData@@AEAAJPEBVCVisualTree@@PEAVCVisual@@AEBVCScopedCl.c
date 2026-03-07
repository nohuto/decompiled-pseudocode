__int64 __fastcall CCpuClippingData::UpdateOnlyCpuClipRealization(
        CCpuClippingData::CpuClipRealization **this,
        const struct CVisualTree *a2,
        CVisual **a3,
        const struct CScopedClipStack *a4,
        const struct CShape *a5,
        const struct CMILMatrix *a6,
        enum D2D1_ANTIALIAS_MODE a7)
{
  const struct CShape *TopCpuClipInScope; // rax
  int v11; // eax
  unsigned int v12; // ebp
  const struct CCpuClippingData *v14; // rax
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0;
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(a4, 0LL);
  v11 = CCpuClippingData::CpuClipRealization::Update(this[8], (struct CVisual *)a3, a5, a6, TopCpuClipInScope, a7, &v17);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x222,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
      (const char *)(unsigned int)v11,
      v15);
    return v12;
  }
  else
  {
    if ( v17 )
    {
      v14 = 0LL;
      *((_BYTE *)this + 74) = 1;
      if ( *((CVisual ***)a2 + 8) != a3 && *((_DWORD *)this + 8) == 1 )
        v14 = (struct CTreeData *)((char *)CVisual::FindTreeData(a3[11], a2) + 88);
      CCpuClippingData::UpdateCachingGenerationId((CCpuClippingData *)this, a2, (struct CVisual *)a3, v14);
      *((_BYTE *)this + 74) = 0;
    }
    return 0LL;
  }
}
