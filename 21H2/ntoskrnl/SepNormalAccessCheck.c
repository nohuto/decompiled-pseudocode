/*
 * XREFs of SepNormalAccessCheck @ 0x14035B720
 * Callers:
 *     SepAccessCheck @ 0x14035A160 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepAddAccessTypeList @ 0x14021F97C (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x14022EED0 (SepIsPackageSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140230DD8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsCapabilitySid @ 0x14023453C (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x1402371FC (SepMatchCapability.c)
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     SepSidInToken @ 0x14026CA24 (SepSidInToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402F24D0 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x1402F2D98 (SepMatchPackage.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x1405C18E0 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        void *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13,
        char a14)
{
  __int64 v14; // r11
  unsigned int v15; // r14d
  int v16; // r12d
  __int64 result; // rax
  __int64 v18; // rbp
  int v20; // r15d
  _DWORD *v21; // rax
  __int64 v22; // rcx
  char v23; // r13
  char *v24; // rsi
  void *v25; // rdx
  char v26; // al
  int v27; // ebx
  __int64 v28; // r14
  __int64 v29; // r14
  unsigned __int8 *v30; // rbp
  int v31; // eax
  unsigned __int8 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // r10d
  unsigned __int64 v35; // r15
  int v36; // r13d
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // rbx
  unsigned int v40; // eax
  unsigned int v41; // r15d
  __int64 v42; // rbx
  __int64 v43; // rbx
  _DWORD *v44; // rbx
  int v45; // eax
  unsigned __int16 v46; // cx
  unsigned int v47; // ebx
  _QWORD *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r10
  __int64 v52; // rax
  unsigned int v53; // r13d
  int v54; // eax
  char *v55; // rbx
  char *v56; // rcx
  unsigned int v57; // [rsp+60h] [rbp-78h]
  int v58; // [rsp+64h] [rbp-74h]
  unsigned int v59; // [rsp+68h] [rbp-70h] BYREF
  int v60; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v61; // [rsp+70h] [rbp-68h]
  int v62; // [rsp+74h] [rbp-64h]
  int v63; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v64; // [rsp+7Ch] [rbp-5Ch]
  int v65; // [rsp+80h] [rbp-58h]
  int v66; // [rsp+84h] [rbp-54h]
  __int64 v67; // [rsp+88h] [rbp-50h]
  __int64 v68; // [rsp+90h] [rbp-48h]
  unsigned __int8 v71; // [rsp+F8h] [rbp+20h]
  __int64 v72; // [rsp+F8h] [rbp+20h]

  v14 = 0LL;
  v15 = a8;
  v16 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v18 = a2;
  v59 = 0;
  v20 = 0;
  v58 = 0;
  v63 = -1;
  v64 = result;
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
    result = v64;
  }
  v23 = a11;
  if ( !v16 && !a11 )
  {
    v20 = a1 | *(_DWORD *)a13;
    v58 = v20;
  }
  v60 = v20;
  v24 = (char *)(a4 + 8);
  v57 = 0;
  if ( !(_DWORD)result )
    return result;
  v25 = a7;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v20 )
      return result;
    if ( (v24[1] & 8) != 0 )
      goto LABEL_34;
    if ( (_DWORD)result )
      goto LABEL_11;
    if ( *v24 )
    {
      if ( *v24 != 9 )
        goto LABEL_34;
LABEL_11:
      v26 = *v24;
      if ( !*v24 )
        goto LABEL_12;
      switch ( v26 )
      {
        case 5:
          v54 = *((_DWORD *)v24 + 2);
          v55 = v24 + 12;
          if ( (v54 & 1) == 0 )
            v55 = 0LL;
          if ( v55 )
          {
            if ( a10 )
            {
              if ( SepSidInToken(v18, v25, &v24[16 * (v54 & 1) + ((8LL * (v54 & 2)) | 0xC)], 0, v23, a12, a14)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v55, a9, v15, &v59) )
              {
                AuthzBasepAddAccessTypeList(a9, v15, v59, v57, *((_DWORD *)v24 + 1), 0);
              }
              goto LABEL_32;
            }
            goto LABEL_34;
          }
          if ( !SepSidInToken(v18, v25, &v24[16 * (v54 & 1) + ((8LL * (v54 & 2)) | 0xC)], 0, v23, a12, a14) )
            goto LABEL_32;
          v40 = *((_DWORD *)v24 + 1);
          if ( v15 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v40;
            goto LABEL_32;
          }
          goto LABEL_86;
        case 4:
          if ( !SepSidInToken(v18, v25, &v24[4 * (unsigned __int8)v24[13] + 20], 0, v23, a12, a14)
            || !SepSidInToken(a3, 0LL, v24 + 12, 0, v23, a12, a14) )
          {
            goto LABEL_32;
          }
          v40 = *((_DWORD *)v24 + 1);
          if ( v15 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v40;
            goto LABEL_32;
          }
          goto LABEL_86;
        case 1:
          if ( !SepSidInToken(v18, v25, v24 + 8, 1, v23, a12, 0) )
            goto LABEL_32;
          result = *((unsigned int *)v24 + 1);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_32;
          return result;
        case 6:
          if ( !SepSidInToken(
                  v18,
                  v25,
                  &v24[16 * (*((_DWORD *)v24 + 2) & 1) + ((8LL * (*((_DWORD *)v24 + 2) & 2)) | 0xC)],
                  1,
                  v23,
                  a12,
                  0) )
            goto LABEL_32;
          v56 = v24 + 12;
          v14 = 0LL;
          if ( (*((_DWORD *)v24 + 2) & 1) == 0 )
            v56 = 0LL;
          if ( v56 && a10 )
          {
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v56, a9, v15, &v59) )
              goto LABEL_32;
            result = *(unsigned int *)(a9 + 48LL * v59 + 24);
            if ( ((unsigned int)result & *((_DWORD *)v24 + 1)) == 0 )
              goto LABEL_32;
          }
          else
          {
            result = *((unsigned int *)v24 + 1);
            if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
              goto LABEL_33;
          }
          return result;
      }
      if ( v26 != 9 )
        goto LABEL_34;
      v46 = *((_WORD *)v24 + 1);
      v47 = 4 * (unsigned __int8)v24[9] + 8;
      if ( v46 - v47 == 8 )
        goto LABEL_34;
      if ( a5 && !*a6 )
      {
        AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
        v46 = *((_WORD *)v24 + 1);
        v14 = 0LL;
      }
      v48 = *(_QWORD **)(v18 + 1096);
      if ( v48 )
      {
        v49 = v48[75];
        v50 = v48[73];
        v51 = v48[74];
        v14 = v48[72];
      }
      else
      {
        v49 = 0LL;
        v50 = 0LL;
        v51 = 0LL;
      }
      AuthzBasepEvaluateAceCondition(
        v18,
        *(_QWORD *)(v18 + 776),
        *a6,
        v14,
        v51,
        v50,
        v49,
        &v24[v47 + 8],
        v46 - v47 - 8,
        0,
        v23,
        &v63);
      if ( v63 != 1 )
        goto LABEL_32;
      if ( !v16 && !v23 && v20 )
      {
        if ( SepIsPackageSid((__int64)(v24 + 8)) )
        {
LABEL_63:
          v44 = (_DWORD *)(a13 + 4);
          SepMatchPackage(
            a2,
            v60,
            (__int64)(v24 + 8),
            *((_DWORD *)v24 + 1),
            (_BYTE *)(a13 + 21),
            (_DWORD *)(a13 + 4),
            (_BYTE *)(a13 + 20),
            (_DWORD *)(a13 + 16),
            (_BYTE *)(a13 + 24));
        }
        else
        {
          if ( !SepIsCapabilitySid((__int64)(v24 + 8)) )
          {
            v18 = a2;
            goto LABEL_83;
          }
LABEL_88:
          v44 = (_DWORD *)(a13 + 8);
          SepMatchCapability(
            a2,
            v60,
            (__int64)(v24 + 8),
            *((_DWORD *)v24 + 1),
            (_BYTE *)(a13 + 22),
            (_DWORD *)(a13 + 8));
        }
        v45 = ~*v44;
        v58 = v45 & v20;
        *(_DWORD *)a13 &= v45;
        goto LABEL_32;
      }
LABEL_83:
      if ( !*(_DWORD *)(a9 + 24) )
        goto LABEL_32;
      if ( !SepSidInToken(v18, a7, v24 + 8, 0, v23, a12, a14) )
      {
        v25 = a7;
LABEL_134:
        v14 = 0LL;
        goto LABEL_34;
      }
      v40 = *((_DWORD *)v24 + 1);
LABEL_86:
      AuthzBasepAddAccessTypeList(a9, v15, 0, v57, v40, 0);
      goto LABEL_32;
    }
LABEL_12:
    if ( !v16 && !v23 && v20 )
    {
      v42 = SePackagePrefixSid;
      if ( (unsigned __int8)v24[9] >= 2u
        && v24[8] == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory(v24 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v24 + 4) == *(_DWORD *)(v42 + 8) )
      {
        goto LABEL_63;
      }
      v43 = SeCapabilityPrefixSid;
      if ( (unsigned __int8)v24[9] >= 2u
        && v24[8] == *(_BYTE *)SeCapabilityPrefixSid
        && RtlCompareMemory(v24 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v24 + 4) == *(_DWORD *)(v43 + 8) )
      {
        goto LABEL_88;
      }
      v18 = a2;
    }
    v27 = *(_DWORD *)(a9 + 24);
    v62 = v27;
    if ( !v27 )
      goto LABEL_32;
    v28 = 504LL;
    if ( !v23 )
      v28 = 232LL;
    v29 = v18 + v28;
    v30 = (unsigned __int8 *)(v24 + 8);
    if ( a14 && v24 != (char *)-8LL && RtlEqualSid(SeAliasAdminsSid, v24 + 8) )
      goto LABEL_39;
    if ( a7 && RtlEqualSid(SePrincipalSelfSid, v24 + 8) )
      v30 = (unsigned __int8 *)a7;
    if ( a12
      && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v30
      && !memcmp(SeOwnerRightsSid, v30, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
    {
LABEL_30:
      v15 = a8;
      v40 = *((_DWORD *)v24 + 1);
      if ( a8 == 1 )
      {
        *(_DWORD *)(a9 + 24) = v27 & ~v40;
        goto LABEL_32;
      }
      goto LABEL_86;
    }
    if ( !v29 )
    {
      v15 = a8;
      v25 = a7;
      goto LABEL_134;
    }
    if ( !v30 )
    {
      v15 = a8;
      v25 = a7;
      v14 = 0LL;
      goto LABEL_34;
    }
    v31 = v30[1];
    v32 = 0;
    v33 = *(unsigned __int16 *)v30;
    v67 = v33;
    v71 = 0;
    v34 = 4 * v31 + 8;
    v61 = v34;
    v35 = *(_QWORD *)(v29 + 8LL * (v30[4 * ((unsigned __int64)(unsigned int)v33 >> 8) + 4] & 0xF) + 16) & *(_QWORD *)(v29 + 8 * ((unsigned __int64)v30[4 * ((unsigned __int64)(unsigned int)v33 >> 8) + 4] >> 4) + 144);
    if ( !v35 )
    {
LABEL_38:
      v41 = *(_DWORD *)v29;
      if ( *(_DWORD *)v29 <= 0x40u )
        goto LABEL_39;
      v52 = *(_QWORD *)(v29 + 8);
      v53 = 64;
      v72 = v52;
      do
      {
        v39 = v52 + 16LL * v53;
        if ( **(_WORD **)v39 == (_WORD)v33 )
        {
          if ( !memcmp(v30, *(const void **)v39, v34) )
            goto LABEL_26;
          v52 = v72;
          LOWORD(v33) = v67;
          v34 = v61;
        }
        ++v53;
      }
      while ( v53 < v41 );
      v15 = a8;
      v23 = a11;
      goto LABEL_32;
    }
    while ( 1 )
    {
      LOBYTE(v36) = v35;
      if ( (_BYTE)v35 )
        break;
LABEL_54:
      v32 += 8;
      v35 >>= 8;
      v71 = v32;
      if ( !v35 )
      {
        v23 = a11;
        goto LABEL_38;
      }
    }
    v37 = *(_QWORD *)(v29 + 8);
    v38 = v32;
    v68 = v37;
    v66 = v32;
    while ( 1 )
    {
      v65 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v36);
      v39 = v37 + 16LL * (unsigned int)(v38 + v65);
      if ( **(_WORD **)v39 == (_WORD)v33 )
        break;
LABEL_60:
      v38 = v66;
      v36 = (unsigned __int8)v36 ^ (1 << v65);
      if ( !(_BYTE)v36 )
      {
        v32 = v71;
        goto LABEL_54;
      }
    }
    if ( memcmp(v30, *(const void **)v39, v34) )
    {
      v37 = v68;
      LOWORD(v33) = v67;
      v34 = v61;
      goto LABEL_60;
    }
LABEL_26:
    v23 = a11;
    if ( !a11 && v39 == *(_QWORD *)(v29 + 8) && (*(_DWORD *)(v39 + 8) & 0x10) == 0 || (*(_DWORD *)(v39 + 8) & 4) != 0 )
    {
      v27 = v62;
      goto LABEL_30;
    }
LABEL_39:
    v15 = a8;
LABEL_32:
    v14 = 0LL;
LABEL_33:
    v25 = a7;
LABEL_34:
    result = *((unsigned __int16 *)v24 + 1);
    v20 = v58;
    v24 += result;
    v18 = a2;
    ++v57;
  }
  while ( v57 < v64 );
  return result;
}
