/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18005B700
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x18005CBF0 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800B3DC0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x180016E0C (--$uninitialized_move@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18005BB80 (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x18005BE70 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x1800E6EA4 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1800EB2E0 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800FE0E0 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B026C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        int a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  void *v4; // rdi
  __int64 v7; // rbx
  unsigned int v9; // r15d
  char v10; // al
  unsigned int v11; // edx
  int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // r15
  void (__fastcall ***v16)(_QWORD); // r13
  char *v17; // rbx
  int v18; // esi
  bool v19; // zf
  struct CShape *v20; // rax
  _DWORD *Value; // rdi
  int v22; // ecx
  struct CPrimitiveColor *v23; // rax
  struct CShape *v24; // rcx
  void **v25; // rax
  detail::liberal_expansion_policy *v26; // rcx
  _QWORD *v27; // r8
  __int64 v28; // rdi
  unsigned __int64 v29; // r13
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r11
  __int64 v34; // rax
  _QWORD *v35; // r9
  const struct _D3DCOLORVALUE *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v41; // ecx
  unsigned __int64 v42; // rsi
  LPVOID v43; // rax
  __int64 v44; // r8
  const void *v45; // rdx
  LPVOID v46; // rdi
  CDrawListEntryBuilder *v47; // rcx
  unsigned int v48; // ecx
  CCpuClip *v49; // rcx
  int v50; // eax
  unsigned int v51; // ecx
  struct CShape *v52; // rdi
  __int64 (__fastcall *v53)(struct CShape *, _QWORD, const struct _D3DCOLORVALUE **); // rbx
  int v54; // eax
  unsigned int v55; // ecx
  __int64 v56; // rcx
  CThreadContext *v57; // rax
  unsigned int v58; // ecx
  CThreadContext *v59; // rax
  __int64 v60; // xmm0_8
  _QWORD *v61; // r8
  __int64 v62; // r11
  __int64 v63; // rcx
  unsigned int v64; // ecx
  void *Src; // [rsp+20h] [rbp-79h]
  void *v66; // [rsp+28h] [rbp-71h]
  size_t Size; // [rsp+30h] [rbp-69h]
  int v68; // [rsp+38h] [rbp-61h]
  const struct _D3DCOLORVALUE *v69; // [rsp+40h] [rbp-59h] BYREF
  __int64 v70; // [rsp+48h] [rbp-51h]
  size_t v71[2]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v72[48]; // [rsp+60h] [rbp-39h] BYREF
  int v73[2]; // [rsp+90h] [rbp-9h] BYREF
  int v74; // [rsp+98h] [rbp-1h]
  unsigned int v75; // [rsp+9Ch] [rbp+3h]
  int v76[2]; // [rsp+A0h] [rbp+7h] BYREF
  int v77; // [rsp+A8h] [rbp+Fh]
  unsigned int v78; // [rsp+ACh] [rbp+13h]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  struct CShape *v80; // [rsp+100h] [rbp+67h] BYREF
  struct CPrimitiveColor *v81; // [rsp+110h] [rbp+77h]

  v81 = a3;
  v4 = (void *)*((_QWORD *)this + 509);
  v7 = (__int64)(*((_QWORD *)this + 510) - (_QWORD)v4) >> 1;
  v9 = 0;
  if ( v7 )
  {
    v10 = *((_BYTE *)this + 29);
    v71[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1), (__m128)*((unsigned int *)this + 2)).m128_u64[0];
    LOBYTE(v80) = v10;
    if ( v7 == -1 || !v4 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v11 = *((_DWORD *)this + 1016);
    v12 = *(_DWORD *)this;
    *(_QWORD *)v73 = *((_QWORD *)this + 264);
    *(_QWORD *)v76 = *((_QWORD *)this + 20);
    v74 = 8 * v12 + 16;
    v13 = v11;
    v77 = v74;
    v75 = v11;
    v78 = v11;
    *(_DWORD *)v72 = v11;
    *(_DWORD *)&v72[4] = v11;
    *(_DWORD *)&v72[8] = v12;
    *(_DWORD *)&v72[12] = v7;
    *(_DWORD *)&v72[16] = 0;
    if ( (v11 & 1) != 0 )
    {
      v13 = (v11 & 0xFFFFFFFE) + 2;
      *(_DWORD *)v72 = v13;
      if ( v11 )
        *(_DWORD *)&v72[4] = (v11 & 0xFFFFFFFE) + 2;
    }
    if ( v13 > 0x10000 || (unsigned int)v7 > 0x1FFFE )
    {
      *(_DWORD *)v72 = 0;
      *(_DWORD *)&v72[12] = 0;
    }
    v70 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v72);
    v15 = v70;
    if ( !v70 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x42u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024882, 0x6B5u, 0LL);
      return v9;
    }
    LOBYTE(v68) = (_BYTE)v80;
    CDrawListPrimitive::Initialize(v70, (int)v76, (int)v73, v12, v4, v7, (size_t)v71, v68);
    v16 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
    v17 = 0LL;
    *(_OWORD *)&v72[4] = 0LL;
    if ( *((_BYTE *)this + 4477) )
      v71[0] = (size_t)this + 4452;
    else
      v71[0] = 0LL;
    v18 = *((_DWORD *)this + 6) | a2;
    if ( *((_BYTE *)this + 4476) )
    {
      v18 &= ~1u;
      *((_BYTE *)this + 4476) = 0;
    }
    v19 = *((_BYTE *)this + 4474) == 0;
    v69 = 0LL;
    if ( v19 )
    {
      v49 = (CCpuClip *)*((_QWORD *)this + 2);
      if ( *(_QWORD *)v49 || *((_QWORD *)v49 + 10) )
      {
        v50 = CCpuClip::ResolveClip(v49, &v80, 0LL);
        v9 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x6CDu, 0LL);
        }
        else
        {
          v52 = v80;
          v53 = *(__int64 (__fastcall **)(struct CShape *, _QWORD, const struct _D3DCOLORVALUE **))(*(_QWORD *)v80 + 24LL);
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v69);
          v54 = v53(v52, 0LL, &v69);
          v9 = v54;
          if ( v54 >= 0 )
          {
            v15 = v70;
            v17 = 0LL;
            v20 = (struct CShape *)v69;
LABEL_14:
            v80 = v20;
            *(_QWORD *)v73 = 0LL;
            Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
            if ( !Value )
            {
              v57 = (CThreadContext *)operator new(0x190uLL);
              if ( !v57 || (v59 = CThreadContext::CThreadContext(v57), (Value = v59) == 0LL) )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, -2147024882, 0x42u, 0LL);
                ModuleFailFastForHRESULT(2147942414LL, retaddr);
              }
              TlsSetValue(CThreadContext::s_dwTlsIndex, v59);
            }
            v22 = Value[33];
            if ( v22 )
            {
              v17 = (char *)*((_QWORD *)Value + 17);
              *((_QWORD *)Value + 17) = *(_QWORD *)v17;
              Value[33] = v22 - 1;
            }
            if ( !v17 )
            {
              v17 = (char *)DefaultHeap::Alloc(0x50uLL);
              if ( !v17 )
              {
                v9 = -2147024882;
                MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, -2147024882, 0x11u, 0LL);
                std::default_delete<CDrawListPrimitive>::operator()(v63, v70);
                MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, -2147024882, 0x6D3u, 0LL);
                Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v73);
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v69);
                return v9;
              }
            }
            v23 = v81;
            *((_DWORD *)v17 + 2) = 0;
            *((_QWORD *)v17 + 2) = v23;
            *((_DWORD *)v17 + 6) = 1065353216;
            *((_DWORD *)v17 + 7) = 1065353216;
            *((_DWORD *)v17 + 8) = 1065353216;
            *((_DWORD *)v17 + 9) = 1065353216;
            v24 = v80;
            *((_DWORD *)v17 + 12) = v18;
            *((_QWORD *)v17 + 7) = v24;
            if ( v24 )
              (*(void (__fastcall **)(struct CShape *))(*(_QWORD *)v24 + 8LL))(v24);
            if ( a4 )
              *(struct _D3DCOLORVALUE *)(v17 + 24) = *(const struct _D3DCOLORVALUE *)&a4->r;
            if ( v71[0] )
            {
              v60 = *(_QWORD *)v71[0];
              *((_DWORD *)v17 + 12) |= 0x400u;
              *((_QWORD *)v17 + 5) = v60;
            }
            v25 = &CHWDrawListEntry::`vftable';
            *(_QWORD *)v17 = &CHWDrawListEntry::`vftable';
            *((_QWORD *)v17 + 8) = v15;
            *((_QWORD *)v17 + 9) = v16;
            if ( v16 )
            {
              (**v16)(v16);
              v25 = *(void ***)v17;
            }
            ++CHWDrawListEngineMetrics::s_cDrawListEntries;
            ((void (__fastcall *)(char *))*v25)(v17);
            v27 = (_QWORD *)*((_QWORD *)this + 12);
            v9 = 0;
            v28 = *((_QWORD *)this + 11);
            v29 = ((__int64)v27 - v28) >> 3;
            if ( (__int64)(*((_QWORD *)this + 13) - (_QWORD)v27) >> 3 )
            {
              a4 = 0LL;
            }
            else
            {
              if ( v29 + 1 < v29 )
              {
                std::_Xoverflow_error("overflow");
                __debugbreak();
                goto LABEL_68;
              }
              v42 = detail::liberal_expansion_policy::expand(v26, (*((_QWORD *)this + 13) - v28) >> 3, v29 + 1);
              v43 = operator new(saturated_mul(v42, 8uLL));
              v44 = *((_QWORD *)this + 12);
              v45 = (const void *)*((_QWORD *)this + 11);
              a4 = 0LL;
              *(_QWORD *)v72 = v43;
              *(_QWORD *)&v72[16] = 0LL;
              v46 = v43;
              *(_QWORD *)&v72[8] = v29;
              std::uninitialized_move<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
                (__int64)v76,
                v45,
                v44,
                (__int64 *)v72);
              v47 = (CDrawListEntryBuilder *)*((_QWORD *)this + 11);
              *((_QWORD *)this + 11) = v46;
              if ( v47 == (CDrawListEntryBuilder *)((char *)this + 112) )
                v47 = 0LL;
              operator delete(v47);
              v28 = *((_QWORD *)this + 11);
              v27 = (_QWORD *)(v28 + 8 * v29);
              *((_QWORD *)this + 12) = v27;
              *((_QWORD *)this + 13) = v28 + 8 * v42;
            }
            v30 = ((__int64)v27 - v28) >> 3;
            v31 = v30 - v29;
            v32 = v28 + 8 * v30;
            if ( !v32 )
              goto LABEL_72;
            v33 = 1LL;
            v34 = (((__int64)v27 - v28) >> 3) - v29;
            if ( v31 > 1 )
              v34 = 1LL;
            v35 = &v27[-v34];
            if ( v27 == v35 )
            {
LABEL_32:
              if ( v31 <= 1 )
                goto LABEL_33;
              if ( !v30 || v28 && v30 >= 0 )
              {
                *(_QWORD *)&v72[8] = v30;
                *(_QWORD *)&v72[16] = v30;
                *(_QWORD *)v72 = v28;
                std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
                  v76,
                  v28 + 8 * v29,
                  v28 + 8 * (v30 - 1),
                  v72,
                  Src,
                  v66,
                  Size);
LABEL_33:
                *((_QWORD *)this + 12) += 8LL;
                *(_QWORD *)(v28 + 8 * v29) = v17;
                v36 = v69;
                if ( v69 )
                {
                  v69 = a4;
                  (*(void (__fastcall **)(const struct _D3DCOLORVALUE *))(*(_QWORD *)&v36->r + 16LL))(v36);
                }
                goto LABEL_35;
              }
