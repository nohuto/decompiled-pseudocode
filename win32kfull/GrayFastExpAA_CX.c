/*
 * XREFs of GrayFastExpAA_CX @ 0x1C0264F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayFastExpAA_CX(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, int a5)
{
  __int64 v5; // rax
  unsigned __int16 *v6; // r13
  unsigned __int16 v9; // r15
  unsigned __int8 *v10; // rsi
  int v11; // ebp
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r10d
  int v16; // ebx
  int v17; // edx
  int v18; // r9d
  int v19; // r11d
  int v20; // r11d
  int v21; // r8d
  _WORD *v22; // rdi
  _WORD *v23; // rdi
  _WORD *v24; // rdi
  unsigned int v25; // ecx
  int v26; // r11d
  int v27; // r8d
  _WORD *v28; // rdi
  _WORD *v29; // rdi
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned __int16 v32; // [rsp+4h] [rbp-34h]
  unsigned __int16 v33; // [rsp+48h] [rbp+10h]

  if ( a2 )
  {
    v5 = *(unsigned __int8 *)(a1 + 80);
    v6 = *(unsigned __int16 **)(a1 + 88);
    v9 = GrayIdxWORD[*(unsigned __int8 *)(v5 + a2 - 1)];
    v10 = (unsigned __int8 *)(v5 + a2 + 1);
    LOWORD(v11) = GrayIdxWORD[*(unsigned __int8 *)(v5 + a2)];
    while ( 1 )
    {
      v12 = *v10++;
      v13 = *v6++;
      v14 = (unsigned __int16)v11;
      v15 = (unsigned __int16)v11;
      v16 = (unsigned __int16)v11;
      v17 = v9;
      v18 = v9;
      v19 = v9;
      v32 = v9;
      v33 = v9;
      v9 = v11;
      v11 = GrayIdxWORD[v12];
      if ( v13 == 1 )
        break;
      switch ( v13 )
      {
        case 2:
          *a3 = (unsigned int)(v18 + 3 * v15 + 2) >> 2;
          a3 = (_WORD *)((char *)a3 + a5);
          v31 = (unsigned int)(v11 + 3 * v15 + 2) >> 2;
          goto LABEL_16;
        case 3:
          *a3 = (unsigned int)(v16 + v19 + 2 * (2 * v16 + v19 + 2)) >> 3;
          v29 = (_WORD *)((char *)a3 + a5);
          v30 = 2 * v16 + 2;
          *v29 = (v19 + v11 + 14 * v16 + 8) >> 4;
LABEL_11:
          a3 = (_WORD *)((char *)v29 + a5);
          v31 = (unsigned int)(v16 + v11 + 2 * (v11 + v30)) >> 3;
LABEL_16:
          *a3 = v31;
          goto LABEL_17;
        case 4:
          v16 = v9;
          v26 = 2 * v9;
          v27 = 4 * v9;
          *a3 = (v9 + v32 + 2 * (v26 + (unsigned int)v32 + 2)) >> 3;
          v28 = (_WORD *)((char *)a3 + a5);
          *v28 = (v32 + v27 + 8 + v11 + 2 * ((unsigned int)v32 + v27)) >> 4;
          v29 = (_WORD *)((char *)v28 + a5);
          v30 = v26 + 2;
          *v29 = (v27 + v11 + 8 + (unsigned int)v32 + 2 * (v27 + v11)) >> 4;
          goto LABEL_11;
        case 5:
          v20 = 19 * v9;
          v21 = 25 * v9;
          *a3 = (v20 + 13 * (unsigned int)v33 + 16) >> 5;
          v22 = (_WORD *)((char *)a3 + a5);
          *v22 = (v11 + 6 * (unsigned int)v33 + v21 + 16) >> 5;
          v23 = (_WORD *)((char *)v22 + a5);
          *v23 = (v33 + v11 + 2 * (v33 + v11 + 13 * (unsigned int)v9 + 8)) >> 5;
          v24 = (_WORD *)((char *)v23 + a5);
          *v24 = ((unsigned int)v33 + 6 * v11 + v21 + 16) >> 5;
          a3 = (_WORD *)((char *)v24 + a5);
          v25 = 13 * v11 + v20 + 16;
          goto LABEL_15;
      }
      a3 = (_WORD *)((char *)a3 + (unsigned int)(a5 * (v13 - 1)));
LABEL_17:
      a3 = (_WORD *)((char *)a3 + a5);
      if ( a3 == a4 )
        return;
    }
    v25 = v17 + v11 + 2 * (v14 + 2 * (v17 + v14 + v11 + 4 * v14 + 4));
LABEL_15:
    v31 = v25 >> 5;
    goto LABEL_16;
  }
}
