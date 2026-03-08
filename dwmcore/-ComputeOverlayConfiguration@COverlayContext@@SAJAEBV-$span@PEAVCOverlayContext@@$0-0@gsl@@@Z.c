/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1800527B0
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180051630 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180052A84 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00V.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180052B40 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180052C10 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C9844 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180129C00 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18012A1B0 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18012BBD4 (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?GetAdapterLuid@COverlayContext@@AEBA?AU_LUID@@XZ @ 0x1801DA5A8 (-GetAdapterLuid@COverlayContext@@AEBA-AU_LUID@@XZ.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801DB038 (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(_QWORD *a1)
{
  COverlayContext *v1; // r13
  __int64 v2; // rax
  _QWORD *v3; // r15
  __int64 *v4; // rsi
  unsigned int v5; // r14d
  __int64 *v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  char *v10; // r8
  __int64 *v11; // rax
  _BYTE *v12; // rdx
  unsigned __int8 *v13; // rax
  COverlayContext **v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, _BYTE *); // rcx
  const struct COverlayContext::OverlayPlaneInfo **v16; // rax
  const struct COverlayContext::OverlayPlaneInfo *v17; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v18; // rdi
  const struct COverlayContext::OverlayPlaneInfo *v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // esi
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE *v29; // rbx
  _BYTE *v30; // rbx
  struct _LUID AdapterLuid; // rax
  _QWORD *v33; // rax
  COverlayContext **v34; // rdi
  COverlayContext **i; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v37; // rax
  __int64 v38; // [rsp+20h] [rbp-E0h]
  void *v39; // [rsp+28h] [rbp-D8h]
  const struct COverlayContext::OverlayPlaneInfo *v40; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v41[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v42[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v43[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v44[24]; // [rsp+80h] [rbp-80h] BYREF
  LPVOID lpMem; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v46; // [rsp+A0h] [rbp-60h]
  LPVOID *v47; // [rsp+A8h] [rbp-58h]
  _BYTE v48[32]; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID v49; // [rsp+D0h] [rbp-30h] BYREF
  const struct COverlayContext::OverlayPlaneInfo *v50; // [rsp+D8h] [rbp-28h]
  __int64 *v51; // [rsp+E0h] [rbp-20h]
  _BYTE v52[128]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v53; // [rsp+168h] [rbp+68h] BYREF

  v2 = *a1;
  v3 = a1;
  v4 = (__int64 *)a1[1];
  v5 = 0;
  v6 = v4;
  v49 = v52;
  v7 = (unsigned __int64)&v4[v2];
  v50 = (const struct COverlayContext::OverlayPlaneInfo *)v52;
  v51 = &v53;
  v9 = (_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   &v49,
                   0LL,
                   (8 * v2) >> 3);
  v11 = v4;
  while ( v11 != (__int64 *)v7 )
  {
    if ( !v4 || !v7 || v4 > v6 || (unsigned __int64)v6 >= v7 )
    {
LABEL_45:
      ((void (__fastcall *)(_QWORD *, __int64, char *))`gsl::details::get_terminate_handler'::`2'::handler)(v9, v8, v10);
      __debugbreak();
    }
    v27 = *v6++;
    *v9 = v27;
    v11 = v6;
    ++v9;
  }
  lpMem = v48;
  v12 = v48;
  v47 = &v49;
LABEL_4:
  v46 = v12;
  while ( ((v50 - (const struct COverlayContext::OverlayPlaneInfo *)v49) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    v13 = (unsigned __int8 *)*((_QWORD *)v50 - 1);
    v14 = (COverlayContext **)v13[11297];
    v15 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)v13
                                                    + 8LL
                                                    + *(int *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) + 12LL));
    v16 = (const struct COverlayContext::OverlayPlaneInfo **)(**v15)(v15, v44);
    v17 = v50;
    v18 = *v16;
    v40 = *v16;
    *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                 &lpMem,
                 (v46 - (_BYTE *)lpMem) >> 3) = *((_QWORD *)v17 - 1);
    v19 = (const struct COverlayContext::OverlayPlaneInfo *)v49;
    v20 = (v50 - (const struct COverlayContext::OverlayPlaneInfo *)v49) >> 3;
    v21 = ((const struct COverlayContext::OverlayPlaneInfo *)((char *)v50 - 8)
         - (const struct COverlayContext::OverlayPlaneInfo *)v49) >> 3;
    v8 = v21 + 1;
    if ( v21 + 1 > v20 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      while ( !COverlayContext::IsRevokable(v1, v19) )
      {
        v19 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v19 + 224);
        while ( v19 == v18 )
        {
          if ( ++v14 == v3 )
            goto LABEL_26;
LABEL_23:
          v1 = *v14;
          v19 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)*v14 + 913);
          v18 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)*v14 + 914);
        }
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)g_pComposition + 82) + 32LL))(
        *((_QWORD *)g_pComposition + 82),
        1000LL,
        0x10000LL);
      goto LABEL_26;
    }
    v10 = (char *)v49 + 8 * v20;
    if ( v21 + 1 != v20 )
    {
      if ( v21 && (!v49 || v21 < 0 || v20 < v21) )
        _invalid_parameter_noinfo_noreturn();
      v42[1] = (v50 - (const struct COverlayContext::OverlayPlaneInfo *)v49) >> 3;
      v42[2] = ((const struct COverlayContext::OverlayPlaneInfo *)((char *)v50 - 8)
              - (const struct COverlayContext::OverlayPlaneInfo *)v49) >> 3;
      v42[0] = v49;
      std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>(
        v44,
        (char *)v49 + 8 * v8,
        v10,
        v42,
        v38,
        v39,
        v40);
      v19 = (const struct COverlayContext::OverlayPlaneInfo *)v49;
    }
    v50 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v50 - 8);
    if ( !(_BYTE)v14 )
    {
      v22 = HIDWORD(v40);
      while ( v19 != v50 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)v19 + 11297LL)
          && (AdapterLuid = COverlayContext::GetAdapterLuid(*(COverlayContext **)v19),
              *(_DWORD *)AdapterLuid.LowPart == (_DWORD)v18)
          && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v22 )
        {
          v33 = (_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                            &lpMem,
                            (v46 - (_BYTE *)lpMem) >> 3);
          v40 = v19;
          *v33 = *(_QWORD *)v19;
          v19 = *(const struct COverlayContext::OverlayPlaneInfo **)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                                                                      &v49,
                                                                      v43,
                                                                      &v40);
        }
        else
        {
          v19 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v19 + 8);
        }
      }
    }
    v9 = lpMem;
    v23 = (v46 - (_BYTE *)lpMem) >> 3;
    v41[0] = v23;
    if ( v23 == -1 )
      goto LABEL_45;
    v41[1] = lpMem;
    if ( !lpMem )
    {
      if ( v23 )
        goto LABEL_45;
    }
    v24 = COverlayContext::ComputeOverlayConfigurationForAdapter(v41, v8, v10);
    v5 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xCFu, 0LL);
      v34 = (COverlayContext **)v3[1];
      for ( i = &v34[*v3]; v34 != i; ++v34 )
        COverlayContext::Reset(*v34);
LABEL_26:
      v12 = v46;
      goto LABEL_27;
    }
    v12 = v46;
    v26 = (v46 - (_BYTE *)lpMem) >> 3;
    if ( v26 )
    {
      v12 = &v46[-8 * v26];
      goto LABEL_4;
    }
  }
  if ( *v3 )
  {
    v14 = (COverlayContext **)v3[1];
    v3 = &v14[*v3];
    if ( v14 != v3 )
      goto LABEL_23;
  }
LABEL_27:
  v28 = (v12 - (_BYTE *)lpMem) >> 3;
  if ( v28 )
    v46 = &v12[-8 * v28];
  v29 = lpMem;
  lpMem = 0LL;
  if ( v29 != v48 && v29 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v29);
  }
  if ( (v50 - (const struct COverlayContext::OverlayPlaneInfo *)v49) >> 3 )
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      &v49,
      0LL);
  v30 = v49;
  v49 = 0LL;
  if ( v30 != v52 && v30 )
  {
    v37 = GetProcessHeap();
    HeapFree(v37, 0, v30);
  }
  return v5;
}
