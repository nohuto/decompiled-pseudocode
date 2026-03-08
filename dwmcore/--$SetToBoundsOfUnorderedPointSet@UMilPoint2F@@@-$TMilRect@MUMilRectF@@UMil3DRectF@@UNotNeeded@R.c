/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x18026C7D8
 * Callers:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 * Callees:
 *     ??A?$span@$$CBUMilPoint2F@@$0?0@gsl@@QEBAAEBUMilPoint2F@@_K@Z @ 0x18026C8B8 (--A-$span@$$CBUMilPoint2F@@$0-0@gsl@@QEBAAEBUMilPoint2F@@_K@Z.c)
 */

__int64 __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
        float *a1,
        unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi

  *a1 = *(float *)gsl::span<MilPoint2F const,-1>::operator[](a2, 0LL);
  a1[1] = *(float *)(gsl::span<MilPoint2F const,-1>::operator[](a2, 0LL) + 4);
  a1[2] = *(float *)gsl::span<MilPoint2F const,-1>::operator[](a2, 0LL);
  result = gsl::span<MilPoint2F const,-1>::operator[](a2, 0LL);
  v5 = 1LL;
  a1[3] = *(float *)(result + 4);
  while ( v5 < *a2 )
  {
    *a1 = fminf(*a1, *(float *)gsl::span<MilPoint2F const,-1>::operator[](a2, v5));
    a1[1] = fminf(a1[1], *(float *)(gsl::span<MilPoint2F const,-1>::operator[](a2, v5) + 4));
    a1[2] = fmaxf(a1[2], *(float *)gsl::span<MilPoint2F const,-1>::operator[](a2, v5));
    result = gsl::span<MilPoint2F const,-1>::operator[](a2, v5++);
    a1[3] = fmaxf(a1[3], *(float *)(result + 4));
  }
  return result;
}
