/*
 * XREFs of ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x1800C058C
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800BD2D0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x1800C1538 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x18025D698 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x18025D720 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x18025D7AC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x18025D83C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18025D8C4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18025D958 (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x18025D9E0 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x18025DA68 (-PushConstant@CExpressionValueStack@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x1800C149C (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailablePushSpace(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h] BYREF
  int v9; // [rsp+78h] [rbp-10h]
  char v10; // [rsp+7Ch] [rbp-Ch]

  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v2 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 12) == *((_DWORD *)this + 4) )
    {
      memset_0(v7, 0, sizeof(v7));
      v8 = 0LL;
      v9 = 18;
      v10 = 0;
      v5 = DynArray<CExpressionValue,1>::AddAndSet((char *)this + 24, v4, v7);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          v6,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v5,
          0x5Bu,
          0LL);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v8);
        return v2;
      }
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v8);
    }
    return 0;
  }
  return v2;
}
