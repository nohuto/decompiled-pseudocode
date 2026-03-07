__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        struct CBrushRenderingGraph **this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rdi
  CRenderingTechniqueFragment *v6; // rbx
  __int64 v7; // r14
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v9; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *v10; // r12
  struct _TP_WORK *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // r14
  unsigned int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // r13
  unsigned int v17; // r15d
  unsigned int v18; // edi
  int v19; // r12d
  bool v20; // si
  void *v21; // rax
  unsigned int v22; // ecx
  CRenderingTechniqueFragment *v23; // rsi
  CRenderingTechniqueFragment *v24; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *v25; // rdi
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rax
  struct CBrush *v31; // rdi
  struct CRenderingTechniqueFragment *v32; // rax
  int v33; // edi
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rdx
  int v38; // eax
  unsigned int v39; // ecx
  _DWORD *v40; // rcx
  CRenderingTechniqueFragment *v41; // rdi
  int v42; // eax
  unsigned int v43; // ecx
  _DWORD *v44; // rcx
  CRenderingTechniqueFragment *v45; // rbx
  bool v46; // r8
  unsigned int v47; // ecx
  CRenderingTechniqueFragment *v48; // r12
  CRenderingTechniqueFragment *v49; // rcx
  _QWORD *v50; // rdx
  CRenderingTechniqueFragment *v51; // rdi
  CRenderingTechniqueFragment *v52; // rsi
  unsigned int v53[2]; // [rsp+28h] [rbp-B9h]
  int v54; // [rsp+30h] [rbp-B1h]
  bool v55; // [rsp+38h] [rbp-A9h]
  char v56; // [rsp+39h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+3Ch] [rbp-A5h]
  const struct Windows::UI::Composition::ICompiledEffect *v58; // [rsp+40h] [rbp-A1h]
  __int64 v59; // [rsp+48h] [rbp-99h]
  CRenderingTechniqueFragment *v60; // [rsp+50h] [rbp-91h] BYREF
  CRenderingTechniqueFragment *v61; // [rsp+58h] [rbp-89h] BYREF
  CRenderingTechniqueFragment **v62; // [rsp+60h] [rbp-81h] BYREF
  struct CRenderingTechniqueFragment *v63; // [rsp+68h] [rbp-79h] BYREF
  int v64; // [rsp+70h] [rbp-71h]
  unsigned int v65; // [rsp+78h] [rbp-69h]
  int v66; // [rsp+7Ch] [rbp-65h]
  int v67; // [rsp+80h] [rbp-61h] BYREF
  unsigned int v68; // [rsp+84h] [rbp-5Dh]
  struct CRenderingTechniqueFragment *v69; // [rsp+88h] [rbp-59h]
  __int64 v70; // [rsp+90h] [rbp-51h] BYREF
  __int64 v71; // [rsp+98h] [rbp-49h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-41h] BYREF
  CRenderingTechniqueFragment *v73; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-31h]
  __int64 v75; // [rsp+B8h] [rbp-29h]
  int v76; // [rsp+C0h] [rbp-21h]
  CRenderingTechniqueFragment *v77; // [rsp+C8h] [rbp-19h] BYREF
  int v78; // [rsp+D0h] [rbp-11h]
  CRenderingTechniqueFragment *v79; // [rsp+D8h] [rbp-9h] BYREF
  __int128 v80; // [rsp+E0h] [rbp-1h] BYREF
  __int64 v81; // [rsp+F0h] [rbp+Fh]

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 12);
  v6 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)v4 + 10) + 48LL);
  v75 = v7;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v9 = *((_QWORD *)v4 + 10);
  v10 = CompiledEffectNoRef;
  v58 = CompiledEffectNoRef;
  v11 = *(struct _TP_WORK **)(v9 + 56);
  if ( v11 )
  {
    WaitForThreadpoolWorkCallbacks(v11, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v9 + 56));
    *(_QWORD *)(v9 + 56) = 0LL;
  }
  v74 = *(_QWORD *)(v9 + 72);
  v69 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 14);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v13 = 0LL;
  v14 = v12;
  v68 = v12;
  v80 = 0LL;
  v15 = v12 - 1;
  v81 = 0LL;
  LODWORD(v59) = v12 - 1;
  if ( v12 != 1 )
  {
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(&v80, v12 - 1);
    v13 = v81;
  }
  v16 = v80;
  v17 = 0;
  if ( !v14 )
  {
LABEL_25:
    v32 = v6;
    v6 = 0LL;
    v33 = 0;
    *a4 = v32;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v18 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 40LL))(
            v10,
            v17);
    v19 = v18 & 8;
    v66 = v19;
    v20 = a3 && (v17 == v15 || (v18 & 8) != 0);
    v55 = v20;
    v21 = DefaultHeap::Alloc(0x80uLL);
    if ( v21 )
    {
      LOBYTE(v54) = v20;
      v53[0] = v18;
      v23 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                             v21,
                                             v69,
                                             v74,
                                             v17,
                                             *(_QWORD *)v53,
                                             v54);
    }
    else
    {
      v23 = 0LL;
    }
    v24 = v6;
    v6 = v23;
    v61 = v23;
    if ( v24 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v24);
      operator delete(v24, 0x80uLL);
    }
    if ( !v23 )
    {
      v33 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0xE8u, 0LL);
      goto LABEL_26;
    }
    v25 = v58;
    v26 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v58 + 32LL))(
            v58,
            v17);
    v27 = 0;
    v65 = v26;
    v57 = 0;
    if ( v26 )
      break;
