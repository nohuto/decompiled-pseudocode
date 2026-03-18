/*
 * XREFs of ?vTransparentCopyS4D32@@YAXPEAUBLTINFO@@@Z @ 0x1C0290AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D32(struct BLTINFO *a1)
{
  int v1; // edi
  int v2; // r10d
  __int64 v3; // r15
  __int64 v4; // r8
  _DWORD *v5; // r9
  int v6; // r14d
  _BYTE *v7; // rbp
  _DWORD *v8; // r11
  int i; // esi
  __int64 v10; // rbx
  _BYTE *v11; // rax

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v5 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v2 )
  {
    v6 = *((_DWORD *)a1 + 12);
    --v2;
    v7 = (_BYTE *)v4;
    v8 = v5;
    for ( i = v1; i; ++v8 )
    {
      --i;
      v10 = *v7 & 0xF;
      if ( (v6 & 1) == 0 )
        v10 = (unsigned __int8)*v7 >> 4;
      v11 = v7 + 1;
      if ( (v6 & 1) == 0 )
        v11 = v7;
      LOBYTE(v6) = v6 + 1;
      v7 = v11;
      if ( (_DWORD)v10 != *((_DWORD *)a1 + 37) )
        *v8 = *(_DWORD *)(v3 + 4 * v10);
    }
    v4 += *((int *)a1 + 10);
    v5 = (_DWORD *)((char *)v5 + *((int *)a1 + 11));
  }
}
