/*
 * XREFs of ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x1801FA6A8
 * Callers:
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801FA830 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@$0A@@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1801FA5C8 (--$-0V-$span_iterator@PEAVCCompositionLight@@@details@gsl@@$0A@@-$vector@PEAVCCompositionLight@@.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::CSpectreCallbackRenderer(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *a7)
{
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &CSpectreCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *(_QWORD *)(a1 + 8) = &CSpectreCallbackRenderer::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  *(_QWORD *)(a1 + 24) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_OWORD *)(a1 + 32) = *a3;
  *(_OWORD *)(a1 + 48) = a3[1];
  *(_OWORD *)(a1 + 64) = a3[2];
  *(_OWORD *)(a1 + 80) = a3[3];
  *(_QWORD *)(a1 + 96) = *(_QWORD *)a4;
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 108) = a5;
  *(_DWORD *)(a1 + 112) = a6;
  v10 = *a7;
  *(_QWORD *)&v12 = a7[1];
  v15 = v12;
  *((_QWORD *)&v12 + 1) = v12 + 8 * v10;
  v13 = *((_QWORD *)&v12 + 1);
  v14 = v12;
  std::vector<CCompositionLight *>::vector<CCompositionLight *>((__int64 *)(a1 + 120), &v14, &v12);
  return a1;
}
