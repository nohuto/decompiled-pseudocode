/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x140A226A0
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall CmpSortedValueEnumStackInitialize(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 14) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_WORD *)(a1 + 8) = -1;
  return memset((void *)(a1 + 16), 0, 0x40uLL);
}