LABEL_23:
    if ( v17 != (_DWORD)v59 )
    {
      v38 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v23);
      v33 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x130u, 0LL);
        goto LABEL_26;
      }
      if ( v19 )
      {
        v40 = (_DWORD *)(v16 + 16LL * v17);
        v78 = -1;
        v6 = 0LL;
        v79 = v23;
        *v40 = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
          v40 + 2,
          &v79);
        v41 = v79;
        if ( v79 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v79);
          operator delete(v41, 0x80uLL);
        }
      }
      else
      {
        v42 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v61, &v67);
        v33 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x135u, 0LL);
          v6 = v61;
          goto LABEL_26;
        }
        v77 = 0LL;
        v44 = (_DWORD *)(v16 + 16LL * v17);
        v76 = v67;
        *v44 = v67;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
          v44 + 2,
          &v77);
        v45 = v77;
        if ( v77 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v77);
          operator delete(v45, 0x80uLL);
        }
        v6 = v61;
      }
    }
    if ( ++v17 >= v68 )
      goto LABEL_25;
    v10 = v58;
    v15 = v59;
  }
  while ( 1 )
  {
    v28 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)v25 + 48LL))(
            v25,
            v17,
            v27,
            &v56);
    v29 = v28;
    if ( v56 )
    {
      v35 = v16 + 16LL * v28;
      if ( *(_DWORD *)v35 == -1 )
      {
        v36 = *(_QWORD *)(v35 + 8);
        *(_QWORD *)(v35 + 8) = 0LL;
        v37 = (_QWORD *)*((_QWORD *)v23 + 5);
        v71 = v36;
        if ( v37 == *((_QWORD **)v23 + 6) )
        {
          std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
            (char *)v23 + 32,
            v37,
            &v70);
        }
        else
        {
          v71 = 0LL;
          *v37 = v70;
          v37[1] = v36;
          *((_QWORD *)v23 + 5) += 16LL;
        }
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v71);
      }
      else
      {
        CRenderingTechniqueFragment::AddIntermediateInput(v23, *(_DWORD *)v35);
      }
      goto LABEL_21;
    }
    v30 = *((_QWORD *)a2 + 15);
    v31 = *(struct CBrush **)(v30 + 8 * v29);
    if ( v31 )
    {
      if ( *((_BYTE *)v31 + 80) )
        break;
    }
    v62 = *(CRenderingTechniqueFragment ***)(v30 + 8 * v29);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v75 + 48LL))(v75, (unsigned int)v29) )
    {
      v63 = v69;
      v64 = v29;
    }
    else
    {
      v63 = 0LL;
      v64 = 0;
    }
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      (CBrushRenderingGraphBuilder *)this,
      v23,
      (const struct CBrushRenderingGraph::GraphInputParameters *)&v62);
LABEL_20:
    v25 = v58;
LABEL_21:
    v27 = v57 + 1;
    v57 = v27;
    if ( v27 >= v65 )
    {
      v19 = v66;
      goto LABEL_23;
    }
  }
  v46 = v55
     || (*(unsigned __int8 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v58 + 56LL))(
          v58,
          v17,
          v57,
          0LL,
          0LL);
  v60 = 0LL;
  v63 = 0LL;
  v62 = &v60;
  LOBYTE(v64) = 1;
  v33 = CBrushRenderingGraphBuilder::AddBrush((CBrushRenderingGraphBuilder *)this, v31, v46, &v63);
  if ( (_BYTE)v64 )
  {
    v48 = *v62;
    *v62 = v63;
    if ( v48 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v48);
      operator delete(v48, 0x80uLL);
    }
  }
  if ( v33 >= 0 )
  {
    v49 = v60;
    v60 = 0LL;
    v50 = (_QWORD *)*((_QWORD *)v23 + 5);
    v73 = v49;
    if ( v50 == *((_QWORD **)v23 + 6) )
    {
      std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        (char *)v23 + 32,
        v50,
        &v72);
    }
    else
    {
      v73 = 0LL;
      *v50 = v72;
      v50[1] = v49;
      *((_QWORD *)v23 + 5) += 16LL;
    }
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v73);
    v51 = v60;
    if ( v60 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v60);
      operator delete(v51, 0x80uLL);
    }
    goto LABEL_20;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v33, 0x114u, 0LL);
  v52 = v60;
  if ( v60 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v60);
    operator delete(v52, 0x80uLL);
  }
LABEL_26:
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v16, *((_QWORD *)&v80 + 1));
    std::_Deallocate<16,0>(v16, (v13 - v16) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  if ( v6 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v6);
    operator delete(v6, 0x80uLL);
  }
  return (unsigned int)v33;
}
