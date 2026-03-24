/*
 * XREFs of TryFillRenderState @ 0x180195A44
 * Callers:
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180195C0C (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180195D50 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB7D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x1801954CC (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ??$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ @ 0x180210AC0 (--$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall TryFillRenderState(CDrawingContext *a1, unsigned __int8 a2, __int64 a3)
{
  int v3; // edi
  char result; // al
  __int64 v6; // r11
  unsigned __int64 v7; // xmm1_8
  int v8; // xmm0_4
  int v9; // eax
  int v10; // xmm1_4
  _QWORD v11[6]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v12; // [rsp+50h] [rbp+17h]
  int v13; // [rsp+60h] [rbp+27h]
  __int128 v14; // [rsp+70h] [rbp+37h]

  v3 = a2;
  *(_OWORD *)a3 = 0LL;
  v13 = 0;
  *(_OWORD *)(a3 + 16) = 0LL;
  v12 = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = v12;
  CDrawingContext::GetWorldTransform(a1, (struct CMILMatrix *)v11);
  result = CMILMatrix::Is2DTransformExceptForZTranslation<1>(v11);
  if ( result )
  {
    *(_QWORD *)&v14 = v11[0];
    *((_QWORD *)&v14 + 1) = v11[2];
    v7 = _mm_unpacklo_ps((__m128)(unsigned int)v12, (__m128)HIDWORD(v12)).m128_u64[0];
    *(_OWORD *)a3 = v14;
    v8 = (int)FLOAT_1_0;
    *(_QWORD *)(a3 + 16) = v7;
    v9 = *(_DWORD *)(v6 + 3232);
    if ( v9 )
      v10 = *(_DWORD *)(*(_QWORD *)(v6 + 3248) + 4LL * (unsigned int)(v9 - 1));
    else
      v10 = (int)FLOAT_1_0;
    *(_DWORD *)(a3 + 24) = v10;
    if ( *(float *)(v6 + 72) != 0.0 )
      v8 = *(_DWORD *)(v6 + 72);
    *(_DWORD *)(a3 + 44) = v8;
    *(_DWORD *)(a3 + 48) = (unsigned __int8)CDrawingContext::IsHDRTarget((CDrawingContext *)v6);
    result = 1;
    *(_DWORD *)(a3 + 52) = v3;
  }
  return result;
}
