/*
 * XREFs of BgpGxCopyBitmapToRectangle @ 0x140AE9388
 * Callers:
 *     BgpGxParseBitmap @ 0x140AE942C (BgpGxParseBitmap.c)
 * Callees:
 *     BgpGxMarkClean @ 0x1403031CC (BgpGxMarkClean.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void __fastcall BgpGxCopyBitmapToRectangle(__int64 a1, __int64 a2)
{
  char *v2; // rbp
  unsigned int v4; // r10d
  int v5; // r8d
  char *v6; // rbx
  unsigned int v7; // esi
  size_t v8; // r14
  __int64 v9; // r15

  v2 = (char *)(a2 + 40);
  v4 = *(_DWORD *)(a1 + 4) * (*(_DWORD *)(a1 + 8) >> 3);
  v6 = (char *)(*(_QWORD *)(a1 + 24) + v4 * (*(_DWORD *)a1 - 1));
  v7 = 0;
  if ( *(_DWORD *)a1 )
  {
    v8 = v4;
    v5 = (*(_BYTE *)(a1 + 4) * (unsigned __int8)(*(_DWORD *)(a1 + 8) >> 3)) & 3;
    v9 = (v5 != 0 ? 4 - v5 : 0) + v4;
    do
    {
      memmove(v6, v2, v8);
      v6 -= v8;
      v2 += v9;
      ++v7;
    }
    while ( v7 < *(_DWORD *)a1 );
  }
  BgpGxMarkClean(a1);
}
