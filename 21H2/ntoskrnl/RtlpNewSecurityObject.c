/*
 * XREFs of RtlpNewSecurityObject @ 0x1406FF5F0
 * Callers:
 *     SeAssignSecurityEx2 @ 0x140355E90 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x14066A500 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 * Callees:
 *     SeAccessCheck @ 0x140206760 (SeAccessCheck.c)
 *     RtlSidDominates @ 0x140252890 (RtlSidDominates.c)
 *     SepLocateTokenIntegrity @ 0x1402529CC (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14027F290 (RtlSubAuthoritySid.c)
 *     RtlpOwnerAcesPresent @ 0x14029C4D0 (RtlpOwnerAcesPresent.c)
 *     SepLocateTokenTrustLevel @ 0x1402AAB88 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x1402D1560 (RtlpValidTrustSubjectContext.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     RtlFindAceByType @ 0x140352210 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14062771C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140654F40 (SePrivilegeCheck.c)
 *     RtlAddMandatoryAce @ 0x14065B720 (RtlAddMandatoryAce.c)
 *     RtlpInheritAcl2 @ 0x14065CF30 (RtlpInheritAcl2.c)
 *     RtlpApplyAclToObject @ 0x14065EE40 (RtlpApplyAclToObject.c)
 *     RtlCreateAcl @ 0x140660570 (RtlCreateAcl.c)
 *     RtlpCombineAcls @ 0x1406838B0 (RtlpCombineAcls.c)
 *     SepValidOwnerSubjectContext @ 0x14069CE0C (SepValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1406B2784 (RtlpCreateServerAcl.c)
 *     SeUnlockSubjectContext @ 0x1406F5E90 (SeUnlockSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DD90 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x140913F30 (RtlpComputeMergedAcl.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  int v10; // r10d
  _OWORD *v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rsi
  char *v14; // r14
  char *v15; // r15
  char *v16; // r12
  char v17; // dl
  char *v18; // r9
  __int16 v19; // ax
  bool v20; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned __int8 *v24; // rbx
  unsigned __int16 *v25; // rsi
  unsigned __int8 *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int8 *v29; // rdi
  unsigned __int8 *v30; // r12
  unsigned __int8 **TokenIntegrity; // rax
  unsigned __int8 *v32; // r15
  __int64 TokenTrustLevel; // rax
  unsigned __int8 *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r10
  __int64 v37; // r9
  __int64 v38; // r8
  PVOID PoolWithTag; // rax
  size_t v40; // r8
  char *v41; // r13
  __int64 v42; // rax
  unsigned __int16 *v43; // rbx
  __int64 v44; // r8
  __int16 v45; // cx
  char *v46; // rax
  char *v47; // rax
  char *v48; // rax
  char *v49; // rax
  char v50; // r13
  int v51; // r14d
  char v52; // bl
  int v53; // r15d
  int v54; // r9d
  int v55; // r8d
  unsigned __int8 *v56; // r12
  unsigned __int8 *v57; // rsi
  int v58; // edi
  __int16 v59; // cx
  unsigned int v60; // edx
  char v61; // r12
  __int16 v62; // dx
  int v63; // r9d
  int v64; // r8d
  unsigned __int8 *v65; // r15
  unsigned __int8 *v66; // rdi
  int v67; // esi
  char *v68; // rdi
  __int16 v69; // cx
  __int64 v70; // r13
  __int16 v71; // ax
  __int64 v72; // rcx
  unsigned __int8 *AceByType; // rax
  __int64 v74; // r8
  unsigned __int8 *v75; // rbx
  unsigned int v76; // r14d
  int v77; // r15d
  _OWORD *v78; // rsi
  void *v79; // r12
  __int16 v80; // ax
  __int64 v81; // rdi
  unsigned __int8 *v82; // rax
  __int64 v83; // r8
  unsigned __int8 *v84; // rbx
  int v85; // ebx
  int v86; // edx
  int v87; // ebx
  unsigned __int8 *v88; // r13
  unsigned __int8 v89; // di
  __int64 v90; // rdx
  int *v91; // rbx
  unsigned __int8 *v92; // rsi
  unsigned int v93; // eax
  int v94; // r14d
  unsigned __int16 *v95; // rax
  unsigned __int8 *v96; // rdi
  __int16 v97; // si
  int *v98; // r12
  void *v99; // r14
  int v100; // eax
  unsigned int v101; // r15d
  int v102; // eax
  int v103; // r13d
  char *v104; // rbx
  int v105; // ecx
  int v106; // edx
  unsigned int v107; // r8d
  unsigned __int8 *v108; // rax
  char *v109; // rax
  char v110; // bl
  _OWORD *v111; // rdx
  int v112; // edi
  __int16 v113; // ax
  __int16 v114; // si
  unsigned __int8 *v115; // r12
  unsigned __int8 *v116; // r14
  int v117; // esi
  __int16 v118; // r14
  int v119; // ecx
  unsigned int v120; // r14d
  char v121; // r12
  struct _SECURITY_SUBJECT_CONTEXT *v122; // rsi
  KPROCESSOR_MODE v123; // r15
  unsigned __int16 *v124; // rbx
  bool v125; // al
  int v126; // edi
  unsigned int v127; // r15d
  unsigned int v128; // r13d
  int v129; // esi
  unsigned int v130; // r12d
  int v131; // r14d
  unsigned int v132; // edi
  _DWORD *v133; // rax
  _DWORD *v134; // rdx
  __int16 v135; // cx
  char *v136; // rbx
  bool v137; // zf
  unsigned __int16 *v138; // rsi
  __int64 v139; // rcx
  unsigned __int16 *v140; // r14
  char v141; // r12
  __int64 v142; // rcx
  char *v143; // rbx
  unsigned int v145; // eax
  int v146; // r15d
  unsigned __int16 *v147; // rax
  __int16 v148; // ax
  __int64 v149; // rcx
  unsigned __int8 *v150; // rax
  __int16 v151; // ax
  int v152; // r8d
  int v153; // edx
  int v154; // r15d
  __int16 v155; // cx
  unsigned int v156; // ecx
  char *v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // r8
  __int16 v162; // ax
  unsigned int v163; // eax
  __int16 v164; // ax
  __int64 v165; // rax
  __int16 v166; // ax
  __int64 v167; // rax
  __int16 v168; // ax
  __int64 v169; // rax
  unsigned int v170; // eax
  PVOID v171; // rax
  char v172; // r13
  unsigned int v173; // eax
  unsigned int v174; // r14d
  unsigned __int16 *v175; // rax
  struct _KTHREAD *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  int v182; // ecx
  int v183; // eax
  __int64 v184; // rax
  unsigned __int16 *v185; // rax
  __int64 v186; // rax
  void *v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  char *v190; // rax
  __int64 v191; // rax
  __int16 v192; // ax
  __int64 v193; // rcx
  __int64 v194; // rax
  unsigned __int8 *v195; // rax
  unsigned __int8 *v196; // rsi
  int v197; // edi
  unsigned int v198; // r14d
  int v199; // ecx
  BOOLEAN v200; // bl
  BOOLEAN v201; // bl
  __int64 PreviouslyGrantedAccess; // [rsp+20h] [rbp-F0h]
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-E0h]
  char v204; // [rsp+90h] [rbp-80h]
  KPROCESSOR_MODE AccessMode; // [rsp+91h] [rbp-7Fh]
  char v206; // [rsp+92h] [rbp-7Eh]
  unsigned __int16 *v207; // [rsp+98h] [rbp-78h]
  char v208; // [rsp+A0h] [rbp-70h] BYREF
  void *Src; // [rsp+A8h] [rbp-68h]
  char v210; // [rsp+B0h] [rbp-60h]
  unsigned int v211[3]; // [rsp+B4h] [rbp-5Ch] BYREF
  __int16 v212; // [rsp+C0h] [rbp-50h] BYREF
  char v213; // [rsp+C2h] [rbp-4Eh] BYREF
  bool v214; // [rsp+C3h] [rbp-4Dh]
  char v215; // [rsp+C4h] [rbp-4Ch]
  char v216; // [rsp+C5h] [rbp-4Bh]
  char v217; // [rsp+C6h] [rbp-4Ah]
  char v218; // [rsp+C7h] [rbp-49h] BYREF
  char v219; // [rsp+C8h] [rbp-48h]
  char v220; // [rsp+C9h] [rbp-47h]
  char v221; // [rsp+CAh] [rbp-46h]
  int v222[3]; // [rsp+CCh] [rbp-44h] BYREF
  _WORD v223[2]; // [rsp+D8h] [rbp-38h] BYREF
  unsigned int v224; // [rsp+DCh] [rbp-34h] BYREF
  __int64 v225; // [rsp+E0h] [rbp-30h] BYREF
  _OWORD *v226; // [rsp+E8h] [rbp-28h]
  void *v227; // [rsp+F0h] [rbp-20h]
  int v228; // [rsp+F8h] [rbp-18h] BYREF
  void *v229; // [rsp+100h] [rbp-10h]
  PGENERIC_MAPPING v230; // [rsp+108h] [rbp-8h]
  __int64 v231; // [rsp+110h] [rbp+0h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+118h] [rbp+8h]
  unsigned int v233; // [rsp+120h] [rbp+10h] BYREF
  unsigned int v234; // [rsp+124h] [rbp+14h] BYREF
  __int64 v235; // [rsp+128h] [rbp+18h] BYREF
  __int64 v236; // [rsp+130h] [rbp+20h]
  PVOID SecurityDescriptor; // [rsp+138h] [rbp+28h] BYREF
  char *v238; // [rsp+140h] [rbp+30h]
  __int64 v239; // [rsp+148h] [rbp+38h]
  int v240; // [rsp+150h] [rbp+40h] BYREF
  int v241; // [rsp+154h] [rbp+44h] BYREF
  PSID Sid; // [rsp+158h] [rbp+48h]
  __int64 v243; // [rsp+160h] [rbp+50h]
  PVOID P; // [rsp+168h] [rbp+58h]
  int *v245; // [rsp+170h] [rbp+60h]
  unsigned __int16 *v246; // [rsp+178h] [rbp+68h]
  PVOID v247; // [rsp+180h] [rbp+70h] BYREF
  PVOID v248; // [rsp+188h] [rbp+78h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+190h] [rbp+80h] BYREF
  NTSTATUS AccessStatus; // [rsp+194h] [rbp+84h] BYREF
  __int64 v251; // [rsp+198h] [rbp+88h] BYREF
  char *v252; // [rsp+1A0h] [rbp+90h]
  __int64 v253; // [rsp+1A8h] [rbp+98h]
  char *v254; // [rsp+1B0h] [rbp+A0h] BYREF
  unsigned __int8 *v255; // [rsp+1B8h] [rbp+A8h]
  _QWORD *v256; // [rsp+1C0h] [rbp+B0h]
  _OWORD v257[2]; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 v258; // [rsp+1E8h] [rbp+D8h]
  int v259; // [rsp+1F0h] [rbp+E0h]
  unsigned __int16 v260; // [rsp+1F4h] [rbp+E4h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1F8h] [rbp+E8h] BYREF
  int v262[2]; // [rsp+210h] [rbp+100h] BYREF
  _BYTE v263[120]; // [rsp+218h] [rbp+108h] BYREF
  ACL Acl; // [rsp+290h] [rbp+180h] BYREF

  v10 = 0;
  v230 = a9;
  v11 = a2;
  v12 = 0LL;
  v253 = a10;
  v13 = a1;
  v256 = a3;
  v258 = 0LL;
  v210 = 0;
  v14 = 0LL;
  v220 = 0;
  v15 = 0LL;
  v219 = 0;
  v16 = 0LL;
  v204 = 0;
  v212 = 0;
  v223[0] = 0;
  v213 = 0;
  v216 = 0;
  v218 = 0;
  v226 = a2;
  v17 = a7;
  v243 = a4;
  v18 = 0LL;
  v245 = v262;
  v236 = a1;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  v228 = 0;
  v207 = 0LL;
  v247 = 0LL;
  P = 0LL;
  Sid = 0LL;
  v252 = 0LL;
  v231 = 0LL;
  v239 = 0LL;
  v246 = 0LL;
  *(_QWORD *)&v211[1] = 0LL;
  AccessMode = 1;
  memset(v222, 0, sizeof(v222));
  LODWORD(v251) = 0;
  v255 = 0LL;
  v238 = 0LL;
  v254 = 0LL;
  SecurityDescriptor = 0LL;
  v208 = 1;
  v248 = 0LL;
  v221 = 0;
  memset(v257, 0, sizeof(v257));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( v11 )
  {
    v215 = 1;
  }
  else
  {
    v11 = v257;
    v215 = 0;
    v226 = v257;
    LOBYTE(v257[0]) = 1;
  }
  v19 = *((_WORD *)v11 + 1);
  v20 = (v19 & 0x80u) != 0;
  v206 = (v19 & 0x80u) != 0;
  v217 = (v19 & 0x40) != 0;
  if ( a8 || (v19 & 0x80u) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a8 + 16) + 48LL), 1u);
    if ( *(_QWORD *)a8
      && (v176 = KeGetCurrentThread(),
          --v176->KernelApcDisable,
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)a8 + 48LL), 1u),
          (v22 = *(_QWORD *)a8) != 0) )
    {
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v206 = 1;
      v23 = *(_QWORD *)(a8 + 16);
    }
    else
    {
      v22 = *(_QWORD *)(a8 + 16);
      v23 = v22;
    }
    v24 = *(unsigned __int8 **)(v22 + 168);
    v25 = *(unsigned __int16 **)(v22 + 184);
    v26 = *(unsigned __int8 **)(*(_QWORD *)(v22 + 152) + 16LL * *(unsigned int *)(v22 + 144));
    v27 = *(_QWORD *)(v23 + 152);
    v28 = *(unsigned int *)(v23 + 144);
    v29 = *(unsigned __int8 **)(v23 + 168);
    v30 = *(unsigned __int8 **)(v27 + 16 * v28);
    TokenIntegrity = (unsigned __int8 **)SepLocateTokenIntegrity(v22);
    if ( TokenIntegrity )
      v32 = *TokenIntegrity;
    else
      v32 = (unsigned __int8 *)SepDefaultMandatorySid;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)SubjectSecurityContext);
    v34 = (unsigned __int8 *)TokenTrustLevel;
    if ( TokenTrustLevel )
      v35 = 4LL * *(unsigned __int8 *)(TokenTrustLevel + 1) + 8;
    else
      v35 = 0LL;
    if ( v24 )
      v36 = 4LL * v24[1] + 8;
    else
      v36 = 0LL;
    if ( v29 )
      v37 = 4LL * v29[1] + 32;
    else
      v37 = 24LL;
    if ( v25 )
      v38 = v25[1];
    else
      v38 = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(
                    PagedPool,
                    v37 + v38 + v36 + v35 + 4 * (v32[1] + v26[1] + (unsigned __int64)v30[1]),
                    0x64536553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(PoolWithTag, v26, 4LL * v26[1] + 8);
    v40 = 4LL * v32[1] + 8;
    v41 = (char *)P + 4 * v26[1] + 8;
    Sid = v41;
    memmove(v41, v32, v40);
    v42 = v32[1];
    v15 = &v41[4 * v42 + 8];
    v231 = (__int64)v15;
    if ( v34 )
    {
      v161 = v34[1];
      v252 = &v41[4 * v42 + 8];
      memmove(v252, v34, 4 * v161 + 8);
      v15 += 4 * v34[1] + 8;
      v231 = (__int64)v15;
    }
    else
    {
      v252 = 0LL;
    }
    if ( v24 )
    {
      v14 = v15;
      memmove(v15, v24, 4LL * v24[1] + 8);
      v15 += 4 * v24[1] + 8;
      v231 = (__int64)v15;
    }
    else
    {
      v14 = 0LL;
    }
    memmove(v15, v30, 4LL * v30[1] + 8);
    v43 = (unsigned __int16 *)&v15[4 * v30[1] + 8];
    v246 = v43;
    if ( v29 )
    {
      v44 = v29[1];
      v239 = (__int64)v43;
      v16 = (char *)v43;
      memmove(v43, v29, 4 * v44 + 8);
      v43 += 2 * v29[1] + 4;
      v246 = v43;
    }
    else
    {
      v16 = 0LL;
      v239 = 0LL;
    }
    if ( v25 )
      memmove(v43, v25, v25[1]);
    else
      v246 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v20 = v206;
    v10 = 0;
    v13 = v236;
    v18 = (char *)P;
    v17 = a7;
    v11 = v226;
    v12 = *(_QWORD *)&v211[1];
  }
  v45 = *((_WORD *)v11 + 1);
  if ( v45 < 0 )
  {
    v158 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v158 )
      goto LABEL_33;
    v46 = (char *)v11 + v158;
  }
  else
  {
    v46 = (char *)*((_QWORD *)v11 + 1);
  }
  v227 = v46;
  if ( v46 )
  {
    HIBYTE(v212) = 1;
    goto LABEL_37;
  }
LABEL_33:
  if ( (v17 & 0x20) != 0 )
  {
    if ( !v13 )
    {
      v140 = 0LL;
      v85 = -1073741734;
      v138 = 0LL;
      goto LABEL_501;
    }
    if ( *(__int16 *)(v13 + 2) >= 0 )
    {
      v187 = *(void **)(v13 + 8);
    }
    else
    {
      v186 = *(unsigned int *)(v13 + 4);
      if ( !(_DWORD)v186 )
        goto LABEL_377;
      v187 = (void *)(v13 + v186);
    }
    v227 = v187;
    HIBYTE(v212) = 1;
    if ( v187 )
      goto LABEL_37;
LABEL_377:
    v140 = 0LL;
    v85 = -1073741734;
    v138 = 0LL;
    goto LABEL_501;
  }
  v47 = v15;
  if ( !v20 )
    v47 = v18;
  v227 = v47;
  if ( !v47 )
  {
    v140 = 0LL;
    v85 = -1073741700;
    v138 = 0LL;
    goto LABEL_501;
  }
LABEL_37:
  if ( v45 < 0 )
  {
    v159 = *((unsigned int *)v11 + 2);
    if ( !(_DWORD)v159 )
      goto LABEL_40;
    v48 = (char *)v11 + v159;
  }
  else
  {
    v48 = (char *)*((_QWORD *)v11 + 2);
  }
  v229 = v48;
  if ( v48 )
    goto LABEL_44;
LABEL_40:
  if ( (v17 & 0x40) != 0 )
  {
    if ( !v13 )
    {
      v140 = 0LL;
      v85 = -1073741733;
      v138 = 0LL;
      goto LABEL_501;
    }
    if ( *(__int16 *)(v13 + 2) >= 0 )
    {
      v49 = *(char **)(v13 + 16);
    }
    else
    {
      v188 = *(unsigned int *)(v13 + 8);
      if ( !(_DWORD)v188 )
        goto LABEL_385;
      v49 = (char *)(v13 + v188);
    }
  }
  else
  {
    v49 = v14;
    if ( v20 )
      v49 = v16;
  }
  v229 = v49;
  if ( !v49 )
  {
LABEL_385:
    v140 = 0LL;
    v85 = -1073741733;
    v138 = 0LL;
    goto LABEL_501;
  }
LABEL_44:
  LODWORD(v225) = v17 & 4;
  v50 = (v17 & 4) != 0;
  v51 = v17 & 2;
  v52 = v51 != 0;
  v214 = v51 != 0;
  if ( (v45 & 0x20) != 0 )
    v10 = 8;
  v53 = 0;
  if ( (v45 & 0x800) != 0 )
    v54 = 1024;
  else
    v54 = 0;
  if ( (v45 & 0x2000) != 0 )
    v55 = 4096;
  else
    v55 = 0;
  if ( (v45 & 0x10) != 0 )
  {
    if ( v45 >= 0 )
    {
      v56 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v178 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v178 )
        v56 = (unsigned __int8 *)v11 + v178;
      else
        v56 = 0LL;
    }
  }
  else
  {
    v56 = 0LL;
  }
  if ( !v13 )
    goto LABEL_53;
  v162 = *(_WORD *)(v13 + 2);
  if ( (v162 & 0x10) == 0 )
    goto LABEL_53;
  if ( v162 < 0 )
  {
    v163 = *(_DWORD *)(v13 + 12);
    if ( v163 )
    {
      v57 = (unsigned __int8 *)(v236 + v163);
      goto LABEL_54;
    }
LABEL_53:
    v57 = 0LL;
    goto LABEL_54;
  }
  v57 = *(unsigned __int8 **)(v13 + 24);
LABEL_54:
  v58 = v10 | v54 | v55 | ((v45 & 0x10) != 0 ? 4 : 0);
  if ( !v58 && !v57 )
  {
    v222[0] = v51 != 0 ? 0x400 : 0;
    Src = 0LL;
    goto LABEL_57;
  }
  v170 = 200;
  v211[0] = 200;
  while ( 1 )
  {
    v171 = ExAllocatePoolWithTag(PagedPool, v170, 0x63416553u);
    Src = v171;
    if ( !v171 )
    {
      v138 = 0LL;
      goto LABEL_498;
    }
    v85 = RtlpInheritAcl2(
            v57,
            v56,
            v58,
            a6,
            v52,
            v50,
            (__int64)v227,
            (__int64)v229,
            v231,
            v239,
            v230,
            2,
            v243,
            a5,
            v211,
            (unsigned __int16 *)v171,
            &v212,
            v222);
    if ( v85 >= 0 )
      break;
    ExFreePoolWithTag(Src, 0);
    Src = 0LL;
    if ( v85 != -1073741789 )
      goto LABEL_279;
    if ( (unsigned int)++v53 >= 2 )
      goto LABEL_279;
    v170 = v211[0];
    v52 = v214;
  }
  if ( !v211[0] )
  {
    ExFreePoolWithTag(Src, 0);
    Src = 0LL;
  }
LABEL_279:
  if ( v85 >= 0 )
  {
    v210 = 1;
    v182 = 32784;
    if ( (v222[0] & 8) != 0 )
      v182 = 32816;
    if ( (v222[0] & 0x1000) != 0 )
      v183 = 0x2000;
    else
      v183 = 0;
    v11 = v226;
    v211[0] = v182 | v183 | (2 * (v222[0] & 0x400));
    goto LABEL_60;
  }
  if ( v85 != -2147483637 )
    goto LABEL_423;
  v11 = v226;
LABEL_57:
  v59 = *((_WORD *)v11 + 1);
  v60 = 34816;
  if ( !v51 )
    v60 = 0x8000;
  v211[0] = v60;
  if ( (v59 & 0x30) == 0x30 )
  {
    if ( (v59 & 0x10) == 0 )
    {
      Src = 0LL;
LABEL_403:
      LOBYTE(v212) = 1;
      v211[0] = v60 | v59 & 0x2000 | 0x10;
      goto LABEL_60;
    }
    if ( v59 >= 0 )
    {
      v190 = (char *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v189 = *((unsigned int *)v11 + 3);
      if ( !(_DWORD)v189 )
      {
        Src = 0LL;
        goto LABEL_403;
      }
      v190 = (char *)v11 + v189;
    }
    Src = v190;
    goto LABEL_403;
  }
LABEL_60:
  v61 = (_DWORD)v225 != 0;
  v62 = *((_WORD *)v11 + 1);
  if ( (v62 & 0x20) != 0 )
    v63 = 8;
  else
    v63 = 0;
  if ( (v62 & 0x800) != 0 )
    v64 = 1024;
  else
    v64 = 0;
  if ( (v62 & 0x10) != 0 )
  {
    if ( v62 >= 0 )
    {
      v65 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v179 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v179 )
        v65 = (unsigned __int8 *)v11 + v179;
      else
        v65 = 0LL;
    }
  }
  else
  {
    v65 = 0LL;
  }
  if ( !v236 )
    goto LABEL_67;
  v164 = *(_WORD *)(v236 + 2);
  if ( (v164 & 0x10) == 0 )
    goto LABEL_67;
  if ( v164 >= 0 )
  {
    v66 = *(unsigned __int8 **)(v236 + 24);
    goto LABEL_68;
  }
  v165 = *(unsigned int *)(v236 + 12);
  if ( (_DWORD)v165 )
    v66 = (unsigned __int8 *)(v236 + v165);
  else
LABEL_67:
    v66 = 0LL;
LABEL_68:
  v67 = v63 | v64 | ((*((_WORD *)v11 + 1) & 0x10) != 0 ? 4 : 0);
  if ( !v67 && !v66 )
  {
    v68 = 0LL;
    *(_QWORD *)&v222[1] = 0LL;
    v241 = -2147483637;
    goto LABEL_71;
  }
  v172 = v214;
  v173 = 200;
  v233 = 200;
  v174 = 0;
  while ( 1 )
  {
    v175 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v173, 0x63416553u);
    *(_QWORD *)&v222[1] = v175;
    if ( !v175 )
      goto LABEL_496;
    v85 = RtlpInheritAcl2(
            v66,
            v65,
            v67,
            a6,
            v172,
            v61,
            (__int64)v227,
            (__int64)v229,
            v231,
            v239,
            v230,
            2,
            v243,
            a5,
            &v233,
            v175,
            v223,
            (int *)&v251);
    if ( v85 >= 0 )
      break;
    ExFreePoolWithTag(*(PVOID *)&v222[1], 0);
    *(_QWORD *)&v222[1] = 0LL;
    if ( v85 != -1073741789 || (++v174, v174 >= 2) )
    {
      v68 = 0LL;
      goto LABEL_287;
    }
    v173 = v233;
  }
  if ( v233 )
  {
    v68 = *(char **)&v222[1];
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)&v222[1], 0);
    v68 = 0LL;
    *(_QWORD *)&v222[1] = 0LL;
  }
LABEL_287:
  v241 = v85;
  if ( v85 >= 0 )
  {
    v11 = v226;
    v220 = 1;
    goto LABEL_72;
  }
  if ( v85 != -2147483637 )
    goto LABEL_423;
  v11 = v226;
LABEL_71:
  v69 = *((_WORD *)v11 + 1);
  if ( (v69 & 0x30) == 0x30 )
  {
    if ( (v69 & 0x10) == 0 )
    {
      v68 = 0LL;
      *(_QWORD *)&v222[1] = 0LL;
      goto LABEL_72;
    }
    if ( v69 >= 0 )
    {
      v68 = (char *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v191 = *((unsigned int *)v11 + 3);
      if ( !(_DWORD)v191 )
      {
        v68 = 0LL;
        *(_QWORD *)&v222[1] = 0LL;
        goto LABEL_72;
      }
      v68 = (char *)v11 + v191;
    }
    *(_QWORD *)&v222[1] = v68;
  }
LABEL_72:
  v70 = (__int64)v252;
  v224 = 0;
  while ( 2 )
  {
    v71 = *((_WORD *)v11 + 1);
    if ( (v71 & 0x10) != 0 )
    {
      if ( v71 >= 0 )
      {
        v72 = *((_QWORD *)v11 + 3);
      }
      else
      {
        v177 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v177 )
          v72 = (__int64)v11 + v177;
        else
          v72 = 0LL;
      }
    }
    else
    {
      v72 = 0LL;
    }
    AceByType = RtlFindAceByType(v72, 20, &v224);
    v75 = AceByType;
    if ( AceByType
      && AceByType != (unsigned __int8 *)-8LL
      && !RtlpValidTrustSubjectContext(v70, (__int64)(AceByType + 8), v74, &v241) )
    {
LABEL_422:
      v85 = -1073741790;
      goto LABEL_423;
    }
    ++v224;
    if ( v75 )
    {
      v11 = v226;
      continue;
    }
    break;
  }
  v76 = a7;
  v77 = 4;
  v78 = v226;
  if ( (a7 & 0x800) == 0 )
  {
LABEL_78:
    v79 = v229;
    v248 = v68;
    goto LABEL_79;
  }
  v224 = 0;
  do
  {
    v192 = *((_WORD *)v78 + 1);
    if ( (v192 & 0x10) != 0 )
    {
      if ( v192 >= 0 )
      {
        v193 = *((_QWORD *)v78 + 3);
      }
      else
      {
        v194 = *((unsigned int *)v78 + 3);
        if ( (_DWORD)v194 )
          v193 = (__int64)v78 + v194;
        else
          v193 = 0LL;
      }
    }
    else
    {
      v193 = 0LL;
    }
    v195 = RtlFindAceByType(v193, 20, &v224);
    ++v224;
    if ( !v195 )
    {
      if ( v70 )
      {
        if ( !v253 )
        {
          v138 = (unsigned __int16 *)Src;
          v85 = -1073741811;
          goto LABEL_499;
        }
        v197 = *(_DWORD *)(v253 + 4);
        v196 = (unsigned __int8 *)v70;
        v198 = 0;
        goto LABEL_442;
      }
      goto LABEL_78;
    }
  }
  while ( (v195[1] & 8) != 0 );
  v196 = v195 + 8;
  v197 = *((_DWORD *)v195 + 1);
  v198 = v195[1];
  if ( !v253 || (v197 & *(_DWORD *)(v253 + 4)) != v197 || v195 == (unsigned __int8 *)-8LL )
  {
LABEL_437:
    v138 = (unsigned __int16 *)Src;
    v85 = -1073741811;
    goto LABEL_499;
  }
LABEL_442:
  v85 = RtlCreateAcl(&Acl, 0x58u, 2u);
  if ( v85 < 0
    || (LOBYTE(PreviouslyGrantedAccess) = 20,
        v85 = RtlAddProcessTrustLabelAce(&Acl, 2LL, v198, v196, PreviouslyGrantedAccess, v197, GenericMapping),
        v85 < 0)
    || (v78 = v226,
        v79 = v229,
        v85 = RtlpComputeMergedAcl(
                v222[1],
                (*((_WORD *)v226 + 1) & 0x800 | (*((unsigned __int16 *)v226 + 1) >> 1) & 0x18u) >> 1,
                (int)&Acl,
                4,
                (__int64)v227,
                (__int64)v229,
                (__int64)v230,
                2,
                (__int64)&v248,
                (__int64)v222),
        v85 < 0) )
  {
LABEL_423:
    v138 = (unsigned __int16 *)Src;
LABEL_499:
    v140 = v207;
LABEL_500:
    v12 = *(_QWORD *)&v211[1];
LABEL_501:
    v141 = 0;
    goto LABEL_186;
  }
  v76 = a7;
  v221 = 1;
LABEL_79:
  v80 = *((_WORD *)v78 + 1);
  if ( (v80 & 0x10) != 0 )
  {
    if ( v80 >= 0 )
    {
      v81 = *((_QWORD *)v78 + 3);
    }
    else
    {
      v180 = *((unsigned int *)v78 + 3);
      if ( (_DWORD)v180 )
        v81 = (__int64)v78 + v180;
      else
        v81 = 0LL;
    }
  }
  else
  {
    v81 = 0LL;
  }
  v240 = 0;
  v259 = 0;
  v260 = 256;
  v234 = 0;
  while ( 2 )
  {
    v82 = RtlFindAceByType(v81, 21, &v234);
    v84 = v82;
    if ( !v82 )
      goto LABEL_83;
    if ( (*((_DWORD *)v82 + 1) & 0xFF000000) != 0 )
      goto LABEL_437;
    if ( (v82[1] & 0x40) != 0 )
    {
      if ( !RtlpValidTrustSubjectContext(v70, (__int64)(v82 + 8), v83, &v240) )
        goto LABEL_422;
      goto LABEL_83;
    }
    v199 = *(_DWORD *)(v82 + 10) - v259;
    if ( !v199 )
      v199 = *((unsigned __int16 *)v82 + 7) - v260;
    if ( v199 )
      goto LABEL_437;
    if ( v82[9] == 1 && !*((_DWORD *)v82 + 4) )
    {
LABEL_83:
      ++v234;
      if ( !v84 )
      {
        v85 = v240;
        goto LABEL_85;
      }
      continue;
    }
    break;
  }
  v85 = -1073741811;
LABEL_85:
  if ( v85 < 0 )
    goto LABEL_482;
  v86 = (v76 >> 8) & 1 | 2;
  if ( (v76 & 0x200) == 0 )
    v86 = (v76 >> 8) & 1;
  v87 = v86 | 4;
  if ( (v76 & 0x400) == 0 )
    v87 = v86;
  if ( v87 )
  {
    v88 = v255;
    goto LABEL_92;
  }
  v148 = *((_WORD *)v78 + 1);
  if ( (v148 & 0x10) != 0 )
  {
    if ( v148 >= 0 )
    {
      v149 = *((_QWORD *)v78 + 3);
    }
    else
    {
      v181 = *((unsigned int *)v78 + 3);
      if ( (_DWORD)v181 )
        v149 = (__int64)v78 + v181;
      else
        v149 = 0LL;
    }
  }
  else
  {
    v149 = 0LL;
  }
  v150 = RtlFindAceByType(v149, 17, 0LL);
  v88 = v150;
  if ( v150 )
  {
    v89 = v150[1];
    v87 = *((_DWORD *)v150 + 1);
    v238 = (char *)(v150 + 8);
    if ( v89 == 8 || (v89 & 0x10) != 0 )
    {
      v88 = 0LL;
      v238 = 0LL;
      v87 = 0;
      goto LABEL_92;
    }
  }
  else
  {
LABEL_92:
    v89 = 0;
  }
  if ( (v89 & 8) != 0 && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
  {
    v138 = (unsigned __int16 *)Src;
    v85 = -1073740730;
    goto LABEL_499;
  }
  if ( v87 )
  {
LABEL_95:
    if ( !v88 )
    {
      if ( !SubjectSecurityContext )
      {
        v138 = (unsigned __int16 *)Src;
        v85 = -1073741700;
        goto LABEL_499;
      }
      v238 = (char *)Sid;
      v89 = 0;
    }
  }
  else if ( Sid && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
  {
    v87 = 1;
    goto LABEL_95;
  }
  if ( !v238 )
  {
    v91 = 0LL;
    v245 = 0LL;
LABEL_101:
    if ( (v76 & 0x700) == 0 )
    {
      if ( !v88 && v91 )
      {
        v77 = 0;
      }
      else
      {
        v151 = *((_WORD *)v78 + 1);
        if ( (v151 & 0x20) != 0 )
          v152 = 8;
        else
          v152 = 0;
        if ( (v151 & 0x800) != 0 )
          v153 = 1024;
        else
          v153 = 0;
        if ( (v151 & 0x2000) != 0 )
          v154 = 4096;
        else
          v154 = 0;
        v77 = v152 | (*((unsigned __int16 *)v78 + 1) >> 2) & 4 | v153 | v154;
      }
    }
    if ( v236 )
    {
      v166 = *(_WORD *)(v236 + 2);
      if ( (v166 & 0x10) != 0 )
      {
        if ( v166 >= 0 )
        {
          v92 = *(unsigned __int8 **)(v236 + 24);
LABEL_104:
          if ( !v77 && !v92 )
          {
LABEL_206:
            v98 = v245;
            v96 = (unsigned __int8 *)v245;
            v222[0] = 0;
            v97 = 0;
LABEL_113:
            v99 = Src;
            v100 = RtlpCombineAcls(
                     (unsigned __int8 *)Src,
                     v96,
                     *(unsigned __int8 **)&v222[1],
                     *(unsigned __int8 **)&v222[1],
                     (unsigned __int8 *)v248,
                     *(unsigned __int8 **)&v222[1],
                     &v254,
                     &v228);
            v101 = v211[0];
            v85 = v100;
            if ( (v211[0] & 0x2000) != 0 )
              v102 = 0x40000000;
            else
              v102 = 0;
            v103 = v102 | v228;
            if ( v96 && v96 != (unsigned __int8 *)v98 )
              ExFreePoolWithTag(v96, 0);
            if ( v85 < 0 )
              goto LABEL_423;
            v104 = v254;
            if ( v254 )
            {
              if ( v210 && Src )
                ExFreePoolWithTag(Src, 0);
              Src = v104;
              v99 = v104;
              v219 = 1;
              if ( (v97 & 8) != 0 )
                v105 = 48;
              else
                v105 = 16;
              if ( (v97 & 0x1000) != 0 )
                v106 = 0x2000;
              else
                v106 = 0;
              v101 |= v105 | (2 * (v97 & 0x400)) | v106;
              v211[0] = v101;
            }
            v107 = a7;
            v228 = a7 & 8;
            if ( (a7 & 8) == 0 )
            {
              v108 = RtlFindAceByType((__int64)v99, 17, 0LL);
              if ( v108 )
                v109 = (char *)(v108 + 8);
              else
                v109 = v238;
              if ( v109 )
              {
                if ( !SubjectSecurityContext )
                {
                  v138 = (unsigned __int16 *)Src;
                  v85 = -1073741700;
                  goto LABEL_499;
                }
                v85 = RtlSidDominates((char *)Sid, v109, (bool *)&v208);
                if ( v85 < 0 )
                  goto LABEL_482;
                v107 = a7;
                if ( !v208 )
                  v216 = 1;
              }
              else
              {
                v107 = a7;
              }
            }
            v110 = (_DWORD)v225 != 0;
            v111 = v226;
            v112 = v107 & 1;
            v208 = (_DWORD)v225 != 0;
            v113 = *((_WORD *)v226 + 1);
            v114 = v113;
            if ( (v113 & 4) != 0 )
            {
              if ( v113 >= 0 )
              {
                v115 = (unsigned __int8 *)*((_QWORD *)v226 + 4);
              }
              else
              {
                v160 = *((unsigned int *)v226 + 4);
                if ( (_DWORD)v160 )
                  v115 = (unsigned __int8 *)v226 + v160;
                else
                  v115 = 0LL;
              }
            }
            else
            {
              v115 = 0LL;
            }
            if ( !v236 )
              goto LABEL_137;
            v168 = *(_WORD *)(v236 + 2);
            if ( (v168 & 4) == 0 )
              goto LABEL_137;
            if ( v168 >= 0 )
            {
              v116 = *(unsigned __int8 **)(v236 + 32);
              goto LABEL_138;
            }
            v169 = *(unsigned int *)(v236 + 16);
            if ( (_DWORD)v169 )
              v116 = (unsigned __int8 *)(v236 + v169);
            else
LABEL_137:
              v116 = 0LL;
LABEL_138:
            v117 = v114 & 0x140C;
            if ( v117 || v116 )
            {
              v145 = 200;
              v146 = 0;
              LODWORD(v225) = 200;
              while ( 1 )
              {
                v147 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v145, 0x63416553u);
                v207 = v147;
                if ( !v147 )
                {
                  v138 = (unsigned __int16 *)Src;
                  v85 = -1073741801;
                  v140 = 0LL;
                  goto LABEL_500;
                }
                v85 = RtlpInheritAcl2(
                        v116,
                        v115,
                        v117,
                        a6,
                        v112,
                        v110,
                        (__int64)v227,
                        (__int64)v229,
                        v231,
                        v239,
                        v230,
                        1,
                        v243,
                        a5,
                        (unsigned int *)&v225,
                        v147,
                        &v213,
                        v222);
                if ( v85 >= 0 )
                  break;
                ExFreePoolWithTag(v207, 0);
                v207 = 0LL;
                if ( v85 != -1073741789 )
                  goto LABEL_203;
                if ( (unsigned int)++v146 >= 2 )
                  goto LABEL_203;
                v145 = v225;
                v110 = v208;
              }
              if ( !(_DWORD)v225 )
              {
                ExFreePoolWithTag(v207, 0);
                v207 = 0LL;
              }
LABEL_203:
              if ( v85 >= 0 )
              {
                v121 = 1;
                v107 = a7;
                v204 = 1;
                v120 = v222[0] & 0x1408 | 4 | v211[0];
                v211[0] = v120;
                goto LABEL_148;
              }
              if ( v85 == -2147483637 )
              {
                v101 = v211[0];
                v111 = v226;
                v107 = a7;
                goto LABEL_141;
              }
              goto LABEL_423;
            }
            v207 = 0LL;
LABEL_141:
            v118 = *((_WORD *)v111 + 1);
            v119 = v101 | 0x400;
            if ( !v112 )
              v119 = v101;
            if ( (*((_WORD *)v111 + 1) & 0xC) != 0xC )
            {
              v120 = v119;
              v211[0] = v119;
              if ( !v246 )
              {
LABEL_147:
                v121 = 0;
LABEL_148:
                v122 = SubjectSecurityContext;
                if ( (v107 & 0x1000) == 0 && v215 && SubjectSecurityContext && v236 )
                {
                  GrantedAccess = 0;
                  AccessStatus = 0;
                  v85 = RtlpNewSecurityObject(
                          v236,
                          0,
                          (unsigned int)&SecurityDescriptor,
                          v243,
                          a5,
                          a6,
                          v107 | 1,
                          (__int64)SubjectSecurityContext,
                          (__int64)v230,
                          v253);
                  if ( v85 < 0 )
                    goto LABEL_482;
                  v155 = *((_WORD *)SecurityDescriptor + 1);
                  if ( (v155 & 4) != 0 )
                  {
                    if ( v155 >= 0 )
                    {
                      v157 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                    }
                    else
                    {
                      v156 = *((_DWORD *)SecurityDescriptor + 4);
                      if ( v156 )
                        v157 = (char *)SecurityDescriptor + v156;
                      else
                        v157 = 0LL;
                    }
                  }
                  else
                  {
                    v157 = 0LL;
                  }
                  v123 = AccessMode;
                  if ( RtlpOwnerAcesPresent(0x10u, (__int64)v157)
                    && !SeAccessCheck(
                          SecurityDescriptor,
                          v122,
                          0,
                          0x40000u,
                          0,
                          0LL,
                          v230,
                          AccessMode,
                          &GrantedAccess,
                          &AccessStatus) )
                  {
                    v85 = -1073741790;
                    goto LABEL_482;
                  }
                  LOBYTE(v107) = a7;
                }
                else
                {
                  v123 = AccessMode;
                }
                v124 = v207;
                if ( v112 && !v207 )
                {
                  v120 |= 0x1000u;
                  v211[0] = v120;
                }
                v125 = !v103 || (v103 & 0x1B0) != v103;
                if ( v123 == 1 )
                {
                  v126 = v228;
                  if ( (_BYTE)v212 && !v228 && v125 )
                  {
                    if ( !v122 )
                    {
                      v85 = -1073741700;
                      goto LABEL_482;
                    }
                    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    v200 = SePrivilegeCheck(&RequiredPrivileges, v122, 1);
                    SePrivilegedServiceAuditAlarm(0, (__int64 *)v122, (__int64)&RequiredPrivileges, v200);
                    if ( !v200 )
                    {
                      v85 = -1073741727;
                      goto LABEL_482;
                    }
                    v124 = v207;
                    LOBYTE(v107) = a7;
                  }
                  if ( v216 && !v126 )
                  {
                    if ( !v122 )
                    {
                      v85 = -1073741700;
                      goto LABEL_482;
                    }
                    RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v201 = SePrivilegeCheck(&RequiredPrivileges, v122, 1);
                    SePrivilegedServiceAuditAlarm(0, (__int64 *)v122, (__int64)&RequiredPrivileges, v201);
                    if ( !v201 )
                    {
                      v85 = -1073741727;
                      goto LABEL_482;
                    }
                    v124 = v207;
                    LOBYTE(v107) = a7;
                  }
                  if ( HIBYTE(v212) && (v107 & 0x10) == 0 && !SepValidOwnerSubjectContext(v122, v227, v206) )
                  {
                    v85 = -1073741734;
                    goto LABEL_482;
                  }
                  if ( v213 && v206 )
                  {
                    v85 = RtlpCreateServerAcl((__int64)v124, v217, (unsigned __int8 *)v231, (ACL **)&v247, &v218);
                    if ( v85 < 0 )
                      goto LABEL_482;
                    if ( v121 && v207 )
                      ExFreePoolWithTag(v207, 0);
                    v124 = (unsigned __int16 *)v247;
                    v207 = (unsigned __int16 *)v247;
                    v247 = 0LL;
                  }
                }
                v127 = 4 * *((unsigned __int8 *)v227 + 1) + 8;
                if ( v229 )
                  v128 = 4 * *((unsigned __int8 *)v229 + 1) + 8;
                else
                  v128 = 0;
                v129 = v120 & 0x10;
                if ( (v120 & 0x10) != 0 && Src )
                  v130 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                else
                  v130 = 0;
                v131 = v120 & 4;
                if ( v131 && v124 )
                  v132 = (v124[1] + 3) & 0xFFFFFFFC;
                else
                  v132 = 0;
                v133 = ExAllocatePoolWithTag(
                         PagedPool,
                         v128 + v132 + v130 + 4 * *((unsigned __int8 *)v227 + 1) + 28,
                         0x64536553u);
                *(_QWORD *)&v211[1] = v133;
                v134 = v133;
                if ( !v133 )
                {
                  v85 = -1073741670;
                  goto LABEL_482;
                }
                v135 = v211[0];
                v136 = (char *)(v133 + 5);
                *(_OWORD *)v133 = 0LL;
                v133[4] = 0;
                *((_WORD *)v133 + 1) |= v135;
                v137 = v129 == 0;
                *(_BYTE *)v133 = 1;
                v138 = (unsigned __int16 *)Src;
                if ( !v137 && Src )
                {
                  memmove(v136, Src, *((unsigned __int16 *)Src + 1));
                  if ( !v210 )
                    RtlpApplyAclToObject((__int64)v136, v230);
                  v134 = *(_DWORD **)&v211[1];
                  *(_DWORD *)(*(_QWORD *)&v211[1] + 12LL) = (_DWORD)v136 - v211[1];
                  v139 = v138[1];
                  if ( v130 > (unsigned int)v139 )
                  {
                    memset(&v136[v139], 0, v130 - (unsigned int)v139);
                    v134 = *(_DWORD **)&v211[1];
                  }
                  v136 += v130;
                }
                v137 = v131 == 0;
                v140 = v207;
                if ( !v137 )
                {
                  if ( v207 )
                  {
                    memmove(v136, v207, v207[1]);
                    v141 = v204;
                    if ( !v204 )
                      RtlpApplyAclToObject((__int64)v136, v230);
                    *(_DWORD *)(*(_QWORD *)&v211[1] + 16LL) = (_DWORD)v136 - v211[1];
                    v142 = v207[1];
                    if ( v132 > (unsigned int)v142 )
                      memset(&v136[v142], 0, v132 - (unsigned int)v142);
                    v136 += v132;
                    goto LABEL_183;
                  }
                  v134[4] = 0;
                }
                v141 = v204;
LABEL_183:
                memmove(v136, v227, v127);
                v12 = *(_QWORD *)&v211[1];
                *(_DWORD *)(*(_QWORD *)&v211[1] + 4LL) = (_DWORD)v136 - v211[1];
                v143 = &v136[v127];
                if ( v229 )
                {
                  memmove(v143, v229, v128);
                  *(_DWORD *)(v12 + 8) = (_DWORD)v143 - v12;
                }
                v85 = 0;
                goto LABEL_186;
              }
              v207 = v246;
LABEL_146:
              v120 |= 4u;
              v211[0] = v120;
              goto LABEL_147;
            }
            if ( (v118 & 4) != 0 )
            {
              if ( v118 >= 0 )
              {
                v185 = (unsigned __int16 *)*((_QWORD *)v111 + 4);
              }
              else
              {
                v184 = *((unsigned int *)v111 + 4);
                if ( !(_DWORD)v184 )
                {
                  v207 = 0LL;
                  goto LABEL_354;
                }
                v185 = (unsigned __int16 *)((char *)v111 + v184);
              }
              v207 = v185;
            }
            else
            {
              v207 = 0LL;
            }
LABEL_354:
            v213 = 1;
            v120 = v119 | v118 & 0x1000;
            goto LABEL_146;
          }
          v93 = 200;
          v94 = 0;
          LODWORD(v235) = 200;
          while ( 1 )
          {
            v95 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v93, 0x63416553u);
            v96 = (unsigned __int8 *)v95;
            if ( !v95 )
              break;
            v85 = RtlpInheritAcl2(
                    v92,
                    (unsigned __int8 *)v91,
                    v77,
                    a6,
                    1,
                    0,
                    (__int64)v227,
                    (__int64)v79,
                    v231,
                    v239,
                    v230,
                    3,
                    v243,
                    a5,
                    (unsigned int *)&v235,
                    v95,
                    (_BYTE *)v223 + 1,
                    v222);
            if ( v85 >= 0 )
            {
              if ( !(_DWORD)v235 )
              {
                ExFreePoolWithTag(v96, 0);
                v96 = 0LL;
              }
LABEL_110:
              if ( v85 == -2147483637 )
                goto LABEL_206;
              if ( v85 >= 0 )
              {
                v97 = v222[0];
                v98 = v245;
                goto LABEL_113;
              }
              goto LABEL_482;
            }
            ExFreePoolWithTag(v96, 0);
            v96 = 0LL;
            if ( v85 != -1073741789 )
              goto LABEL_110;
            if ( (unsigned int)++v94 >= 2 )
              goto LABEL_110;
            v93 = v235;
            v91 = v245;
          }
LABEL_496:
          v138 = (unsigned __int16 *)Src;
LABEL_498:
          v85 = -1073741801;
          goto LABEL_499;
        }
        v167 = *(unsigned int *)(v236 + 12);
        if ( (_DWORD)v167 )
        {
          v92 = (unsigned __int8 *)(v236 + v167);
          goto LABEL_104;
        }
      }
    }
    v92 = 0LL;
    goto LABEL_104;
  }
  memset(v263, 0, sizeof(v263));
  *(_QWORD *)v262 = 8388610LL;
  v85 = RtlAddMandatoryAce((__int64)v262, v90, v89, (__int64)v238, PreviouslyGrantedAccess, v87);
  if ( v85 >= 0 )
  {
    v91 = v262;
    goto LABEL_101;
  }
LABEL_482:
  v12 = *(_QWORD *)&v211[1];
  v140 = v207;
  v138 = (unsigned __int16 *)Src;
  v141 = v204;
LABEL_186:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v218 && v247 )
    ExFreePoolWithTag(v247, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (v219 || v210) && v138 )
    ExFreePoolWithTag(v138, 0);
  if ( v220 && *(_QWORD *)&v222[1] )
    ExFreePoolWithTag(*(PVOID *)&v222[1], 0);
  if ( v248 && v221 )
    ExFreePoolWithTag(v248, 0);
  if ( v141 )
  {
    if ( v140 )
      ExFreePoolWithTag(v140, 0);
  }
  *v256 = v12;
  return (unsigned int)v85;
}
