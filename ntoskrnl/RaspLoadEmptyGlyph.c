/*
 * XREFs of RaspLoadEmptyGlyph @ 0x1403814C4
 * Callers:
 *     RaspLoadGlyphData @ 0x140383DAC (RaspLoadGlyphData.c)
 * Callees:
 *     RaspAllocateMemory @ 0x140383B7C (RaspAllocateMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RaspLoadEmptyGlyph(_QWORD *a1)
{
  char *Memory; // rax
  char *v3; // rbx

  Memory = (char *)RaspAllocateMemory(82LL);
  v3 = Memory;
  if ( !Memory )
    return 3221225626LL;
  memset(Memory, 0, 0x52uLL);
  *a1 = v3;
  *(_QWORD *)(v3 + 50) = v3 + 66;
  *(_QWORD *)(v3 + 58) = v3 + 74;
  return 0LL;
}
