/*
 * XREFs of ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x18021B828
 * Callers:
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18021B06C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAMMPEAVCFloatResource@@@Z @ 0x180095C08 (-GetOpacity@CLegacyMilBrush@@KAMMPEAVCFloatResource@@@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18023E5A8 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@QEAAPEAU_D3DCOLORVALUE@@QEAU2@AEBU2@@Z @ 0x1802AC8D0 (--$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVAL.c)
 */

void __fastcall CGradientLegacyMilBrush::GetGradientColorData(
        CGradientLegacyMilBrush *this,
        struct CGradientColorData *a2)
{
  double *v4; // r15
  double *v5; // rdi
  _OWORD *v6; // rsi
  _OWORD *v7; // rdx
  float v8; // xmm6_4
  float *v9; // rdx
  float Opacity; // xmm0_4
  __int64 v11; // rcx
  __int64 i; // rax
  float v13; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 3);
  v4 = (double *)*((_QWORD *)this + 15);
  v5 = (double *)*((_QWORD *)this + 14);
  if ( v5 != v4 )
  {
    v6 = v5 + 1;
    do
    {
      v7 = (_OWORD *)*((_QWORD *)a2 + 1);
      v8 = *v5;
      v13 = v8;
      if ( v7 == *((_OWORD **)a2 + 2) )
      {
        std::vector<_D3DCOLORVALUE>::_Emplace_reallocate<_D3DCOLORVALUE const &>(a2, v7, v6);
      }
      else
      {
        *v7 = *v6;
        *((_QWORD *)a2 + 1) += 16LL;
      }
      v9 = (float *)*((_QWORD *)a2 + 4);
      if ( v9 == *((float **)a2 + 5) )
      {
        std::vector<float>::_Emplace_reallocate<float const &>((char *)a2 + 24, v9, &v13);
      }
      else
      {
        *v9 = v8;
        *((_QWORD *)a2 + 4) = v9 + 1;
      }
      v5 += 3;
      v6 = (_OWORD *)((char *)v6 + 24);
    }
    while ( v5 != v4 );
  }
  Opacity = CLegacyMilBrush::GetOpacity(*((float *)this + 16), *((struct CFloatResource **)this + 9));
  v11 = *((_QWORD *)a2 + 1);
  for ( i = *(_QWORD *)a2; i != v11; i += 16LL )
    *(float *)(i + 12) = Opacity * *(float *)(i + 12);
}
