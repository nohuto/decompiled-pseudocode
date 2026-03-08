/*
 * XREFs of ReadStringDelimited_0 @ 0x1403DC9D4
 * Callers:
 *     _winput_s @ 0x1403DCC54 (_winput_s.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ReadString_0 @ 0x1403DC78C (ReadString_0.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall ReadStringDelimited_0(
        char a1,
        unsigned __int16 **a2,
        wint_t *a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int16 v12; // di
  unsigned __int16 *v14; // rcx
  char v15; // r10
  unsigned __int16 *v16; // r8
  unsigned __int16 *v17; // r8
  unsigned __int16 i; // ax
  unsigned __int16 *v19; // rdx
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // r9
  unsigned __int64 v22; // rdx
  char v23; // al
  int v25[2048]; // [rsp+50h] [rbp-2048h] BYREF

  v12 = 0;
  memset(v25, 0, sizeof(v25));
  v14 = *a2;
  v15 = a1 | 8;
  v16 = *a2 + 1;
  *a2 = v16;
  if ( *v16 != 94 )
  {
    v16 = v14;
    v15 = a1;
  }
  v17 = v16 + 1;
  i = *v17;
  if ( *v17 != 93 )
    goto LABEL_5;
  HIBYTE(v25[2]) = 32;
  ++v17;
  v12 = 93;
  for ( i = *v17; i != 93; i = *v17 )
  {
LABEL_5:
    v19 = v17++;
    if ( i == 45 && v12 && (v20 = *v17, *v17 != 93) )
    {
      v17 = v19 + 2;
      if ( v12 >= v20 )
      {
        v21 = v12;
        v12 = v20;
      }
      else
      {
        v21 = v20;
      }
      do
      {
        v22 = (unsigned __int64)v12 >> 3;
        v23 = v12++;
        *((_BYTE *)v25 + v22) |= 1 << (v23 & 7);
      }
      while ( v12 <= v21 );
      v12 = 0;
    }
    else
    {
      v12 = i;
      *((_BYTE *)v25 + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
    }
  }
  *a2 = v17;
  return ReadString_0(v15, (__int64)v25, a3, a4, a5, a6, File, a8, a9);
}