LABEL_72:
              _invalid_parameter_noinfo_noreturn();
            }
LABEL_68:
            v61 = v27 - 1;
            v62 = v33 - 1;
            while ( 1 )
            {
              *(_QWORD *)(v32 + 8 * v62) = *v61;
              if ( v61 == v35 )
                goto LABEL_32;
              --v61;
              if ( v62 )
              {
                if ( !--v62 )
                  continue;
              }
              goto LABEL_72;
            }
          }
          MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x6CEu, 0LL);
        }
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v69);
        std::default_delete<CDrawListPrimitive>::operator()(v56, v70);
        return v9;
      }
      v70 = v15;
    }
    v20 = *(struct CShape **)&v72[8];
    goto LABEL_14;
  }
LABEL_35:
  v37 = (__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 4;
  if ( v37 )
    *((_QWORD *)this + 21) -= 16 * v37;
  v38 = (__int64)(*((_QWORD *)this + 265) - *((_QWORD *)this + 264)) >> 4;
  if ( v38 )
    *((_QWORD *)this + 265) -= 16 * v38;
  v39 = (__int64)(*((_QWORD *)this + 510) - *((_QWORD *)this + 509)) >> 1;
  if ( v39 )
    *((_QWORD *)this + 510) -= 2 * v39;
  *((_DWORD *)this + 1016) = 0;
  *((_DWORD *)this + 1112) = 0;
  return v9;
}
