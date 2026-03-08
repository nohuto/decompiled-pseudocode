/*
 * XREFs of AdtpPackageParameters @ 0x1403958B4
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14066D560 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14083D7F0 (AdtpWriteToEtw.c)
 * Callees:
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x140395DE0 (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x140395E50 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14066D780 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpEtwBuildDashString @ 0x14079BA9C (AdtpEtwBuildDashString.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 *     AdtpEtwBuildString @ 0x14083DBC8 (AdtpEtwBuildString.c)
 *     AdtpSubstituteDriveLetter @ 0x14083DC80 (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildMessageString @ 0x14083DDC8 (AdtpBuildMessageString.c)
 *     AdtpBuildLogonIdStrings @ 0x14083DE80 (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140A57DA0 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x140A58254 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A58320 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x140A5852C (AdtpBuildSidListString.c)
 *     AdtpBuildSockAddrString @ 0x140A5877C (AdtpBuildSockAddrString.c)
 *     AdtpBuildStringListString @ 0x140A5883C (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x140A589A8 (AdtpBuildUlongString.c)
 *     AdtpBuildAccessesString @ 0x140A58C90 (AdtpBuildAccessesString.c)
 *     AdtpBuildObjectTypeStrings @ 0x140A59130 (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildUserAccountControlString @ 0x140A593D4 (AdtpBuildUserAccountControlString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpPackageParameters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  UNICODE_STRING *v9; // r9
  unsigned __int16 v10; // r14
  unsigned __int16 v11; // r11
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // r8
  void *v19; // r10
  __int64 v20; // r12
  int v21; // ebx
  UNICODE_STRING *v22; // rdx
  unsigned __int16 *v23; // rdi
  int v24; // eax
  unsigned __int8 *v25; // r8
  char v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned __int8 **v30; // rax
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // edx
  __int64 v34; // r8
  unsigned __int16 v35; // r11
  unsigned __int16 v36; // r14
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // edx
  unsigned __int16 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // edx
  int v46; // eax
  int v48; // ebx
  int v49; // ebx
  int v50; // ebx
  __int64 v51; // rcx
  int v52; // ecx
  int v53; // ecx
  __int64 v54; // rcx
  unsigned __int16 v55; // r14
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rbx
  unsigned int v60; // edi
  BOOLEAN valid; // al
  __int64 v62; // rax
  bool v63; // zf
  unsigned int v64; // eax
  __int64 v65; // rdx
  unsigned int *v66; // r10
  unsigned int v67; // ecx
  unsigned int v68; // eax
  int v69; // ebx
  int v70; // ebx
  void *v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // eax
  __int64 v74; // r10
  unsigned __int16 *v75; // rbx
  __int64 v76; // rdi
  __int16 v77; // r11
  int v78; // ecx
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  int v82; // eax
  __int64 v83; // r8
  unsigned __int16 *v84; // rdi
  int v85; // eax
  __int64 v86; // rbx
  __int64 v87; // r10
  int v88; // ecx
  unsigned __int16 v89; // r11
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r10
  __int64 v97; // rax
  __int64 v98; // rcx
  int v99; // edx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r8
  unsigned int v103; // eax
  __int64 v104; // rdx
  unsigned __int16 *v105; // rdi
  int v106; // eax
  __int64 v107; // rbx
  unsigned int v108; // ecx
  PUNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h]
  PUNICODE_STRING v110; // [rsp+30h] [rbp-50h]
  char v111; // [rsp+60h] [rbp-20h] BYREF
  __int16 v112; // [rsp+62h] [rbp-1Eh]
  int v113; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v114; // [rsp+68h] [rbp-18h]
  unsigned int v115; // [rsp+6Ch] [rbp-14h]
  __int64 v116; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v117; // [rsp+78h] [rbp-8h] BYREF
  char v118; // [rsp+C0h] [rbp+40h] BYREF
  int v119; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v120; // [rsp+D8h] [rbp+58h]

  v120 = a4;
  v119 = a3;
  v8 = a4;
  v9 = 0LL;
  v112 = 0;
  v10 = 0;
  v113 = 0;
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( !a2 )
    {
      v13 = *(_DWORD *)(a1 + 8);
      v14 = a1 + 24;
      goto LABEL_4;
    }
LABEL_68:
    v12 = -1073741811;
    goto LABEL_38;
  }
  if ( !a2 )
    goto LABEL_68;
  v13 = *(_DWORD *)(a2 + 12);
  v14 = a2 + 32;
LABEL_4:
  v15 = 2LL;
  v116 = v14;
  v115 = v13;
  v16 = 2;
  v114 = 2;
  if ( v13 > 2 )
  {
    v17 = a6;
    v18 = 1LL;
    v19 = &AdtpNullSid;
    do
    {
      if ( v10 >= 0x2Au || v11 >= 0xEu )
        goto LABEL_68;
      v20 = 32LL * v16;
      v21 = *(_DWORD *)(v20 + v14);
      if ( v21 > 16 )
      {
        if ( v21 <= 27 )
        {
          switch ( v21 )
          {
            case 27:
              goto LABEL_117;
            case 17:
              v46 = AdtpBuildSidListString(
                      *(_QWORD *)(v20 + v14 + 24),
                      v15,
                      (unsigned int)v17 + 16 * v10,
                      v8,
                      (__int64)&v113,
                      v10 + a8);
              goto LABEL_34;
            case 18:
              v100 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v100) = &v118;
              *(_QWORD *)(v17 + 8 * v100 + 8) = 8LL;
              goto LABEL_51;
            case 19:
              v94 = AdtpBuildUserAccountControlString(
                      *(_DWORD *)(v20 + v14 + 8),
                      (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 1)),
                      a8 + (unsigned int)v10 + 1,
                      (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 2)),
                      a8 + (unsigned int)v10 + 2);
              v9 = 0LL;
              v12 = v94;
              if ( v94 < 0 )
                goto LABEL_38;
              v11 = v112;
              v95 = 3LL;
              v96 = a5;
              do
              {
                v97 = v11++;
                v97 *= 2LL;
                v98 = 2LL * v10++;
                v99 = *(unsigned __int16 *)(v96 + 8 * v97);
                *(_QWORD *)(v17 + 8 * v98) = *(_QWORD *)(v96 + 8 * v97 + 8);
                *(_QWORD *)(v17 + 8 * v98 + 8) = (unsigned int)(v99 + 2);
                --v95;
              }
              while ( v95 );
              v14 = v116;
              v15 = 2LL;
              v18 = 1LL;
              goto LABEL_29;
            case 20:
              v92 = 3LL;
              do
              {
                AdtpEtwBuildDashString(v17 + 16LL * v10, v92, v18);
                v10 += v18;
                v92 = v93 - v18;
              }
              while ( v92 );
              goto LABEL_63;
            case 21:
              v46 = AdtpBuildMessageString(
                      *(_DWORD *)(v20 + v14 + 8),
                      v15,
                      (unsigned int)v17 + 16 * v10,
                      v8,
                      (__int64)&v113,
                      v10 + a8);
              goto LABEL_34;
          }
          v79 = v21 - 21 - v15;
          if ( !v79 )
          {
            v83 = v10 + a8;
            v84 = (unsigned __int16 *)(a5 + 16LL * v11);
            LODWORD(DestinationString) = v83 + 1;
            v85 = AdtpBuildSockAddrString(*(_QWORD *)(v20 + v14 + 24), v84, v83, v84 + 8);
            v9 = 0LL;
            v12 = v85;
            if ( v85 < 0 )
              break;
            v18 = 1LL;
            v86 = 2LL * v10;
            v87 = a5;
            v88 = *v84 + 2;
            v42 = v10 + 1;
            v89 = v112 + 1;
            *(_QWORD *)(v17 + 8 * v86) = *((_QWORD *)v84 + 1);
            *(_DWORD *)(v17 + 8 * v86 + 8) = v88;
            *(_DWORD *)(v17 + 8 * v86 + 12) = 0;
            v90 = 2LL * v42;
            v91 = *(_QWORD *)(v87 + 16LL * v89 + 8);
            *(_DWORD *)(v17 + 8 * v90 + 8) = *(unsigned __int16 *)(v87 + 16LL * v89) + 2;
            v11 = v89 + 1;
            *(_QWORD *)(v17 + 8 * v90) = v91;
            *(_DWORD *)(v17 + 8 * v90 + 12) = 0;
            goto LABEL_28;
          }
          v80 = v79 - 1;
          if ( !v80 )
          {
            v81 = *(_DWORD *)(v20 + v14 + 8);
            ++v114;
            v8 = v120;
            v82 = AdtpBuildSecurityDescriptorChangeString(
                    v81,
                    *(_QWORD *)(v20 + v14 + 24),
                    *(_QWORD *)(32LL * v114 + v14 + 24),
                    (unsigned int)v17 + 16 * (v10 + 1),
                    v17 + 16LL * v10,
                    v10 + a8,
                    (_DWORD)v110,
                    v17 + 16 * (v10 + 1LL),
                    v10 + 1LL + a8,
                    v120,
                    (__int64)&v113);
            v9 = 0LL;
            v12 = v82;
            if ( v82 < 0 )
              break;
            v11 = v112;
            v15 = 2LL;
            v10 += 2;
            v18 = 1LL;
            goto LABEL_36;
          }
          v63 = v80 == (_DWORD)v15;
          goto LABEL_70;
        }
        switch ( v21 )
        {
          case 28:
            LODWORD(DestinationString) = (_DWORD)v9;
            v105 = (unsigned __int16 *)(a5 + 16LL * v11);
            v106 = AdtpBuildSockAddrString(*(_QWORD *)(v20 + v14 + 24), v105, v10 + a8, 0LL);
            v9 = 0LL;
            v12 = v106;
            if ( v106 < 0 )
              goto LABEL_38;
            v18 = 1LL;
            v15 = 2LL;
            v107 = 2LL * v10;
            v108 = *v105 + 2;
            ++v10;
            v11 = v112 + 1;
            *(_QWORD *)(v17 + 8 * v107) = *((_QWORD *)v105 + 1);
            *(_QWORD *)(v17 + 8 * v107 + 8) = v108;
            goto LABEL_29;
          case 29:
            goto LABEL_129;
          case 30:
            if ( *(UNICODE_STRING **)(v20 + v14 + 8) != v9 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
              goto LABEL_68;
LABEL_129:
            v102 = *(_QWORD *)(v20 + v14 + 24);
            v103 = *(_DWORD *)(v102 + 132);
            if ( v103 >= v114 )
              goto LABEL_68;
            v104 = 32LL * v103;
            if ( *(_DWORD *)(v104 + v14) != 1 )
              goto LABEL_68;
            LOBYTE(v9) = v21 == 30;
            v46 = AdtpBuildAccessReasonAuditString(
                    *(_QWORD *)(v14 + 56),
                    *(_QWORD *)(v104 + v14 + 24),
                    v102,
                    (_DWORD)v9,
                    (_DWORD)DestinationString,
                    v17 + 16LL * v10,
                    v8,
                    (__int64)&v113,
                    v10 + a8);
            goto LABEL_34;
          case 31:
            if ( *(_DWORD *)(v20 + v14 + 8) != 32 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
              goto LABEL_68;
            v46 = AdtpBuildSecurityDescriptorUnicodeString(
                    32,
                    *(_QWORD *)(v20 + v14 + 24),
                    0,
                    (unsigned int)v17 + 16 * v10,
                    v8,
                    (__int64)&v113,
                    v10 + a8);
            goto LABEL_34;
        }
        v52 = v21 - 31 - v15;
        if ( v52 )
        {
          v53 = v52 - 1;
          if ( !v53 )
          {
            v46 = AdtpBuildMultiSzStringListString(*(_QWORD *)(v20 + v14 + 24), v17 + 16LL * v10, v10 + a8);
            goto LABEL_34;
          }
          v63 = v53 == 1;
LABEL_70:
          if ( !v63 )
            goto LABEL_68;
        }
      }
      else
      {
        if ( v21 == 16 )
        {
          v46 = AdtpBuildStringListString(
                  *(_QWORD *)(v20 + v14 + 24),
                  v15,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v113,
                  v10 + a8);
          goto LABEL_34;
        }
        if ( v21 > 8 )
        {
          v48 = v21 - 9;
          if ( v48 )
          {
            v49 = v48 - 1;
            if ( v49 )
            {
              v50 = v49 - 1;
              if ( !v50 )
                goto LABEL_50;
              v69 = v50 - 1;
              if ( !v69 )
                goto LABEL_50;
              v70 = v69 - 1;
              if ( v70 )
              {
                if ( (unsigned int)(v70 - 1) > 1 )
                  goto LABEL_68;
LABEL_50:
                v51 = 2LL * v10;
                *(_QWORD *)(v17 + 8 * v51) = v20 + v14 + 8;
                *(_QWORD *)(v17 + 8 * v51 + 8) = 8LL;
              }
              else
              {
                v71 = &AdtpNullGuid;
                if ( *(_QWORD *)(v20 + v14 + 24) )
                  v71 = *(void **)(v20 + v14 + 24);
                v72 = 2LL * v10;
                *(_QWORD *)(v17 + 8 * v72) = v71;
                *(_QWORD *)(v17 + 8 * v72 + 8) = 16LL;
              }
            }
            else
            {
LABEL_117:
              v101 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v101) = v20 + v14 + 8;
              *(_QWORD *)(v17 + 8 * v101 + 8) = 4LL;
            }
LABEL_51:
            v10 += v18;
            goto LABEL_37;
          }
          v73 = *(_DWORD *)(v20 + v14 + 16);
          if ( v73 >= v16 )
            goto LABEL_68;
          v74 = 32LL * v73;
          if ( *(_DWORD *)(v74 + v14) != (_DWORD)v18 )
            goto LABEL_68;
          v75 = (unsigned __int16 *)(a5 + 16LL * v11);
          LODWORD(DestinationString) = a5 + 16 * v11;
          AdtpBuildObjectTypeStrings(
            *(_QWORD *)(v14 + 56),
            *(_QWORD *)(v74 + v14 + 24),
            *(_QWORD *)(v20 + v14 + 24),
            *(_DWORD *)(v20 + v14 + 4) / 0x18u);
          v76 = 2LL * v10;
          v15 = 2LL;
          v77 = v112;
          v78 = *v75 + 2;
          v9 = 0LL;
          *(_QWORD *)(v17 + 8 * v76) = *((_QWORD *)v75 + 1);
          v18 = 1LL;
          *(_DWORD *)(v17 + 8 * v76 + 8) = v78;
          v11 = v77 + 1;
          *(_DWORD *)(v17 + 8 * v76 + 12) = 0;
          ++v10;
          goto LABEL_29;
        }
        switch ( v21 )
        {
          case 8:
            v66 = *(unsigned int **)(v20 + v14 + 24);
            if ( !v66 )
              goto LABEL_68;
            v67 = *v66;
            v68 = *v66 ? 12 * v67 + 8 : 8;
            if ( *(_DWORD *)(v20 + v14 + 4) < v68 || v67 > 0x42 )
              goto LABEL_68;
            DestinationString = (PUNICODE_STRING)&v113;
            v46 = AdtpBuildPrivilegeAuditString(*(_QWORD *)(v20 + v14 + 24), 0LL, v17 + 16LL * v10, v8);
            goto LABEL_34;
          case 0:
            AdtpEtwBuildDashString(v17 + 16LL * v10, v15, v18);
            goto LABEL_51;
          case 1:
            if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(*(_QWORD *)(v20 + v14 + 24)) )
              goto LABEL_68;
LABEL_33:
            v46 = AdtpEtwBuildString((unsigned int)v17 + 16 * v10, v45, v8, (unsigned int)&v113, v10 + a8);
LABEL_34:
            v9 = 0LL;
            v12 = v46;
            if ( v46 < 0 )
              goto LABEL_38;
            v11 = v112;
            v18 = 1LL;
            ++v10;
            v15 = 2LL;
            goto LABEL_36;
          case 2:
            v44 = *(_QWORD *)(v20 + v14 + 24);
            if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v44) )
              goto LABEL_68;
            AdtpSubstituteDriveLetter();
            v45 = v44;
            goto LABEL_33;
          case 3:
            v46 = AdtpBuildUlongString(*(_DWORD *)(v20 + v14 + 8), (__int64)&v113, v10 + a8);
            goto LABEL_34;
          case 4:
            v59 = *(_QWORD *)(v20 + v14 + 24);
            v60 = 4 * *(unsigned __int8 *)(v59 + 1) + 8;
            if ( *(_DWORD *)(v20 + v14 + 4) < v60 || (valid = RtlValidSid(*(PSID *)(v20 + v14 + 24)), v9 = 0LL, !valid) )
            {
              v12 = -1073741704;
              goto LABEL_38;
            }
            v11 = v112;
            v18 = 1LL;
            v15 = 2LL;
            v62 = 2LL * v10++;
            *(_QWORD *)(v17 + 8 * v62) = v59;
            *(_DWORD *)(v17 + 8 * v62 + 8) = v60;
            *(_DWORD *)(v17 + 8 * v62 + 12) = 0;
            goto LABEL_30;
        }
        if ( v21 != 5 )
        {
          if ( v21 == 6 )
          {
            v54 = 2LL * v10;
            v55 = v18 + v10;
            v56 = 4 * (unsigned __int8)byte_140D54DE9 + 8;
            *(_QWORD *)(v17 + 8 * v54) = v19;
            *(_DWORD *)(v17 + 8 * v54 + 8) = v56;
            *(_DWORD *)(v17 + 8 * v54 + 12) = (_DWORD)v9;
            do
            {
              AdtpEtwBuildDashString(v17 + 16LL * v55, v15, v18);
              v55 += v18;
              v15 = v57 - v18;
            }
            while ( v15 );
            v58 = 2LL * v55;
            v10 = v18 + v55;
            *(_QWORD *)(v17 + 8 * v58) = &AdtpNullLuid;
            *(_QWORD *)(v17 + 8 * v58 + 8) = 8LL;
LABEL_63:
            v15 = 2LL;
            goto LABEL_37;
          }
          if ( v21 != 7 )
            goto LABEL_68;
          v64 = *(_DWORD *)(v20 + v14 + 16);
          if ( v64 >= v114 )
            goto LABEL_68;
          v65 = 32LL * v64;
          if ( *(_DWORD *)(v65 + v14) != (_DWORD)v18 )
            goto LABEL_68;
          v46 = AdtpBuildAccessesString(
                  *(_QWORD *)(v14 + 56),
                  *(_QWORD *)(v65 + v14 + 24),
                  *(_DWORD *)(v20 + v14 + 8),
                  0,
                  v9,
                  v17 + 16LL * v10,
                  v8,
                  (__int64)&v113,
                  v10 + a8);
          goto LABEL_34;
        }
      }
      v110 = (PUNICODE_STRING)&v111;
      v22 = (UNICODE_STRING *)&v117;
      v23 = (unsigned __int16 *)(a5 + 16LL * v11);
      LOBYTE(v119) = (_BYTE)v9;
      v118 = (char)v9;
      v111 = (char)v9;
      v117 = (unsigned __int8 *)v9;
      if ( v21 != 35 )
        v22 = v9;
      DestinationString = (PUNICODE_STRING)&v118;
      v24 = AdtpBuildLogonIdStrings(v20 + v14 + 8, v22, &v119, a5 + 16LL * v11);
      v12 = v24;
      if ( v21 == 35 )
      {
        v26 = v119;
        v25 = v117;
      }
      else
      {
        v25 = *(unsigned __int8 **)(v14 + 24);
        v26 = 0;
      }
      if ( v24 < 0 )
        break;
      v27 = *(_DWORD *)(v20 + v14);
      if ( v27 == 5 || v27 == 35 )
      {
        if ( !v25 )
        {
          v25 = (unsigned __int8 *)&AdtpNullSid;
          v26 = 0;
        }
      }
      else
      {
        if ( v21 != 33 )
        {
          if ( v26 && v25 )
            ExFreePoolWithTag(v25, 0);
          goto LABEL_27;
        }
        v25 = *(unsigned __int8 **)(v20 + v14 + 24);
      }
      v28 = v10;
      v29 = 4 * v25[1] + 8;
      v30 = (unsigned __int8 **)(v17 + 16LL * v10);
      *v30 = v25;
      v30[1] = (unsigned __int8 *)v29;
      ++v10;
      *(_BYTE *)(v28 + a8) = v26;
LABEL_27:
      v31 = *((_QWORD *)v23 + 1);
      v32 = a8;
      v33 = *v23 + 2;
      v34 = v10;
      v35 = v112 + 1;
      v36 = v10 + 1;
      v37 = a5;
      v38 = v17 + 16LL * (unsigned int)v34;
      *(_DWORD *)(v38 + 12) = 0;
      *(_QWORD *)v38 = v31;
      LOBYTE(v31) = v118;
      *(_DWORD *)(v38 + 8) = v33;
      *(_BYTE *)(v34 + v32) = v31;
      v39 = v17 + 16LL * v36;
      v40 = *(_QWORD *)(v37 + 16LL * v35 + 8);
      v41 = *(unsigned __int16 *)(v37 + 16LL * v35) + 2;
      *(_DWORD *)(v39 + 12) = 0;
      *(_QWORD *)v39 = v40;
      LOBYTE(v40) = v111;
      *(_DWORD *)(v39 + 8) = v41;
      *(_BYTE *)(v36 + v32) = v40;
      v18 = 1LL;
      v42 = v36 + 1;
      v11 = v35 + 1;
      v43 = 2LL * v42;
      v9 = 0LL;
      *(_QWORD *)(v17 + 8 * v43) = v20 + v14 + 8;
      *(_QWORD *)(v17 + 8 * v43 + 8) = 8LL;
LABEL_28:
      v10 = v42 + 1;
      v15 = 2LL;
LABEL_29:
      v112 = v11;
LABEL_30:
      v8 = v120;
LABEL_36:
      v19 = &AdtpNullSid;
LABEL_37:
      v16 = v18 + v114;
      v114 = v16;
    }
    while ( v16 < v115 );
  }
LABEL_38:
  *a7 = v10;
  return v12;
}
