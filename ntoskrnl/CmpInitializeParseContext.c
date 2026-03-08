/*
 * XREFs of CmpInitializeParseContext @ 0x1406BC030
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall CmpInitializeParseContext(__int64 a1)
{
  memset((void *)a1, 0, 0x128uLL);
  *(_DWORD *)(a1 + 96) = -1;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  return memset((void *)(a1 + 216), 0, 0x50uLL);
}
