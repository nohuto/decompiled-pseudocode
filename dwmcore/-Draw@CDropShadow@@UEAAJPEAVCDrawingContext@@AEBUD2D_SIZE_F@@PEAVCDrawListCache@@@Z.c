/*
 * XREFs of ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180226258
 * Callers:
 *     ?Draw@CDropShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119CB0 (-Draw@CDropShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1802270E0 (-IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18022796C (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDropShadow::Draw(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CDropShadow *v4; // r14
  unsigned int v9; // ebx
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm1_4
  int v13; // eax
  __int64 v14; // rcx
  int updated; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _OWORD v20[3]; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+64h] [rbp-1Ch]
  int v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+6Ch] [rbp-14h]
  int v25; // [rsp+70h] [rbp-10h]
  bool v26; // [rsp+B0h] [rbp+30h] BYREF

  v4 = (CDropShadow *)((char *)this - 296);
  v26 = 0;
  v9 = 0;
  if ( CDropShadow::IsReadyToDraw((CDropShadow *)((char *)this - 296), a2, &v26) && !v26 )
  {
    v25 = 0;
    v20[0] = _xmm;
    v20[2] = _xmm;
    v10 = *((_DWORD *)this - 49);
    v20[1] = _xmm;
    v11 = *((_DWORD *)this - 50);
    v22 = v10;
    v21 = v11;
    v12 = *((_DWORD *)this - 48);
    v24 = (int)FLOAT_1_0;
    v23 = v12;
    LOWORD(v25) = 5972;
    v13 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v20, 1, 1);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1EFu, 0LL);
    }
    else
    {
      updated = CDropShadow::UpdateShadowIntermediates(v4, a2, a3);
      v9 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x1F5u, 0LL);
      }
      else
      {
        v17 = CContent::Draw((CDropShadow *)((char *)this - 200), a2, a3, a4);
        v9 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1F7u, 0LL);
      }
      CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  return v9;
}
