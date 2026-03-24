/*
 * XREFs of PrintIndent @ 0x1C00668F0
 * Callers:
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     ParseFieldList @ 0x1C0021C38 (ParseFieldList.c)
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 *     ParsePackage @ 0x1C0022100 (ParsePackage.c)
 * Callees:
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C0082804; ++i )
    result = ConPrintf("| ");
  return result;
}
