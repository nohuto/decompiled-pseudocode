/*
 * XREFs of SepMaximumAccessCheck @ 0x1402D1A30
 * Callers:
 *     SepAccessCheck @ 0x1402CFBA0 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x14024D5F0 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x14024DEB8 (SepMatchPackage.c)
 *     AuthzBasepAddAccessTypeList @ 0x1402FAD8C (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x1403082C0 (SepIsPackageSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14030A378 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsCapabilitySid @ 0x14030DAAC (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x14031070C (SepMatchCapability.c)
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     SepSidInToken @ 0x140347A94 (SepSidInToken.c)
 *     memcmp @ 0x1403D22E0 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x1405C15F0 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13,
        char a14)
{
  unsigned int v14; // r10d
  __int64 v15; // r11
  __int64 v16; // rbp
  int v17; // esi
  char v18; // di
  int v19; // r13d
  __int64 result; // rax
  char *v21; // rbx
  unsigned int v22; // r14d
  __int64 v23; // r15
  char v24; // al
  unsigned __int8 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  unsigned __int8 v29; // r13
  __int64 v30; // r8
  unsigned int v31; // r9d
  unsigned __int64 v32; // rbp
  int v33; // r12d
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // r15
  unsigned int v37; // ebp
  _DWORD *v38; // r15
  _DWORD *v39; // rdi
  _DWORD *v40; // r15
  _DWORD *v41; // rdi
  __int64 v42; // rdx
  unsigned int *v43; // rcx
  int v44; // edx
  unsigned int *v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // eax
  char v48; // al
  int v49; // ecx
  unsigned __int16 v50; // cx
  unsigned int v51; // edi
  __int64 *v52; // r12
  _QWORD *v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r10
  unsigned int v57; // edx
  __int64 v58; // rcx
  unsigned int v59; // edx
  __int64 v60; // r13
  unsigned int v61; // r12d
  int v62; // eax
  char *v63; // rdi
  int v64; // ecx
  char v65; // al
  int v66; // esi
  unsigned int v67; // r8d
  char v68; // r12
  char v69; // si
  char *v70; // rcx
  int v71; // esi
  int v72; // [rsp+28h] [rbp-B0h]
  unsigned int v73; // [rsp+60h] [rbp-78h]
  int v74; // [rsp+64h] [rbp-74h] BYREF
  int v75; // [rsp+68h] [rbp-70h]
  unsigned int v76; // [rsp+6Ch] [rbp-6Ch]
  int v77; // [rsp+70h] [rbp-68h]
  __int64 v78; // [rsp+78h] [rbp-60h]
  __int64 v79; // [rsp+80h] [rbp-58h]
  int v82; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v83; // [rsp+F8h] [rbp+20h]

  v83 = a4;
  v14 = a7;
  v15 = 0LL;
  v16 = a1;
  v17 = *(_DWORD *)(a1 + 200) & 0x2000;
  v18 = a11;
  v19 = a2;
  v82 = 0;
  v77 = v17;
  v74 = -1;
  if ( a11 && a7 )
  {
    v42 = a7;
    v43 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v43 - 1) = *v43;
      v43 += 12;
      --v42;
    }
    while ( v42 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v21 = (char *)(a3 + 8);
  v76 = result;
  v22 = 0;
  if ( !(_DWORD)result )
    goto LABEL_33;
  v23 = a6;
  do
  {
    if ( (v21[1] & 8) != 0 )
      goto LABEL_32;
    v24 = *v21;
    if ( *v21 )
    {
      switch ( v24 )
      {
        case 5:
          v62 = *((_DWORD *)v21 + 2);
          v63 = v21 + 12;
          v64 = v62 & 1;
          if ( (v62 & 1) == 0 )
            v63 = 0LL;
          if ( v63 )
          {
            if ( !a9 )
              goto LABEL_113;
            if ( !(unsigned __int8)SepSidInToken(
                                     v16,
                                     v23,
                                     (unsigned int)v21 + ((8 * (v62 & 2)) | 0xC) + 16 * v64,
                                     0,
                                     a11,
                                     a12,
                                     a14) )
              goto LABEL_28;
            v66 = a8;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v63, a8, a7, &v82) )
            {
              AuthzBasepAddAccessTypeList(v66, a7, v82, v22, *((_DWORD *)v21 + 1), 1);
              goto LABEL_28;
            }
            v18 = a11;
            goto LABEL_115;
          }
          v18 = a11;
          v65 = SepSidInToken(v16, v23, (unsigned int)v21 + ((8 * (v62 & 2)) | 0xC) + 16 * v64, 0, a11, a12, a14);
          break;
        case 4:
          v68 = a14;
          v69 = a12;
          if ( !(unsigned __int8)SepSidInToken(
                                   v16,
                                   v23,
                                   (unsigned int)v21 + 4 * ((unsigned __int8)v21[13] + 5),
                                   0,
                                   v18,
                                   a12,
                                   a14) )
            goto LABEL_29;
          v65 = SepSidInToken(v19, 0, (int)v21 + 12, 0, 0, v69, v68);
          break;
        case 1:
          LOBYTE(a4) = 1;
          v48 = SepSidInToken(v16, v23, (int)v21 + 8, a4, v18, a12, 0);
          v14 = a7;
          if ( !v48 )
            goto LABEL_30;
          v49 = a8;
          if ( a7 == 1 )
          {
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_30;
          }
LABEL_94:
          v72 = 2;
LABEL_95:
          v59 = v14;
          goto LABEL_73;
        case 6:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   v16,
                                   v23,
                                   (_DWORD)v21
                                 + ((8 * (*((_DWORD *)v21 + 2) & 2)) | 0xC)
                                 + 16 * (*((_DWORD *)v21 + 2) & 1u),
                                   a4,
                                   v18,
                                   a12,
                                   0) )
            goto LABEL_29;
          v70 = v21 + 12;
          v15 = 0LL;
          if ( (*((_DWORD *)v21 + 2) & 1) == 0 )
            v70 = 0LL;
          if ( !v70 )
          {
            v14 = a7;
            v49 = a8;
            if ( a7 == 1 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_31;
            }
            goto LABEL_94;
          }
          if ( !a9 )
          {
            v14 = a7;
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_31;
          }
          v71 = a8;
          if ( (unsigned __int8)AuthzBasepObjectInTypeList(v70, a8, a7, &v82) )
          {
            AuthzBasepAddAccessTypeList(v71, a7, v82, v22, *((_DWORD *)v21 + 1), 2);
            goto LABEL_29;
          }
LABEL_115:
          v14 = v67;
          goto LABEL_30;
        case 9:
          v50 = *((_WORD *)v21 + 1);
          v51 = 4 * (unsigned __int8)v21[9] + 8;
          if ( (int)(v50 - v51 - 8) > 0 )
          {
            v52 = a5;
            if ( a4 && !*a5 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
              v50 = *((_WORD *)v21 + 1);
              v15 = 0LL;
            }
            v53 = *(_QWORD **)(v16 + 1096);
            if ( v53 )
            {
              v54 = v53[75];
              v55 = v53[73];
              v56 = v53[74];
              v15 = v53[72];
            }
            else
            {
              v54 = 0LL;
              v55 = 0LL;
              v56 = 0LL;
            }
            v57 = v50 - v51 - 8;
            v58 = v51;
            v18 = a11;
            AuthzBasepEvaluateAceCondition(
              v16,
              *(_QWORD *)(v16 + 776),
              *v52,
              v15,
              v56,
              v55,
              v54,
              &v21[v58 + 8],
              v57,
              0,
              a11,
              &v74);
            if ( v74 != 1 )
              goto LABEL_29;
            if ( !v17 && !v18 )
            {
              if ( (unsigned __int8)SepIsPackageSid(v21 + 8) )
              {
LABEL_43:
                v40 = (_DWORD *)a13;
                v41 = (_DWORD *)(a13 + 4);
                SepMatchPackage(
                  v16,
                  -1,
                  (__int64)(v21 + 8),
                  *((_DWORD *)v21 + 1),
                  (_BYTE *)(a13 + 21),
                  (_DWORD *)(a13 + 4),
                  (_BYTE *)(a13 + 20),
                  (_DWORD *)(a13 + 16),
                  (_BYTE *)(a13 + 24));
                *v40 &= ~*v41;
                goto LABEL_28;
              }
              if ( (unsigned __int8)SepIsCapabilitySid(v21 + 8) )
              {
LABEL_42:
                v38 = (_DWORD *)a13;
                v39 = (_DWORD *)(a13 + 8);
                SepMatchCapability(v16, -1, (_DWORD)v21 + 8, *((_DWORD *)v21 + 1), a13 + 22, a13 + 8);
                *v38 &= ~*v39;
                goto LABEL_28;
              }
            }
            if ( !(unsigned __int8)SepSidInToken(v16, v23, (int)v21 + 8, 0, v18, a12, a14) )
              goto LABEL_29;
            v59 = a7;
            v49 = a8;
            v72 = 1;
LABEL_73:
            AuthzBasepAddAccessTypeList(v49, v59, 0, v22, *((_DWORD *)v21 + 1), v72);
            goto LABEL_29;
          }
LABEL_113:
          v18 = a11;
          goto LABEL_32;
        default:
          goto LABEL_32;
      }
      v14 = a7;
      if ( !v65 )
        goto LABEL_30;
      v49 = a8;
      if ( a7 == 1 )
      {
        *(_DWORD *)(a8 + 28) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 32);
        goto LABEL_30;
      }
      v72 = 1;
      goto LABEL_95;
    }
    if ( !v17 && !v18 )
    {
      if ( (unsigned __int8)SepIsPackageSid(v21 + 8) )
        goto LABEL_43;
      if ( (unsigned __int8)SepIsCapabilitySid(v21 + 8) )
        goto LABEL_42;
    }
    v25 = (unsigned __int8 *)(v21 + 8);
    v26 = 504LL;
    if ( !v18 )
      v26 = 232LL;
    v27 = v26 + v16;
    if ( a14 && v21 != (char *)-8LL && RtlEqualSid(SeAliasAdminsSid, v21 + 8) )
      goto LABEL_28;
    if ( v23 && RtlEqualSid(SePrincipalSelfSid, v21 + 8) )
      v25 = (unsigned __int8 *)v23;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v25) )
    {
LABEL_22:
      v14 = a7;
      if ( a7 != 1 )
      {
        AuthzBasepAddAccessTypeList(a8, a7, 0, v22, *((_DWORD *)v21 + 1), 1);
        goto LABEL_28;
      }
      v18 = a11;
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 32);
      goto LABEL_30;
    }
    if ( !v27 || !v25 )
      goto LABEL_28;
    v28 = v25[1];
    v29 = 0;
    v30 = *(unsigned __int16 *)v25;
    v78 = v30;
    v31 = 4 * v28 + 8;
    v73 = v31;
    v32 = *(_QWORD *)(v27 + 8LL * (v25[4 * ((unsigned __int64)(unsigned int)v30 >> 8) + 4] & 0xF) + 16) & *(_QWORD *)(v27 + 8 * ((unsigned __int64)v25[4 * ((unsigned __int64)(unsigned int)v30 >> 8) + 4] >> 4) + 144);
    if ( !v32 )
    {
LABEL_27:
      v37 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 > 0x40u )
      {
        v60 = *(_QWORD *)(v27 + 8);
        v61 = 64;
        do
        {
          v36 = v60 + 16LL * v61;
          if ( **(_WORD **)v36 == (_WORD)v30 )
          {
            if ( !memcmp(v25, *(const void **)v36, v31) )
              goto LABEL_19;
            LOWORD(v30) = v78;
            v31 = v73;
          }
          ++v61;
        }
        while ( v61 < v37 );
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      LOBYTE(v33) = v32;
      if ( (_BYTE)v32 )
        break;
LABEL_26:
      v29 += 8;
      v32 >>= 8;
      if ( !v32 )
        goto LABEL_27;
    }
    v34 = *(_QWORD *)(v27 + 8);
    v79 = v34;
    v35 = v29;
    while ( 1 )
    {
      v75 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v33);
      v36 = v34 + 16LL * (unsigned int)(v35 + v75);
      if ( **(_WORD **)v36 == (_WORD)v30 )
        break;
LABEL_25:
      v33 = (unsigned __int8)v33 ^ (1 << v75);
      v35 = v29;
      if ( !(_BYTE)v33 )
        goto LABEL_26;
    }
    if ( memcmp(v25, *(const void **)v36, v31) )
    {
      LOWORD(v30) = v78;
      v31 = v73;
      v34 = v79;
      goto LABEL_25;
    }
LABEL_19:
    if ( !a11 && v36 == *(_QWORD *)(v27 + 8) && (*(_DWORD *)(v36 + 8) & 0x10) == 0 || (*(_DWORD *)(v36 + 8) & 4) != 0 )
      goto LABEL_22;
LABEL_28:
    v18 = a11;
LABEL_29:
    v14 = a7;
LABEL_30:
    v15 = 0LL;
LABEL_31:
    a4 = v83;
LABEL_32:
    result = *((unsigned __int16 *)v21 + 1);
    ++v22;
    v17 = v77;
    v21 += result;
    v16 = a1;
    v23 = a6;
    v19 = a2;
  }
  while ( v22 < v76 );
LABEL_33:
  if ( v18 && v14 )
  {
    v44 = ~a10;
    v45 = (unsigned int *)(a8 + 28);
    v46 = v14;
    do
    {
      v47 = *v45;
      v45 += 12;
      result = *(v45 - 13) & (v44 | v47);
      *(v45 - 12) = result;
      --v46;
    }
    while ( v46 );
  }
  return result;
}
