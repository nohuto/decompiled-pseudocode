/*
 * XREFs of ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x1802221E4
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180221EB0 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateDummyRect(
        CCompositionSkyBoxBrush *this,
        struct CDrawListEntryBuilder *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+40h] [rbp-C0h]
  __int64 v9; // [rsp+44h] [rbp-BCh]
  int v10; // [rsp+4Ch] [rbp-B4h]
  _OWORD v11[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  _BYTE *v14; // [rsp+80h] [rbp-80h]
  _BYTE v15[112]; // [rsp+90h] [rbp-70h] BYREF

  v9 = 0x600000000LL;
  v10 = 0;
  v8 = 0;
  v7 = xmmword_1803B5000;
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset_0(v15, 0, 0x68uLL);
  v13 = 2LL;
  v14 = v15;
  v3 = CDrawListEntryBuilder::Insert(
         a2,
         (const struct PrimitiveGeometryDesc *)&v7,
         (const struct PrimitiveVertexAttributesDesc *)v11,
         &stru_1803E20A8);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xF4u, 0LL);
  else
    return 0;
  return v5;
}
