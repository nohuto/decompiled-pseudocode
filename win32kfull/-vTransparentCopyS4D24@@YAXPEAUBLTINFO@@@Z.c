/*
 * XREFs of ?vTransparentCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0299AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D24(struct BLTINFO *a1)
{
  int v2; // r9d
  int v3; // esi
  int v4; // r11d
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r10
  unsigned __int8 *v8; // rbp
  int v9; // edi
  char v10; // r14
  _BYTE *v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned __int8 *v15; // rax
  int v16; // ecx

  v2 = *((_DWORD *)a1 + 12);
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v6 = *((_QWORD *)a1 + 1) + ((__int64)v2 >> 1);
  v7 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  while ( v4 )
  {
    --v4;
    v8 = (unsigned __int8 *)v6;
    v9 = v3;
    v10 = v2;
    if ( v3 )
    {
      v11 = (_BYTE *)(v7 + 2);
      do
      {
        --v9;
        v12 = *v8;
        v13 = v12 & 0xF;
        v14 = v12 >> 4;
        if ( (v10 & 1) == 0 )
          v13 = v14;
        v15 = v8 + 1;
        if ( (v10 & 1) == 0 )
          v15 = v8;
        ++v10;
        v8 = v15;
        if ( (_DWORD)v13 != *((_DWORD *)a1 + 37) )
        {
          v16 = *(_DWORD *)(v5 + 4 * v13);
          *(v11 - 2) = v16;
          *v11 = BYTE2(v16);
          *(v11 - 1) = BYTE1(v16);
        }
        v11 += 3;
      }
      while ( v9 );
      v2 = *((_DWORD *)a1 + 12);
    }
    v6 += *((int *)a1 + 10);
    v7 += *((int *)a1 + 11);
  }
}
