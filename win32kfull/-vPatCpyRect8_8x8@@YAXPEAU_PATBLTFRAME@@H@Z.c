void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // r14
  int v4; // edi
  int v5; // r15d
  int *v6; // rdx
  int v7; // ecx
  __int64 v8; // r8
  char v9; // r12
  char v10; // di
  __int64 v11; // r9
  int v12; // r11d
  int v13; // r10d
  int v14; // r13d
  int v15; // ebx
  int v16; // edx
  int v17; // esi
  int v18; // eax
  unsigned int v19; // ecx
  BOOL v20; // edx
  int *v21; // r11
  unsigned __int64 v22; // rbx
  int v23; // eax
  int v24; // r9d
  __int64 v25; // r10
  _BOOL8 v26; // rcx
  _BYTE *v27; // rdx
  int v28; // r8d
  int v29; // ebx
  int v30; // r15d
  unsigned int v31; // edx
  unsigned int v32; // r15d
  int v33; // eax
  _BYTE *v34; // r14
  int v35; // eax
  int v36; // r8d
  __int64 v37; // r9
  int v38; // r10d
  int v39; // edx
  int v40; // esi
  int v41; // r12d
  _BYTE *v42; // rdi
  unsigned __int64 v43; // rax
  int *v44; // rcx
  int v45; // [rsp+20h] [rbp-89h]
  unsigned __int64 v46; // [rsp+28h] [rbp-81h]
  unsigned int v47; // [rsp+30h] [rbp-79h]
  int v48; // [rsp+34h] [rbp-75h]
  int v49; // [rsp+38h] [rbp-71h]
  char v50; // [rsp+3Ch] [rbp-6Dh]
  int v51; // [rsp+40h] [rbp-69h]
  char v52; // [rsp+44h] [rbp-65h]
  int v53; // [rsp+48h] [rbp-61h]
  _DWORD v54[2]; // [rsp+50h] [rbp-59h] BYREF
  int *v55; // [rsp+58h] [rbp-51h]
  int *v56; // [rsp+60h] [rbp-49h]
  int *v57; // [rsp+68h] [rbp-41h]
  __int64 v58; // [rsp+70h] [rbp-39h]
  __int64 v59; // [rsp+78h] [rbp-31h]
  unsigned __int64 v60; // [rsp+80h] [rbp-29h]
  _BOOL8 v61; // [rsp+88h] [rbp-21h]
  _QWORD v62[2]; // [rsp+90h] [rbp-19h] BYREF
  int v63; // [rsp+A0h] [rbp-9h]
  int v64; // [rsp+A4h] [rbp-5h]
  int v65; // [rsp+A8h] [rbp-1h]
  int v66; // [rsp+ACh] [rbp+3h]
  __int64 v67; // [rsp+B0h] [rbp+7h]
  int v69; // [rsp+118h] [rbp+6Fh]
  int v70; // [rsp+120h] [rbp+77h]
  int v71; // [rsp+128h] [rbp+7Fh]

  v69 = a2;
  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = *((_DWORD *)a1 + 8);
  v5 = a2;
  v6 = (int *)*((_QWORD *)a1 + 1);
  v62[0] = 0LL;
  v65 = 0;
  v7 = v4 & 7;
  v67 = 0LL;
  LOBYTE(v4) = v4 & 3;
  LODWORD(v8) = *((_DWORD *)v3 + 4);
  v9 = 8 * (4 - v4);
  v47 = v7;
  v10 = 8 * v4;
  v50 = v10;
  v57 = v2;
  v55 = v6;
  v52 = v9;
  v60 = (unsigned __int64)(v6 + 24);
  do
  {
    v11 = *v2;
    v12 = 0;
    v13 = v2[1];
    v14 = *v2 & 3;
    v15 = v2[2] & 3;
    v16 = v2[2] - v11;
    v17 = v2[3] - v13;
    v70 = v15;
    if ( v16 - (-v14 & 3) - v15 >= 0 )
      v12 = (v16 - (-v14 & 3) - v15) >> 2;
    v45 = v12;
    if ( v14 != 1 )
    {
      if ( v14 != 2 || v16 != 1 )
        goto LABEL_13;
      v14 = 6;
      goto LABEL_12;
    }
    if ( v16 != 1 )
    {
      if ( v16 != 2 )
        goto LABEL_13;
      v14 = 5;
LABEL_12:
      v70 = 0;
      goto LABEL_13;
    }
    v70 = 0;
    v14 = 4;
LABEL_13:
    v63 = 0;
    v18 = (v13 - *((_DWORD *)v3 + 9)) & 7;
    v19 = ((int)v11 >> 2) & 1;
    v64 = 8;
    v66 = 2;
    v20 = (((int)v11 >> 2) & 1) == 0;
    v21 = (int *)((char *)v55 + (unsigned int)(12 * v18));
    v48 = 8 * v8;
    v56 = v21;
    v62[1] = v54;
    v22 = *(_QWORD *)v3 + (v11 & 0xFFFFFFFFFFFFFFFCuLL) + v13 * (int)v8;
    v23 = v17 & 7;
    v46 = v22;
    v24 = (v17 >> 3) + 1;
    v71 = v23;
    if ( v17 <= 8 )
    {
      if ( !v17 )
        goto LABEL_66;
    }
    else
    {
      v17 = 8;
    }
    v25 = v19;
    v26 = v20;
    v27 = (_BYTE *)v22;
    v61 = v26;
    v59 = v25;
    do
    {
      --v17;
      v28 = v23;
      v51 = v17;
      if ( *((_DWORD *)v3 + 8) )
      {
        v31 = *v21;
        v32 = v21[1];
        if ( v47 >= 4 )
        {
          v29 = v21[1];
          if ( v47 == 4 )
          {
            v30 = *v21;
          }
          else
          {
            v29 = (v31 >> v9) | (v32 << v10);
            v30 = (v32 >> v9) | (v31 << v10);
          }
        }
        else
        {
          v29 = (v32 >> v9) | (v31 << v10);
          v30 = (v31 >> v9) | (v32 << v10);
        }
        v27 = (_BYTE *)v46;
        if ( v25 )
        {
          v33 = v29;
          v29 = v30;
          v30 = v33;
        }
        v23 = v71;
      }
      else
      {
        v29 = v21[v25];
        v30 = v21[v26];
      }
      v34 = v27;
      v71 = v23 - 1;
      v35 = v24 - 1;
      if ( v28 )
        v35 = v24;
      v53 = v35;
      v24 = v35;
      v36 = v35;
      if ( v35 )
      {
        v37 = v48;
        v38 = v45;
        v58 = v48;
        while ( 1 )
        {
          --v36;
          v39 = v38;
          v49 = v36;
          v40 = v29;
          v41 = v30;
          v42 = v34;
          if ( v14 )
            break;
LABEL_44:
          if ( v38 <= 7 )
          {
            if ( (unsigned int)v38 >= 2 )
            {
              v43 = (unsigned __int64)(unsigned int)v38 >> 1;
              do
              {
                *(_DWORD *)v42 = v40;
                v39 -= 2;
                *((_DWORD *)v42 + 1) = v41;
                v42 += 8;
                --v43;
              }
              while ( v43 );
            }
            if ( v39 )
            {
              *(_DWORD *)v42 = v40;
              v42 += 4;
            }
          }
          else
          {
            v54[0] = v40;
            v54[1] = v41;
            v65 = v38;
            v62[0] = v42;
            vFetchAndCopy((__int64)v62);
            v38 = v45;
            v36 = v49;
            v37 = v58;
            v42 += 4 * v45;
          }
          if ( v70 )
          {
            if ( (v38 & 1) != 0 )
              v40 = v41;
            switch ( v70 )
            {
              case 1:
                *v42 = v40;
                break;
              case 2:
                *(_WORD *)v42 = v40;
                break;
              case 3:
                *(_WORD *)v42 = v40;
                v42[2] = BYTE2(v40);
                break;
            }
          }
          v34 += v37;
          if ( !v36 )
          {
            v21 = v56;
            v10 = v50;
            v17 = v51;
            v9 = v52;
            v24 = v53;
            v25 = v59;
            v27 = (_BYTE *)v46;
            goto LABEL_62;
          }
        }
        if ( v14 == 1 )
        {
          v34[1] = BYTE1(v29);
        }
        else if ( v14 != 2 )
        {
          if ( v14 == 3 )
          {
            v34[3] = HIBYTE(v29);
          }
          else if ( v14 == 4 )
          {
            v34[1] = BYTE1(v29);
          }
          else
          {
            if ( v14 == 5 )
              v34[1] = BYTE1(v29);
            v34[2] = BYTE2(v29);
          }
          goto LABEL_43;
        }
        *((_WORD *)v34 + 1) = HIWORD(v29);
LABEL_43:
        v42 = v34 + 4;
        v40 = v30;
        v41 = v29;
        goto LABEL_44;
      }
LABEL_62:
      v3 = a1;
      v44 = v21 + 3;
      v21 = v55;
      v23 = v71;
      v8 = *((int *)a1 + 4);
      v27 += v8;
      v46 = (unsigned __int64)v27;
      if ( (unsigned __int64)v44 < v60 )
        v21 = v44;
      v26 = v61;
      v56 = v21;
    }
    while ( v17 );
    v5 = v69;
LABEL_66:
    v2 = v57 + 4;
    --v5;
    v57 += 4;
    v69 = v5;
  }
  while ( v5 );
}
