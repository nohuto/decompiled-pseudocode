/*
 * XREFs of RtlpSetSecurityObject @ 0x1406531E0
 * Callers:
 *     SeSetSecurityDescriptorInfoEx @ 0x140611D00 (SeSetSecurityDescriptorInfoEx.c)
 *     SeSetSecurityDescriptorInfo @ 0x140654080 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx2 @ 0x140662CDC (SeSetSecurityDescriptorInfoEx2.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140228CC8 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x14024F9F0 (RtlpValidTrustSubjectContext.c)
 *     RtlFindAceBySid @ 0x14026C8B0 (RtlFindAceBySid.c)
 *     RtlFindAceByType @ 0x14035CF60 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpCombineAcls @ 0x1405DD6F0 (RtlpCombineAcls.c)
 *     SepValidOwnerSubjectContext @ 0x1405FBEDC (SepValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1406117C4 (RtlpCreateServerAcl.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     RtlValidSid @ 0x140651540 (RtlValidSid.c)
 *     RtlpApplyAclToObject @ 0x140653C60 (RtlpApplyAclToObject.c)
 *     SepValidLabelSubjectContext @ 0x1406974CC (SepValidLabelSubjectContext.c)
 *     RtlInitializeSid @ 0x1406BC580 (RtlInitializeSid.c)
 *     RtlpComputeMergedAcl @ 0x140914090 (RtlpComputeMergedAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140914EF4 (RtlpValidFilterAclSubjectContext.c)
 *     SepGetDefaultsSubjectContext @ 0x140921170 (SepGetDefaultsSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 *a8)
{
  _BOOL8 v8; // r12
  _QWORD *v9; // rsi
  __int64 v11; // r13
  unsigned __int16 *v12; // r14
  __int64 *p_SubjectContext; // r11
  __int16 v14; // ax
  void *v15; // rdi
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  ACL *v19; // r15
  __int16 v20; // r8
  int v21; // edx
  bool v22; // r9
  __int64 v23; // rax
  unsigned __int8 *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int8 *v28; // r12
  void *v29; // r15
  __int16 v30; // cx
  unsigned __int16 *v31; // r15
  __int16 v32; // dx
  unsigned int v33; // r13d
  int v34; // ecx
  unsigned int v35; // esi
  unsigned int v36; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v38; // rbx
  char *v39; // rdi
  __int16 v40; // ax
  __int64 v41; // rdx
  __int16 v42; // cx
  __int64 v43; // rcx
  _QWORD *v44; // rsi
  __int64 v45; // rcx
  char *v46; // rdi
  int valid; // esi
  void *v48; // r12
  void *v49; // rdi
  void *v50; // rbx
  _BYTE *AceByType; // rax
  _BYTE *v53; // r13
  char *v54; // rax
  void *TokenTrustLevel; // r13
  ULONG v56; // ecx
  __int64 v57; // r8
  unsigned __int8 *v58; // r11
  void *v59; // r10
  __int16 v60; // r9
  unsigned __int8 *v61; // rdx
  unsigned __int8 *v62; // r8
  __int16 v63; // ax
  __int16 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int16 v68; // cx
  __int64 v69; // rcx
  __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int8 *AceBySid; // rax
  unsigned __int8 v74; // cl
  unsigned int v75; // edx
  unsigned int v76; // edx
  unsigned int v77; // eax
  __int64 v78; // rax
  _DWORD *v79; // rax
  __int64 v80; // r8
  unsigned int v81; // edx
  __int64 v82; // rax
  int v83; // ebx
  unsigned int v84; // eax
  unsigned int v85; // edx
  unsigned int v86; // edx
  __int64 v87; // r8
  int v88; // eax
  __int64 v89; // rax
  __int16 v90; // dx
  __int64 v91; // rcx
  int v92; // ecx
  unsigned __int8 v93; // cl
  __int16 v94; // [rsp+58h] [rbp-B0h]
  ULONG Index; // [rsp+5Ch] [rbp-ACh] BYREF
  int v96; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 v97; // [rsp+64h] [rbp-A4h]
  bool v98; // [rsp+65h] [rbp-A3h]
  char v99; // [rsp+66h] [rbp-A2h]
  char v100; // [rsp+67h] [rbp-A1h]
  char v101; // [rsp+68h] [rbp-A0h]
  char v102; // [rsp+69h] [rbp-9Fh]
  char v103; // [rsp+6Ah] [rbp-9Eh]
  char v104; // [rsp+6Bh] [rbp-9Dh]
  char v105; // [rsp+6Ch] [rbp-9Ch]
  char v106; // [rsp+6Dh] [rbp-9Bh]
  char v107; // [rsp+6Eh] [rbp-9Ah]
  char v108; // [rsp+6Fh] [rbp-99h]
  __int64 v109; // [rsp+70h] [rbp-98h] BYREF
  void *Src; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v111; // [rsp+80h] [rbp-88h]
  PVOID v112; // [rsp+88h] [rbp-80h]
  PVOID v113; // [rsp+90h] [rbp-78h]
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+98h] [rbp-70h] BYREF
  PVOID v115; // [rsp+A0h] [rbp-68h]
  PVOID v116; // [rsp+A8h] [rbp-60h]
  _QWORD *v117; // [rsp+B0h] [rbp-58h]
  __int64 v118; // [rsp+B8h] [rbp-50h]
  __int64 v119; // [rsp+C0h] [rbp-48h]
  PVOID P; // [rsp+C8h] [rbp-40h] BYREF
  size_t Size; // [rsp+D0h] [rbp-38h] BYREF
  BOOL v122; // [rsp+D8h] [rbp-30h]
  unsigned int v123; // [rsp+DCh] [rbp-2Ch]
  void *v124; // [rsp+E0h] [rbp-28h]
  __int64 *v125; // [rsp+E8h] [rbp-20h]
  __int64 v126; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v127; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v128; // [rsp+100h] [rbp-8h] BYREF
  __int64 v129; // [rsp+108h] [rbp+0h] BYREF
  __int64 v130; // [rsp+110h] [rbp+8h] BYREF
  char *v131; // [rsp+118h] [rbp+10h]
  NTSTATUS v132; // [rsp+120h] [rbp+18h] BYREF
  PVOID v133; // [rsp+128h] [rbp+20h] BYREF
  PVOID v134; // [rsp+130h] [rbp+28h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+138h] [rbp+30h] BYREF
  __int16 Sid; // [rsp+158h] [rbp+50h] BYREF
  int v137; // [rsp+160h] [rbp+58h]
  _BOOL8 v138; // [rsp+1B0h] [rbp+A8h]

  v9 = a4;
  v138 = v8;
  LOBYTE(v8) = 0;
  *(_DWORD *)PoolType.Value = a6;
  v11 = a3;
  v12 = 0LL;
  p_SubjectContext = a8;
  v119 = a7;
  v14 = *(_WORD *)(a3 + 2);
  v117 = a4;
  v118 = a3;
  v125 = a8;
  v101 = 0;
  v100 = 0;
  LOBYTE(v109) = 0;
  v102 = 0;
  v108 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v132 = 0;
  v133 = 0LL;
  P = 0LL;
  v112 = 0LL;
  v126 = 0LL;
  v113 = 0LL;
  v128 = 0LL;
  v115 = 0LL;
  v127 = 0LL;
  v111 = 0LL;
  v129 = 0LL;
  v116 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v97 = 0;
  LOBYTE(v123) = 0;
  v122 = v8;
  v96 = 0;
  v94 = 0x8000;
  v134 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 >= 0 )
    {
      v15 = *(void **)(a3 + 24);
    }
    else
    {
      v65 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v65 )
        v15 = (void *)(v65 + a3);
      else
        v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  Src = v15;
  v17 = *(_WORD *)(v16 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v19 = *(ACL **)(v16 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v18 )
        v19 = (ACL *)(v16 + v18);
      else
        v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( !a8 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v16 = *v9;
    p_SubjectContext = (__int64 *)&SubjectContext;
    v125 = (__int64 *)&SubjectContext;
  }
  if ( *(__int16 *)(v16 + 2) >= 0 )
  {
    valid = -1073741593;
    goto LABEL_76;
  }
  v20 = *(_WORD *)(v11 + 2);
  v98 = (v20 & 0x80u) != 0;
  v99 = (v20 & 0x40) != 0;
  v21 = a2 & 0x80;
  v22 = (a2 & 0x100) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v83 = a2 | 0x1FF;
    v84 = v83 & 0xFFFFFF7F;
    if ( v21 )
      v84 = v83;
    a2 = v84 & 0xFFFFFEFF;
    if ( v22 )
      a2 = v84;
    if ( !v19 && !v15 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v20 & 0x10) != 0 )
        a2 |= 8u;
      else
        v122 = (v20 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v16 + 2) >= 0 )
    {
      v24 = *(unsigned __int8 **)(v16 + 8);
    }
    else
    {
      v23 = *(unsigned int *)(v16 + 4);
      if ( !(_DWORD)v23 )
        goto LABEL_247;
      v24 = (unsigned __int8 *)(v16 + v23);
    }
    v124 = v24;
    v25 = v24 == 0LL;
LABEL_16:
    if ( !v25 )
      goto LABEL_17;
LABEL_247:
    valid = -1073741734;
    goto LABEL_76;
  }
  v77 = a2 >> 2;
  LOBYTE(v77) = (a2 & 4) == 0;
  v123 = v77;
  if ( v20 >= 0 )
  {
    v24 = *(unsigned __int8 **)(v11 + 8);
  }
  else
  {
    v78 = *(unsigned int *)(v11 + 4);
    if ( (_DWORD)v78 )
      v24 = (unsigned __int8 *)(v78 + v11);
    else
      v24 = 0LL;
  }
  v124 = v24;
  v100 = 1;
  if ( (a5 & 8) == 0 )
  {
    v25 = SepValidOwnerSubjectContext(p_SubjectContext, v24, (v20 & 0x80u) != 0) == 0;
    goto LABEL_16;
  }
LABEL_17:
  if ( !RtlValidSid(v24) )
    goto LABEL_247;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v28 = *(unsigned __int8 **)(v11 + 16);
    }
    else
    {
      v82 = *(unsigned int *)(v11 + 8);
      if ( (_DWORD)v82 )
        v28 = (unsigned __int8 *)(v82 + v11);
      else
        v28 = 0LL;
    }
    v101 = 1;
  }
  else
  {
    v26 = *v9;
    if ( *(__int16 *)(*v9 + 2LL) >= 0 )
    {
      v28 = *(unsigned __int8 **)(v26 + 16);
    }
    else
    {
      v27 = *(unsigned int *)(v26 + 8);
      if ( !(_DWORD)v27 )
      {
LABEL_191:
        valid = -1073741733;
        goto LABEL_76;
      }
      v28 = (unsigned __int8 *)(v26 + v27);
    }
  }
  if ( !v28 || !RtlValidSid(v28) )
    goto LABEL_191;
  if ( (a2 & 0x1F8) == 0 )
  {
    v12 = (unsigned __int16 *)v19;
    Src = v19;
    v29 = v115;
    goto LABEL_26;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    do
    {
      AceByType = RtlFindAceByType((PACL)Src, 0x11u, &Index);
      v53 = AceByType;
      if ( AceByType )
      {
        v74 = AceByType[1];
        v54 = AceByType + 8;
        v25 = (*((_DWORD *)v53 + 1) & 0xFFFFFFF8) == 0;
        v131 = v54;
        v97 = v74;
        if ( !v25 )
        {
LABEL_192:
          valid = -1073740730;
          goto LABEL_76;
        }
      }
      else
      {
        v54 = v131;
      }
      if ( !(unsigned __int8)SepValidLabelSubjectContext(v125, v54, v97) )
        goto LABEL_192;
      ++Index;
    }
    while ( v53 );
  }
  TokenTrustLevel = (void *)SepLocateTokenTrustLevel(v125);
  LODWORD(v131) = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
  {
LABEL_86:
    v56 = a2 & 0x100;
    Index = v56;
    if ( (a2 & 0x100) != 0 )
    {
      valid = RtlpValidFilterAclSubjectContext((PACL)Src);
      if ( valid < 0 )
        goto LABEL_76;
      if ( (a5 & 2) == 0 )
      {
        valid = RtlpValidFilterAclSubjectContext(v19);
        if ( valid < 0 )
          goto LABEL_76;
      }
      v56 = Index;
      v9 = v117;
    }
    v57 = v118;
    if ( (a2 & 8) != 0 )
    {
      v76 = *(unsigned __int16 *)(v118 + 2);
      if ( (a5 & 2) == 0 )
      {
        v59 = Src;
        v112 = Src;
        v94 = v76 & 0x2000 | 0x8010;
        v58 = (unsigned __int8 *)Src;
        if ( (v76 & 0xA00) == 0xA00 )
          v94 = v76 & 0x2000 | 0x8810;
LABEL_90:
        if ( (a2 & 0x20) != 0 )
        {
          v75 = *(unsigned __int16 *)(v57 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v59,
                      (v75 & 0x800 | (v75 >> 1) & 0x18) >> 1,
                      (__int64)v24,
                      (__int64)v28,
                      v119,
                      2,
                      (__int64)&v127,
                      (__int64)&v96);
            if ( valid < 0 )
            {
              v29 = (void *)v127;
              goto LABEL_63;
            }
            v9 = v117;
            v57 = v118;
            v59 = Src;
            v58 = (unsigned __int8 *)v112;
            v60 = (2 * (v96 & 0x1400 | (2 * (v96 & 8 | 4)))) | v94;
            v104 = 1;
            v56 = Index;
            v94 = v60;
            v115 = (PVOID)v127;
          }
          else
          {
            v115 = v59;
            v60 = v75 & 0x2000 | 0x10 | v94;
            v94 = v60;
            if ( (v75 & 0xA00) == 0xA00 )
            {
              v60 |= 0x800u;
              v94 = v60;
            }
          }
        }
        else
        {
          v60 = v94;
          v115 = v19;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v85 = *(unsigned __int16 *)(v57 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v59,
                      (v85 & 0x800 | (v85 >> 1) & 0x18) >> 1,
                      (__int64)v24,
                      (__int64)v28,
                      v119,
                      2,
                      (__int64)&v128,
                      (__int64)&v96);
            if ( valid < 0 )
            {
              v48 = (void *)v128;
              v29 = v115;
              goto LABEL_64;
            }
            v9 = v117;
            v57 = v118;
            v59 = Src;
            v58 = (unsigned __int8 *)v112;
            v60 = (2 * (v96 & 0x1400 | (2 * (v96 & 8 | 4)))) | v94;
            v105 = 1;
            v56 = Index;
            v94 = v60;
            v113 = (PVOID)v128;
          }
          else
          {
            v113 = v59;
            v60 |= v85 & 0x2000 | 0x10;
            v94 = v60;
            if ( (v85 & 0xA00) == 0xA00 )
            {
              v60 |= 0x800u;
              v94 = v60;
            }
          }
        }
        else
        {
          v113 = v19;
        }
        if ( (_DWORD)v131 )
        {
          v81 = *(unsigned __int16 *)(v57 + 2);
          if ( (a5 & 2) == 0 )
          {
            v111 = (unsigned __int8 *)v59;
            v60 |= v81 & 0x2000 | 0x10;
            v94 = v60;
            v25 = (v81 & 0xA00) == 2560;
            v61 = (unsigned __int8 *)v59;
            if ( v25 )
            {
              v60 |= 0x800u;
              v94 = v60;
            }
            goto LABEL_97;
          }
          valid = RtlpComputeMergedAcl(
                    (int)v19,
                    (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                    (int)v59,
                    (v81 & 0x800 | (v81 >> 1) & 0x18) >> 1,
                    (__int64)v24,
                    (__int64)v28,
                    v119,
                    2,
                    (__int64)&v129,
                    (__int64)&v96);
          if ( valid < 0 )
          {
            v49 = (void *)v129;
            v29 = v115;
            v48 = v113;
            goto LABEL_65;
          }
          v61 = (unsigned __int8 *)v129;
          v9 = v117;
          v57 = v118;
          v59 = Src;
          v58 = (unsigned __int8 *)v112;
          v60 = (2 * (v96 & 0x1400 | (2 * (v96 & 8 | 4)))) | v94;
          v106 = 1;
          v56 = Index;
          v94 = v60;
        }
        else
        {
          v61 = (unsigned __int8 *)v19;
        }
        v111 = v61;
LABEL_97:
        if ( v56 )
        {
          v86 = *(unsigned __int16 *)(v57 + 2);
          v62 = (unsigned __int8 *)v59;
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v59,
                      (v86 & 0x800 | (v86 >> 1) & 0x18) >> 1,
                      (__int64)v24,
                      (__int64)v28,
                      v119,
                      2,
                      (__int64)&v130,
                      (__int64)&v96);
            if ( valid < 0 )
            {
              v50 = (void *)v130;
              v49 = v111;
              v29 = v115;
              v48 = v113;
LABEL_66:
              if ( v112 && v103 )
                ExFreePoolWithTag(v112, 0);
              if ( v29 && v104 )
                ExFreePoolWithTag(v29, 0);
              if ( v48 && v105 )
                ExFreePoolWithTag(v48, 0);
              if ( v49 && v106 )
                ExFreePoolWithTag(v49, 0);
              if ( v50 && v107 )
                ExFreePoolWithTag(v50, 0);
              if ( v12 && v108 )
                ExFreePoolWithTag(v12, 0);
              if ( (_BYTE)v109 )
                ExFreePoolWithTag(v134, 0);
              goto LABEL_76;
            }
            v62 = (unsigned __int8 *)v130;
            v59 = Src;
            v58 = (unsigned __int8 *)v112;
            v107 = 1;
            v116 = (PVOID)v130;
            v60 = (2 * (v96 & 0x1400 | (2 * (v96 & 8 | 4)))) | v94;
            v94 = v60;
          }
          else
          {
            v116 = v59;
            v60 |= v86 & 0x2000 | 0x10;
            v94 = v60;
            if ( (v86 & 0xA00) == 0xA00 )
            {
              v60 |= 0x800u;
              v94 = v60;
            }
          }
          v61 = v111;
        }
        else
        {
          v62 = (unsigned __int8 *)v19;
          v116 = v19;
        }
        v11 = v118;
        if ( (_DWORD)Size )
        {
          v63 = *(_WORD *)(v118 + 2);
          v64 = v63 & 0x2000 | 0x10 | v60;
          v94 = v64;
          if ( (v63 & 0xA00) == 0xA00 )
            v94 = v64 | 0x800;
        }
        else
        {
          v59 = v19;
        }
        v29 = v115;
        valid = RtlpCombineAcls(
                  v58,
                  (unsigned __int8 *)v59,
                  (unsigned __int8 *)v115,
                  (unsigned __int8 *)v113,
                  v61,
                  v62,
                  (char **)&P,
                  0LL);
        if ( valid < 0 )
          goto LABEL_63;
        v12 = (unsigned __int16 *)P;
        Src = P;
        if ( !v112 && P && !*((_WORD *)P + 2) )
        {
          ExFreePoolWithTag(P, 0);
          v12 = 0LL;
          Src = 0LL;
        }
        v9 = v117;
        v108 = 1;
LABEL_26:
        if ( (a2 & 4) != 0 )
        {
          v30 = *(_WORD *)(v11 + 2);
          if ( (a5 & 1) != 0 )
          {
            if ( (v30 & 4) != 0 )
            {
              if ( v30 >= 0 )
              {
                v87 = *(_QWORD *)(v11 + 32);
              }
              else
              {
                v88 = *(_DWORD *)(v11 + 16);
                if ( v88 )
                  LODWORD(v87) = v88 + v11;
                else
                  LODWORD(v87) = 0;
              }
            }
            else
            {
              LODWORD(v87) = 0;
            }
            v89 = *v9;
            v90 = *(_WORD *)(*v9 + 2LL);
            if ( (v90 & 4) != 0 )
            {
              if ( v90 >= 0 )
              {
                v91 = *(_QWORD *)(v89 + 32);
              }
              else
              {
                v92 = *(_DWORD *)(v89 + 16);
                if ( v92 )
                  LODWORD(v91) = v89 + v92;
                else
                  LODWORD(v91) = 0;
              }
            }
            else
            {
              LODWORD(v91) = 0;
            }
            valid = RtlpComputeMergedAcl(
                      v91,
                      v90 & 0x140C,
                      v87,
                      *(_WORD *)(v11 + 2) & 0x140C,
                      (__int64)v24,
                      (__int64)v28,
                      v119,
                      1,
                      (__int64)&v133,
                      (__int64)&v96);
            if ( valid < 0 )
              goto LABEL_63;
            v31 = (unsigned __int16 *)v133;
            v102 = 1;
            v94 |= v96 & 0x1408 | 4;
          }
          else
          {
            if ( (v30 & 4) != 0 )
            {
              if ( v30 < 0 )
              {
                v66 = *(unsigned int *)(v11 + 16);
                if ( (_DWORD)v66 )
                  v31 = (unsigned __int16 *)(v66 + v11);
                else
                  v31 = 0LL;
              }
              else
              {
                v31 = *(unsigned __int16 **)(v11 + 32);
              }
            }
            else
            {
              v31 = 0LL;
            }
            v32 = v30 & 0x1000 | 4 | v94;
            v94 = v32;
            if ( (v30 & 0x500) == 0x500 )
              v94 = v32 | 0x400;
          }
          if ( v98 )
          {
            Size = 0LL;
            v126 = 0LL;
            P = 0LL;
            v127 = 0LL;
            v128 = 0LL;
            v129 = 0LL;
            v130 = 0LL;
            SepGetDefaultsSubjectContext(
              (_DWORD)v125,
              (unsigned int)&Size,
              (unsigned int)&v126,
              (unsigned int)&P,
              (__int64)&v127,
              (__int64)&v128,
              (__int64)&v129,
              (__int64)&v130);
            valid = RtlpCreateServerAcl((__int64)v31, v99, (unsigned __int8 *)P, (ACL **)&v134, &v109);
            if ( valid < 0 )
            {
LABEL_60:
              if ( v102 )
                ExFreePoolWithTag(v133, 0);
              goto LABEL_62;
            }
            v31 = (unsigned __int16 *)v134;
          }
        }
        else
        {
          v67 = *v9;
          v68 = *(_WORD *)(*v9 + 2LL);
          if ( (v68 & 4) != 0 )
          {
            if ( v68 >= 0 )
            {
              v31 = *(unsigned __int16 **)(v67 + 32);
            }
            else
            {
              v69 = *(unsigned int *)(v67 + 16);
              if ( (_DWORD)v69 )
                v31 = (unsigned __int16 *)(v67 + v69);
              else
                v31 = 0LL;
            }
          }
          else
          {
            v31 = 0LL;
          }
        }
        v33 = 4 * v24[1] + 8;
        v34 = 4 * v28[1] + 8;
        LODWORD(Size) = v34;
        if ( v12 )
          v35 = (v12[1] + 3) & 0xFFFFFFFC;
        else
          v35 = 0;
        if ( v31 )
          v36 = (v31[1] + 3) & 0xFFFFFFFC;
        else
          v36 = 0;
        PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)PoolType.Value, v33 + v34 + 20 + v36 + v35, 0x64536553u);
        v38 = PoolWithTag;
        if ( PoolWithTag )
        {
          v39 = (char *)(PoolWithTag + 5);
          v25 = !v122;
          *(_OWORD *)PoolWithTag = 0LL;
          PoolWithTag[4] = 0;
          v40 = v94;
          *(_BYTE *)v38 = 1;
          if ( !v25 )
            v40 = v94 | 0x800;
          v41 = v118;
          v42 = *((_WORD *)v38 + 1) | v40;
          *((_WORD *)v38 + 1) = v42;
          if ( (*(_WORD *)(v41 + 2) & 0x4000) != 0 )
          {
            *((_BYTE *)v38 + 1) = *(_BYTE *)(v41 + 1);
            *((_WORD *)v38 + 1) = v42 | 0x4000;
          }
          if ( Src )
          {
            memmove(v38 + 5, Src, *((unsigned __int16 *)Src + 1));
            RtlpApplyAclToObject(v38 + 5, v119);
            v38[3] = (_DWORD)v39 - (_DWORD)v38;
            v43 = *((unsigned __int16 *)Src + 1);
            if ( v35 > (unsigned int)v43 )
              memset(&v39[v43], 0, v35 - (unsigned int)v43);
            v39 += v35;
          }
          else
          {
            v38[3] = 0;
          }
          v44 = v117;
          if ( (v94 & 0x10) == 0 )
            *((_WORD *)v38 + 1) |= *(_WORD *)(*v117 + 2LL) & 0x2830;
          if ( v31 )
          {
            memmove(v39, v31, v31[1]);
            RtlpApplyAclToObject(v39, v119);
            v38[4] = (_DWORD)v39 - (_DWORD)v38;
            v45 = v31[1];
            if ( v36 > (unsigned int)v45 )
              memset(&v39[v45], 0, v36 - (unsigned int)v45);
            v39 += v36;
          }
          else
          {
            v38[4] = 0;
          }
          if ( (v94 & 4) != 0 )
            goto LABEL_54;
          *((_WORD *)v38 + 1) |= *(_WORD *)(*v44 + 2LL) & 0x140C;
          if ( !(_BYTE)v123 )
            goto LABEL_54;
          *(_DWORD *)PoolType.Value = 0;
          *(_WORD *)&PoolType.Value[4] = 768;
          valid = RtlInitializeSid(&Sid, &PoolType, 1u);
          if ( valid >= 0 )
          {
            v137 = 4;
            Index = 0;
            while ( 1 )
            {
              v70 = *((_WORD *)v38 + 1);
              if ( (v70 & 4) != 0 )
              {
                if ( v70 >= 0 )
                {
                  v72 = *((_QWORD *)v38 + 4);
                }
                else
                {
                  v71 = (unsigned int)v38[4];
                  v72 = (_DWORD)v71 ? (__int64)v38 + v71 : 0LL;
                }
              }
              else
              {
                v72 = 0LL;
              }
              AceBySid = RtlFindAceBySid(v72, &Sid, &Index);
              if ( !AceBySid )
                break;
              v93 = AceBySid[1] & 0xF4 | 8;
              ++Index;
              AceBySid[1] = v93;
            }
            v44 = v117;
LABEL_54:
            memmove(v39, v124, v33);
            v38[1] = (_DWORD)v39 - (_DWORD)v38;
            v46 = &v39[v33];
            if ( !v100 )
              *((_WORD *)v38 + 1) |= *(_WORD *)(*v44 + 2LL) & 1;
            memmove(v46, v28, (unsigned int)Size);
            v25 = v101 == 0;
            v38[2] = (_DWORD)v46 - (_DWORD)v38;
            if ( v25 )
              *((_WORD *)v38 + 1) |= *(_WORD *)(*v44 + 2LL) & 2;
            *v44 = v38;
            valid = 0;
          }
        }
        else
        {
          valid = -1073741801;
        }
        v12 = (unsigned __int16 *)Src;
        goto LABEL_60;
      }
      valid = RtlpComputeMergedAcl(
                (int)v19,
                (*(_WORD *)(*v9 + 2LL) & 0x2800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                (int)Src,
                (v76 & 0x2800 | (v76 >> 1) & 0x18) >> 1,
                (__int64)v24,
                (__int64)v28,
                v119,
                2,
                (__int64)&v126,
                (__int64)&v96);
      if ( valid < 0 )
      {
        v112 = (PVOID)v126;
LABEL_62:
        v29 = v115;
LABEL_63:
        v48 = v113;
LABEL_64:
        v49 = v111;
LABEL_65:
        v50 = v116;
        goto LABEL_66;
      }
      v58 = (unsigned __int8 *)v126;
      v9 = v117;
      v57 = v118;
      v103 = 1;
      v112 = (PVOID)v126;
      v94 = 2 * (v96 & 0x1400 | (2 * (v96 & 8 | 0x2004)));
      v56 = Index;
    }
    else
    {
      v58 = (unsigned __int8 *)v19;
      v112 = v19;
    }
    v59 = Src;
    goto LABEL_90;
  }
  if ( TokenTrustLevel )
  {
    Index = 0;
    while ( 1 )
    {
      v79 = RtlFindAceByType((PACL)Src, 0x14u, &Index);
      v112 = v79;
      if ( v79 )
      {
        if ( (v79[1] & 0xFF000000) != 0 )
          goto LABEL_192;
        if ( !RtlpValidTrustSubjectContext(TokenTrustLevel, v79 + 2, v80, &v132) )
          break;
        v79 = v112;
      }
      ++Index;
      if ( !v79 )
        goto LABEL_86;
    }
  }
  valid = -1073741790;
LABEL_76:
  if ( v125 == (__int64 *)&SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
