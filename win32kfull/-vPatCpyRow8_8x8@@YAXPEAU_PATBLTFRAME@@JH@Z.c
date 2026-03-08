/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02E8D5C
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02F87A0 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C00180E8 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v3; // r8
  int v4; // eax
  struct _PATBLTFRAME *v5; // r11
  int v6; // edx
  __int64 v7; // r13
  int v8; // edi
  char v9; // di
  int *v10; // r15
  __int64 v11; // r10
  int v12; // r12d
  int v13; // r14d
  int v14; // edx
  int v15; // r8d
  int v16; // r14d
  __int64 v17; // r9
  __int64 v18; // rbx
  int v19; // r8d
  int v20; // esi
  unsigned int v21; // r10d
  unsigned int v22; // esi
  int v23; // eax
  int v24; // ecx
  int v25; // edi
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  unsigned __int64 v31; // rax
  int v32; // r14d
  int v33; // r14d
  int *v34; // rcx
  int v35; // r9d
  char v36; // [rsp+20h] [rbp-58h]
  _DWORD v37[2]; // [rsp+28h] [rbp-50h] BYREF
  int *v38; // [rsp+30h] [rbp-48h]
  int *v39; // [rsp+38h] [rbp-40h]
  int *v40; // [rsp+40h] [rbp-38h]
  _QWORD v41[2]; // [rsp+48h] [rbp-30h] BYREF
  int v42; // [rsp+58h] [rbp-20h]
  int v43; // [rsp+5Ch] [rbp-1Ch]
  int v44; // [rsp+60h] [rbp-18h]
  int v45; // [rsp+64h] [rbp-14h]
  __int64 v46; // [rsp+68h] [rbp-10h]
  char v48; // [rsp+C8h] [rbp+50h]
  unsigned int v50; // [rsp+D8h] [rbp+60h]

  v3 = (int *)*((_QWORD *)a1 + 3);
  v41[0] = 0LL;
  v4 = *((_DWORD *)a1 + 4) * a2;
  v5 = a1;
  v44 = 0;
  v46 = 0LL;
  v38 = v3;
  v6 = (a2 - *((_DWORD *)a1 + 9)) & 7;
  v7 = *(_QWORD *)a1 + v4;
  v50 = *((_DWORD *)a1 + 8) & 7;
  v8 = *((_DWORD *)a1 + 8) & 3;
  v39 = (int *)*((_QWORD *)a1 + 1);
  LOBYTE(v4) = 8 * (4 - v8);
  v9 = 8 * v8;
  v48 = v4;
  v40 = v39 + 24;
  v10 = (int *)((char *)v39 + (unsigned int)(12 * v6));
  v36 = v9;
  do
  {
    v11 = *v3;
    v12 = 0;
    v13 = v3[1];
    v14 = *v3 & 3;
    v15 = v13 - v11;
    v16 = v13 & 3;
    if ( v15 - (-v14 & 3) - v16 >= 0 )
      v12 = (v15 - (-v14 & 3) - v16) >> 2;
    if ( v14 == 1 )
    {
      if ( v15 == 1 )
      {
        v14 = 4;
      }
      else
      {
        if ( v15 != 2 )
          goto LABEL_13;
        v14 = 5;
      }
      goto LABEL_12;
    }
    if ( v14 == 2 && v15 == 1 )
    {
      v14 = 6;
LABEL_12:
      v16 = 0;
    }
LABEL_13:
    v42 = 0;
    v41[1] = v37;
    v43 = 8;
    v17 = ((int)v11 >> 2) & 1;
    v45 = 2;
    v18 = v7 + (v11 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)v5 + 8) )
    {
      v21 = *v10;
      v22 = v10[1];
      if ( v50 >= 4 )
      {
        v19 = v10[1];
        if ( v50 == 4 )
        {
          v20 = *v10;
        }
        else
        {
          v19 = (v21 >> v48) | (v22 << v9);
          v20 = (v22 >> v48) | (v21 << v9);
        }
      }
      else
      {
        v19 = (v22 >> v48) | (v21 << v9);
        v20 = (v21 >> v48) | (v22 << v9);
      }
      if ( (_DWORD)v17 )
      {
        v23 = v19;
        v19 = v20;
        v20 = v23;
      }
    }
    else
    {
      v19 = v10[v17];
      v20 = v10[(((int)v11 >> 2) & 1) == 0];
    }
    v24 = v12;
    v25 = v19;
    if ( v14 )
    {
      v26 = v14 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( !v30 )
              {
                *(_BYTE *)(v18 + 1) = BYTE1(v19);
                goto LABEL_31;
              }
              if ( v30 == 1 )
LABEL_31:
                *(_BYTE *)(v18 + 2) = BYTE2(v19);
            }
            else
            {
              *(_BYTE *)(v18 + 1) = BYTE1(v19);
            }
          }
          else
          {
            *(_BYTE *)(v18 + 3) = HIBYTE(v19);
          }
LABEL_36:
          v25 = v20;
          v18 += 4LL;
          v20 = v19;
          goto LABEL_37;
        }
      }
      else
      {
        *(_BYTE *)(v18 + 1) = BYTE1(v19);
      }
      *(_WORD *)(v18 + 2) = HIWORD(v19);
      goto LABEL_36;
    }
LABEL_37:
    if ( v12 <= 7 )
    {
      if ( (unsigned int)v12 >= 2 )
      {
        v31 = (unsigned __int64)(unsigned int)v12 >> 1;
        do
        {
          *(_DWORD *)v18 = v25;
          v24 -= 2;
          *(_DWORD *)(v18 + 4) = v20;
          v18 += 8LL;
          --v31;
        }
        while ( v31 );
      }
      if ( v24 )
      {
        *(_DWORD *)v18 = v25;
        v18 += 4LL;
      }
    }
    else
    {
      v37[0] = v25;
      v37[1] = v20;
      v44 = v12;
      v41[0] = v18;
      vFetchAndCopy((__int64)v41);
      v5 = a1;
      v18 += 4LL * v12;
    }
    if ( v16 )
    {
      if ( (v12 & 1) != 0 )
        v25 = v20;
      v32 = v16 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          if ( v33 == 1 )
          {
            *(_WORD *)v18 = v25;
            *(_BYTE *)(v18 + 2) = BYTE2(v25);
          }
        }
        else
        {
          *(_WORD *)v18 = v25;
        }
      }
      else
      {
        *(_BYTE *)v18 = v25;
      }
    }
    v34 = v10 + 3;
    v3 = v38 + 2;
    v35 = a3 - 1;
    v10 = v39;
    v7 += *((int *)v5 + 4);
    v9 = v36;
    if ( v34 < v40 )
      v10 = v34;
    v38 += 2;
    --a3;
  }
  while ( v35 );
}
