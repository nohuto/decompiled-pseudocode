/*
 * XREFs of ?vTransparentCopyS4D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02999F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D16(struct BLTINFO *a1)
{
  __int64 v1; // rax
  int v3; // esi
  int v4; // r10d
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r8
  _WORD *v8; // r9
  unsigned __int8 *v9; // rbp
  _WORD *v10; // r11
  int v11; // edi
  char v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned __int8 *v16; // rax

  v1 = *(_QWORD *)a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((int *)a1 + 12);
  v6 = *(_QWORD *)(v1 + 16);
  v7 = *((_QWORD *)a1 + 1) + (v5 >> 1);
  v8 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  while ( v4 )
  {
    --v4;
    v9 = (unsigned __int8 *)v7;
    v10 = v8;
    v11 = v3;
    v12 = v5;
    if ( v3 )
    {
      do
      {
        --v11;
        v13 = *v9;
        v14 = v13 & 0xF;
        v15 = v13 >> 4;
        if ( (v12 & 1) == 0 )
          v14 = v15;
        v16 = v9 + 1;
        if ( (v12 & 1) == 0 )
          v16 = v9;
        ++v12;
        v9 = v16;
        if ( (_DWORD)v14 != *((_DWORD *)a1 + 37) )
          *v10 = *(_WORD *)(v6 + 4 * v14);
        ++v10;
      }
      while ( v11 );
      LODWORD(v5) = *((_DWORD *)a1 + 12);
    }
    v7 += *((int *)a1 + 10);
    v8 = (_WORD *)((char *)v8 + *((int *)a1 + 11));
  }
}
