/*
 * XREFs of ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800932A4
 * Callers:
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x180093134 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180004E40 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016F14 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectionBorderVisual::_AddRectInstruction(
        CProjectionBorderVisual *this,
        const struct tagRECT *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  __m128i v7; // xmm0
  int v8; // eax
  CBaseObject *v9; // rdi
  unsigned int v10; // ebx
  CBaseObject *v11; // rdx
  __int128 v12; // xmm1
  int v13; // eax
  CBaseObject *v15; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+38h] [rbp-20h]

  v3 = _mm_cvtsi32_si128(a2->left);
  v5 = _mm_cvtsi32_si128(a2->right);
  v15 = 0LL;
  LODWORD(v16) = _mm_cvtepi32_ps(v3).m128_u32[0];
  v7 = _mm_cvtsi32_si128(a2->top);
  DWORD2(v16) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)v5.m128i_i32 = (float)a2->bottom;
  DWORD1(v16) = _mm_cvtepi32_ps(v7).m128_u32[0];
  HIDWORD(v16) = v5.m128i_i32[0];
  v8 = CSolidRectangleInstruction::Create(&v15);
  v9 = v15;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = v15;
    v12 = *(_OWORD *)&a3->r;
    *((_OWORD *)v15 + 2) = v16;
    *((_OWORD *)v9 + 1) = v12;
    v13 = CRenderDataVisual::AddInstruction(this, v11);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3Bu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x38u);
  }
  if ( v9 )
    CBaseObject::Release(v9);
  return v10;
}
