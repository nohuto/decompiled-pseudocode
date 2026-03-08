/*
 * XREFs of SepMaximumAccessCheck @ 0x140208450
 * Callers:
 *     SepAccessCheck @ 0x140266980 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepAddAccessTypeList @ 0x140206EC4 (AuthzBasepAddAccessTypeList.c)
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     SepIsPackageSid @ 0x140208A9C (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140208AF4 (SepIsCapabilitySid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x14024717C (SepMatchPackage.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchCapability @ 0x1402E8F24 (SepMatchCapability.c)
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x14066CAA0 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        _DWORD *a13)
{
  unsigned int v13; // r10d
  __int64 v14; // rbp
  int v15; // esi
  char v16; // di
  __int64 v17; // r13
  __int64 result; // rax
  char *v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // r12
  char v22; // r15
  char v23; // al
  unsigned __int8 *v24; // rsi
  __int64 v25; // rax
  _DWORD *v26; // rdi
  __int64 v27; // rax
  unsigned __int8 v28; // r13
  __int16 v29; // r8
  unsigned int v30; // r9d
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rax
  unsigned __int64 v34; // rbp
  int v35; // r12d
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // r15
  unsigned int v39; // edi
  __int64 v40; // rdx
  unsigned int *v41; // rcx
  _DWORD *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rcx
  unsigned int v47; // edi
  _QWORD *v48; // rax
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r10
  __int64 v52; // r11
  int v53; // edx
  __int64 v54; // rcx
  __int64 v55; // r12
  unsigned int i; // ebp
  int v57; // eax
  __int64 v58; // rcx
  unsigned int v59; // r8d
  __int64 v60; // rcx
  char v61; // al
  __int64 v62; // rdx
  unsigned int v63; // r8d
  __int64 v64; // rcx
  char v65; // al
  __int64 v66; // rcx
  unsigned int v67; // r8d
  __int64 v68; // rcx
  int v69; // [rsp+20h] [rbp-B8h]
  int v70; // [rsp+28h] [rbp-B0h]
  int v71; // [rsp+28h] [rbp-B0h]
  int v72; // [rsp+60h] [rbp-78h]
  unsigned int v73; // [rsp+64h] [rbp-74h] BYREF
  unsigned int v74; // [rsp+68h] [rbp-70h]
  int v75; // [rsp+6Ch] [rbp-6Ch] BYREF
  int v76; // [rsp+70h] [rbp-68h]
  unsigned int v77; // [rsp+74h] [rbp-64h]
  _QWORD *v78; // [rsp+78h] [rbp-60h]
  __int64 v79; // [rsp+80h] [rbp-58h]
  __int16 v82; // [rsp+F0h] [rbp+18h]
  __int64 v83; // [rsp+F8h] [rbp+20h]

  v83 = a4;
  v13 = a7;
  v14 = a1;
  v15 = *(_DWORD *)(a1 + 200) & 0x2000;
  v16 = a11;
  v17 = a2;
  v73 = 0;
  v72 = v15;
  v75 = -1;
  if ( a11 && a7 )
  {
    v40 = a7;
    v41 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v41 - 1) = *v41;
      v41 += 12;
      --v40;
    }
    while ( v40 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v19 = (char *)(a3 + 8);
  v20 = 0;
  v77 = result;
  if ( !(_DWORD)result )
    goto LABEL_36;
  v21 = a6;
  v22 = a12;
  do
  {
    if ( (v19[1] & 8) != 0 )
      goto LABEL_35;
    v23 = *v19;
    if ( *v19 )
    {
      if ( v23 == 5 )
      {
        v57 = *((_DWORD *)v19 + 2);
        if ( (v57 & 1) != 0 )
        {
          if ( v19 != (char *)-12LL )
          {
            if ( a9 )
            {
              v58 = 504LL;
              LOBYTE(v70) = v22;
              LOBYTE(v69) = a11;
              if ( !a11 )
                v58 = 232LL;
              if ( (unsigned __int8)SepSidInTokenSidHash(
                                      v14 + v58,
                                      v21,
                                      &v19[16 * (v57 & 1) + ((8LL * (v57 & 2)) | 0xC)],
                                      0LL,
                                      v69,
                                      v70) )
              {
                if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v19 + 12, a8, a7, &v73) )
                {
                  v16 = a11;
                  v13 = v59;
                  goto LABEL_34;
                }
                AuthzBasepAddAccessTypeList(a8, a7, v73, v20, *((_DWORD *)v19 + 1), 1);
              }
              v16 = a11;
              goto LABEL_33;
            }
            goto LABEL_134;
          }
          v16 = a11;
        }
        v60 = 504LL;
        LOBYTE(v70) = a12;
        LOBYTE(v69) = v16;
        if ( !v16 )
          v60 = 232LL;
        v61 = SepSidInTokenSidHash(v14 + v60, v21, &v19[16 * (v57 & 1) + ((8LL * (v57 & 2)) | 0xC)], 0LL, v69, v70);
        v13 = a7;
        if ( v61 )
        {
          v46 = a8;
          if ( a7 == 1 )
          {
            v22 = a12;
            *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
            goto LABEL_34;
          }
          v71 = 1;
          goto LABEL_100;
        }
        goto LABEL_23;
      }
      if ( v23 != 4 )
      {
        if ( v23 == 1 )
        {
          LOBYTE(v70) = a12;
          v44 = 504LL;
          LOBYTE(v69) = v16;
          if ( !v16 )
            v44 = 232LL;
          LOBYTE(a4) = 1;
          v45 = SepSidInTokenSidHash(v14 + v44, v21, v19 + 8, a4, v69, v70);
          v13 = a7;
          if ( v45 )
          {
LABEL_64:
            v46 = a8;
            if ( v13 == 1 )
            {
              v22 = a12;
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_34;
            }
            v71 = 2;
LABEL_100:
            v62 = v13;
LABEL_101:
            v63 = 0;
            goto LABEL_103;
          }
LABEL_23:
          v22 = a12;
          goto LABEL_34;
        }
        if ( v23 == 6 )
        {
          v66 = 504LL;
          LOBYTE(a4) = 1;
          LOBYTE(v70) = a12;
          LOBYTE(v69) = v16;
          if ( !v16 )
            v66 = 232LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash(
                                   v14 + v66,
                                   v21,
                                   &v19[16 * (*((_DWORD *)v19 + 2) & 1) + ((8LL * (*((_DWORD *)v19 + 2) & 2)) | 0xC)],
                                   a4,
                                   v69,
                                   v70) )
            goto LABEL_32;
          if ( (*((_DWORD *)v19 + 2) & 1) != 0 && v19 != (char *)-12LL )
          {
            if ( !a9 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_32;
            }
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v19 + 12, a8, a7, &v73) )
            {
              v22 = a12;
              v13 = v67;
              goto LABEL_34;
            }
            v63 = v73;
            v46 = a8;
            v62 = a7;
            v71 = 2;
LABEL_103:
            AuthzBasepAddAccessTypeList(v46, v62, v63, v20, *((_DWORD *)v19 + 1), v71);
            goto LABEL_32;
          }
          v13 = a7;
          goto LABEL_64;
        }
        if ( v23 != 9 )
          goto LABEL_35;
        v47 = 4 * (unsigned __int8)v19[9] + 8;
        if ( (int)(*((unsigned __int16 *)v19 + 1) - v47 - 8) > 0 )
        {
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v48 = *(_QWORD **)(v14 + 1096);
          if ( v48 )
          {
            v49 = v48[72];
            v50 = v48[74];
            v51 = v48[73];
            v52 = v48[75];
          }
          else
          {
            LODWORD(v49) = 0;
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
          }
          v53 = *((unsigned __int16 *)v19 + 1) - v47 - 8;
          v54 = v47;
          v16 = a11;
          AuthzBasepEvaluateAceCondition(
            v14,
            *(_QWORD *)(v14 + 776),
            *a5,
            v49,
            v50,
            v51,
            v52,
            (__int64)&v19[v54 + 8],
            v53,
            0,
            a11,
            (__int64)&v75);
          if ( v75 != 1 )
            goto LABEL_33;
          if ( !v15 && !a11 )
          {
            if ( (unsigned __int8)SepIsPackageSid(v19 + 8) )
            {
LABEL_127:
              SepMatchPackage(
                v14,
                0xFFFFFFFFLL,
                v19 + 8,
                *((unsigned int *)v19 + 1),
                (char *)a13 + 21,
                a13 + 1,
                a13 + 5,
                a13 + 4,
                a13 + 6);
              v16 = a11;
              *a13 &= ~a13[1];
              v15 = v72;
              goto LABEL_33;
            }
            if ( (unsigned __int8)SepIsCapabilitySid(v19 + 8) )
            {
LABEL_49:
              SepMatchCapability(v14, -1, (_DWORD)v19 + 8, *((_DWORD *)v19 + 1), (__int64)a13 + 22, (__int64)(a13 + 2));
              v16 = a11;
              *a13 &= ~a13[2];
              v15 = v72;
              goto LABEL_33;
            }
            v15 = v72;
          }
          v68 = 504LL;
          if ( !a11 )
            v68 = 232LL;
          LOBYTE(v70) = a12;
          LOBYTE(v69) = a11;
          if ( !(unsigned __int8)SepSidInTokenSidHash(v14 + v68, v21, v19 + 8, 0LL, v69, v70) )
            goto LABEL_32;
          v62 = a7;
          v46 = a8;
          v71 = 1;
          goto LABEL_101;
        }
LABEL_134:
        v16 = a11;
        goto LABEL_35;
      }
      v64 = 504LL;
      if ( !v16 )
        v64 = 232LL;
      LOBYTE(v70) = a12;
      LOBYTE(v69) = v16;
      if ( (unsigned __int8)SepSidInTokenSidHash(v14 + v64, v21, &v19[4 * (unsigned __int8)v19[13] + 20], 0LL, v69, v70) )
      {
        LOBYTE(v70) = a12;
        LOBYTE(v69) = 0;
        v65 = SepSidInTokenSidHash(v17 + 232, 0LL, v19 + 12, 0LL, v69, v70);
        v13 = a7;
        if ( !v65 )
        {
LABEL_110:
          v22 = a12;
          goto LABEL_34;
        }
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
          goto LABEL_110;
        }
        AuthzBasepAddAccessTypeList(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
      }
      v22 = a12;
      goto LABEL_33;
    }
    if ( !v15 && !v16 )
    {
      if ( (unsigned __int8)SepIsPackageSid(v19 + 8) )
        goto LABEL_127;
      if ( (unsigned __int8)SepIsCapabilitySid(v19 + 8) )
        goto LABEL_49;
    }
    v24 = (unsigned __int8 *)(v19 + 8);
    v25 = 504LL;
    if ( !v16 )
      v25 = 232LL;
    v26 = (_DWORD *)(v25 + v14);
    if ( v21 && RtlEqualSid(SePrincipalSelfSid, v19 + 8) )
      v24 = (unsigned __int8 *)v21;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v24) )
    {
      v16 = a11;
      goto LABEL_21;
    }
    if ( !v26 || !v24 )
      goto LABEL_30;
    v27 = v24[1];
    v28 = 0;
    v29 = *(_WORD *)v24;
    v82 = *(_WORD *)v24;
    v30 = 4 * v27 + 8;
    LODWORD(v27) = v24[4 * v27 + 4];
    v74 = v30;
    v31 = v27 & 0xF;
    v32 = (unsigned __int64)(unsigned int)v27 >> 4;
    v33 = v26 + 2;
    v78 = v26 + 2;
    v34 = *(_QWORD *)&v26[2 * v31 + 4] & *(_QWORD *)&v26[2 * v32 + 36];
    if ( !v34 )
    {
LABEL_29:
      v39 = *v26;
      if ( v39 > 0x40 )
      {
        v55 = *v33;
        for ( i = 64; i < v39; ++i )
        {
          v38 = v55 + 16LL * i;
          if ( **(_WORD **)v38 == v29 )
          {
            if ( !memcmp(v24, *(const void **)v38, v30) )
              goto LABEL_18;
            v29 = v82;
            v30 = v74;
          }
        }
      }
LABEL_30:
      v16 = a11;
      goto LABEL_31;
    }
    while ( 1 )
    {
      LOBYTE(v35) = v34;
      if ( (_BYTE)v34 )
        break;
LABEL_27:
      v28 += 8;
      v34 >>= 8;
      if ( !v34 )
      {
        v78 = v33;
        goto LABEL_29;
      }
    }
    v36 = *v33;
    v79 = *v33;
    v37 = v28;
    while ( 1 )
    {
      v76 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v35);
      v38 = v36 + 16LL * (unsigned int)(v37 + v76);
      if ( **(_WORD **)v38 == v29 )
        break;
LABEL_25:
      v35 = (unsigned __int8)v35 ^ (1 << v76);
      v37 = v28;
      if ( !(_BYTE)v35 )
      {
        v33 = v78;
        goto LABEL_27;
      }
    }
    if ( memcmp(v24, *(const void **)v38, v30) )
    {
      v36 = v79;
      v29 = v82;
      v30 = v74;
      goto LABEL_25;
    }
LABEL_18:
    v16 = a11;
    if ( !a11 && v38 == *v78 && (*(_DWORD *)(v38 + 8) & 0x10) == 0 || (*(_DWORD *)(v38 + 8) & 4) != 0 )
    {
LABEL_21:
      v13 = a7;
      if ( a7 == 1 )
      {
        v15 = v72;
        *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
        goto LABEL_23;
      }
      AuthzBasepAddAccessTypeList(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
    }
LABEL_31:
    v15 = v72;
LABEL_32:
    v22 = a12;
LABEL_33:
    v13 = a7;
LABEL_34:
    a4 = v83;
LABEL_35:
    result = *((unsigned __int16 *)v19 + 1);
    ++v20;
    v14 = a1;
    v19 += result;
    v21 = a6;
    v17 = a2;
  }
  while ( v20 < v77 );
LABEL_36:
  if ( v16 && v13 )
  {
    v42 = (_DWORD *)(a8 + 28);
    v43 = v13;
    do
    {
      result = *(v42 - 1) & (*v42 | (unsigned int)~a10);
      *v42 = result;
      v42 += 12;
      --v43;
    }
    while ( v43 );
  }
  return result;
}
