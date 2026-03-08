/*
 * XREFs of IntpAddNextProcessorToPartition @ 0x140B43CE8
 * Callers:
 *     IntpAssignProcessorsToPartitions @ 0x140B43C54 (IntpAssignProcessorsToPartitions.c)
 * Callees:
 *     IntPartCriticalFailure @ 0x140572584 (IntPartCriticalFailure.c)
 */

__int64 __fastcall IntpAddNextProcessorToPartition(ULONG_PTR BugCheckParameter4, unsigned __int64 *a2)
{
  ULONG_PTR v2; // r8
  __int64 result; // rax

  v2 = BugCheckParameter4;
  if ( !_BitScanForward64(&BugCheckParameter4, *a2) )
    IntPartCriticalFailure(0x1003uLL, v2);
  result = *(_QWORD *)(v2 + 8) | (1LL << BugCheckParameter4);
  *a2 &= ~(1LL << BugCheckParameter4);
  ++*(_BYTE *)(v2 + 1);
  *(_QWORD *)(v2 + 8) = result;
  return result;
}
