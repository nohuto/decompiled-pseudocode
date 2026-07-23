/*
 * XREFs of SepMaximumAccessCheck @ 0x14035BFF0
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
 *     AuthzBasepObjectInTypeList @ 0x1405C18E0 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        void *a6,
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
  __int64 v19; // r13
  __int64 result; // rax
  char *v21; // rbx
  unsigned int v22; // r14d
  void *v23; // r15
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
  __int64 v49; // rcx
  unsigned __int16 v50; // cx
  unsigned int v51; // edi
  __int64 *v52; // r12
  _QWORD *v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r10
  unsigned int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r13
  unsigned int v61; // r12d
  int v62; // eax
  char *v63; // rdi
  char v64; // al
  __int64 v65; // rsi
  unsigned int v66; // r8d
  char v67; // r12
  char v68; // si
  char *v69; // rcx
  __int64 v70; // rsi
  int v71; // [rsp+28h] [rbp-B0h]
  unsigned int v72; // [rsp+60h] [rbp-78h]
  int v73; // [rsp+64h] [rbp-74h] BYREF
  int v74; // [rsp+68h] [rbp-70h]
  unsigned int v75; // [rsp+6Ch] [rbp-6Ch]
  int v76; // [rsp+70h] [rbp-68h]
  __int64 v77; // [rsp+78h] [rbp-60h]
  __int64 v78; // [rsp+80h] [rbp-58h]
  unsigned int v81; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v82; // [rsp+F8h] [rbp+20h]

  v82 = a4;
  v14 = a7;
  v15 = 0LL;
  v16 = a1;
  v17 = *(_DWORD *)(a1 + 200) & 0x2000;
  v18 = a11;
  v19 = a2;
  v81 = 0;
  v76 = v17;
  v73 = -1;
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
  v75 = result;
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
          if ( (v62 & 1) == 0 )
            v63 = 0LL;
          if ( v63 )
          {
            if ( !a9 )
              goto LABEL_113;
            if ( !SepSidInToken(v16, v23, &v21[16 * (v62 & 1) + ((8LL * (v62 & 2)) | 0xC)], 0, a11, a12, a14) )
              goto LABEL_28;
            v65 = a8;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v63, a8, a7, &v81) )
            {
              AuthzBasepAddAccessTypeList(v65, a7, v81, v22, *((_DWORD *)v21 + 1), 1);
              goto LABEL_28;
            }
            v18 = a11;
            goto LABEL_115;
          }
          v18 = a11;
          v64 = SepSidInToken(v16, v23, &v21[16 * (v62 & 1) + ((8LL * (v62 & 2)) | 0xC)], 0, a11, a12, a14);
          break;
        case 4:
          v67 = a14;
          v68 = a12;
          if ( !SepSidInToken(v16, v23, &v21[4 * (unsigned __int8)v21[13] + 20], 0, v18, a12, a14) )
            goto LABEL_29;
          v64 = SepSidInToken(v19, 0LL, v21 + 12, 0, 0, v68, v67);
          break;
        case 1:
          v48 = SepSidInToken(v16, v23, v21 + 8, 1, v18, a12, 0);
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
          v71 = 2;
LABEL_95:
          v59 = v14;
          goto LABEL_73;
        case 6:
          if ( !SepSidInToken(
                  v16,
                  v23,
                  &v21[16 * (*((_DWORD *)v21 + 2) & 1) + ((8LL * (*((_DWORD *)v21 + 2) & 2)) | 0xC)],
                  1,
                  v18,
                  a12,
                  0) )
            goto LABEL_29;
          v69 = v21 + 12;
          v15 = 0LL;
          if ( (*((_DWORD *)v21 + 2) & 1) == 0 )
            v69 = 0LL;
          if ( !v69 )
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
          v70 = a8;
          if ( (unsigned __int8)AuthzBasepObjectInTypeList(v69, a8, a7, &v81) )
          {
            AuthzBasepAddAccessTypeList(v70, a7, v81, v22, *((_DWORD *)v21 + 1), 2);
            goto LABEL_29;
          }
LABEL_115:
          v14 = v66;
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
              &v73);
            if ( v73 != 1 )
              goto LABEL_29;
            if ( !v17 && !v18 )
            {
              if ( SepIsPackageSid((__int64)(v21 + 8)) )
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
              if ( SepIsCapabilitySid((__int64)(v21 + 8)) )
              {
LABEL_42:
                v38 = (_DWORD *)a13;
                v39 = (_DWORD *)(a13 + 8);
                SepMatchCapability(
                  v16,
                  -1,
                  (__int64)(v21 + 8),
                  *((_DWORD *)v21 + 1),
                  (_BYTE *)(a13 + 22),
                  (_DWORD *)(a13 + 8));
                *v38 &= ~*v39;
                goto LABEL_28;
              }
            }
            if ( !SepSidInToken(v16, v23, v21 + 8, 0, v18, a12, a14) )
              goto LABEL_29;
            v59 = a7;
            v49 = a8;
            v71 = 1;
LABEL_73:
            AuthzBasepAddAccessTypeList(v49, v59, 0, v22, *((_DWORD *)v21 + 1), v71);
            goto LABEL_29;
          }
LABEL_113:
          v18 = a11;
          goto LABEL_32;
        default:
          goto LABEL_32;
      }
      v14 = a7;
      if ( !v64 )
        goto LABEL_30;
      v49 = a8;
      if ( a7 == 1 )
      {
        *(_DWORD *)(a8 + 28) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 32);
        goto LABEL_30;
      }
      v71 = 1;
      goto LABEL_95;
    }
    if ( !v17 && !v18 )
    {
      if ( SepIsPackageSid((__int64)(v21 + 8)) )
        goto LABEL_43;
      if ( SepIsCapabilitySid((__int64)(v21 + 8)) )
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
    v77 = v30;
    v31 = 4 * v28 + 8;
    v72 = v31;
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
            LOWORD(v30) = v77;
            v31 = v72;
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
    v78 = v34;
    v35 = v29;
    while ( 1 )
    {
      v74 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v33);
      v36 = v34 + 16LL * (unsigned int)(v35 + v74);
      if ( **(_WORD **)v36 == (_WORD)v30 )
        break;
LABEL_25:
      v33 = (unsigned __int8)v33 ^ (1 << v74);
      v35 = v29;
      if ( !(_BYTE)v33 )
        goto LABEL_26;
    }
    if ( memcmp(v25, *(const void **)v36, v31) )
    {
      LOWORD(v30) = v77;
      v31 = v72;
      v34 = v78;
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
    a4 = v82;
LABEL_32:
    result = *((unsigned __int16 *)v21 + 1);
    ++v22;
    v17 = v76;
    v21 += result;
    v16 = a1;
    v23 = a6;
    v19 = a2;
  }
  while ( v22 < v75 );
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
