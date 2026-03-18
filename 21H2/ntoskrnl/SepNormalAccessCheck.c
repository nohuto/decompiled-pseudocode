/*
 * XREFs of SepNormalAccessCheck @ 0x1402FB0E0
 * Callers:
 *     SepAccessCheck @ 0x1402FA820 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140218B60 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140219130 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAddAccessTypeList @ 0x14022D208 (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x14023BDE8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14023E074 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x140244144 (SepMatchCapability.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1402FD65C (SepSidInTokenSidHash.c)
 *     SepMatchPackage @ 0x1402FDE54 (SepMatchPackage.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x14064A78C (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  int v13; // r14d
  unsigned int v14; // ebp
  int v15; // r12d
  __int64 result; // rax
  __int64 v17; // r13
  _DWORD *v19; // rax
  __int64 v20; // rcx
  char v21; // r15
  char *v22; // rsi
  __int64 v23; // rdx
  char v24; // al
  int v25; // r14d
  unsigned __int8 *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // eax
  unsigned __int8 v30; // r8
  unsigned int v31; // r10d
  unsigned __int64 v32; // r13
  int v33; // r15d
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // r14
  unsigned int v37; // eax
  unsigned int v38; // r15d
  __int64 v39; // rbx
  __int64 v40; // rbx
  int v41; // eax
  unsigned __int16 v42; // cx
  unsigned int v43; // ebx
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r10
  void *v48; // r11
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  BOOLEAN v53; // al
  __int64 v54; // rax
  unsigned int v55; // r13d
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rcx
  int v63; // [rsp+20h] [rbp-B8h]
  int v64; // [rsp+28h] [rbp-B0h]
  int v65; // [rsp+60h] [rbp-78h]
  unsigned int v66; // [rsp+64h] [rbp-74h]
  unsigned int v67; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v68; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v69; // [rsp+70h] [rbp-68h]
  int v70; // [rsp+74h] [rbp-64h]
  int v71; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v72; // [rsp+7Ch] [rbp-5Ch]
  int v73; // [rsp+80h] [rbp-58h]
  int v74; // [rsp+84h] [rbp-54h]
  __int64 v75; // [rsp+88h] [rbp-50h]
  __int64 v76; // [rsp+90h] [rbp-48h]
  unsigned __int8 v79; // [rsp+F8h] [rbp+20h]
  __int64 v80; // [rsp+F8h] [rbp+20h]

  v13 = 0;
  v14 = a8;
  v15 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v17 = a2;
  v67 = 0;
  v65 = 0;
  v71 = -1;
  v72 = result;
  if ( a8 )
  {
    v19 = (_DWORD *)(a9 + 24);
    v20 = a8;
    do
    {
      *v19 = a1;
      v19 += 12;
      --v20;
    }
    while ( v20 );
    result = v72;
  }
  v21 = a11;
  if ( !v15 && !a11 )
  {
    v13 = a1 | *(_DWORD *)a13;
    v65 = v13;
  }
  v68 = v13;
  v22 = (char *)(a4 + 8);
  v66 = 0;
  if ( !(_DWORD)result )
    return result;
  v23 = (__int64)a7;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v13 )
      return result;
    if ( (v22[1] & 8) != 0 )
      goto LABEL_33;
    if ( (_DWORD)result )
      goto LABEL_11;
    if ( *v22 )
    {
      if ( *v22 != 9 )
        goto LABEL_33;
LABEL_11:
      v24 = *v22;
      if ( !*v22 )
        goto LABEL_12;
      if ( v24 == 5 )
      {
        v56 = *((_DWORD *)v22 + 2);
        if ( (v56 & 1) != 0 && v22 != (char *)-12LL )
        {
          if ( a10 )
          {
            v57 = 504LL;
            if ( !v21 )
              v57 = 232LL;
            LOBYTE(v64) = a12;
            LOBYTE(v63) = v21;
            if ( (unsigned __int8)SepSidInTokenSidHash(
                                    v17 + v57,
                                    v23,
                                    &v22[16 * (v56 & 1) + ((8LL * (v56 & 2)) | 0xC)],
                                    0LL,
                                    v63,
                                    v64)
              && (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a9, v14, &v67) )
            {
              AuthzBasepAddAccessTypeList(a9, v14, v67, v66, *((_DWORD *)v22 + 1), 0);
            }
            goto LABEL_32;
          }
          goto LABEL_33;
        }
        v58 = 504LL;
        v59 = (__int64)&v22[16 * (v56 & 1) + ((8LL * (v56 & 2)) | 0xC)];
        LOBYTE(v64) = a12;
        if ( !v21 )
          v58 = 232LL;
        v60 = v17 + v58;
      }
      else
      {
        if ( v24 != 4 )
        {
          switch ( v24 )
          {
            case 1:
              LOBYTE(v64) = a12;
              v51 = 504LL;
              LOBYTE(v63) = v21;
              if ( !v21 )
                v51 = 232LL;
              LOBYTE(a4) = 1;
              if ( !(unsigned __int8)SepSidInTokenSidHash(v17 + v51, v23, v22 + 8, a4, v63, v64) )
                goto LABEL_32;
              break;
            case 6:
              v62 = 504LL;
              LOBYTE(a4) = 1;
              LOBYTE(v64) = a12;
              LOBYTE(v63) = v21;
              if ( !v21 )
                v62 = 232LL;
              if ( !(unsigned __int8)SepSidInTokenSidHash(
                                       v17 + v62,
                                       v23,
                                       &v22[16 * (*((_DWORD *)v22 + 2) & 1) + ((8LL * (*((_DWORD *)v22 + 2) & 2)) | 0xC)],
                                       a4,
                                       v63,
                                       v64) )
                goto LABEL_32;
              if ( (*((_DWORD *)v22 + 2) & 1) != 0 && v22 != (char *)-12LL && a10 )
              {
                if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a9, v14, &v67) )
                  goto LABEL_32;
                result = *(unsigned int *)(a9 + 48LL * v67 + 24);
                if ( ((unsigned int)result & *((_DWORD *)v22 + 1)) == 0 )
                  goto LABEL_32;
                return result;
              }
              break;
            case 9:
              v42 = *((_WORD *)v22 + 1);
              v43 = 4 * (unsigned __int8)v22[9] + 8;
              if ( v42 - v43 == 8 )
                goto LABEL_33;
              if ( a5 && !*a6 )
              {
                AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
                v42 = *((_WORD *)v22 + 1);
              }
              v44 = *(_QWORD **)(v17 + 1096);
              if ( v44 )
              {
                v45 = v44[75];
                v46 = v44[73];
                v47 = v44[74];
                v48 = (void *)v44[72];
              }
              else
              {
                v45 = 0LL;
                v46 = 0LL;
                v47 = 0LL;
                v48 = 0LL;
              }
              AuthzBasepEvaluateAceCondition(
                (_DWORD *)v17,
                *(void **)(v17 + 776),
                (void *)*a6,
                v48,
                v47,
                v46,
                v45,
                &v22[v43 + 8],
                v42 - v43 - 8,
                0,
                v21,
                &v71);
              if ( v71 != 1 )
                goto LABEL_32;
              if ( !v15 && !v21 && v13 )
              {
                if ( SepIsPackageSid((__int64)(v22 + 8)) )
                {
LABEL_65:
                  SepMatchPackage(
                    v17,
                    v68,
                    v22 + 8,
                    *((unsigned int *)v22 + 1),
                    a13 + 21,
                    a13 + 4,
                    a13 + 20,
                    a13 + 16,
                    a13 + 24);
                  v41 = ~*(_DWORD *)(a13 + 4);
                  v13 &= v41;
                  *(_DWORD *)a13 &= v41;
                  v65 = v13;
                  goto LABEL_32;
                }
                if ( SepIsCapabilitySid((__int64)(v22 + 8)) )
                {
LABEL_94:
                  SepMatchCapability(
                    v17,
                    v68,
                    (__int64)(v22 + 8),
                    *((_DWORD *)v22 + 1),
                    (_BYTE *)(a13 + 22),
                    (_DWORD *)(a13 + 8));
                  v52 = ~*(_DWORD *)(a13 + 8);
                  v13 &= v52;
                  *(_DWORD *)a13 &= v52;
                  v65 = v13;
                  goto LABEL_32;
                }
                v14 = a8;
              }
              if ( !*(_DWORD *)(a9 + 24) )
                goto LABEL_32;
              v49 = v21 ? 504LL : 232LL;
              LOBYTE(v64) = a12;
              LOBYTE(v63) = v21;
              if ( !(unsigned __int8)SepSidInTokenSidHash(v49 + v17, a7, v22 + 8, 0LL, v63, v64) )
                goto LABEL_32;
              v50 = *((_DWORD *)v22 + 1);
LABEL_87:
              AuthzBasepAddAccessTypeList(a9, v14, 0, v66, v50, 0);
              goto LABEL_32;
            default:
              goto LABEL_33;
          }
          result = *((unsigned int *)v22 + 1);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_32;
          return result;
        }
        v61 = 504LL;
        if ( !v21 )
          v61 = 232LL;
        LOBYTE(v64) = a12;
        LOBYTE(v63) = v21;
        if ( !(unsigned __int8)SepSidInTokenSidHash(
                                 v61 + v17,
                                 v23,
                                 &v22[4 * (unsigned __int8)v22[13] + 20],
                                 0LL,
                                 v63,
                                 v64) )
          goto LABEL_32;
        v59 = (__int64)(v22 + 12);
        v60 = v61 + a3;
        LOBYTE(v64) = a12;
        v23 = 0LL;
      }
      LOBYTE(v63) = v21;
      if ( !(unsigned __int8)SepSidInTokenSidHash(v60, v23, v59, 0LL, v63, v64) )
        goto LABEL_32;
      v50 = *((_DWORD *)v22 + 1);
      if ( v14 == 1 )
      {
        *(_DWORD *)(a9 + 24) &= ~v50;
        goto LABEL_32;
      }
      goto LABEL_87;
    }
LABEL_12:
    if ( !v15 && !v21 && v13 )
    {
      v39 = SePackagePrefixSid;
      if ( (unsigned __int8)v22[9] >= 2u
        && v22[8] == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory(v22 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v22 + 4) == *(_DWORD *)(v39 + 8) )
      {
        goto LABEL_65;
      }
      v40 = SeCapabilityPrefixSid;
      if ( (unsigned __int8)v22[9] >= 2u
        && v22[8] == *(_BYTE *)SeCapabilityPrefixSid
        && RtlCompareMemory(v22 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v22 + 4) == *(_DWORD *)(v40 + 8) )
      {
        goto LABEL_94;
      }
    }
    v25 = *(_DWORD *)(a9 + 24);
    v23 = (__int64)a7;
    v70 = v25;
    if ( !v25 )
      goto LABEL_61;
    v26 = (unsigned __int8 *)(v22 + 8);
    v27 = 504LL;
    if ( !v21 )
      v27 = 232LL;
    v28 = v27 + v17;
    if ( a7 )
    {
      v53 = RtlEqualSid(SePrincipalSelfSid, v22 + 8);
      v23 = (__int64)a7;
      if ( v53 )
        v26 = a7;
    }
    if ( a12 && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v26 )
    {
      if ( !memcmp(SeOwnerRightsSid, v26, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
      {
LABEL_29:
        v37 = *((_DWORD *)v22 + 1);
        if ( a8 == 1 )
        {
          *(_DWORD *)(a9 + 24) = v25 & ~v37;
          goto LABEL_31;
        }
        AuthzBasepAddAccessTypeList(a9, a8, 0, v66, v37, 0);
        v13 = v65;
        goto LABEL_32;
      }
      v23 = (__int64)a7;
    }
    if ( !v28 || !v26 )
    {
LABEL_61:
      v13 = v65;
      goto LABEL_33;
    }
    v29 = v26[1];
    v30 = 0;
    a4 = *(unsigned __int16 *)v26;
    v75 = a4;
    v79 = 0;
    v31 = 4 * v29 + 8;
    v69 = v31;
    v32 = *(_QWORD *)(v28 + 8LL * (v26[4 * ((unsigned __int64)(unsigned int)a4 >> 8) + 4] & 0xF) + 16) & *(_QWORD *)(v28 + 8 * ((unsigned __int64)v26[4 * ((unsigned __int64)(unsigned int)a4 >> 8) + 4] >> 4) + 144);
    if ( !v32 )
    {
LABEL_37:
      v38 = *(_DWORD *)v28;
      if ( *(_DWORD *)v28 > 0x40u )
      {
        v54 = *(_QWORD *)(v28 + 8);
        v55 = 64;
        v80 = v54;
        do
        {
          v36 = v54 + 16LL * v55;
          if ( **(_WORD **)v36 == (_WORD)a4 )
          {
            if ( !memcmp(v26, *(const void **)v36, v31) )
              goto LABEL_25;
            v54 = v80;
            a4 = v75;
            v31 = v69;
          }
          ++v55;
        }
        while ( v55 < v38 );
      }
      goto LABEL_31;
    }
    while ( 1 )
    {
      LOBYTE(v33) = v32;
      if ( (_BYTE)v32 )
        break;
LABEL_42:
      v30 += 8;
      v32 >>= 8;
      v79 = v30;
      if ( !v32 )
        goto LABEL_37;
    }
    v34 = *(_QWORD *)(v28 + 8);
    v35 = v30;
    v76 = v34;
    v74 = v30;
    while ( 1 )
    {
      v73 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v33);
      v36 = v34 + 16LL * (unsigned int)(v35 + v73);
      if ( **(_WORD **)v36 == (_WORD)a4 )
        break;
LABEL_40:
      v35 = v74;
      v33 = (unsigned __int8)v33 ^ (1 << v73);
      if ( !(_BYTE)v33 )
      {
        v30 = v79;
        goto LABEL_42;
      }
    }
    if ( memcmp(v26, *(const void **)v36, v31) )
    {
      v34 = v76;
      a4 = v75;
      v31 = v69;
      goto LABEL_40;
    }
LABEL_25:
    if ( !a11 && v36 == *(_QWORD *)(v28 + 8) && (*(_DWORD *)(v36 + 8) & 0x10) == 0 || (*(_DWORD *)(v36 + 8) & 4) != 0 )
    {
      v25 = v70;
      goto LABEL_29;
    }
LABEL_31:
    v13 = v65;
LABEL_32:
    v23 = (__int64)a7;
LABEL_33:
    result = *((unsigned __int16 *)v22 + 1);
    v14 = a8;
    v22 += result;
    v21 = a11;
    v17 = a2;
    ++v66;
  }
  while ( v66 < v72 );
  return result;
}
