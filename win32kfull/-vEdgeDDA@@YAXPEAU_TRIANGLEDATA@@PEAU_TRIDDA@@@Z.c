/*
 * XREFs of ?vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C028FBF8
 * Callers:
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C028F930 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vEdgeDDA(struct _TRIANGLEDATA *a1, struct _TRIDDA *a2)
{
  int v2; // edi
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // esi
  __int64 v10; // r14
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // r13
  __int64 v14; // rax
  char *v15; // rcx
  __int64 v16; // [rsp+50h] [rbp+18h]
  __int64 v17; // [rsp+58h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 14);
  v4 = *((_QWORD *)a2 + 8);
  v5 = *((_QWORD *)a2 + 9);
  v6 = *((_QWORD *)a2 + 10);
  v7 = *((_QWORD *)a2 + 11);
  v8 = *((_DWORD *)a2 + 10);
  v9 = *((_DWORD *)a2 + 9);
  if ( v2 )
  {
    v10 = *((int *)a2 + 13);
    v11 = *((_DWORD *)a2 + 6);
    v12 = *((_DWORD *)a2 + 7);
    v13 = *((_QWORD *)a2 + 12);
    v16 = *((_QWORD *)a2 + 14);
    v17 = *((_QWORD *)a2 + 15);
    v14 = *((_QWORD *)a2 + 13);
    v15 = (char *)a1 + 32 * v10 + 8 * v10 + 168;
    do
    {
      --v2;
      if ( v10 >= 0 )
      {
        if ( v8 < *(_DWORD *)v15 )
        {
          *(_DWORD *)v15 = v8;
          *((_QWORD *)v15 + 1) = v4;
          *((_QWORD *)v15 + 2) = v5;
          *((_QWORD *)v15 + 3) = v6;
          *((_QWORD *)v15 + 4) = v7;
        }
        if ( v8 > *((_DWORD *)v15 + 1) )
          *((_DWORD *)v15 + 1) = v8;
      }
      v6 += v16;
      ++v10;
      v7 += v17;
      v15 += 40;
      v8 += v11;
      v4 += v13;
      v5 += v14;
      v9 -= v12;
      if ( v9 < 0 )
      {
        v8 += *((_DWORD *)a2 + 12);
        v4 += *((_QWORD *)a1 + 2);
        v5 += *((_QWORD *)a1 + 3);
        v6 += *((_QWORD *)a1 + 4);
        v7 += *((_QWORD *)a1 + 5);
        v9 += *((_DWORD *)a2 + 3);
      }
    }
    while ( v2 );
  }
}
