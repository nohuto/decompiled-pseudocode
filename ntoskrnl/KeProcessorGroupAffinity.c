/*
 * XREFs of KeProcessorGroupAffinity @ 0x1402A9490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeProcessorGroupAffinity(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  *(_DWORD *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 14) = 0;
  *(_WORD *)(a1 + 8) = v3 >> 6;
  result = 1LL << (v3 & 0x3F);
  *(_QWORD *)a1 = result;
  return result;
}
