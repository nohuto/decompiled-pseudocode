/*
 * XREFs of ApiSetComposeSchema @ 0x1406125BC
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x140A07380 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1402F3974 (ApiSetpSearchForApiSet.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ApiSetValidateSchemaFormat @ 0x14061231C (ApiSetValidateSchemaFormat.c)
 *     AsiAddDataToSchema @ 0x140612CB0 (AsiAddDataToSchema.c)
 *     AsiPopulateHashes @ 0x140612D48 (AsiPopulateHashes.c)
 *     AsiSortValueList @ 0x140612EA0 (AsiSortValueList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ApiSetComposeSchema(unsigned int **a1, unsigned int *a2, _DWORD *a3, int a4)
{
  unsigned int *v4; // r13
  unsigned int v6; // r12d
  unsigned int v7; // r15d
  int v8; // ebx
  __int64 v9; // rsi
  char *v10; // rdi
  __int64 v11; // rax
  char v12; // r12
  __int64 v13; // rdx
  char *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  const WCHAR *v17; // r9
  _WORD *v18; // rcx
  unsigned __int16 v19; // ax
  _DWORD *v20; // rax
  int v21; // edx
  int v22; // r12d
  _DWORD *Pool2; // rsi
  unsigned int v24; // ebx
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // r15d
  unsigned int i; // r9d
  char *v32; // r8
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int j; // ebx
  char *v36; // r11
  int v37; // eax
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // r12
  char *v42; // r8
  char *v43; // r11
  __int64 v44; // r9
  char *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // rdx
  char *v50; // r9
  __int64 v51; // rbx
  const WCHAR *v52; // rcx
  _WORD *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r9
  int v56; // edx
  int v57; // r10d
  _DWORD *v58; // rcx
  unsigned int *v59; // rcx
  unsigned int v61; // [rsp+28h] [rbp-59h]
  int v62; // [rsp+2Ch] [rbp-55h]
  int v63; // [rsp+30h] [rbp-51h]
  unsigned int v64; // [rsp+30h] [rbp-51h]
  int k; // [rsp+30h] [rbp-51h]
  unsigned int v66; // [rsp+34h] [rbp-4Dh]
  int v67; // [rsp+38h] [rbp-49h]
  unsigned int v68; // [rsp+3Ch] [rbp-45h]
  char *v69; // [rsp+40h] [rbp-41h]
  int v70; // [rsp+40h] [rbp-41h]
  __int64 v71; // [rsp+48h] [rbp-39h]
  int v72; // [rsp+48h] [rbp-39h]
  __int64 v73; // [rsp+50h] [rbp-31h]
  char *v74; // [rsp+58h] [rbp-29h]
  const WCHAR *v75; // [rsp+60h] [rbp-21h]
  char *v76; // [rsp+68h] [rbp-19h]
  char *v77; // [rsp+70h] [rbp-11h]
  __int64 v78; // [rsp+78h] [rbp-9h] BYREF
  int v79; // [rsp+80h] [rbp-1h]
  int v80; // [rsp+84h] [rbp+3h]
  unsigned int v81; // [rsp+88h] [rbp+7h]
  __int128 v82; // [rsp+90h] [rbp+Fh] BYREF
  int v83; // [rsp+A0h] [rbp+1Fh]
  int v86; // [rsp+100h] [rbp+7Fh] BYREF

  v86 = a4;
  v4 = *a1;
  if ( **a1 < 5 || *a3 < 5u )
    return 3221225659LL;
  if ( (v4[2] & 1) != 0 || !v4[3] || !a3[3] )
    return 3221225485LL;
  v6 = 0;
  v61 = 0;
  v7 = 0;
  v8 = ApiSetValidateSchemaFormat(*a1, v4[1]);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = ApiSetValidateSchemaFormat(a3, a3[1]);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = 0LL;
  if ( !a3[3] )
  {
LABEL_29:
    v22 = 24 * v6;
    v64 = v7 + v22 + v4[1] + 8 * v61;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v64, 1751339841LL);
    if ( Pool2 )
    {
      v24 = v4[4] + 24 * v4[3];
      v25 = v24;
      memmove(Pool2, v4, v24);
      v26 = v22 + v24;
      v27 = v4[5] - v24;
      v28 = v27 + v26;
      v62 = v27 + v26;
      v86 = v27 + v26;
      memmove((char *)Pool2 + v26, (char *)v4 + v25, v27);
      memset((char *)Pool2 + v28, 0, v7);
      v29 = v7 + v28;
      memmove((char *)Pool2 + v29, (char *)v4 + v4[5], 8 * v4[3]);
      v30 = v64;
      Pool2[1] = v64;
      Pool2[5] = v29;
      if ( v22 )
      {
        for ( i = 0; i < Pool2[3]; ++i )
        {
          v32 = (char *)Pool2 + (unsigned int)Pool2[4];
          v33 = *(_DWORD *)&v32[24 * i + 4];
          if ( v33 )
            *(_DWORD *)&v32[24 * i + 4] = v22 + v33;
          v34 = *(_DWORD *)&v32[24 * i + 16];
          if ( v34 )
          {
            v34 += v22;
            *(_DWORD *)&v32[24 * i + 16] = v34;
          }
          for ( j = 0; j < *(_DWORD *)&v32[24 * i + 20]; ++j )
          {
            v36 = (char *)Pool2 + v34;
            v37 = *(_DWORD *)&v36[20 * j + 4];
            if ( v37 )
            {
              *(_DWORD *)&v36[20 * j + 4] = v22 + v37;
              v34 = *(_DWORD *)&v32[24 * i + 16];
            }
            v38 = *(_DWORD *)&v36[20 * j + 12];
            if ( v38 )
            {
              *(_DWORD *)&v36[20 * j + 12] = v22 + v38;
              v34 = *(_DWORD *)&v32[24 * i + 16];
            }
          }
        }
      }
      v8 = ApiSetValidateSchemaFormat(Pool2, v64);
      if ( v8 < 0 )
        goto LABEL_80;
      v39 = 0;
      v40 = 0LL;
      v66 = 0;
      for ( k = 0; (unsigned int)v40 < a3[3]; k = v40 )
      {
        v41 = 3 * v40;
        v42 = (char *)a3 + (unsigned int)a3[4];
        v77 = v42;
        v43 = (char *)a3 + *(unsigned int *)&v42[24 * v40 + 4];
        v44 = *(unsigned int *)&v42[24 * v40 + 8];
        v68 = *(_DWORD *)&v42[24 * v40 + 8];
        v76 = v43;
        if ( (*(_DWORD *)&v42[24 * v40] & 4) != 0 )
        {
          if ( v39 >= v61 )
          {
LABEL_83:
            v8 = -2147483643;
            goto LABEL_80;
          }
          v45 = (char *)Pool2 + (unsigned int)Pool2[4];
          v66 = v39 + 1;
          v46 = (unsigned int)Pool2[3];
          v47 = 3 * v46;
          Pool2[3] = v46 + 1;
          *(_OWORD *)&v45[8 * v47] = 0LL;
          *(_QWORD *)&v45[8 * v47 + 16] = 0LL;
          *(_DWORD *)&v45[8 * v47] = *(_DWORD *)&v42[24 * v40];
          *(_DWORD *)&v45[8 * v47 + 4] = v62;
          *(_DWORD *)&v45[8 * v47 + 8] = v44;
          *(_DWORD *)&v45[8 * v47 + 12] = v44;
          v8 = AsiAddDataToSchema(Pool2, &v86, v43, v44);
          if ( v8 < 0 )
            goto LABEL_80;
          v62 = v86;
LABEL_75:
          v39 = v66;
        }
        else
        {
          v48 = 0LL;
          v70 = 0;
          v67 = 0;
          if ( *(_DWORD *)&v42[8 * v41 + 20] )
          {
            while ( 1 )
            {
              v49 = 5 * v48;
              v50 = (char *)a3 + *(unsigned int *)&v42[8 * v41 + 16];
              v73 = 5 * v48;
              v74 = v50;
              v51 = *(unsigned int *)&v50[20 * v48 + 16];
              v52 = (const WCHAR *)((char *)a3 + *(unsigned int *)&v50[20 * v48 + 12]);
              v75 = v52;
              v53 = (_WORD *)((char *)v52 + v51);
              do
              {
                if ( (unsigned int)v51 <= 1 )
                  break;
                LODWORD(v51) = v51 - 2;
                --v53;
              }
              while ( *v53 != 45 );
              if ( !((unsigned __int16)v51 >> 1) )
                break;
              v72 = *(_DWORD *)&v50[4 * v49 + 4];
              v54 = ApiSetpSearchForApiSet(Pool2, v52, (unsigned __int16)v51 >> 1);
              if ( v54 )
              {
                v56 = v62;
              }
              else
              {
                if ( v66 >= v61 )
                  goto LABEL_83;
                v55 = (unsigned int)Pool2[3];
                ++v66;
                v54 = (__int64)&Pool2[6 * v55] + (unsigned int)Pool2[4];
                Pool2[3] = v55 + 1;
                *(_OWORD *)v54 = 0LL;
                *(_QWORD *)(v54 + 16) = 0LL;
                *(_DWORD *)(v54 + 4) = v62;
                *(_DWORD *)(v54 + 8) = *(_DWORD *)&v74[4 * v73 + 16];
                *(_DWORD *)(v54 + 12) = v51;
                v8 = AsiAddDataToSchema(Pool2, &v86, v75, *(unsigned int *)&v74[4 * v73 + 16]);
                if ( v8 < 0 )
                  goto LABEL_80;
                *(_DWORD *)(v54 + 20) = 1;
                v83 = 0;
                *(_DWORD *)(v54 + 16) = v86;
                v82 = 0LL;
                v8 = AsiAddDataToSchema(Pool2, &v86, &v82, 20LL);
                if ( v8 < 0 )
                  goto LABEL_80;
                v56 = v86;
                v62 = v86;
              }
              if ( (*(_DWORD *)v54 & 1) == 0 )
              {
                v57 = v67;
                if ( !v67 )
                {
                  v67 = v56;
                  v8 = AsiAddDataToSchema(Pool2, &v86, v76, v68);
                  if ( v8 < 0 )
                    goto LABEL_80;
                  v57 = v67;
                  v62 = v86;
                }
                if ( !*(_DWORD *)(v54 + 20) )
                {
                  v8 = -1073741811;
                  goto LABEL_80;
                }
                v58 = (_DWORD *)((char *)Pool2 + *(unsigned int *)(v54 + 16));
                if ( v58[4] && v72 )
                {
                  v58[2] = v68;
                  v58[1] = v57;
                  v8 = AsiAddDataToSchema(Pool2, &v86, v58, (unsigned int)(20 * *(_DWORD *)(v54 + 20)));
                  if ( v8 < 0 )
                    goto LABEL_80;
                  v78 = 0LL;
                  v79 = 0;
                  *(_DWORD *)(v54 + 16) = v62;
                  v80 = v67;
                  v81 = v68;
                  v8 = AsiAddDataToSchema(Pool2, &v86, &v78, 20LL);
                  if ( v8 < 0 )
                    goto LABEL_80;
                  ++*(_DWORD *)(v54 + 20);
                  AsiSortValueList(Pool2, v54);
                  v62 = v86;
                }
                else
                {
                  v58[1] = 0;
                  v58[2] = 0;
                  v58[3] = v57;
                  v58[4] = v68;
                  *(_DWORD *)(v54 + 20) = 1;
                }
              }
              v42 = v77;
              v48 = (unsigned int)(v70 + 1);
              v70 = v48;
              if ( (unsigned int)v48 >= *(_DWORD *)&v77[8 * v41 + 20] )
                goto LABEL_75;
            }
            v8 = -1073740670;
            goto LABEL_80;
          }
        }
        v40 = (unsigned int)(k + 1);
      }
      if ( v61 && !(unsigned int)AsiPopulateHashes(Pool2) )
      {
        v8 = -1073741823;
        goto LABEL_80;
      }
      v8 = ApiSetValidateSchemaFormat(Pool2, v30);
      if ( v8 < 0 )
      {
LABEL_80:
        v59 = Pool2;
      }
      else
      {
        v59 = v4;
        *a1 = Pool2;
        *a2 = v30;
      }
      ExFreePoolWithTag(v59, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v8;
  }
  while ( 1 )
  {
    v10 = (char *)a3 + (unsigned int)a3[4];
    if ( (*(_DWORD *)&v10[24 * v9] & 4) == 0 )
      break;
    v61 = ++v6;
    v7 += (*(_DWORD *)&v10[24 * v9 + 8] + 3) & 0xFFFFFFFC;
LABEL_28:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= a3[3] )
      goto LABEL_29;
  }
  v11 = 0LL;
  v12 = 0;
  v86 = 0;
  if ( !*(_DWORD *)&v10[24 * v9 + 20] )
  {
LABEL_27:
    v6 = v61;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v13 = 5 * v11;
    v14 = (char *)a3 + *(unsigned int *)&v10[24 * v9 + 16];
    v71 = 5 * v11;
    v69 = v14;
    v15 = *(unsigned int *)&v14[20 * v11 + 12];
    v16 = *(unsigned int *)&v14[20 * v11 + 16];
    v17 = (const WCHAR *)((char *)a3 + v15);
    v18 = (_WORD *)((char *)v17 + v16);
    do
    {
      if ( (unsigned int)v16 <= 1 )
        break;
      LODWORD(v16) = v16 - 2;
      --v18;
    }
    while ( *v18 != 45 );
    v19 = (unsigned __int16)v16 >> 1;
    if ( !v19 )
      break;
    v63 = *(_DWORD *)&v14[4 * v13 + 4];
    v20 = (_DWORD *)ApiSetpSearchForApiSet(v4, v17, v19);
    if ( v20 )
    {
      if ( (*v20 & 1) == 0 )
      {
        if ( !v12 )
        {
          v12 = 1;
          v7 += (*(_DWORD *)&v10[24 * v9 + 8] + 3) & 0xFFFFFFFC;
        }
        v21 = v20[5];
        if ( !v21 )
          return (unsigned int)-1073741811;
        if ( *(unsigned int *)((char *)v4 + (unsigned int)v20[4] + 16) && v63 )
          v7 += 20 * v21 + 20;
      }
    }
    else
    {
      ++v61;
      v7 += ((*(_DWORD *)&v69[4 * v71 + 16] + 3) & 0xFFFFFFFC) + 20;
      if ( !v12 )
      {
        v12 = 1;
        v7 += (*(_DWORD *)&v10[24 * v9 + 8] + 3) & 0xFFFFFFFC;
      }
    }
    v11 = (unsigned int)(v86 + 1);
    v86 = v11;
    if ( (unsigned int)v11 >= *(_DWORD *)&v10[24 * v9 + 20] )
      goto LABEL_27;
  }
  return (unsigned int)-1073740670;
}
