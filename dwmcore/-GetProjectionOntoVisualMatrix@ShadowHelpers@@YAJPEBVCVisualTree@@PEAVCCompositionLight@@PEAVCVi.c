/*
 * XREFs of ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1802B4D70
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x180005ED8 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x1802B4B08 (-GetPlaneOfVisual@ShadowHelpers@@YA-AUD2D_VECTOR_4F@@PEAVCVisual@@@Z.c)
 *     ?GetProjectionMatrix@ShadowHelpers@@YA?AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z @ 0x1802B4BCC (-GetProjectionMatrix@ShadowHelpers@@YA-AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z.c)
 */

__int64 __fastcall ShadowHelpers::GetProjectionOntoVisualMatrix(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        struct CCompositionLight *a3,
        struct CVisual *a4)
{
  int LightPosition; // eax
  __int64 v8; // rcx
  struct CVisual *v9; // r8
  unsigned int v10; // ebx
  struct D2D_VECTOR_4F v11; // xmm0
  __int64 (__fastcall *v12)(const struct CVisualTree *); // rax
  int v13; // eax
  __int64 ProjectionMatrix; // rax
  FLOAT v16[4]; // [rsp+30h] [rbp-78h] BYREF
  struct D2D_VECTOR_4F v17; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v18[80]; // [rsp+50h] [rbp-58h] BYREF

  LightPosition = ShadowHelpers::GetLightPosition(this, a2, a3, v16);
  v10 = LightPosition;
  if ( LightPosition < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, LightPosition, 0x32u, 0LL);
  }
  else
  {
    v11 = *ShadowHelpers::GetPlaneOfVisual(&v17, (struct D2D_VECTOR_4F *)a3, v9);
    v12 = *(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 216LL);
    v17 = v11;
    v13 = v12(a2);
    ProjectionMatrix = ShadowHelpers::GetProjectionMatrix((__int64)v18, v16, &v17, v13 == 2);
    *(_OWORD *)a4 = *(_OWORD *)ProjectionMatrix;
    *((_OWORD *)a4 + 1) = *(_OWORD *)(ProjectionMatrix + 16);
    *((_OWORD *)a4 + 2) = *(_OWORD *)(ProjectionMatrix + 32);
    *((_OWORD *)a4 + 3) = *(_OWORD *)(ProjectionMatrix + 48);
    *((_DWORD *)a4 + 16) = *(_DWORD *)(ProjectionMatrix + 64);
  }
  return v10;
}
