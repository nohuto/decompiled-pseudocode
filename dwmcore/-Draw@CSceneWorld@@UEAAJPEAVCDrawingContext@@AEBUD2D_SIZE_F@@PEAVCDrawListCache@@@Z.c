/*
 * XREFs of ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180260464
 * Callers:
 *     ?Draw@CSceneWorld@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A490 (-Draw@CSceneWorld@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0D18 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801BB140 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 */

__int64 __fastcall CSceneWorld::Draw(
        CSceneWorld *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  _QWORD *v4; // rsi
  _QWORD *i; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE v13[64]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+80h] [rbp-18h]

  v4 = (_QWORD *)*((_QWORD *)this - 7);
  for ( i = (_QWORD *)*((_QWORD *)this - 8); i != v4; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 184LL))(*i);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
    *((__int64 **)this - 8),
    *((__int64 **)this - 7));
  v8 = *((_QWORD *)this - 8);
  v14 = 0;
  *((_QWORD *)this - 7) = v8;
  CMILMatrix::SetScale((CMILMatrix *)v13, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
  v9 = CDrawingContext::DrawScene3D(
         a2,
         *((struct ISpectreWorld **)this - 13),
         *((struct CCompositionEnvironmentLight **)this - 5),
         (const struct CMILMatrix *)v13);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF9u, 0LL);
  return v11;
}
