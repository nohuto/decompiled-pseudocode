__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  int v13; // r12d
  __int64 v14; // rbp
  int v15; // ebx
  unsigned int v16; // r15d
  __int64 v17; // r13
  __int64 result; // rax
  unsigned int *v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  char *v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r9
  char v26; // al
  unsigned int v27; // ebp
  unsigned __int8 *v28; // r15
  __int64 v29; // rbx
  _DWORD *v30; // rbx
  __int64 v31; // rax
  __int64 *v32; // rbp
  __int16 v33; // r9
  unsigned __int8 v34; // r8
  unsigned int v35; // r10d
  unsigned __int64 i; // r12
  int v37; // r13d
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // r14
  unsigned int v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // r14
  __int64 v44; // r14
  int v45; // eax
  unsigned int v46; // ebp
  _QWORD *v47; // rax
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // r10
  __int64 v51; // r11
  __int64 v52; // rax
  unsigned int v53; // eax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r13
  unsigned int j; // r12d
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r14
  __int64 v63; // rcx
  int v64; // [rsp+20h] [rbp-B8h]
  int v65; // [rsp+28h] [rbp-B0h]
  int v66; // [rsp+60h] [rbp-78h]
  unsigned int v67; // [rsp+64h] [rbp-74h]
  int v68; // [rsp+68h] [rbp-70h]
  __int16 v69; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v70; // [rsp+70h] [rbp-68h] BYREF
  int v71; // [rsp+74h] [rbp-64h]
  unsigned int v72; // [rsp+78h] [rbp-60h]
  unsigned int v73; // [rsp+7Ch] [rbp-5Ch]
  int v74; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v75; // [rsp+84h] [rbp-54h]
  int v76; // [rsp+88h] [rbp-50h]
  int v77; // [rsp+8Ch] [rbp-4Ch]
  __int64 v78; // [rsp+90h] [rbp-48h]
  unsigned __int8 v81; // [rsp+F8h] [rbp+20h]

  v13 = 0;
  v14 = a9;
  v15 = *(_DWORD *)(a2 + 200) & 0x2000;
  v16 = a8;
  v17 = a2;
  v70 = 0;
  v74 = -1;
  result = *(unsigned __int16 *)(a4 + 4);
  v20 = (unsigned int *)(a9 + 24);
  v66 = v15;
  v75 = *(unsigned __int16 *)(a4 + 4);
  if ( a8 )
  {
    v21 = (_DWORD *)(a9 + 24);
    v22 = a8;
    do
    {
      *v21 = a1;
      v21 += 12;
      --v22;
    }
    while ( v22 );
    result = v75;
  }
  if ( !v15 && !a11 )
    v13 = *(_DWORD *)a13 | a1;
  v68 = v13;
  v23 = (char *)(a4 + 8);
  v71 = v13;
  v67 = 0;
  if ( !(_DWORD)result )
    return result;
  v24 = a7;
  v25 = 232LL;
  while ( 1 )
  {
    result = *v20;
    if ( !(_DWORD)result && !v13 )
      return result;
    if ( (v23[1] & 8) != 0 || !(_DWORD)result && *v23 && *v23 != 9 )
      goto LABEL_34;
    v26 = *v23;
    if ( !*v23 )
    {
      if ( !v15 && !a11 && v13 )
      {
        v43 = SePackagePrefixSid;
        if ( (unsigned __int8)v23[9] >= 2u
          && v23[8] == *(_BYTE *)SePackagePrefixSid
          && RtlCompareMemory(v23 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
          && *((_DWORD *)v23 + 4) == *(_DWORD *)(v43 + 8) )
        {
          goto LABEL_63;
        }
        v44 = SeCapabilityPrefixSid;
        if ( (unsigned __int8)v23[9] >= 2u
          && v23[8] == *(_BYTE *)SeCapabilityPrefixSid
          && RtlCompareMemory(v23 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
          && *((_DWORD *)v23 + 4) == *(_DWORD *)(v44 + 8) )
        {
          goto LABEL_88;
        }
        v24 = a7;
      }
      v27 = *v20;
      v73 = v27;
      if ( !v27 )
        goto LABEL_32;
      v28 = (unsigned __int8 *)(v23 + 8);
      v29 = 504LL;
      if ( !a11 )
        v29 = 232LL;
      v30 = (_DWORD *)(v17 + v29);
      if ( v24 && RtlEqualSid(SePrincipalSelfSid, v23 + 8) )
        v28 = (unsigned __int8 *)v24;
      if ( !a12
        || *(_WORD *)SeOwnerRightsSid != *(_WORD *)v28
        || memcmp(SeOwnerRightsSid, v28, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
      {
        if ( !v30 || !v28 )
          goto LABEL_39;
        v31 = v28[1];
        v32 = (__int64 *)(v30 + 2);
        v33 = *(_WORD *)v28;
        v34 = 0;
        v69 = *(_WORD *)v28;
        v81 = 0;
        v35 = 4 * v31 + 8;
        LODWORD(v31) = v28[4 * v31 + 4];
        v72 = v35;
        for ( i = *(_QWORD *)&v30[2 * (v31 & 0xF) + 4] & *(_QWORD *)&v30[2 * ((unsigned __int64)(unsigned int)v31 >> 4)
                                                                       + 36]; i; v81 = v34 )
        {
          LOBYTE(v37) = i;
          if ( (_BYTE)i )
          {
            v38 = *v32;
            v39 = v34;
            v78 = *v32;
            v77 = v34;
            while ( 1 )
            {
              v76 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v37);
              v40 = v38 + 16LL * (unsigned int)(v39 + v76);
              if ( **(_WORD **)v40 == v33 )
              {
                if ( !memcmp(v28, *(const void **)v40, v35) )
                {
LABEL_25:
                  if ( !a11 && v40 == *v32 && (*(_DWORD *)(v40 + 8) & 0x10) == 0 || (*(_DWORD *)(v40 + 8) & 4) != 0 )
                  {
                    v27 = v73;
                    goto LABEL_29;
                  }
LABEL_39:
                  v15 = v66;
                  v16 = a8;
LABEL_32:
                  v14 = a9;
                  goto LABEL_33;
                }
                v38 = v78;
                v33 = v69;
                v35 = v72;
              }
              v39 = v77;
              v37 = (unsigned __int8)v37 ^ (1 << v76);
              if ( !(_BYTE)v37 )
              {
                v34 = v81;
                break;
              }
            }
          }
          v34 += 8;
          i >>= 8;
        }
        v42 = *v30;
        if ( v42 > 0x40 )
        {
          v56 = *v32;
          for ( j = 64; j < v42; ++j )
          {
            v40 = v56 + 16LL * j;
            if ( **(_WORD **)v40 == v33 )
            {
              if ( !memcmp(v28, *(const void **)v40, v35) )
                goto LABEL_25;
              v33 = v69;
              v35 = v72;
            }
          }
        }
        goto LABEL_39;
      }
LABEL_29:
      v16 = a8;
      v41 = *((_DWORD *)v23 + 1);
      if ( a8 != 1 )
      {
        v14 = a9;
        AuthzBasepAddAccessTypeList(a9, a8, 0, v67, v41, 0);
        v15 = v66;
        goto LABEL_33;
      }
      *v20 = v27 & ~v41;
LABEL_31:
      v15 = v66;
      goto LABEL_32;
    }
    if ( v26 == 5 )
    {
      v58 = *((_DWORD *)v23 + 2);
      if ( (v58 & 1) == 0 )
        goto LABEL_115;
      if ( v23 == (char *)-12LL )
      {
        v14 = a9;
LABEL_115:
        v61 = 504LL;
        LOBYTE(v65) = a12;
        LOBYTE(v64) = a11;
        if ( !a11 )
          v61 = 232LL;
        if ( !(unsigned __int8)SepSidInTokenSidHash(
                                 v17 + v61,
                                 v24,
                                 &v23[16 * (v58 & 1) + ((8LL * (v58 & 2)) | 0xC)],
                                 0LL,
                                 v64,
                                 v65) )
          goto LABEL_33;
        v53 = *((_DWORD *)v23 + 1);
        if ( v16 == 1 )
        {
          *v20 &= ~v53;
          goto LABEL_33;
        }
        goto LABEL_86;
      }
      if ( a10 )
      {
        v59 = 504LL;
        LOBYTE(v65) = a12;
        LOBYTE(v64) = a11;
        if ( !a11 )
          v59 = 232LL;
        if ( !(unsigned __int8)SepSidInTokenSidHash(
                                 v17 + v59,
                                 v24,
                                 &v23[16 * (v58 & 1) + ((8LL * (v58 & 2)) | 0xC)],
                                 0LL,
                                 v64,
                                 v65) )
          goto LABEL_32;
        if ( (unsigned __int8)AuthzBasepObjectInTypeList(v23 + 12, a9, v16, &v70) )
        {
          v14 = a9;
          AuthzBasepAddAccessTypeList(a9, v16, v70, v67, *((_DWORD *)v23 + 1), 0);
        }
        else
        {
          v14 = v60;
        }
LABEL_33:
        v25 = 232LL;
        goto LABEL_34;
      }
      goto LABEL_136;
    }
    if ( v26 == 4 )
    {
      v62 = 504LL;
      if ( !a11 )
        v62 = 232LL;
      LOBYTE(v65) = a12;
      LOBYTE(v64) = a11;
      if ( !(unsigned __int8)SepSidInTokenSidHash(v62 + v17, a7, &v23[4 * (unsigned __int8)v23[13] + 20], 0LL, v64, v65) )
        goto LABEL_32;
      LOBYTE(v65) = a12;
      LOBYTE(v64) = a11;
      if ( !(unsigned __int8)SepSidInTokenSidHash(v62 + a3, 0LL, v23 + 12, 0LL, v64, v65) )
        goto LABEL_32;
      v53 = *((_DWORD *)v23 + 1);
      v14 = a9;
      if ( v16 == 1 )
      {
        *v20 &= ~v53;
        goto LABEL_33;
      }
      goto LABEL_86;
    }
    if ( v26 == 1 )
      break;
    if ( v26 == 6 )
    {
      v63 = 504LL;
      LOBYTE(v65) = a12;
      LOBYTE(v64) = a11;
      if ( !a11 )
        v63 = 232LL;
      LOBYTE(v25) = 1;
      if ( !(unsigned __int8)SepSidInTokenSidHash(
                               v17 + v63,
                               v24,
                               &v23[16 * (*((_DWORD *)v23 + 2) & 1) + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                               v25,
                               v64,
                               v65) )
        goto LABEL_33;
      if ( (*((_DWORD *)v23 + 2) & 1) == 0 || v23 == (char *)-12LL || !a10 )
        goto LABEL_92;
      if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v23 + 12, v14, v16, &v70) )
        goto LABEL_33;
      result = *(unsigned int *)(v14 + 48LL * v70 + 24);
      if ( ((unsigned int)result & *((_DWORD *)v23 + 1)) == 0 )
        goto LABEL_33;
      return result;
    }
    if ( v26 == 9 )
    {
      v46 = 4 * (unsigned __int8)v23[9] + 8;
      if ( *((unsigned __int16 *)v23 + 1) - v46 != 8 )
      {
        if ( a5 && !*a6 )
          AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
        v47 = *(_QWORD **)(v17 + 1096);
        if ( v47 )
        {
          v48 = v47[72];
          v49 = v47[74];
          v50 = v47[73];
          v51 = v47[75];
        }
        else
        {
          v48 = 0LL;
          v49 = 0LL;
          v50 = 0LL;
          v51 = 0LL;
        }
        AuthzBasepEvaluateAceCondition(
          v17,
          *(void **)(v17 + 776),
          *a6,
          v48,
          v49,
          v50,
          v51,
          &v23[v46 + 8],
          *((unsigned __int16 *)v23 + 1) - v46 - 8,
          0,
          a11,
          &v74);
        if ( v74 != 1 )
          goto LABEL_32;
        if ( !v15 && !a11 && v13 )
        {
          if ( SepIsPackageSid((__int64)(v23 + 8)) )
          {
LABEL_63:
            SepMatchPackage(
              v17,
              v71,
              (__int64)(v23 + 8),
              *((_DWORD *)v23 + 1),
              (_BYTE *)(a13 + 21),
              (_DWORD *)(a13 + 4),
              (_BYTE *)(a13 + 20),
              (_DWORD *)(a13 + 16),
              (_BYTE *)(a13 + 24));
            v45 = ~*(_DWORD *)(a13 + 4);
            *(_DWORD *)a13 &= v45;
            v68 = v45 & v13;
            goto LABEL_31;
          }
          if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
          {
LABEL_88:
            SepMatchCapability(v17, v71, (_DWORD)v23 + 8, *((_DWORD *)v23 + 1), a13 + 22, a13 + 8);
            v54 = ~*(_DWORD *)(a13 + 8);
            *(_DWORD *)a13 &= v54;
            v68 = v54 & v13;
            goto LABEL_31;
          }
        }
        if ( !*v20 )
          goto LABEL_32;
        v52 = 232LL;
        if ( a11 )
          v52 = 504LL;
        LOBYTE(v65) = a12;
        LOBYTE(v64) = a11;
        v14 = a9;
        if ( !(unsigned __int8)SepSidInTokenSidHash(v52 + v17, v24, v23 + 8, 0LL, v64, v65) )
          goto LABEL_33;
        v53 = *((_DWORD *)v23 + 1);
LABEL_86:
        AuthzBasepAddAccessTypeList(v14, v16, 0, v67, v53, 0);
        goto LABEL_33;
      }
LABEL_136:
      v14 = a9;
    }
LABEL_34:
    result = *((unsigned __int16 *)v23 + 1);
    v13 = v68;
    v23 += result;
    v17 = a2;
    v24 = a7;
    if ( ++v67 >= v75 )
      return result;
  }
  v55 = 504LL;
  if ( !a11 )
    v55 = 232LL;
  LOBYTE(v65) = a12;
  LOBYTE(v64) = a11;
  LOBYTE(v25) = 1;
  if ( !(unsigned __int8)SepSidInTokenSidHash(v17 + v55, v24, v23 + 8, v25, v64, v65) )
    goto LABEL_33;
LABEL_92:
  result = *((unsigned int *)v23 + 1);
  if ( ((unsigned int)result & *v20) == 0 )
    goto LABEL_33;
  return result;
}
