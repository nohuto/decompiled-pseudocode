/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C67B0
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02CFB70 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02DB1EC (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // r14
  int *v4; // rdx
  int v5; // r11d
  char v6; // cl
  char v7; // si
  char v8; // r11
  __int64 v9; // r9
  unsigned int v10; // r12d
  int v11; // r10d
  int v12; // r13d
  int v13; // ebx
  int v14; // edx
  int v15; // r15d
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edx
  int v19; // ebx
  int *v20; // rdi
  BOOL v21; // r8d
  unsigned __int64 v22; // r10
  int v23; // r9d
  __int64 v24; // rax
  _BOOL8 v25; // rcx
  int v26; // r8d
  int v27; // ebx
  int v28; // r15d
  unsigned int v29; // edx
  unsigned int v30; // r15d
  int v31; // eax
  int v32; // eax
  _BYTE *v33; // r14
  int v34; // r8d
  __int64 v35; // r10
  unsigned __int64 v36; // rdx
  int v37; // esi
  int v38; // r12d
  _BYTE *v39; // rdi
  char v40; // r9
  unsigned __int64 v41; // rax
  int *v42; // rcx
  bool v43; // zf
  int v44; // [rsp+20h] [rbp-79h]
  unsigned int v45; // [rsp+24h] [rbp-75h]
  int v46; // [rsp+28h] [rbp-71h]
  int v47; // [rsp+2Ch] [rbp-6Dh]
  char v48; // [rsp+30h] [rbp-69h]
  char v49; // [rsp+34h] [rbp-65h]
  int v50; // [rsp+38h] [rbp-61h]
  int v51; // [rsp+3Ch] [rbp-5Dh]
  _DWORD v52[2]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-51h]
  int *v54; // [rsp+50h] [rbp-49h]
  int *v55; // [rsp+58h] [rbp-41h]
  __int64 v56; // [rsp+60h] [rbp-39h]
  int *v57; // [rsp+68h] [rbp-31h]
  __int64 v58; // [rsp+70h] [rbp-29h]
  unsigned __int64 v59; // [rsp+78h] [rbp-21h]
  _BOOL8 v60; // [rsp+80h] [rbp-19h]
  _QWORD v61[2]; // [rsp+88h] [rbp-11h] BYREF
  int v62; // [rsp+98h] [rbp-1h]
  int v63; // [rsp+9Ch] [rbp+3h]
  int v64; // [rsp+A0h] [rbp+7h]
  int v65; // [rsp+A4h] [rbp+Bh]
  __int64 v66; // [rsp+A8h] [rbp+Fh]
  int v69; // [rsp+110h] [rbp+77h]
  int v70; // [rsp+118h] [rbp+7Fh]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = (int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 8);
  v6 = v5;
  v61[0] = 0LL;
  v64 = 0;
  LOBYTE(v5) = v5 & 3;
  v66 = 0LL;
  v7 = 8 * (4 - v5);
  v45 = v6 & 7;
  v8 = 8 * v5;
  v48 = v8;
  v57 = v2;
  v54 = v4;
  v49 = v7;
  v59 = (unsigned __int64)(v4 + 24);
  do
  {
    v9 = *v2;
    v10 = 0;
    v11 = v2[1];
    v12 = *v2 & 3;
    v13 = v2[2] & 3;
    v14 = v2[2] - v9;
    v15 = v2[3] - v11;
    v69 = v13;
    if ( v14 - (-v12 & 3) - v13 >= 0 )
      v10 = (v14 - (-v12 & 3) - v13) >> 2;
    v70 = v10;
    if ( v12 == 1 )
    {
      if ( v14 == 1 )
      {
        v69 = 0;
        v12 = 4;
        goto LABEL_13;
      }
      if ( v14 == 2 )
      {
        v12 = 5;
LABEL_12:
        v69 = 0;
      }
    }
    else if ( v12 == 2 && v14 == 1 )
    {
      v12 = 6;
      goto LABEL_12;
    }
LABEL_13:
    v16 = *((_DWORD *)v3 + 4);
    v17 = v11 - *((_DWORD *)v3 + 9);
    v62 = 0;
    v18 = ((int)v9 >> 2) & 1;
    v65 = 2;
    v19 = v15 & 7;
    v44 = v19;
    v20 = &v54[3 * (v17 & 7)];
    v21 = (((int)v9 >> 2) & 1) == 0;
    v55 = v20;
    v22 = *(_QWORD *)v3 + (v9 & 0xFFFFFFFFFFFFFFFCuLL) + v11 * v16;
    v23 = (v15 >> 3) + 1;
    v46 = 8 * v16;
    v53 = v22;
    v61[1] = v52;
    v63 = 8;
    if ( v15 > 8 )
      v15 = 8;
    if ( v15 )
    {
      v24 = v18;
      v25 = v21;
      v56 = v18;
      v60 = v21;
      while ( 1 )
      {
        v26 = v19;
        v51 = v15 - 1;
        if ( *((_DWORD *)v3 + 8) )
        {
          v29 = *v20;
          v30 = v20[1];
          if ( v45 >= 4 )
          {
            v27 = v20[1];
            if ( v45 == 4 )
            {
              v28 = *v20;
            }
            else
            {
              v27 = (v29 >> v7) | (v30 << v8);
              v28 = (v30 >> v7) | (v29 << v8);
            }
          }
          else
          {
            v27 = (v30 >> v7) | (v29 << v8);
            v28 = (v29 >> v7) | (v30 << v8);
          }
          if ( v56 )
          {
            v31 = v27;
            v27 = v28;
            v28 = v31;
          }
        }
        else
        {
          v27 = v20[v24];
          v28 = v20[v25];
        }
        --v44;
        v32 = v23 - 1;
        v33 = (_BYTE *)v22;
        if ( v26 )
          v32 = v23;
        v50 = v32;
        v23 = v32;
        v34 = v32;
        if ( v32 )
          break;
LABEL_61:
        v3 = a1;
        v42 = v20 + 3;
        v20 = v54;
        v15 = v51;
        v19 = v44;
        v22 += *((int *)a1 + 4);
        v24 = v56;
        v53 = v22;
        if ( (unsigned __int64)v42 < v59 )
          v20 = v42;
        v25 = v60;
        v55 = v20;
        if ( !v51 )
          goto LABEL_64;
      }
      v35 = v46;
      v58 = v46;
      while ( 2 )
      {
        --v34;
        v36 = v10;
        v47 = v34;
        v37 = v27;
        v38 = v28;
        v39 = v33;
        if ( !v12 )
          goto LABEL_43;
        if ( v12 == 1 )
        {
          v33[1] = BYTE1(v27);
        }
        else if ( v12 != 2 )
        {
          if ( v12 == 3 )
          {
            v33[3] = HIBYTE(v27);
          }
          else if ( v12 == 4 )
          {
            v33[1] = BYTE1(v27);
          }
          else
          {
            if ( v12 == 5 )
              v33[1] = BYTE1(v27);
            v33[2] = BYTE2(v27);
          }
LABEL_42:
          v39 = v33 + 4;
          v37 = v28;
          v38 = v27;
LABEL_43:
          v40 = v70;
          if ( v70 <= 7 )
          {
            if ( (unsigned int)v36 >= 2 )
            {
              v41 = v36 >> 1;
              do
              {
                *(_DWORD *)v39 = v37;
                LODWORD(v36) = v36 - 2;
                *((_DWORD *)v39 + 1) = v38;
                v39 += 8;
                --v41;
              }
              while ( v41 );
            }
            if ( (_DWORD)v36 )
            {
              *(_DWORD *)v39 = v37;
              v39 += 4;
            }
          }
          else
          {
            v52[0] = v37;
            v52[1] = v38;
            v64 = v70;
            v61[0] = v39;
            vFetchAndCopy(v61, v36);
            v40 = v70;
            v34 = v47;
            v35 = v58;
            v39 += 4 * v70;
          }
          if ( v69 )
          {
            if ( (v40 & 1) != 0 )
              v37 = v38;
            switch ( v69 )
            {
              case 1:
                *v39 = v37;
                break;
              case 2:
                *(_WORD *)v39 = v37;
                break;
              case 3:
                *(_WORD *)v39 = v37;
                v39[2] = BYTE2(v37);
                break;
            }
          }
          v10 = v70;
          v33 += v35;
          if ( !v34 )
          {
            v8 = v48;
            v20 = v55;
            v7 = v49;
            v23 = v50;
            v22 = v53;
            goto LABEL_61;
          }
          continue;
        }
        break;
      }
      *((_WORD *)v33 + 1) = HIWORD(v27);
      goto LABEL_42;
    }
LABEL_64:
    v2 = v57 + 4;
    v43 = a2-- == 1;
    v57 += 4;
  }
  while ( !v43 );
}
