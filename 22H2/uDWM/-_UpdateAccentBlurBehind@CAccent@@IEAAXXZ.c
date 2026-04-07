/*
 * XREFs of ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x1800020C0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000CD50 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000E7A0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028660 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x1800021D0 (-_HasBlurBehind@CAccent@@IEAA_NXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800021F0 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180004C84 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002496C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180093C10 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 */

void __fastcall CAccent::_UpdateAccentBlurBehind(CAccent *this)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // ecx
  __m128i v5; // xmm0
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  struct CVisual *v9; // rbx
  int inserted; // eax
  float SolidFillOpacity; // xmm0_4
  __int64 v12; // rcx
  int updated; // eax
  void *v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  float v16; // [rsp+38h] [rbp-20h]
  float v17; // [rsp+3Ch] [rbp-1Ch]

  if ( *((_QWORD *)this + 42) && *((_BYTE *)this + 397) )
  {
    CRenderDataVisual::ClearInstructions(this);
    CAccentBlurBehind::UpdateAccentBlurBehind(
      *((CAccentBlurBehind **)this + 42),
      (const struct tagRECT *)((char *)this + 616),
      *((_QWORD *)this + 51),
      *((HWND *)this + 50));
    v2 = 0;
    v3 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
    v4 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
    v15 = 0LL;
    if ( v4 >= 0 )
      v2 = v4;
    v5 = _mm_cvtsi32_si128(v2);
    v6 = 0;
    LODWORD(v7) = _mm_cvtepi32_ps(v5).m128_u32[0];
    if ( v3 >= 0 )
      v6 = v3;
    v16 = v7 + 0.0;
    v17 = (float)v6 + 0.0;
    if ( CAccent::_HasBlurBehind(this)
      && (v8 = VisualCollection::InsertRelative(
                 (CAccent *)((char *)this + 32),
                 *((struct CVisual **)this + 42),
                 0LL,
                 0,
                 1),
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x69Bu, v14);
    }
    else if ( (*((_BYTE *)this + 284) & 2) != 0 )
    {
      v9 = *(struct CVisual **)(*((_QWORD *)this + 42) + 280LL);
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v9, 0LL, 0, 1);
      if ( inserted >= 0 )
      {
        SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(v12, v9, *((unsigned int *)this + 94), &v15, LODWORD(SolidFillOpacity));
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6A4u, v14);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x6A3u, v14);
      }
    }
  }
}
