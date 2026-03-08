/*
 * XREFs of CmpPopulateKeyNodeInformation @ 0x140785DFC
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140614E8C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x1407AD510 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpCopyCompressedName @ 0x1407A47DC (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpPopulateKeyNodeInformation(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int16 v11; // ax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // eax

  v11 = 2 * *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
    v11 = *(_WORD *)(a2 + 72);
  v12 = v11;
  v13 = v11 + 24;
  if ( a4 )
  {
    v14 = (v11 + 31) & 0xFFFFFFF8;
    v13 = a4 + v14;
  }
  else
  {
    v14 = v11 + 24;
  }
  *a7 = v13;
  if ( a6 < 0x18 )
    return 3221225507LL;
  *(_QWORD *)a5 = *(_QWORD *)a1;
  v15 = *(_DWORD *)(a1 + 8);
  v16 = a6 - 24;
  *(_DWORD *)(a5 + 8) = v15;
  v17 = -1;
  *(_DWORD *)(a5 + 16) = a4;
  *(_DWORD *)(a5 + 20) = v12;
  if ( a4 )
    v17 = v14;
  *(_DWORD *)(a5 + 12) = v17;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    CmpCopyCompressedName(a5 + 24, v16, a2 + 76, *(unsigned __int16 *)(a2 + 72));
  }
  else
  {
    if ( (unsigned int)v16 <= v12 )
      v12 = a6 - 24;
    memmove((void *)(a5 + 24), (const void *)(a2 + 76), v12);
  }
  if ( a6 < v14 )
    return 2147483653LL;
  v18 = a6 - v14;
  if ( a4 )
  {
    if ( v18 > a4 )
      v18 = a4;
    memmove((void *)(a5 + v14), a3, v18);
  }
  return a6 < v13 ? 0x80000005 : 0;
}
