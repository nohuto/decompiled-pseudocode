/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x1802680A4
 * Callers:
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x18026826C (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 * Callees:
 *     ??A?$span@$$CBVCMilPoint2F@@$0?0@gsl@@QEBAAEBVCMilPoint2F@@_K@Z @ 0x180268248 (--A-$span@$$CBVCMilPoint2F@@$0-0@gsl@@QEBAAEBVCMilPoint2F@@_K@Z.c)
 */

__int64 __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<CMilPoint2F>(
        float *a1,
        unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi

  *a1 = *(float *)gsl::span<CMilPoint2F const,-1>::operator[](a2, 0LL);
  a1[1] = *(float *)(gsl::span<CMilPoint2F const,-1>::operator[](a2, 0LL) + 4);
  a1[2] = *(float *)gsl::span<CMilPoint2F const,-1>::operator[](a2, 0LL);
  result = gsl::span<CMilPoint2F const,-1>::operator[](a2, 0LL);
  v5 = 1LL;
  a1[3] = *(float *)(result + 4);
  while ( v5 < *a2 )
  {
    *a1 = fminf(*a1, *(float *)gsl::span<CMilPoint2F const,-1>::operator[](a2, v5));
    a1[1] = fminf(a1[1], *(float *)(gsl::span<CMilPoint2F const,-1>::operator[](a2, v5) + 4));
    a1[2] = fmaxf(a1[2], *(float *)gsl::span<CMilPoint2F const,-1>::operator[](a2, v5));
    result = gsl::span<CMilPoint2F const,-1>::operator[](a2, v5++);
    a1[3] = fmaxf(a1[3], *(float *)(result + 4));
  }
  return result;
}
