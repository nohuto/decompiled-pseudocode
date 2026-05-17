/*
 * XREFs of RtlpSetSecurityObject @ 0x1800777AC
 * Callers:
 *     RtlSetSecurityObject @ 0x180077770 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x1800D7270 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlFindAceByType @ 0x18003C040 (RtlFindAceByType.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18003D218 (RtlpValidFilterAclSubjectContext.c)
 *     RtlInitializeSid @ 0x180040070 (RtlInitializeSid.c)
 *     RtlpValidTrustSubjectContext @ 0x180067E08 (RtlpValidTrustSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800684C8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800729E4 (RtlpCombineAcls.c)
 *     RtlpApplyAclToObject @ 0x180077CE8 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007DD40 (RtlpValidOwnerSubjectContext.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009D900 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x18009F9F0 (NtOpenProcessToken.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlpComputeMergedAcl @ 0x1800E7380 (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1800E852C (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E8AD4 (RtlpValidLabelSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800E9CB4 (RtlFindAceBySid.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        int a6,
        __int64 a7,
        size_t a8)
{
  BOOL v8; // r11d
  size_t v10; // rbx
  __int16 v12; // dx
  int v13; // r15d
  unsigned __int8 *v14; // rdi
  __int64 v15; // rcx
  unsigned __int16 *v16; // r14
  void *ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  bool v21; // zf
  _BYTE *v22; // rax
  __int64 v23; // rax
  _BYTE *v24; // rcx
  unsigned __int8 *v25; // rdi
  __int16 v26; // cx
  unsigned __int16 *v27; // rsi
  int v28; // ecx
  int v29; // r8d
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rdi
  char *v34; // r14
  int v35; // eax
  __int16 v36; // ax
  unsigned __int16 *v37; // r15
  __int64 v38; // rcx
  char v39; // bl
  __int64 *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // eax
  char *v44; // r14
  int valid; // ebx
  unsigned __int8 *v46; // r14
  int v48; // esi
  unsigned int v49; // eax
  unsigned int v50; // eax
  void *v51; // rax
  __int64 v52; // r8
  void *v53; // rax
  unsigned __int8 *v54; // r14
  unsigned __int8 *v55; // rax
  unsigned __int8 *v56; // rdi
  __int64 v57; // r8
  size_t v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // r14
  unsigned __int8 *AceByType; // rax
  __int64 v62; // r8
  unsigned __int8 *v63; // rbx
  __int64 v64; // rdx
  int v65; // r14d
  __int64 v66; // r8
  unsigned int v67; // edx
  unsigned __int8 *v68; // rax
  unsigned __int8 *v69; // r14
  unsigned int v70; // edx
  unsigned int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // edx
  __int16 v74; // ax
  unsigned __int8 *v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rax
  __int16 v78; // dx
  __int64 v79; // rcx
  _QWORD *Heap; // rdi
  __int64 v81; // r8
  int v82; // edx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 AceBySid; // rax
  char v86; // cl
  char *v87; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v88; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v89; // [rsp+58h] [rbp-A8h]
  char v90; // [rsp+59h] [rbp-A7h]
  char v91; // [rsp+5Ah] [rbp-A6h]
  char v92; // [rsp+5Bh] [rbp-A5h]
  char v93; // [rsp+5Ch] [rbp-A4h]
  char v94; // [rsp+5Dh] [rbp-A3h]
  char v95; // [rsp+5Eh] [rbp-A2h]
  char v96; // [rsp+5Fh] [rbp-A1h]
  char v97; // [rsp+60h] [rbp-A0h]
  char v98; // [rsp+61h] [rbp-9Fh]
  char v99[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v100; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v101; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v102; // [rsp+70h] [rbp-90h] BYREF
  size_t v103; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v104; // [rsp+80h] [rbp-80h] BYREF
  bool v105; // [rsp+88h] [rbp-78h]
  bool v106; // [rsp+89h] [rbp-77h]
  void *v107; // [rsp+90h] [rbp-70h]
  void *v108; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v109; // [rsp+A0h] [rbp-60h]
  __int64 *v110; // [rsp+A8h] [rbp-58h]
  int v111; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v112; // [rsp+B4h] [rbp-4Ch]
  __int64 v113; // [rsp+B8h] [rbp-48h]
  __int16 v114; // [rsp+C0h] [rbp-40h]
  int v115; // [rsp+C4h] [rbp-3Ch]
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  size_t Size; // [rsp+D0h] [rbp-30h]
  void *Src; // [rsp+D8h] [rbp-28h]
  unsigned int v119; // [rsp+E0h] [rbp-20h]
  BOOL v120; // [rsp+E4h] [rbp-1Ch]
  int v121; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v122; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 *v123; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int8 *v124; // [rsp+100h] [rbp+0h] BYREF
  char v125; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v126; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v127; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int16 *v128; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v129; // [rsp+128h] [rbp+28h] BYREF
  __int64 v130; // [rsp+138h] [rbp+38h]
  _BYTE v131[24]; // [rsp+140h] [rbp+40h] BYREF
  int v132; // [rsp+158h] [rbp+58h]
  int v133; // [rsp+15Ch] [rbp+5Ch]
  char v134[8]; // [rsp+178h] [rbp+78h] BYREF
  int v135; // [rsp+180h] [rbp+80h]

  v10 = a8;
  v130 = a3;
  v110 = a4;
  v12 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v113 = a7;
  Size = a8;
  v13 = 0x8000;
  v91 = 0;
  v90 = 0;
  v99[0] = 0;
  v92 = 0;
  v98 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v127 = 0LL;
  Src = 0LL;
  v126 = 0LL;
  v102 = 0LL;
  v122 = 0LL;
  v104 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v89 = 0;
  LOBYTE(v119) = 0;
  v120 = v8;
  v128 = 0LL;
  if ( (v12 & 0x10) == 0 )
    goto LABEL_2;
  if ( v12 >= 0 )
  {
    v14 = *(unsigned __int8 **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = (unsigned __int8 *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v15 = *a4;
  v109 = v14;
  if ( (*(_BYTE *)(v15 + 2) & 0x10) == 0 )
  {
LABEL_74:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *(__int16 *)(v15 + 2) < 0 )
  {
    if ( *(_DWORD *)(v15 + 12) )
    {
      v16 = (unsigned __int16 *)(v15 + *(unsigned int *)(v15 + 12));
      goto LABEL_7;
    }
    goto LABEL_74;
  }
  v16 = *(unsigned __int16 **)(v15 + 24);
LABEL_7:
  Handle = 0LL;
  v88 = (unsigned __int8 *)v16;
  v129 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *(__int16 *)(v15 + 2) >= 0 )
    return (unsigned int)-1073741593;
  v114 = v12 & 0x80;
  v105 = v114 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v106 = (v12 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v48 = a2 | 0x1FF;
    v49 = v48 & 0xFFFFFF7F;
    if ( v18 )
      v49 = v48;
    a2 = v49 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v49;
    if ( !v16 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v12 & 0x10) != 0 )
        a2 |= 8u;
      else
        v120 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*(_DWORD *)(v15 + 4) )
      return (unsigned int)-1073741734;
    v20 = *(unsigned int *)(v15 + 4);
    v21 = v15 + v20 == 0;
    v22 = (_BYTE *)(v15 + v20);
    v107 = v22;
    if ( v21 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v50 = a2 >> 2;
  LOBYTE(v50) = (a2 & 4) == 0;
  v119 = v50;
  if ( v12 >= 0 )
  {
    v51 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v107 = 0LL;
      goto LABEL_92;
    }
    v51 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v107 = v51;
LABEL_92:
  v90 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    v87 = &v125;
    LODWORD(v103) = NtQueryInformationToken(a8, 10LL, v131);
    valid = v103;
    if ( (v103 & 0x80000000) != 0LL )
      return (unsigned int)valid;
    if ( v132 == 2 && v133 < 1 )
      return (unsigned int)-1073741659;
    v10 = Size;
    LOBYTE(v52) = v105;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(Size, v107, v52, &v103) )
      return (unsigned int)-1073741734;
  }
  v22 = v107;
LABEL_12:
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v53 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v108 = 0LL;
LABEL_105:
        v24 = v108;
        v91 = 1;
        goto LABEL_18;
      }
      v53 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v108 = v53;
    goto LABEL_105;
  }
  v23 = *v110;
  if ( *(__int16 *)(*v110 + 2) >= 0 )
  {
    v24 = *(_BYTE **)(v23 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(v23 + 8) )
    {
LABEL_240:
      valid = -1073741733;
      goto LABEL_55;
    }
    v24 = (_BYTE *)(v23 + *(unsigned int *)(v23 + 8));
  }
  v108 = v24;
LABEL_18:
  if ( !v24 )
    goto LABEL_240;
  if ( !RtlValidSid(v24) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v25 = v104;
    Src = v16;
    goto LABEL_22;
  }
  v115 = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_125:
    LODWORD(v103) = RtlpGetDefaultTrustSubjectContext(v10, (__int64 *)&v129);
    valid = v103;
    if ( (v103 & 0x80000000) != 0LL )
      return (unsigned int)valid;
    v59 = (__int64)v129;
    LODWORD(Size) = a2 & 0x80;
    v60 = *v129;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v60 )
      {
LABEL_138:
        valid = -1073741790;
        goto LABEL_140;
      }
      v101 = 0;
      do
      {
        AceByType = RtlFindAceByType((__int64)v109, 20, &v101);
        v63 = AceByType;
        if ( AceByType )
        {
          if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
          {
            valid = -1073740730;
            goto LABEL_140;
          }
          if ( !RtlpValidTrustSubjectContext(v60, (__int64)(AceByType + 8), v62, &v103) )
            goto LABEL_138;
        }
        ++v101;
      }
      while ( v63 );
    }
    LODWORD(v103) = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_143;
    valid = RtlpValidFilterAclSubjectContext((__int64)v109, v60);
    if ( valid < 0 )
      goto LABEL_140;
    if ( (a5 & 2) != 0 )
    {
LABEL_143:
      v65 = (int)v88;
    }
    else
    {
      v64 = v60;
      v65 = (int)v88;
      valid = RtlpValidFilterAclSubjectContext((__int64)v88, v64);
      if ( valid < 0 )
      {
LABEL_140:
        v66 = v59;
        goto LABEL_142;
      }
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v59);
    if ( (a2 & 8) != 0 )
    {
      v67 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        valid = RtlpComputeMergedAcl(
                  v65,
                  (*(_WORD *)(*v110 + 2) & 0x2800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)v109,
                  (v67 & 0x2800 | (v67 >> 1) & 0x18) >> 1,
                  (__int64)v107,
                  (__int64)v108,
                  v113,
                  2,
                  (__int64)&v102,
                  (__int64)&v100);
        if ( valid < 0 )
        {
          v46 = v102;
          v25 = v104;
          goto LABEL_57;
        }
        v93 = 1;
        v13 = 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 0x2004)));
      }
      else
      {
        v102 = v109;
        v13 = v67 & 0x2000 | 0x8010;
        if ( (v67 & 0xA00) == 0xA00 )
          v13 = v67 & 0x2000 | 0x8810;
      }
      v68 = v88;
    }
    else
    {
      v68 = v88;
      v102 = v88;
    }
    v69 = v109;
    if ( (a2 & 0x20) != 0 )
    {
      v70 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        valid = RtlpComputeMergedAcl(
                  (_DWORD)v88,
                  (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)v109,
                  (v70 & 0x800 | (v70 >> 1) & 0x18) >> 1,
                  (__int64)v107,
                  (__int64)v108,
                  v113,
                  2,
                  (__int64)&v104,
                  (__int64)&v100);
        if ( valid < 0 )
          goto LABEL_176;
        v94 = 1;
        v13 |= 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 4)));
      }
      else
      {
        v104 = v109;
        v13 |= v70 & 0x2000 | 0x10;
        if ( (v70 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
      v68 = v88;
    }
    else
    {
      v104 = v68;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v71 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        valid = RtlpComputeMergedAcl(
                  (_DWORD)v88,
                  (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)v69,
                  (v71 & 0x800 | (v71 >> 1) & 0x18) >> 1,
                  (__int64)v107,
                  (__int64)v108,
                  v113,
                  2,
                  (__int64)&v122,
                  (__int64)&v100);
        if ( valid < 0 )
          goto LABEL_176;
        v95 = 1;
        v13 |= 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 4)));
      }
      else
      {
        v122 = v69;
        v13 |= v71 & 0x2000 | 0x10;
        if ( (v71 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
      v68 = v88;
    }
    else
    {
      v122 = v68;
    }
    if ( (_DWORD)Size )
    {
      v72 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        valid = RtlpComputeMergedAcl(
                  (_DWORD)v88,
                  (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)v69,
                  (v72 & 0x800 | (v72 >> 1) & 0x18) >> 1,
                  (__int64)v107,
                  (__int64)v108,
                  v113,
                  2,
                  (__int64)&v123,
                  (__int64)&v100);
        if ( valid < 0 )
          goto LABEL_176;
        v96 = 1;
        v13 |= 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 4)));
      }
      else
      {
        v123 = v69;
        v13 |= v72 & 0x2000 | 0x10;
        if ( (v72 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
      v68 = v88;
    }
    else
    {
      v123 = v68;
    }
    if ( !(_DWORD)v103 )
    {
      v124 = v68;
      goto LABEL_173;
    }
    v73 = *(unsigned __int16 *)(a3 + 2);
    if ( (a5 & 2) == 0 )
    {
      v124 = v69;
      v13 |= v73 & 0x2000 | 0x10;
      if ( (v73 & 0xA00) == 0xA00 )
        v13 |= 0x800u;
      goto LABEL_172;
    }
    valid = RtlpComputeMergedAcl(
              (_DWORD)v88,
              (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
              (_DWORD)v69,
              (v73 & 0x800 | (v73 >> 1) & 0x18) >> 1,
              (__int64)v107,
              (__int64)v108,
              v113,
              2,
              (__int64)&v124,
              (__int64)&v100);
    if ( valid >= 0 )
    {
      v97 = 1;
      v13 |= 2 * (v100 & 0x1400 | (2 * (v100 & 8 | 4)));
LABEL_172:
      v68 = v88;
LABEL_173:
      if ( v115 )
      {
        v74 = *(_WORD *)(a3 + 2);
        v13 |= v74 & 0x2000 | 0x10;
        if ( (v74 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
      else
      {
        v69 = v68;
      }
      v25 = v104;
      v75 = v69;
      v46 = v102;
      valid = RtlpCombineAcls(v102, v75, v104, v122, v123, v124, (__int64 *)&v126, 0LL);
      if ( valid < 0 )
        goto LABEL_57;
      v16 = v126;
      Src = v126;
      if ( !v102 && v126 && !v126[2] )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v126);
        v16 = 0LL;
        Src = 0LL;
      }
      v98 = 1;
LABEL_22:
      if ( (a2 & 4) != 0 )
      {
        v26 = *(_WORD *)(a3 + 2);
        if ( (a5 & 1) == 0 )
        {
          if ( (v26 & 4) == 0 )
            goto LABEL_69;
          if ( v26 >= 0 )
          {
            v27 = *(unsigned __int16 **)(a3 + 32);
            goto LABEL_27;
          }
          if ( *(_DWORD *)(a3 + 16) )
            v27 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
          else
LABEL_69:
            v27 = 0LL;
LABEL_27:
          v13 |= v26 & 0x1000 | 4;
          if ( (v26 & 0x500) == 0x500 )
            v13 |= 0x400u;
LABEL_29:
          if ( !v114 )
            goto LABEL_30;
          v121 = 76;
          Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 76LL);
          if ( !Heap )
          {
LABEL_216:
            valid = -1073741801;
            goto LABEL_55;
          }
          valid = NtOpenProcessToken(-1LL, 8LL, &Handle);
          v81 = (__int64)Heap;
          if ( valid < 0 )
          {
LABEL_215:
            RtlFreeHeap((__int64)ProcessHeap, 0, v81);
            goto LABEL_55;
          }
          valid = NtQueryInformationToken(Handle, 4LL, Heap);
          NtClose(Handle);
          if ( valid < 0 )
          {
            v81 = (__int64)Heap;
            goto LABEL_215;
          }
          LOBYTE(v82) = v106;
          valid = RtlpCreateServerAcl((_DWORD)v27, v82, *Heap, (unsigned int)&v128, (__int64)v99);
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
          if ( valid >= 0 )
          {
            v27 = v128;
            goto LABEL_30;
          }
LABEL_55:
          v46 = v102;
          v25 = v104;
          if ( v92 )
            RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v127);
          goto LABEL_57;
        }
        if ( (v26 & 4) != 0 )
        {
          if ( v26 >= 0 )
          {
            v76 = *(_QWORD *)(a3 + 32);
LABEL_203:
            v77 = *v110;
            v78 = *(_WORD *)(*v110 + 2);
            if ( (v78 & 4) != 0 )
            {
              if ( v78 >= 0 )
              {
                v79 = *(_QWORD *)(v77 + 32);
LABEL_209:
                valid = RtlpComputeMergedAcl(
                          v79,
                          v78 & 0x140C,
                          v76,
                          *(_WORD *)(a3 + 2) & 0x140C,
                          (__int64)v107,
                          (__int64)v108,
                          v113,
                          1,
                          (__int64)&v127,
                          (__int64)&v100);
                if ( valid >= 0 )
                {
                  v27 = v127;
                  v92 = 1;
                  v13 |= v100 & 0x1408 | 4;
                  goto LABEL_29;
                }
                goto LABEL_177;
              }
              if ( *(_DWORD *)(v77 + 16) )
              {
                LODWORD(v79) = v77 + *(_DWORD *)(v77 + 16);
                goto LABEL_209;
              }
            }
            LODWORD(v79) = 0;
            goto LABEL_209;
          }
          if ( *(_DWORD *)(a3 + 16) )
          {
            LODWORD(v76) = a3 + *(_DWORD *)(a3 + 16);
            goto LABEL_203;
          }
        }
        LODWORD(v76) = 0;
        goto LABEL_203;
      }
      v83 = *v110;
      if ( (*(_BYTE *)(*v110 + 2) & 4) != 0 )
      {
        if ( *(__int16 *)(v83 + 2) >= 0 )
        {
          v27 = *(unsigned __int16 **)(v83 + 32);
LABEL_30:
          v28 = 4 * *((unsigned __int8 *)v107 + 1) + 8;
          LODWORD(Size) = v28;
          v29 = 4 * *((unsigned __int8 *)v108 + 1) + 8;
          LODWORD(v103) = v29;
          if ( v16 )
            v30 = (v16[1] + 3) & 0xFFFFFFFC;
          else
            v30 = 0;
          if ( v27 )
            v31 = (v27[1] + 3) & 0xFFFFFFFC;
          else
            v31 = 0;
          v32 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v29 + v31 + v30 + v28 + 20);
          v33 = v32;
          if ( v32 )
          {
            v34 = (char *)(v32 + 20);
            *(_OWORD *)v32 = 0LL;
            *(_DWORD *)(v32 + 16) = 0;
            *(_BYTE *)v32 = 1;
            v35 = v13 | 0x800;
            if ( !v120 )
              v35 = v13;
            v115 = v35;
            v36 = *(_WORD *)(v33 + 2) | v35;
            *(_WORD *)(v33 + 2) = v36;
            if ( (*(_WORD *)(v130 + 2) & 0x4000) != 0 )
            {
              *(_BYTE *)(v33 + 1) = *(_BYTE *)(v130 + 1);
              *(_WORD *)(v33 + 2) = v36 | 0x4000;
            }
            v37 = (unsigned __int16 *)Src;
            if ( Src )
            {
              memmove((void *)(v33 + 20), Src, *((unsigned __int16 *)Src + 1));
              RtlpApplyAclToObject(v33 + 20, v113);
              *(_DWORD *)(v33 + 12) = (_DWORD)v34 - v33;
              v38 = v37[1];
              if ( v30 > (unsigned int)v38 )
                memset(&v34[v38], 0, v30 - (unsigned int)v38);
              v34 += v30;
            }
            else
            {
              *(_DWORD *)(v33 + 12) = 0;
            }
            v39 = v115;
            v40 = v110;
            if ( (v115 & 0x10) == 0 )
              *(_WORD *)(v33 + 2) |= *(_WORD *)(*v110 + 2) & 0x2830;
            if ( v27 )
            {
              memmove(v34, v27, v27[1]);
              RtlpApplyAclToObject(v34, v113);
              *(_DWORD *)(v33 + 16) = (_DWORD)v34 - v33;
              v41 = v27[1];
              if ( v31 > (unsigned int)v41 )
                memset(&v34[v41], 0, v31 - (unsigned int)v41);
              v34 += v31;
            }
            else
            {
              *(_DWORD *)(v33 + 16) = 0;
            }
            if ( (v39 & 4) != 0 || (*(_WORD *)(v33 + 2) |= *(_WORD *)(*v40 + 2) & 0x140C, !(_BYTE)v119) )
            {
LABEL_50:
              v42 = (unsigned int)Size;
              memmove(v34, v107, (unsigned int)Size);
              v43 = (int)v34;
              v44 = &v34[v42];
              valid = 0;
              *(_DWORD *)(v33 + 4) = v43 - v33;
              if ( !v90 )
                *(_WORD *)(v33 + 2) |= *(_WORD *)(*v40 + 2) & 1;
              memmove(v44, v108, (unsigned int)v103);
              *(_DWORD *)(v33 + 8) = (_DWORD)v44 - v33;
              if ( !v91 )
                *(_WORD *)(v33 + 2) |= *(_WORD *)(*v40 + 2) & 2;
              RtlFreeHeap((__int64)ProcessHeap, 0, *v40);
              *v40 = v33;
            }
            else
            {
              v111 = 0;
              v112 = 768;
              valid = RtlInitializeSid((__int64)v134, (__int64)&v111, 1u);
              if ( valid >= 0 )
              {
                v135 = 4;
                v101 = 0;
                while ( 1 )
                {
                  if ( (*(_BYTE *)(v33 + 2) & 4) == 0 )
                    goto LABEL_236;
                  if ( *(__int16 *)(v33 + 2) < 0 )
                    break;
                  v84 = *(_QWORD *)(v33 + 32);
LABEL_238:
                  AceBySid = RtlFindAceBySid(v84, v134, &v101);
                  if ( !AceBySid )
                    goto LABEL_50;
                  v86 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
                  ++v101;
                  *(_BYTE *)(AceBySid + 1) = v86;
                }
                if ( *(_DWORD *)(v33 + 16) )
                {
                  v84 = v33 + *(unsigned int *)(v33 + 16);
                  goto LABEL_238;
                }
LABEL_236:
                v84 = 0LL;
                goto LABEL_238;
              }
            }
            goto LABEL_55;
          }
          goto LABEL_216;
        }
        if ( *(_DWORD *)(v83 + 16) )
        {
          v27 = (unsigned __int16 *)(v83 + *(unsigned int *)(v83 + 16));
          goto LABEL_30;
        }
      }
      v27 = 0LL;
      goto LABEL_30;
    }
LABEL_176:
    v25 = v104;
LABEL_177:
    v46 = v102;
LABEL_57:
    if ( v46 && v93 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v46);
    if ( v25 && v94 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v25);
    if ( v122 && v95 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v122);
    if ( v123 && v96 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v123);
    if ( v124 && v97 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v124);
    if ( Src && v98 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Src);
    if ( !v99[0] )
      return (unsigned int)valid;
    v66 = (__int64)v128;
LABEL_142:
    RtlFreeHeap((__int64)ProcessHeap, 0, v66);
    return (unsigned int)valid;
  }
  v101 = 0;
  v54 = 0LL;
  while ( 1 )
  {
    v55 = RtlFindAceByType((__int64)v14, 17, &v101);
    v56 = v55;
    if ( v55 )
    {
      v54 = v55 + 8;
      v89 = v55[1];
      if ( (*((_DWORD *)v55 + 1) & 0xFFFFFFF8) != 0 )
        break;
    }
    if ( v10 )
    {
      v87 = &v125;
      LODWORD(v103) = NtQueryInformationToken(v10, 10LL, v131);
      valid = v103;
      if ( (v103 & 0x80000000) != 0LL )
        return (unsigned int)valid;
      if ( v132 == 2 && v133 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      LODWORD(v103) = NtOpenProcessToken(-1LL, 8LL, &Handle);
      valid = v103;
      if ( (v103 & 0x80000000) != 0LL )
        return (unsigned int)valid;
    }
    v10 = Size;
    v58 = (size_t)Handle;
    LOBYTE(v57) = v89;
    if ( Size )
      v58 = Size;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v58, v54, v57, &v103, v87) )
    {
      NtClose(Handle);
      break;
    }
    NtClose(Handle);
    ++v101;
    if ( !v56 )
      goto LABEL_125;
    v14 = v109;
  }
  return (unsigned int)-1073740730;
}
