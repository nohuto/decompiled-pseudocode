/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C7BEC
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02D07D0 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02DBE2C (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v3; // r8
  struct _PATBLTFRAME *v4; // r11
  int v5; // eax
  int v6; // edi
  int v7; // edx
  __int64 v8; // r13
  int *v9; // rcx
  char v10; // di
  int *v11; // r15
  __int64 v12; // r10
  int v13; // r12d
  int v14; // r14d
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r14d
  __int64 v18; // r9
  __int64 v19; // rbx
  int v20; // r8d
  int v21; // esi
  unsigned int v22; // r10d
  unsigned int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // edi
  unsigned __int64 v27; // rax
  int v28; // r14d
  int v29; // r14d
  int *v30; // rcx
  int v31; // r9d
  char v32; // [rsp+20h] [rbp-58h]
  _DWORD v33[2]; // [rsp+28h] [rbp-50h] BYREF
  int *v34; // [rsp+30h] [rbp-48h]
  int *v35; // [rsp+38h] [rbp-40h]
  unsigned __int64 v36; // [rsp+40h] [rbp-38h]
  _QWORD v37[2]; // [rsp+48h] [rbp-30h] BYREF
  int v38; // [rsp+58h] [rbp-20h]
  int v39; // [rsp+5Ch] [rbp-1Ch]
  int v40; // [rsp+60h] [rbp-18h]
  int v41; // [rsp+64h] [rbp-14h]
  __int64 v42; // [rsp+68h] [rbp-10h]
  char v44; // [rsp+C8h] [rbp+50h]
  unsigned int v46; // [rsp+D8h] [rbp+60h]

  v3 = (int *)*((_QWORD *)a1 + 3);
  v4 = a1;
  v5 = a2 * *((_DWORD *)a1 + 4);
  v37[0] = 0LL;
  v40 = 0;
  v6 = *((_DWORD *)a1 + 8);
  v7 = (a2 - *((_DWORD *)a1 + 9)) & 7;
  v8 = *(_QWORD *)a1 + v5;
  v9 = (int *)*((_QWORD *)a1 + 1);
  v46 = v6 & 7;
  LOBYTE(v6) = v6 & 3;
  v42 = 0LL;
  v34 = v3;
  LOBYTE(v5) = 8 * (4 - v6);
  v10 = 8 * v6;
  v44 = v5;
  v36 = (unsigned __int64)(v9 + 24);
  v11 = (int *)((char *)v9 + (unsigned int)(12 * v7));
  v35 = v9;
  v32 = v10;
  do
  {
    v12 = *v3;
    v13 = 0;
    v14 = v3[1];
    v15 = *v3 & 3;
    v16 = v14 - v12;
    v17 = v14 & 3;
    if ( v16 - (-(int)v15 & 3) - v17 >= 0 )
      v13 = (v16 - (-(int)v15 & 3) - v17) >> 2;
    if ( (_DWORD)v15 == 1 )
    {
      if ( v16 == 1 )
      {
        v15 = 4LL;
      }
      else
      {
        if ( v16 != 2 )
          goto LABEL_13;
        v15 = 5LL;
      }
      goto LABEL_12;
    }
    if ( (_DWORD)v15 == 2 && v16 == 1 )
    {
      v15 = 6LL;
LABEL_12:
      v17 = 0;
    }
LABEL_13:
    v38 = 0;
    v37[1] = v33;
    v39 = 8;
    v18 = ((int)v12 >> 2) & 1;
    v41 = 2;
    v19 = v8 + (v12 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)v4 + 8) )
    {
      v22 = *v11;
      v23 = v11[1];
      if ( v46 >= 4 )
      {
        v20 = v11[1];
        if ( v46 == 4 )
        {
          v21 = *v11;
        }
        else
        {
          v20 = (v22 >> v44) | (v23 << v10);
          v21 = (v23 >> v44) | (v22 << v10);
        }
      }
      else
      {
        v20 = (v23 >> v44) | (v22 << v10);
        v21 = (v22 >> v44) | (v23 << v10);
      }
      if ( (_DWORD)v18 )
      {
        v24 = v20;
        v20 = v21;
        v21 = v24;
      }
    }
    else
    {
      v20 = v11[v18];
      v21 = v11[(((int)v12 >> 2) & 1) == 0];
    }
    v25 = v13;
    v26 = v20;
    if ( (_DWORD)v15 )
    {
      v15 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v15 )
      {
        v15 = (unsigned int)(v15 - 1);
        if ( (_DWORD)v15 )
        {
          v15 = (unsigned int)(v15 - 1);
          if ( (_DWORD)v15 )
          {
            v15 = (unsigned int)(v15 - 1);
            if ( (_DWORD)v15 )
            {
              v15 = (unsigned int)(v15 - 1);
              if ( !(_DWORD)v15 )
              {
                *(_BYTE *)(v19 + 1) = BYTE1(v20);
                goto LABEL_31;
              }
              if ( (_DWORD)v15 == 1 )
LABEL_31:
                *(_BYTE *)(v19 + 2) = BYTE2(v20);
            }
            else
            {
              *(_BYTE *)(v19 + 1) = BYTE1(v20);
            }
          }
          else
          {
            *(_BYTE *)(v19 + 3) = HIBYTE(v20);
          }
LABEL_36:
          v26 = v21;
          v19 += 4LL;
          v21 = v20;
          goto LABEL_37;
        }
      }
      else
      {
        *(_BYTE *)(v19 + 1) = BYTE1(v20);
      }
      *(_WORD *)(v19 + 2) = HIWORD(v20);
      goto LABEL_36;
    }
LABEL_37:
    if ( v13 <= 7 )
    {
      if ( (unsigned int)v13 >= 2 )
      {
        v27 = (unsigned __int64)(unsigned int)v13 >> 1;
        do
        {
          *(_DWORD *)v19 = v26;
          v25 -= 2;
          *(_DWORD *)(v19 + 4) = v21;
          v19 += 8LL;
          --v27;
        }
        while ( v27 );
      }
      if ( v25 )
      {
        *(_DWORD *)v19 = v26;
        v19 += 4LL;
      }
    }
    else
    {
      v33[0] = v26;
      v33[1] = v21;
      v40 = v13;
      v37[0] = v19;
      vFetchAndCopy(v37, v15);
      v4 = a1;
      v19 += 4LL * v13;
    }
    if ( v17 )
    {
      if ( (v13 & 1) != 0 )
        v26 = v21;
      v28 = v17 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 == 1 )
          {
            *(_WORD *)v19 = v26;
            *(_BYTE *)(v19 + 2) = BYTE2(v26);
          }
        }
        else
        {
          *(_WORD *)v19 = v26;
        }
      }
      else
      {
        *(_BYTE *)v19 = v26;
      }
    }
    v30 = v11 + 3;
    v3 = v34 + 2;
    v31 = a3 - 1;
    v11 = v35;
    v8 += *((int *)v4 + 4);
    v10 = v32;
    if ( (unsigned __int64)v30 < v36 )
      v11 = v30;
    v34 += 2;
    --a3;
  }
  while ( v31 );
}
