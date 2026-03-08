/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x140805448
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x14055F1D4 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406F6080 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1408046F8 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x14096A7C4 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopSetupArbiterAndTranslators @ 0x1408059BC (IopSetupArbiterAndTranslators.c)
 *     IopFreeReqList @ 0x140806108 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x140806160 (IopFreeReqAlternative.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, int **a2)
{
  unsigned int *v2; // r13
  unsigned int v3; // r10d
  unsigned int *v4; // rbp
  int v5; // edx
  unsigned int *v6; // rdi
  unsigned int *v7; // r8
  int v8; // esi
  unsigned int *v9; // rcx
  unsigned int *v10; // r15
  char v11; // bl
  char v12; // r9
  int v13; // r14d
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // r14d
  int *Pool2; // rax
  int *v30; // rdi
  _DWORD *v31; // rbx
  unsigned int *v32; // rsi
  int v33; // eax
  int v34; // ecx
  int v35; // r13d
  int v36; // r15d
  int v37; // r12d
  int *v38; // rdx
  char *v39; // r14
  unsigned int *v40; // rbx
  __int64 v41; // rbp
  _QWORD *v42; // r8
  int *v43; // rax
  int v44; // ecx
  int **v45; // rax
  int i; // edx
  int *v47; // rcx
  char v48; // al
  bool v49; // zf
  char v50; // al
  _BYTE *v51; // r8
  int v52; // eax
  int v53; // r8d
  int v54; // esi
  unsigned int v55; // esi
  int v57; // eax
  int v58; // [rsp+20h] [rbp-88h]
  int v59; // [rsp+20h] [rbp-88h]
  int v60; // [rsp+24h] [rbp-84h]
  char *v61; // [rsp+28h] [rbp-80h]
  _QWORD *v62; // [rsp+30h] [rbp-78h]
  int v63; // [rsp+38h] [rbp-70h]
  unsigned int *v64; // [rsp+40h] [rbp-68h]
  int *v65; // [rsp+48h] [rbp-60h]
  int **v66; // [rsp+50h] [rbp-58h]
  _QWORD *v67; // [rsp+58h] [rbp-50h]
  int v70; // [rsp+C0h] [rbp+18h]
  int v71; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v70 = 0;
  v64 = v2;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = v2 + 8;
  v5 = 0;
  v6 = (unsigned int *)((char *)v2 + *v2);
  v7 = v2 + 8;
  v8 = 0;
  while ( (--v3 & 0x80000000) == 0 )
  {
    v9 = v7 + 2;
    v7 += 8 * v7[1] + 2;
    if ( v9 == v7 )
      return 0LL;
    if ( v9 > v7 || v9 > v6 || v7 > v6 )
      return 3221225485LL;
    if ( *((_BYTE *)v9 + 1) == 0x80 )
      v9 += 8;
    v10 = v9;
LABEL_11:
    v11 = 1;
    while ( v9 < v7 )
    {
      v12 = *((_BYTE *)v9 + 1);
      v13 = v5;
      if ( (unsigned __int8)v12 == 128 )
        return 3221225485LL;
      if ( *((unsigned __int8 *)v9 + 1) == 129 )
      {
        do
        {
          if ( *((_BYTE *)v9 + 1) != 0x81 )
            break;
          if ( v9 == v10 )
            return 3221225485LL;
          ++v5;
          v9 += 8;
        }
        while ( v9 < v7 );
        goto LABEL_11;
      }
      v14 = ++v5;
      if ( v12 <= 0 )
      {
        *(_BYTE *)v9 = 1;
        v5 = v13;
        v9 += 8;
        if ( v12 != -16 )
          v5 = v14;
        goto LABEL_11;
      }
      if ( (*(_BYTE *)v9 & 8) != 0 )
      {
        if ( v11 )
          return 3221225485LL;
        ++v8;
      }
      else
      {
        v11 = 0;
      }
      v9 += 8;
    }
  }
  v15 = v5 - v8;
  v16 = v2[7];
  v17 = 296LL * v15;
  v60 = -1073741823;
  if ( v17 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( v15 <= 1 )
  {
    v19 = 0;
    v20 = 32;
    v21 = 32;
  }
  else
  {
    v18 = 8LL * (v15 - 1);
    if ( v18 > 0xFFFFFFFF )
      return 2147483653LL;
    v19 = 8 * (v15 - 1);
    v20 = v18 + 32;
    v21 = v19 + 32;
    if ( v19 + 32 < v19 )
      return 2147483653LL;
  }
  if ( v21 < v19 )
    return 2147483653LL;
  v22 = v16 * v20;
  if ( v22 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( (unsigned int)v16 > 1 )
  {
    v26 = 8LL * (unsigned int)(v16 - 1);
    if ( v26 > 0xFFFFFFFF )
      return 2147483653LL;
    v23 = 8 * (v16 - 1);
    v24 = v26 + 48;
    v25 = v26 + 48;
    if ( v23 + 48 < v23 )
      return 2147483653LL;
  }
  else
  {
    v23 = 0;
    v24 = 48;
    v25 = 48;
  }
  if ( v25 < v23 )
    return 2147483653LL;
  v27 = v22 + v24;
  if ( (unsigned int)v22 + v24 < v24 || v27 + (unsigned int)v17 < v27 )
    return 2147483653LL;
  v28 = v27 + v17;
  Pool2 = (int *)ExAllocatePool2(256LL, v27 + (unsigned int)v17, 538996816LL);
  v30 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, v28);
  v61 = (char *)v30 + v24;
  memset(v61, 0, (unsigned int)v22);
  v65 = (int *)&v61[(unsigned int)v22];
  memset(v65, 0, (unsigned int)v17);
  v31 = v30 + 10;
  v32 = v64;
  v62 = v30 + 10;
  v33 = v64[1];
  if ( v33 == -1 )
    v33 = 1;
  v34 = v64[2];
  *((_QWORD *)v30 + 2) = 0LL;
  v71 = v34;
  *((_QWORD *)v30 + 1) = a1;
  v30[1] = v34;
  v58 = v33;
  v30[8] = v16;
  *v30 = v33;
  memset(v30 + 10, 0, 8 * v16);
  v35 = v16 - 1;
  v36 = 0;
  if ( v35 < 0 )
  {
LABEL_85:
    v55 = v60;
    IopFreeReqList(v30);
    return v55;
  }
  v37 = v58;
  do
  {
    v38 = (int *)v61;
    v67 = v31;
    v39 = v61;
    v40 = v4 + 2;
    v63 = v36;
    v41 = v4[1];
    v42 = v61 + 24;
    *v62 = v61;
    *((_DWORD *)v61 + 4) = v36;
    v4 = &v40[8 * v41];
    ++v36;
    *((_QWORD *)v61 + 1) = v30;
    *((_DWORD *)v61 + 5) = 0;
    v61 += 24;
    ++v62;
    if ( *((_BYTE *)v40 + 1) == 0x80 )
    {
      v43 = (int *)(v40 + 2);
      v40 += 8;
      v44 = *v43;
    }
    else
    {
      v44 = 12288;
    }
    *v38 = v44;
    v45 = (int **)v42;
    for ( i = 0; ; i = v59 )
    {
      while ( 1 )
      {
        if ( v40 >= v4 )
        {
          v31 = v62;
          goto LABEL_52;
        }
        if ( *((_BYTE *)v40 + 1) != 0xF0 )
          break;
        v37 = v40[2];
        if ( v37 == -1 )
          v37 = 1;
        v71 = v40[3];
LABEL_77:
        v40 += 8;
      }
      ++*((_DWORD *)v39 + 5);
      v47 = v65;
      *v45 = v65;
      v66 = v45 + 1;
      v65[6] = i;
      v65[1] = v71;
      *((_QWORD *)v65 + 2) = v39;
      *((_QWORD *)v65 + 4) = v65;
      v65[69] = 0;
      *((_QWORD *)v65 + 35) = 0LL;
      *v65 = v37;
      v48 = *((_BYTE *)v40 + 1);
      v65 += 74;
      v59 = i + 1;
      v49 = v48 == 0;
      if ( v48 < 0 || (v50 = 1, v49) )
        v50 = 0;
      *((_BYTE *)v47 + 8) = v50;
      *((_QWORD *)v47 + 6) = v47 + 10;
      *((_QWORD *)v47 + 5) = v47 + 10;
      v47[14] = 0;
      *((_QWORD *)v47 + 8) = v40;
      v61 = (char *)(v42 + 1);
      *((_QWORD *)v47 + 9) = *(_QWORD *)a1;
      v51 = v47 + 34;
      v47[20] = *(_DWORD *)(a1 + 12);
      *((_QWORD *)v47 + 11) = 0LL;
      v47[24] = v37;
      v47[25] = v32[3];
      v52 = v32[2];
      v47[32] = -1;
      v47[26] = v52;
      *((_QWORD *)v47 + 14) = v47 + 34;
      v47[21] = 0;
      if ( !*((_BYTE *)v47 + 8) )
      {
        ++i;
        *v51 = *((_BYTE *)v40 + 1);
        v42 = v61;
        *((_BYTE *)v47 + 137) = *((_BYTE *)v40 + 2);
        *((_WORD *)v47 + 69) = *((_WORD *)v40 + 2);
        v47[35] = v40[2];
        v47[36] = v40[3];
        v47[37] = v40[4];
        v57 = v70;
        if ( *((_BYTE *)v40 + 1) == 0x84 )
          v57 = 1;
        v70 = v57;
        v45 = v66;
        goto LABEL_77;
      }
      *v51 = 8;
      v53 = v47[14] + 1;
      v70 = 1;
      while ( 1 )
      {
        v40 += 8;
        v47[14] = v53;
        if ( v40 >= v4 )
          break;
        if ( *((_BYTE *)v40 + 1) == 0x81 )
        {
          *((_QWORD *)v47 + 35) = v40;
          while ( v40 < v4 && *((_BYTE *)v40 + 1) == 0x81 )
          {
            ++v47[69];
            v40 += 8;
          }
          break;
        }
        if ( (*(_BYTE *)v40 & 8) == 0 )
          break;
        ++v53;
      }
      v54 = IopSetupArbiterAndTranslators();
      if ( v54 < 0 )
        break;
      v32 = v64;
      v42 = v61;
      v45 = v66;
    }
    v31 = v67;
    --v30[8];
    v36 = v63;
    v62 = v67;
    IopFreeReqAlternative(v39);
    v60 = v54;
LABEL_52:
    --v35;
    v32 = v64;
  }
  while ( v35 >= 0 );
  if ( !v36 )
    goto LABEL_85;
  v55 = 0;
  if ( v70 )
    *a2 = v30;
  else
    IopFreeReqList(v30);
  return v55;
}
