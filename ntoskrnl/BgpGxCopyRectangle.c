/*
 * XREFs of BgpGxCopyRectangle @ 0x140AEF654
 * Callers:
 *     BgpRasPrintGlyph @ 0x140381CD4 (BgpRasPrintGlyph.c)
 * Callees:
 *     BgpGxMarkClean @ 0x1403031CC (BgpGxMarkClean.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void __fastcall BgpGxCopyRectangle(__int64 a1, unsigned int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v5; // r10d
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // eax
  char *v12; // rdi
  char *v13; // rsi
  size_t v14; // r15

  v5 = a2[1];
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *a2;
  v9 = *(_DWORD *)(a1 + 8) >> 3;
  if ( *a2 >= *(_DWORD *)a1 )
    v8 = *(_DWORD *)a1;
  v10 = a2[1];
  if ( v5 >= v7 )
    v10 = *(_DWORD *)(a1 + 4);
  v11 = v9 * v10;
  v12 = (char *)(*((_QWORD *)a2 + 3) + v9 * (*a4 + a4[1] * v5));
  v13 = (char *)(*(_QWORD *)(a1 + 24) + v9 * (*a3 + a3[1] * v7));
  if ( v8 )
  {
    v14 = v11;
    do
    {
      memmove(v13, v12, v14);
      v12 += a2[1] * v9;
      v13 += (unsigned int)(*(_DWORD *)(a1 + 4) * v9);
      --v8;
    }
    while ( v8 );
  }
  BgpGxMarkClean(a1);
}
