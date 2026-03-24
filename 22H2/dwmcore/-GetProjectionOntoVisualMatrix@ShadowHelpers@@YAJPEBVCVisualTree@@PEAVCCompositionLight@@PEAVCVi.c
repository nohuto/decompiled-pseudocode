/*
 * XREFs of ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x18000AC90
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000A740 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?GetProjectionMatrix@ShadowHelpers@@YA?AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z @ 0x18000AF50 (-GetProjectionMatrix@ShadowHelpers@@YA-AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z.c)
 *     ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x18000B6F0 (-GetPlaneOfVisual@ShadowHelpers@@YA-AUD2D_VECTOR_4F@@PEAVCVisual@@@Z.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x18000BAFC (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GetProjectionOntoVisualMatrix(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        struct CCompositionLight *a3,
        struct CVisual *a4)
{
  int LightPosition; // eax
  unsigned int v8; // ecx
  struct CVisual *v9; // r8
  unsigned int v10; // ebx
  __int128 v11; // xmm0
  unsigned int (__fastcall *v12)(const struct CVisualTree *); // rax
  __int64 v13; // r9
  __int64 ProjectionMatrix; // rax
  struct D2D_VECTOR_3F *v16; // [rsp+20h] [rbp-88h]
  _BYTE v17[16]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v19[80]; // [rsp+50h] [rbp-58h] BYREF

  LightPosition = ShadowHelpers::GetLightPosition(this, a2, a3, (struct CVisual *)v17, v16);
  v10 = LightPosition;
  if ( LightPosition < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, LightPosition, 0x32u, 0LL);
  }
  else
  {
    v11 = (__int128)*ShadowHelpers::GetPlaneOfVisual((ShadowHelpers *)&v18, (struct D2D_VECTOR_4F *)a3, v9);
    v12 = *(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 232LL);
    v18 = v11;
    LOBYTE(v13) = v12(a2) == 2;
    ProjectionMatrix = ShadowHelpers::GetProjectionMatrix(v19, v17, &v18, v13);
    *(_OWORD *)a4 = *(_OWORD *)ProjectionMatrix;
    *((_OWORD *)a4 + 1) = *(_OWORD *)(ProjectionMatrix + 16);
    *((_OWORD *)a4 + 2) = *(_OWORD *)(ProjectionMatrix + 32);
    *((_OWORD *)a4 + 3) = *(_OWORD *)(ProjectionMatrix + 48);
    *((_DWORD *)a4 + 16) = *(_DWORD *)(ProjectionMatrix + 64);
  }
  return v10;
}
