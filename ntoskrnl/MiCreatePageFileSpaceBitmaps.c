/*
 * XREFs of MiCreatePageFileSpaceBitmaps @ 0x140835CAC
 * Callers:
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x140835934 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiCreatePageFileSpaceBitmaps(unsigned int a1)
{
  unsigned int v2; // ebx
  _QWORD *result; // rax

  v2 = (a1 >> 6) + ((a1 & 0x3F) != 0);
  result = MiAllocatePool(64, 16 * ((a1 >> 6) + ((a1 & 0x3F) != 0)) + 40, 0x62506D4Du);
  if ( result )
  {
    *(_DWORD *)result = 1;
    result[2] = result + 5;
    *((_DWORD *)result + 2) = a1;
    *((_DWORD *)result + 6) = a1;
    result[4] = &result[v2 + 5];
  }
  return result;
}
