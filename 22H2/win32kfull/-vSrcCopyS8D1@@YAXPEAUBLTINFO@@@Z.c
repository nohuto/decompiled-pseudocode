/*
 * XREFs of ?vSrcCopyS8D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02C9260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS8D1(struct BLTINFO *a1)
{
  __int64 v1; // rdx
  char v2; // r10
  int v3; // ebp
  int v4; // esi
  __int64 v5; // r15
  _BYTE *v6; // r11
  unsigned __int8 *v7; // rbx
  int v8; // r8d
  _BYTE *v9; // rdi
  unsigned __int8 *v10; // r14
  __int64 v11; // rax
  char v12; // dl
  int v13; // r8d

  v1 = *((int *)a1 + 14);
  v2 = 0;
  v3 = v1 + *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v6 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v1 >> 3));
  v7 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  while ( 1 )
  {
    v8 = *((_DWORD *)a1 + 14);
    v9 = v6;
    v10 = v7;
    if ( (v8 & 7) != 0 )
      v2 = *v6 >> (8 - (v8 & 7));
    while ( v8 != v3 )
    {
      v11 = *v10;
      v12 = 2 * v2;
      ++v10;
      v2 = (2 * v2) | 1;
      if ( !*(_DWORD *)(v5 + 4 * v11) )
        v2 = v12;
      if ( (++v8 & 7) == 0 )
        *v9++ = v2;
    }
    v13 = v8 & 7;
    if ( v13 )
    {
      v2 <<= 8 - v13;
      *v9 = (255 >> v13) & *v9 | v2 & ~(255 >> v13);
    }
    if ( !--v4 )
      break;
    v7 += *((int *)a1 + 10);
    v6 += *((int *)a1 + 11);
  }
}
