/*
 * XREFs of ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180019550
 * Callers:
 *     ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800194D0 (-ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801F01B0 (-ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801F13E0 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801F1810 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180019620 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800DBC00 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DBD60 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  bool v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *, char *))(*(_QWORD *)this + 64LL))(
         this,
         a2,
         (char *)this + 48);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xB3u, 0LL);
    goto LABEL_11;
  }
  v7 = CDrawingContext::PushDeviceTransform(a2, (CExternalLayer *)((char *)this + 48), &v13);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xB7u, 0LL);
    goto LABEL_11;
  }
  *((_BYTE *)this + 32) = 1;
  v9 = CExternalLayer::ApplyRenderTarget(this, a2);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xBBu, 0LL);
LABEL_11:
    CExternalLayer::RestoreState(this, a2);
    return v6;
  }
  if ( !v13 || !(*(unsigned __int8 (__fastcall **)(CExternalLayer *))(*(_QWORD *)this + 72LL))(this) )
  {
    v11 = *((_QWORD *)a2 + 1009);
    *((_QWORD *)a2 + 1009) = 0LL;
    *((_QWORD *)this + 5) = v11;
  }
  return v6;
}
