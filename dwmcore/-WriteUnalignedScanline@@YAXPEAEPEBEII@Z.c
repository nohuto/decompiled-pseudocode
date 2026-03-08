/*
 * XREFs of ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x18027F1C8
 * Callers:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x18027F134 (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WriteUnalignedScanline(
        unsigned __int8 *a1,
        const unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int8 *i; // r11
  unsigned int v5; // ebp
  int v6; // r10d
  const unsigned __int8 *v7; // rdi
  unsigned __int8 v8; // al
  unsigned int v9; // r10d
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // al
  unsigned int v12; // ebx
  char v13; // dl

  i = a1;
  v5 = 8 - a4;
  v6 = 255 >> a4;
  v7 = a2;
  if ( a3 < 8 - a4 )
  {
    v8 = *a1 & ~(((unsigned __int8)v6 >> a3) ^ v6) | (((unsigned __int8)v6 >> a3) ^ v6) & (*a2 >> a4);
LABEL_9:
    *i = v8;
    return;
  }
  *a1 = (*a2 >> a4) | *a1 & ~(_BYTE)v6;
  v9 = (a3 - v5) >> 3;
  for ( i = a1 + 1; v9; --v9 )
  {
    v10 = *v7;
    v11 = *++v7;
    *i++ = (v11 >> a4) | (v10 << v5);
  }
  v12 = ((_BYTE)a3 - (_BYTE)v5) & 7;
  if ( (((_BYTE)a3 - (_BYTE)v5) & 7) != 0 )
  {
    v13 = *v7 << v5;
    if ( v12 > a4 )
      v13 |= v7[1] >> a4;
    v8 = ~(255 >> v12) & v13 | (255 >> v12) & *i;
    goto LABEL_9;
  }
}
