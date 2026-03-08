/*
 * XREFs of PrintIndent @ 0x1C004E484
 * Callers:
 *     ParsePackage @ 0x1C0058160 (ParsePackage.c)
 *     ParseField @ 0x1C005AB30 (ParseField.c)
 *     ParseFieldList @ 0x1C005B230 (ParseFieldList.c)
 *     ParseScope @ 0x1C005C220 (ParseScope.c)
 *     ParseTerm @ 0x1C005C790 (ParseTerm.c)
 * Callees:
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
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
