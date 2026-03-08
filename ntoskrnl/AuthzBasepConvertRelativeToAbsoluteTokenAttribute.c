/*
 * XREFs of AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14066BF9C
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  size_t v5; // r15
  NTSTATUS v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ebx
  unsigned int *v17; // r9
  unsigned int v18; // r11d
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // r10d
  __int64 v23; // rcx
  int v24; // r10d
  unsigned int v25; // r11d
  int v26; // eax
  unsigned int v27; // r9d
  _DWORD *v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ebx
  int v31; // ecx
  char *v32; // rdx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // r8d
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r15d
  char *v42; // rbp
  unsigned int v43; // r13d
  unsigned int *v44; // r9
  unsigned int v45; // ecx
  unsigned int v46; // eax
  __int64 v47; // r12
  unsigned int v48; // r8d
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // ebp
  unsigned int v52; // eax
  char *v53; // r12
  size_t v54; // rdx
  __int64 v55; // r13
  unsigned int v56; // r15d
  unsigned int v57; // eax
  __int64 v58; // r13
  unsigned int v59; // ecx
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  size_t pcbLength; // [rsp+20h] [rbp-38h] BYREF
  size_t v64; // [rsp+28h] [rbp-30h]
  unsigned int v65; // [rsp+60h] [rbp+8h]
  unsigned int v66; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  pcbLength = 0LL;
  if ( !a1 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( !a1[3] )
    return (unsigned int)-1073741705;
  v10 = *a1;
  if ( a2 < (unsigned int)v10 || a2 - (unsigned int)v10 < 4 )
    return (unsigned int)-1073741705;
  v9 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v10), a2 - (unsigned int)v10, &pcbLength);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = pcbLength + 2;
  if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
    return (unsigned int)-1073741675;
  if ( (int)pcbLength + 5 < (unsigned int)(pcbLength + 2) )
    return (unsigned int)-1073741675;
  v12 = ((pcbLength + 5) & 0xFFFFFFFC) + 40;
  if ( v12 < 0x28 )
    return (unsigned int)-1073741675;
  v13 = a1[3];
  if ( (unsigned __int64)(4 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v13) )
    return (unsigned int)-1073741705;
  switch ( *((_WORD *)a1 + 2) )
  {
    case 1:
    case 2:
      goto LABEL_45;
    case 3:
      v21 = 16 * v13;
      if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF || v12 + v21 < v12 )
        return (unsigned int)-1073741675;
      v12 += v21;
      v22 = 0;
      if ( (_DWORD)v13 )
      {
        while ( 1 )
        {
          v23 = a1[v22 + 4];
          if ( (unsigned int)v5 < (unsigned int)v23 || (unsigned int)(v5 - v23) < 2 )
            return (unsigned int)-1073741705;
          v9 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v23), (unsigned int)(v5 - v23), &pcbLength);
          if ( v9 < 0 )
            return (unsigned int)v9;
          if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
            return (unsigned int)-1073741675;
          if ( (int)pcbLength + 5 < (unsigned int)(pcbLength + 2) )
            return (unsigned int)-1073741675;
          v12 = ((pcbLength + 5) & 0xFFFFFFFC) + v25;
          if ( v12 < v25 )
            return (unsigned int)-1073741675;
          v22 = v24 + 1;
          if ( v22 >= a1[3] )
            goto LABEL_52;
        }
      }
      goto LABEL_52;
    case 5:
      goto LABEL_21;
    case 6:
LABEL_45:
      v26 = 8 * v13;
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + v26 < v12 )
        return (unsigned int)-1073741675;
      v12 += v26;
      v27 = 0;
      if ( (_DWORD)v13 )
      {
        v28 = a1 + 4;
        while ( (unsigned int)v5 >= *v28 && (unsigned int)(v5 - *v28) >= 8 )
        {
          ++v27;
          ++v28;
          if ( v27 >= (unsigned int)v13 )
            goto LABEL_52;
        }
        return (unsigned int)-1073741705;
      }
      goto LABEL_52;
  }
  if ( *((_WORD *)a1 + 2) != 16 )
    goto LABEL_52;
LABEL_21:
  v14 = 16 * v13;
  if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v15 = v12 + v14;
  if ( v12 + v14 < v12 )
    return (unsigned int)-1073741675;
  v12 += v14;
  v16 = 0;
  if ( (_DWORD)v13 )
  {
    v17 = a1 + 4;
    v18 = v15;
    do
    {
      v19 = *v17;
      if ( (unsigned int)v5 < (unsigned int)v19 || (unsigned int)(v5 - v19) < 4 )
        return (unsigned int)-1073741705;
      v20 = *(unsigned int *)((char *)a1 + v19);
      if ( (int)v19 + 4 < (unsigned int)v19 )
        return (unsigned int)-1073741675;
      if ( (int)v5 - ((int)v19 + 4) < v20 )
        return (unsigned int)-1073741705;
      if ( v20 + 3 < v20 )
        return (unsigned int)-1073741675;
      v12 = ((v20 + 3) & 0xFFFFFFFC) + v18;
      if ( v12 < v18 )
        return (unsigned int)-1073741675;
      ++v16;
      ++v17;
      v18 += (v20 + 3) & 0xFFFFFFFC;
    }
    while ( v16 < (unsigned int)v13 );
  }
LABEL_52:
  v29 = *a4;
  *a4 = v12;
  if ( v29 < v12 )
    return (unsigned int)-1073741789;
  memset(a3, 0, v12);
  *((_WORD *)a3 + 8) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 9) = *((_WORD *)a1 + 3);
  a3[5] = a1[2];
  a3[6] = a1[3];
  if ( v11 >= 0xFFFFFFD8 || v11 + 43 < v11 + 40 )
    return (unsigned int)-1073741675;
  v30 = (v11 + 43) & 0xFFFFFFFC;
  memmove(a3 + 10, (char *)a1 + *a1, v11);
  v31 = *((unsigned __int16 *)a3 + 8);
  *((_QWORD *)a3 + 1) = a3 + 10;
  v32 = (char *)a3 + v30;
  *(_WORD *)a3 = v11 - 2;
  *((_WORD *)a3 + 1) = v11;
  v33 = v31 - 1;
  if ( !v33 )
    goto LABEL_81;
  v34 = v33 - 1;
  if ( !v34 )
    goto LABEL_81;
  v35 = v34 - 1;
  if ( v35 )
  {
    v36 = v35 - 2;
    if ( !v36 )
    {
LABEL_62:
      v38 = a3[6];
      v39 = 16LL * v38;
      if ( v39 <= 0xFFFFFFFF )
      {
        v40 = (unsigned int)v39 + v30;
        if ( (unsigned int)v40 >= v30 )
        {
          v41 = v39 + v30;
          v9 = 0;
          *((_QWORD *)a3 + 4) = v32;
          v42 = (char *)a3 + v40;
          v43 = 0;
          if ( !v38 )
            return (unsigned int)v9;
          while ( 1 )
          {
            v44 = &a1[v43];
            v45 = *(unsigned int *)((char *)a1 + v44[4]);
            v65 = v45;
            v46 = v45 + v41;
            if ( v45 + v41 < v41 || v46 + 3 < v46 )
              break;
            v47 = 2LL * v43;
            v9 = 0;
            v41 = (v46 + 3) & 0xFFFFFFFC;
            *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL * v43) = 0LL;
            if ( v45 )
            {
              memmove(v42, (char *)a1 + v44[4] + 4, v45);
              v45 = v65;
              *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL * v43) = v42;
            }
            ++v43;
            v42 = (char *)a3 + v41;
            *(_DWORD *)(*((_QWORD *)a3 + 4) + 8 * v47 + 8) = v45;
            if ( v43 >= a3[6] )
              return (unsigned int)v9;
          }
        }
      }
      return (unsigned int)-1073741675;
    }
    v37 = v36 - 1;
    if ( v37 )
    {
      if ( v37 == 10 )
        goto LABEL_62;
      return (unsigned int)-1073741705;
    }
LABEL_81:
    v59 = a3[6];
    v60 = 8LL * v59;
    if ( v60 <= 0xFFFFFFFF && v30 + (unsigned int)v60 >= v30 )
    {
      *((_QWORD *)a3 + 4) = v32;
      v9 = 0;
      if ( v59 )
      {
        do
        {
          v61 = v4++;
          *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v61) = *(_QWORD *)((char *)a1 + a1[v61 + 4]);
        }
        while ( v4 < a3[6] );
      }
      return (unsigned int)v9;
    }
    return (unsigned int)-1073741675;
  }
  v48 = a3[6];
  v49 = 16LL * v48;
  if ( v49 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v50 = (unsigned int)v49 + v30;
  if ( (unsigned int)v50 < v30 )
    return (unsigned int)-1073741675;
  v51 = v49 + v30;
  v52 = 0;
  v66 = 0;
  v9 = 0;
  *((_QWORD *)a3 + 4) = v32;
  v53 = (char *)a3 + v50;
  if ( v48 )
  {
    v54 = v5;
    v64 = v5;
    do
    {
      v55 = v52;
      v9 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + a1[v52 + 4]), v54, &pcbLength);
      if ( v9 < 0 )
        break;
      v56 = pcbLength + 2;
      if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
        return (unsigned int)-1073741675;
      v57 = v56 + v51;
      if ( v56 + v51 < v51 || v57 + 3 < v57 )
        return (unsigned int)-1073741675;
      v9 = 0;
      v51 = (v57 + 3) & 0xFFFFFFFC;
      memmove(v53, (char *)a1 + a1[v55 + 4], v56);
      v54 = v64;
      v58 = 2 * v55;
      *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v58 + 8) = v53;
      v53 = (char *)a3 + v51;
      *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v58) = v56 - 2;
      *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v58 + 2) = v56;
      v52 = v66 + 1;
      v66 = v52;
    }
    while ( v52 < a3[6] );
  }
  return (unsigned int)v9;
}
