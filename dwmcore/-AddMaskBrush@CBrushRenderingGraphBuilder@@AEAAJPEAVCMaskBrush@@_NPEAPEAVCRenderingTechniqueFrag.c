__int64 __fastcall CBrushRenderingGraphBuilder::AddMaskBrush(
        CBrushRenderingGraphBuilder *this,
        struct CMaskBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // r15
  int v5; // edi
  CRenderingTechniqueFragment **v6; // r14
  __int64 *v7; // rbx
  __int64 v10; // rcx
  CRenderingTechniqueFragment *v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rcx
  struct CRenderingTechniqueFragment *v14; // rcx
  __int64 *v15; // rsi
  __int64 *v16; // rdx
  __int64 *v17; // rax
  CRenderingTechniqueFragment *v18; // rsi
  __int64 v20; // rcx
  CRenderingTechniqueFragment *v21; // r14
  struct CRenderingTechniqueFragment *v22; // rcx
  __int64 *v23; // rdx
  CRenderingTechniqueFragment *v24; // rdi
  CRenderingTechniqueFragment *v25; // rsi
  CRenderingTechniqueFragment *v26; // [rsp+30h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v27; // [rsp+38h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v28; // [rsp+40h] [rbp-10h] BYREF
  int v29; // [rsp+48h] [rbp-8h]
  CRenderingTechniqueFragment *v30; // [rsp+98h] [rbp+48h] BYREF
  struct CRenderingTechniqueFragment **v31; // [rsp+A8h] [rbp+58h]

  v31 = a4;
  v4 = (struct CBrush *)*((_QWORD *)a2 + 12);
  v5 = 0;
  v6 = (CRenderingTechniqueFragment **)*((_QWORD *)a2 + 11);
  v7 = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  if ( *((_BYTE *)v4 + 80) )
  {
    v28 = 0LL;
    v27 = &v26;
    LOBYTE(v29) = 1;
    v5 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v28);
    if ( (_BYTE)v29 )
    {
      v11 = *v27;
      *v27 = v28;
      if ( v11 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v11);
        operator delete(v11, 0x80uLL);
      }
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v5, 0x15Cu, 0LL);
      goto LABEL_18;
    }
    v5 = 0;
  }
  if ( !v6 )
  {
    std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
      &v30,
      &v26);
    v7 = (__int64 *)v30;
    goto LABEL_17;
  }
  v12 = (__int64 *)DefaultHeap::Alloc(0x80uLL);
  v7 = v12;
  if ( v12 )
  {
    v12[2] = 0LL;
    v12[3] = 0LL;
    *v12 = 0LL;
    v12[4] = 0LL;
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[1] = 0LL;
    v12[7] = 0LL;
    v12[8] = 0LL;
    v12[9] = 0LL;
    v12[10] = 0LL;
    v12[14] = 0LL;
    *((_BYTE *)v12 + 120) = a3;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v14 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      v15 = v7 + 4;
      v16 = (__int64 *)v7[5];
      v28 = v14;
      if ( v16 == (__int64 *)v7[6] )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v7 + 4,
          v16,
          &v27);
      }
      else
      {
        *v16 = (__int64)v27;
        v16[1] = (__int64)v14;
        v7[5] += 16LL;
        v28 = 0LL;
      }
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v28);
    }
    else
    {
      v27 = (CRenderingTechniqueFragment **)v4;
      v28 = 0LL;
      v29 = 0;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        (struct CRenderingTechniqueFragment *)v7,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v27);
      v15 = v7 + 4;
    }
    v28 = 0LL;
    if ( !*((_BYTE *)v6 + 80) )
    {
      v27 = v6;
      v29 = 0;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        (struct CRenderingTechniqueFragment *)v7,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v27);
LABEL_17:
      v17 = v7;
      v7 = 0LL;
      *v31 = (struct CRenderingTechniqueFragment *)v17;
      goto LABEL_18;
    }
    v30 = 0LL;
    v27 = &v30;
    LOBYTE(v29) = 1;
    v5 = CBrushRenderingGraphBuilder::AddBrush(this, (struct CBrush *)v6, a3, &v28);
    if ( (_BYTE)v29 )
    {
      v21 = *v27;
      *v27 = v28;
      if ( v21 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v21);
        operator delete(v21, 0x80uLL);
      }
    }
    if ( v5 >= 0 )
    {
      v22 = v30;
      v30 = 0LL;
      v23 = (__int64 *)v15[1];
      v28 = v22;
      if ( v23 == (__int64 *)v15[2] )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v15,
          v23,
          &v27);
      }
      else
      {
        v28 = 0LL;
        *v23 = (__int64)v27;
        v23[1] = (__int64)v22;
        v15[1] += 16LL;
      }
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v28);
      v24 = v30;
      if ( v30 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v30);
        operator delete(v24, 0x80uLL);
      }
      v5 = 0;
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v5, 0x176u, 0LL);
    v25 = v30;
    if ( v30 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v30);
      operator delete(v25, 0x80uLL);
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x162u, 0LL);
  }
LABEL_18:
  v18 = v26;
  if ( v26 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v26);
    operator delete(v18, 0x80uLL);
  }
  if ( v7 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment((CRenderingTechniqueFragment *)v7);
    operator delete(v7, 0x80uLL);
  }
  return (unsigned int)v5;
}
