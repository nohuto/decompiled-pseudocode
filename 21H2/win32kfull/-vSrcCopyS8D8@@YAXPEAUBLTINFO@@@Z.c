/*
 * XREFs of ?vSrcCopyS8D8@@YAXPEAUBLTINFO@@@Z @ 0x1C014F2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS8D8(struct BLTINFO *a1)
{
  unsigned int v1; // r11d
  int v2; // esi
  _BYTE *v3; // r8
  __int64 v4; // r10
  unsigned __int8 *v5; // rdx
  signed int v6; // ebp
  int v7; // edi
  signed int v8; // r14d
  unsigned int v9; // ebx
  int v10; // r11d
  unsigned int v11; // ebx
  int i; // r9d
  unsigned int j; // r9d
  int v14; // ecx
  __int64 v15; // rax
  int k; // r9d
  __int64 v17; // rax
  __int64 v18; // rax

  v1 = *((_DWORD *)a1 + 7);
  v2 = v1;
  v3 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v6 = *((_DWORD *)a1 + 10) - v1;
  v7 = *((_DWORD *)a1 + 8);
  v8 = *((_DWORD *)a1 + 11) - v1;
  if ( (-(*((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 14)) & 3u) <= v1 )
    v2 = -(*((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 14)) & 3;
  v9 = v1 - v2;
  v10 = (v1 - v2) & 3;
  v11 = v9 >> 2;
  while ( 1 )
  {
    for ( i = v2; i; --i )
    {
      v18 = *v5++;
      *v3++ = *(_BYTE *)(v4 + 4 * v18);
    }
    for ( j = v11; j; --j )
    {
      v14 = *(_DWORD *)(v4 + 4LL * v5[1]) | ((*(_DWORD *)(v4 + 4LL * v5[2]) | (*(_DWORD *)(v4 + 4LL * v5[3]) << 8)) << 8);
      v15 = *v5;
      v5 += 4;
      *(_DWORD *)v3 = *(_DWORD *)(v4 + 4 * v15) | (v14 << 8);
      v3 += 4;
    }
    for ( k = v10; k; --k )
    {
      v17 = *v5++;
      *v3++ = *(_BYTE *)(v4 + 4 * v17);
    }
    if ( !--v7 )
      break;
    v5 += v6;
    v3 += v8;
  }
}
