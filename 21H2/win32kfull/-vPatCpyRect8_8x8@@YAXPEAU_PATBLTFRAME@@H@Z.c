/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C5BD0
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02CECC0 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02DA2BC (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // r15
  int *v4; // rdx
  int v5; // r11d
  char v6; // cl
  char v7; // r14
  char v8; // r11
  __int64 v9; // r9
  unsigned int v10; // r12d
  int v11; // r10d
  int v12; // r13d
  int v13; // ebx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edx
  BOOL v19; // r8d
  int *v20; // rdi
  unsigned __int64 v21; // rbx
  int v22; // eax
  int v23; // r9d
  __int64 v24; // r10
  _BYTE *v25; // rdx
  _BOOL8 v26; // rcx
  int v27; // r8d
  int v28; // ebx
  int v29; // r15d
  unsigned int v30; // edx
  unsigned int v31; // r15d
  int v32; // eax
  _BYTE *v33; // r14
  int v34; // eax
  int v35; // r8d
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  int v38; // esi
  int v39; // r12d
  _BYTE *v40; // rdi
  char v41; // r10
  unsigned __int64 v42; // rax
  int *v43; // rcx
  bool v44; // zf
  int v45; // [rsp+20h] [rbp-79h]
  char v46; // [rsp+24h] [rbp-75h]
  unsigned __int64 v47; // [rsp+28h] [rbp-71h]
  unsigned int v48; // [rsp+30h] [rbp-69h]
  int v49; // [rsp+34h] [rbp-65h]
  int v50; // [rsp+38h] [rbp-61h]
  char v51; // [rsp+3Ch] [rbp-5Dh]
  int v52; // [rsp+40h] [rbp-59h]
  int v53; // [rsp+44h] [rbp-55h]
  _DWORD v54[2]; // [rsp+48h] [rbp-51h] BYREF
  int *v55; // [rsp+50h] [rbp-49h]
  int *v56; // [rsp+58h] [rbp-41h]
  int *v57; // [rsp+60h] [rbp-39h]
  __int64 v58; // [rsp+68h] [rbp-31h]
  __int64 v59; // [rsp+70h] [rbp-29h]
  unsigned __int64 v60; // [rsp+78h] [rbp-21h]
  _BOOL8 v61; // [rsp+80h] [rbp-19h]
  _QWORD v62[2]; // [rsp+88h] [rbp-11h] BYREF
  int v63; // [rsp+98h] [rbp-1h]
  int v64; // [rsp+9Ch] [rbp+3h]
  int v65; // [rsp+A0h] [rbp+7h]
  int v66; // [rsp+A4h] [rbp+Bh]
  __int64 v67; // [rsp+A8h] [rbp+Fh]
  int v70; // [rsp+110h] [rbp+77h]
  int v71; // [rsp+118h] [rbp+7Fh]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = (int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 8);
  v6 = v5;
  v62[0] = 0LL;
  v65 = 0;
  LOBYTE(v5) = v5 & 3;
  v67 = 0LL;
  v7 = 8 * (4 - v5);
  v48 = v6 & 7;
  v8 = 8 * v5;
  v51 = v8;
  v57 = v2;
  v55 = v4;
  v46 = v7;
  v60 = (unsigned __int64)(v4 + 24);
  do
  {
    v9 = *v2;
    v10 = 0;
    v11 = v2[1];
    v12 = *v2 & 3;
    v13 = v2[2] & 3;
    v14 = v2[2] - v9;
    v15 = v2[3] - v11;
    v70 = v13;
    if ( v14 - (-v12 & 3) - v13 >= 0 )
      v10 = (v14 - (-v12 & 3) - v13) >> 2;
    v71 = v10;
    if ( v12 == 1 )
    {
      if ( v14 == 1 )
      {
        v70 = 0;
        v12 = 4;
        goto LABEL_13;
      }
      if ( v14 == 2 )
      {
        v12 = 5;
LABEL_12:
        v70 = 0;
      }
    }
    else if ( v12 == 2 && v14 == 1 )
    {
      v12 = 6;
      goto LABEL_12;
    }
LABEL_13:
    v16 = *((_DWORD *)v3 + 4);
    v63 = 0;
    v17 = (v11 - *((_DWORD *)v3 + 9)) & 7;
    v18 = ((int)v9 >> 2) & 1;
    v64 = 8;
    v66 = 2;
    v19 = (((int)v9 >> 2) & 1) == 0;
    v20 = (int *)((char *)v55 + (unsigned int)(12 * v17));
    v56 = v20;
    v49 = 8 * v16;
    v62[1] = v54;
    v21 = *(_QWORD *)v3 + (v9 & 0xFFFFFFFFFFFFFFFCuLL) + v11 * v16;
    v22 = v15 & 7;
    v47 = v21;
    v23 = (v15 >> 3) + 1;
    v45 = v22;
    if ( v15 > 8 )
    {
      v15 = 8;
LABEL_16:
      v24 = v18;
      v25 = (_BYTE *)v21;
      v26 = v19;
      v59 = v24;
      v61 = v19;
      while ( 1 )
      {
        --v15;
        v27 = v22;
        v52 = v15;
        if ( *((_DWORD *)v3 + 8) )
        {
          v30 = *v20;
          v31 = v20[1];
          if ( v48 >= 4 )
          {
            v28 = v20[1];
            if ( v48 == 4 )
            {
              v29 = *v20;
            }
            else
            {
              v28 = (v30 >> v7) | (v31 << v8);
              v29 = (v31 >> v7) | (v30 << v8);
            }
          }
          else
          {
            v28 = (v31 >> v7) | (v30 << v8);
            v29 = (v30 >> v7) | (v31 << v8);
          }
          v25 = (_BYTE *)v47;
          if ( v24 )
          {
            v32 = v28;
            v28 = v29;
            v29 = v32;
          }
          v22 = v45;
        }
        else
        {
          v28 = v20[v24];
          v29 = v20[v26];
        }
        v33 = v25;
        v45 = v22 - 1;
        v34 = v23 - 1;
        if ( v27 )
          v34 = v23;
        v53 = v34;
        v23 = v34;
        v35 = v34;
        if ( v34 )
          break;
LABEL_62:
        v3 = a1;
        v43 = v20 + 3;
        v20 = v55;
        v7 = v46;
        v25 += *((int *)a1 + 4);
        v22 = v45;
        v47 = (unsigned __int64)v25;
        if ( (unsigned __int64)v43 < v60 )
          v20 = v43;
        v26 = v61;
        v56 = v20;
        if ( !v15 )
          goto LABEL_65;
      }
      v36 = v49;
      v58 = v49;
      while ( 1 )
      {
        --v35;
        v37 = v10;
        v50 = v35;
        v38 = v28;
        v39 = v29;
        v40 = v33;
        if ( v12 )
          break;
LABEL_44:
        v41 = v71;
        if ( v71 <= 7 )
        {
          if ( (unsigned int)v37 >= 2 )
          {
            v42 = v37 >> 1;
            do
            {
              *(_DWORD *)v40 = v38;
              LODWORD(v37) = v37 - 2;
              *((_DWORD *)v40 + 1) = v39;
              v40 += 8;
              --v42;
            }
            while ( v42 );
          }
          if ( (_DWORD)v37 )
          {
            *(_DWORD *)v40 = v38;
            v40 += 4;
          }
        }
        else
        {
          v54[0] = v38;
          v54[1] = v39;
          v65 = v71;
          v62[0] = v40;
          vFetchAndCopy(v62, v37);
          v41 = v71;
          v35 = v50;
          v36 = v58;
          v40 += 4 * v71;
        }
        if ( v70 )
        {
          if ( (v41 & 1) != 0 )
            v38 = v39;
          switch ( v70 )
          {
            case 1:
              *v40 = v38;
              break;
            case 2:
              *(_WORD *)v40 = v38;
              break;
            case 3:
              *(_WORD *)v40 = v38;
              v40[2] = BYTE2(v38);
              break;
          }
        }
        v10 = v71;
        v33 += v36;
        if ( !v35 )
        {
          v8 = v51;
          v20 = v56;
          v15 = v52;
          v23 = v53;
          v24 = v59;
          v25 = (_BYTE *)v47;
          goto LABEL_62;
        }
      }
      if ( v12 == 1 )
      {
        v33[1] = BYTE1(v28);
      }
      else if ( v12 != 2 )
      {
        if ( v12 == 3 )
        {
          v33[3] = HIBYTE(v28);
        }
        else if ( v12 == 4 )
        {
          v33[1] = BYTE1(v28);
        }
        else
        {
          if ( v12 == 5 )
            v33[1] = BYTE1(v28);
          v33[2] = BYTE2(v28);
        }
        goto LABEL_43;
      }
      *((_WORD *)v33 + 1) = HIWORD(v28);
LABEL_43:
      v40 = v33 + 4;
      v38 = v29;
      v39 = v28;
      goto LABEL_44;
    }
    if ( v15 )
      goto LABEL_16;
LABEL_65:
    v2 = v57 + 4;
    v44 = a2-- == 1;
    v57 += 4;
  }
  while ( !v44 );
}
