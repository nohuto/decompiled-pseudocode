/*
 * XREFs of RaspRectangleCreate @ 0x1403B2FEC
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403B1CB8 (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x1403B2780 (RaspScanConvert.c)
 * Callees:
 *     BgpGxInitializeRectangle @ 0x1403B3064 (BgpGxInitializeRectangle.c)
 *     RaspAllocateMemory @ 0x1403B3B78 (RaspAllocateMemory.c)
 */

__int64 __fastcall RaspRectangleCreate(_DWORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 Memory; // r8
  __int64 result; // rax
  __int64 v9; // r8

  v6 = ((a2 * *a1 * a1[1] + 7) >> 3) + 72;
  Memory = RaspAllocateMemory(v6);
  if ( !Memory )
    return 3221225495LL;
  result = BgpGxInitializeRectangle(a1, a2, Memory, v6);
  *a3 = v9;
  return result;
}
