/*
 * XREFs of ?bSrcCopySRLE4D24@@YAHPEAUBLTINFO@@@Z @ 0x1C02F1A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // r14d
  int v3; // r13d
  int v4; // r15d
  int v5; // r12d
  unsigned __int8 *v6; // r11
  __int64 v7; // rsi
  int v8; // r9d
  unsigned int v9; // r8d
  int v10; // eax
  int v11; // ecx
  __int64 result; // rax
  unsigned int v13; // ebx
  unsigned int v14; // edx
  unsigned __int8 *v15; // r11
  unsigned __int64 v16; // rdi
  unsigned int v17; // ebx
  BOOL v18; // ecx
  unsigned int v19; // ecx
  __int64 v20; // r14
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // rax
  unsigned int v24; // r15d
  int v25; // r9d
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // r10
  __int64 v29; // r13
  unsigned __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r14
  __int64 v34; // r13
  __int64 v35; // r10
  int v36; // r8d
  unsigned __int64 v37; // r11
  int v38; // eax
  unsigned __int8 *v39; // r11
  int v40; // ecx
  int v41; // eax
  int v42; // r8d
  __int64 v43; // r14
  __int64 v44; // rcx
  int v45; // r9d
  unsigned int v46; // edx
  int v47; // edi
  int v48; // eax
  __int64 v49; // r15
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // r15
  __int64 v53; // rcx
  int v54; // [rsp+8h] [rbp-80h]
  BOOL v55; // [rsp+Ch] [rbp-7Ch]
  int v56; // [rsp+10h] [rbp-78h]
  int v57; // [rsp+14h] [rbp-74h]
  unsigned int v58; // [rsp+18h] [rbp-70h]
  int v59; // [rsp+1Ch] [rbp-6Ch]
  __int64 v60; // [rsp+20h] [rbp-68h]
  int v61; // [rsp+38h] [rbp-50h]
  int v62; // [rsp+3Ch] [rbp-4Ch]
  int v64; // [rsp+98h] [rbp+10h]
  int v65; // [rsp+A0h] [rbp+18h]
  int v66; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 22);
  v4 = *((_DWORD *)a1 + 24);
  v5 = *((_DWORD *)a1 + 15);
  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a1 + 32);
  v56 = *((_DWORD *)a1 + 11);
  v57 = v3;
  v65 = v4;
  v62 = v2;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v58 = v9;
  v64 = v5;
  v60 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v10 = *((_DWORD *)a1 + 25);
  v11 = *((_DWORD *)a1 + 14);
  v66 = v11;
  v59 = v10;
  if ( v5 < v2 )
    return 1LL;
  v13 = *((_DWORD *)v1 + 30) + 2;
  if ( v13 > v9 )
    return 0LL;
  while ( 1 )
  {
    v14 = *v6;
    v15 = v6 + 1;
    v16 = *v15;
    v6 = v15 + 1;
    if ( !v14 )
      break;
    if ( v5 < v10 && v8 < v4 && (int)(v14 + v8) > v3 )
    {
      if ( v8 < v3 )
      {
        v41 = v3 - v8;
        v8 = v3;
        v14 -= v41;
      }
      if ( (int)(v14 + v8) <= v4 )
      {
        v42 = 0;
      }
      else
      {
        v42 = v8 + v14 - v4;
        v14 = v4 - v8;
      }
      v43 = (unsigned int)(3 * v8);
      v44 = v16 & 0xF;
      v61 = v14 & 1;
      v45 = v14 + v8;
      v46 = v14 >> 1;
      v47 = *(_DWORD *)(v60 + 4 * (v16 >> 4));
      v48 = *(_DWORD *)(v60 + 4 * v44);
      if ( v46 )
      {
        v49 = (unsigned int)(v43 + 1);
        v50 = (unsigned int)(v43 + 2);
        do
        {
          *(_BYTE *)(v43 + v7) = v47;
          v51 = (unsigned int)(v43 + 3);
          *(_BYTE *)(v49 + v7) = BYTE1(v47);
          v52 = (unsigned int)(v49 + 3);
          *(_BYTE *)(v50 + v7) = BYTE2(v47);
          v53 = (unsigned int)(v50 + 3);
          *(_BYTE *)(v51 + v7) = v48;
          v43 = (unsigned int)(v51 + 3);
          *(_BYTE *)(v52 + v7) = BYTE1(v48);
          v49 = (unsigned int)(v52 + 3);
          *(_BYTE *)(v53 + v7) = BYTE2(v48);
          v50 = (unsigned int)(v53 + 3);
          --v46;
        }
        while ( v46 );
        v1 = a1;
        v5 = v64;
        v3 = v57;
        v4 = v65;
      }
      if ( v61 )
      {
        *(_BYTE *)(v43 + v7) = v47;
        *(_BYTE *)((unsigned int)(v43 + 1) + v7) = BYTE1(v47);
        *(_BYTE *)((unsigned int)(v43 + 2) + v7) = BYTE2(v47);
      }
      v8 = v42 + v45;
      v9 = v58;
LABEL_50:
      v11 = v66;
      goto LABEL_52;
    }
    v8 += v14;
LABEL_52:
    v13 += 2;
    if ( v13 > v9 )
      return 0LL;
    v2 = v62;
    v10 = v59;
  }
  if ( (_DWORD)v16 )
  {
    if ( (_DWORD)v16 == 1 )
      return 0LL;
    if ( (_DWORD)v16 == 2 )
    {
      v13 += 2;
      if ( v13 > v9 )
        return 0LL;
      v38 = *v6;
      v39 = v6 + 1;
      v8 += v38;
      v40 = *v39;
      v6 = v39 + 1;
      v5 -= v40;
      v64 = v5;
      v7 += v40 * v56;
      if ( v5 < v2 )
      {
        *((_DWORD *)v1 + 34) = v8;
        goto LABEL_32;
      }
    }
    else
    {
      v17 = ((unsigned int)(v16 + 1) >> 1) + v13;
      if ( v17 > v9 )
        return 0LL;
      v18 = (((_DWORD)v16 + 1) & 2) != 0;
      v55 = v18;
      if ( v5 >= v59 || v8 >= v4 || (int)v16 + v8 <= v3 )
      {
        v8 += v16;
        v37 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(v16 + 1) >> 1];
      }
      else
      {
        if ( v8 >= v3 )
        {
          v20 = (unsigned int)(3 * v8);
        }
        else
        {
          v19 = v3 - v8;
          v20 = (unsigned int)(3 * v3);
          LODWORD(v16) = v16 - (v3 - v8);
          v8 = v3;
          v6 += (unsigned __int64)v19 >> 1;
          if ( (v19 & 1) != 0 )
          {
            v8 = v3 + 1;
            v21 = *v6++ & 0xF;
            v22 = *(_DWORD *)(v60 + 4 * v21);
            *(_BYTE *)(v20 + v7) = v22;
            *(_BYTE *)((unsigned int)(v20 + 1) + v7) = BYTE1(v22);
            v23 = (unsigned int)(v20 + 2);
            v20 = (unsigned int)(v20 + 3);
            *(_BYTE *)(v23 + v7) = BYTE2(v22);
            LODWORD(v16) = v16 - 1;
          }
        }
        if ( (int)v16 + v8 <= v4 )
        {
          v24 = 0;
        }
        else
        {
          v24 = v8 + v16 - v65;
          LODWORD(v16) = v65 - v8;
        }
        v25 = v16 + v8;
        v26 = v16 & 1;
        v27 = (unsigned int)v16 >> 1;
        v54 = v26;
        if ( v27 )
        {
          v28 = (unsigned int)(v20 + 2);
          v29 = (unsigned int)(v20 + 1);
          do
          {
            v30 = *v6++;
            v31 = *(_DWORD *)(v60 + 4 * (v30 >> 4));
            v32 = *(_DWORD *)(v60 + 4 * (v30 & 0xF));
            *(_BYTE *)(v20 + v7) = v31;
            *(_BYTE *)(v29 + v7) = BYTE1(v31);
            *(_BYTE *)(v28 + v7) = BYTE2(v31);
            v33 = (unsigned int)(v20 + 3);
            v34 = (unsigned int)(v29 + 3);
            v35 = (unsigned int)(v28 + 3);
            *(_BYTE *)(v33 + v7) = v32;
            v20 = (unsigned int)(v33 + 3);
            *(_BYTE *)(v34 + v7) = BYTE1(v32);
            v29 = (unsigned int)(v34 + 3);
            *(_BYTE *)(v35 + v7) = BYTE2(v32);
            v28 = (unsigned int)(v35 + 3);
            --v27;
          }
          while ( v27 );
          v1 = a1;
          v5 = v64;
          v3 = v57;
          v26 = v54;
        }
        if ( v26 )
        {
          v36 = *(_DWORD *)(v60 + 4 * ((unsigned __int64)*v6 >> 4));
          *(_BYTE *)(v20 + v7) = v36;
          *(_BYTE *)((unsigned int)(v20 + 1) + v7) = BYTE1(v36);
          *(_BYTE *)((unsigned int)(v20 + 2) + v7) = BYTE2(v36);
          v37 = (unsigned __int64)&v6[((unsigned __int64)v24 >> 1) + 1];
        }
        else
        {
          v37 = (unsigned __int64)&v6[(unsigned __int64)(v24 + 1) >> 1];
        }
        v18 = v55;
        v8 = v24 + v25;
        v4 = v65;
        v9 = v58;
      }
      v13 = v18 + v17;
      v6 = (unsigned __int8 *)(v18 + v37);
    }
    goto LABEL_50;
  }
  --v5;
  v7 += v56;
  v64 = v5;
  v8 = v11;
  if ( v5 >= v2 )
    goto LABEL_52;
  *((_DWORD *)v1 + 34) = v11;
LABEL_32:
  *((_QWORD *)v1 + 14) = v7;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v6;
  *((_DWORD *)v1 + 31) = v13;
  *((_DWORD *)v1 + 33) = v5;
  return result;
}
