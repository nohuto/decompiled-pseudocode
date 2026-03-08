/*
 * XREFs of ?vPatCpyRow4_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02E8914
 * Callers:
 *     ?vBrushPath4_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02F8750 (-vBrushPath4_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vPatternCopyLoopRow@@YAXJPEAKPEAU_PATBLTFRAME@@HKKKKJPEBK@Z @ 0x1C02E9D1C (-vPatternCopyLoopRow@@YAXJPEAKPEAU_PATBLTFRAME@@HKKKKJPEBK@Z.c)
 */

void __fastcall vPatCpyRow4_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v4; // r14
  const unsigned int *v7; // rbp
  char *v8; // r9
  char v9; // r11
  char *v10; // r8
  char v11; // al
  int v12; // edx
  __int64 v13; // rdi
  unsigned int v14; // edx
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  int v17; // r15d
  int v18; // ecx
  int v19; // r9d
  int v20; // ecx
  int v21; // [rsp+50h] [rbp-68h]
  char v22; // [rsp+58h] [rbp-60h] BYREF
  char v23; // [rsp+5Ah] [rbp-5Eh] BYREF
  __int64 v24; // [rsp+78h] [rbp-40h] BYREF

  v4 = (int *)*((_QWORD *)a1 + 3);
  if ( *((_DWORD *)a1 + 8) )
  {
    v7 = (const unsigned int *)&v22;
    v8 = &v23;
    v9 = 4 * *((_BYTE *)a1 + 32);
    v10 = (char *)(*((_QWORD *)a1 + 1) + 2LL);
    do
    {
      HIBYTE(v21) = *(v10 - 2);
      BYTE2(v21) = *(v10 - 1);
      v11 = *v10;
      v10 += 4;
      BYTE1(v21) = v11;
      LOBYTE(v21) = *(v10 - 3);
      v12 = __ROR4__(v21, v9);
      v8[1] = v12;
      *v8 = BYTE1(v12);
      *(v8 - 1) = BYTE2(v12);
      *(v8 - 2) = HIBYTE(v12);
      v8 += 4;
    }
    while ( v8 - 2 < (char *)&v24 );
  }
  else
  {
    v7 = (const unsigned int *)*((_QWORD *)a1 + 1);
  }
  v13 = *(_QWORD *)a1 + *((_DWORD *)a1 + 4) * a2;
  do
  {
    v14 = dword_1C032AF00[*v4 & 7];
    v15 = ~v14;
    v16 = dword_1C032AF00[v4[1] & 7];
    if ( !v16 )
      v16 = -1;
    v17 = (int)((v4[1] >> 1) - (((*v4 + 7) >> 1) & 0xFFFFFFFC)) >> 2;
    if ( v17 + 1 > 5 )
    {
      if ( v17 == 5 )
        goto LABEL_23;
      v18 = v17 - 6;
      if ( v17 == 6 )
        goto LABEL_23;
    }
    else
    {
      if ( v17 == 4 )
        goto LABEL_23;
      if ( v17 == -1 )
        goto LABEL_15;
      v18 = (int)((v4[1] >> 1) - (((*v4 + 7) >> 1) & 0xFFFFFFFC)) >> 2;
      if ( !v17 )
      {
        if ( v14 && v16 != -1 )
        {
          v19 = 8;
          goto LABEL_26;
        }
LABEL_15:
        v15 &= v16;
        v19 = 9;
        v14 = ~v15;
        goto LABEL_26;
      }
    }
    v20 = v18 - 1;
    if ( v20 && (unsigned int)(v20 - 1) >= 2 )
    {
      if ( v14 )
        v19 = v16 == -1;
      else
        v19 = 3 - (v16 != -1);
      goto LABEL_26;
    }
LABEL_23:
    if ( v14 )
      v19 = 5 - (v16 != -1);
    else
      v19 = 7 - (v16 != -1);
LABEL_26:
    vPatternCopyLoopRow(
      a2,
      (unsigned int *)(v13 + (((__int64)*v4 >> 1) & 0xFFFFFFFFFFFFFFFCuLL)),
      a1,
      v19,
      v16,
      v15,
      ~v16,
      v14,
      v17,
      v7);
    v13 += *((int *)a1 + 4);
    v4 += 2;
    ++a2;
    --a3;
  }
  while ( a3 );
}
