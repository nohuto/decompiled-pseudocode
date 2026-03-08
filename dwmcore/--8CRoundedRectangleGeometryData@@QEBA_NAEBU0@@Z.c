/*
 * XREFs of ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x18007F4E8
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800F78A0 (-IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleGeometryData::operator==(__int64 a1, __int64 a2)
{
  char v2; // r8
  char result; // al

  v2 = *(_BYTE *)(a1 + 52);
  result = 0;
  if ( v2 == *(_BYTE *)(a2 + 52)
    && *(float *)a1 == *(float *)a2
    && *(float *)(a1 + 4) == *(float *)(a2 + 4)
    && *(float *)(a1 + 8) == *(float *)(a2 + 8)
    && *(float *)(a1 + 12) == *(float *)(a2 + 12)
    && *(float *)(a1 + 16) == *(float *)(a2 + 16)
    && *(float *)(a1 + 20) == *(float *)(a2 + 20) )
  {
    result = 1;
    if ( !v2
      && (*(float *)(a1 + 24) != *(float *)(a2 + 24)
       || *(float *)(a1 + 28) != *(float *)(a2 + 28)
       || *(float *)(a1 + 40) != *(float *)(a2 + 40)
       || *(float *)(a1 + 44) != *(float *)(a2 + 44)
       || *(float *)(a1 + 32) != *(float *)(a2 + 32)
       || *(float *)(a1 + 36) != *(float *)(a2 + 36)) )
    {
      return 0;
    }
  }
  return result;
}
