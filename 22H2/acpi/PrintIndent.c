/*
 * XREFs of PrintIndent @ 0x1C004E4A4
 * Callers:
 *     ParsePackage @ 0x1C0058180 (ParsePackage.c)
 *     ParseField @ 0x1C005AB50 (ParseField.c)
 *     ParseFieldList @ 0x1C005B250 (ParseFieldList.c)
 *     ParseScope @ 0x1C005C240 (ParseScope.c)
 *     ParseTerm @ 0x1C005C7B0 (ParseTerm.c)
 * Callees:
 *     ConPrintf @ 0x1C004D7D8 (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C006F834; ++i )
    result = ConPrintf("| ");
  return result;
}
