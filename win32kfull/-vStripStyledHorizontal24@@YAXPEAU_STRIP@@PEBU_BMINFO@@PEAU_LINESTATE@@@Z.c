/*
 * XREFs of ?vStripStyledHorizontal24@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FD020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledHorizontal24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // rbx
  int v5; // eax
  __int64 v6; // r10
  int v7; // esi
  int v8; // ebp
  int v9; // r11d
  char *v10; // r14
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // rax
  _DWORD *v16; // rax

  v3 = (int *)((char *)a1 + 28);
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 20);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = *((_DWORD *)a3 + 5);
  v12 = 4 * *((_DWORD *)a1 + 2);
  v13 = -4 * *((_DWORD *)a1 + 2);
  if ( (v5 & 8) == 0 )
    v13 = v12;
  do
  {
    v14 = *v3;
    do
    {
      if ( !v9 )
      {
        *(_WORD *)v6 = v8 ^ v7 & *(_WORD *)v6;
        *(_BYTE *)(v6 + 2) = BYTE2(v8) ^ *(_BYTE *)(v6 + 2) & BYTE2(v7);
      }
      v11 -= *((_DWORD *)a3 + 2);
      v6 += 3LL;
      if ( v11 <= 0 )
      {
        v15 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v15;
        if ( (unsigned __int64)v15 > *((_QWORD *)a3 + 6) )
        {
          v15 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v15;
        }
        v11 += *v15;
        v9 = v9 == 0;
      }
      --v14;
    }
    while ( v14 );
    v11 -= *((_DWORD *)a3 + 3);
    v6 += v13;
    if ( v11 <= 0 )
    {
      v16 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v16;
      if ( (unsigned __int64)v16 > *((_QWORD *)a3 + 6) )
      {
        v16 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v16;
      }
      v11 += *v16;
      v9 = v9 == 0;
    }
    ++v3;
  }
  while ( v3 != (int *)v10 );
  *((_QWORD *)a1 + 2) = v6;
  *((_DWORD *)a3 + 20) = v9;
  *((_DWORD *)a3 + 5) = v11;
}
