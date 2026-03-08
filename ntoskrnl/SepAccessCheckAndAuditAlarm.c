/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x1406973E0
 * Callers:
 *     NtAccessCheckAndAuditAlarm @ 0x140696B50 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x14077A590 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x1409CAF60 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x1409CB010 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140206B10 (SeTokenIsRestricted.c)
 *     SepConstrainByConstraintMask @ 0x1402077A4 (SepConstrainByConstraintMask.c)
 *     SepTokenIsOwner @ 0x1402077E0 (SepTokenIsOwner.c)
 *     SepFilterToDiscretionary @ 0x140207874 (SepFilterToDiscretionary.c)
 *     SepMandatoryToDiscretionary @ 0x140207890 (SepMandatoryToDiscretionary.c)
 *     SepFreeResourceInfo @ 0x1402078B8 (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     SepFilterCheck @ 0x140263850 (SepFilterCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x140263A50 (SepMandatoryIntegrityCheck.c)
 *     SepAccessCheck @ 0x140266980 (SepAccessCheck.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     RtlOwnerAcesPresent @ 0x1402CBBA0 (RtlOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x1402E40BC (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x1402EE66C (SeLogAccessFailure.c)
 *     SeIsPermissiveLearningModeEnabled @ 0x1402F4BA4 (SeIsPermissiveLearningModeEnabled.c)
 *     SepLpacCausedAccessFailure @ 0x1402F8D5C (SepLpacCausedAccessFailure.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SepLocateTokenTrustLevel @ 0x14030FE50 (SepLocateTokenTrustLevel.c)
 *     SeCaptureObjectTypeList @ 0x14033DA18 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x14033DC28 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14033DD14 (SePrivilegePolicyCheck.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiFreeNextAffinityWalker @ 0x1405B559C (MiFreeNextAffinityWalker.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405B5678 (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x1405B571C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x1405B57D4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1405B5948 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x1405B5A5C (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1405B5A90 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x1405B6A9C (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x1405B7498 (SepRmReferenceFindCap.c)
 *     SepProbeAndCaptureString_U @ 0x140698634 (SepProbeAndCaptureString_U.c)
 *     SeUnlockSubjectContext @ 0x140699470 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406994B0 (SeLockSubjectContext.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406995C8 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SeCheckAuditPrivilege @ 0x140699908 (SeCheckAuditPrivilege.c)
 *     SeCaptureSid @ 0x140710930 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140710A34 (SeReleaseSid.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x1407C8A50 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x1409CB8C4 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        void *a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        int a12,
        __int64 a13,
        volatile void *a14,
        volatile void *a15,
        _BYTE *a16,
        char a17)
{
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  char *v20; // r15
  unsigned __int8 PreviousMode; // si
  PACCESS_TOKEN ClientToken; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  unsigned int *v26; // rbx
  __int16 v27; // cx
  __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // rdx
  int v33; // r12d
  __int64 v34; // rcx
  unsigned int v35; // esi
  int v36; // eax
  unsigned int v37; // r12d
  char IsOwner; // al
  __int64 v39; // rdi
  __int64 v40; // r14
  unsigned int *v41; // rdx
  char *v42; // rax
  __int64 v43; // rdi
  int v44; // r8d
  char *v45; // r14
  char *v46; // r10
  char v47; // al
  int v48; // r15d
  char v49; // r9
  char v50; // r8
  int *v51; // rsi
  int v52; // edi
  char v53; // r12
  char v54; // di
  _DWORD *v55; // rcx
  _DWORD *v56; // rdx
  PVOID v57; // r14
  unsigned int v58; // ecx
  int v59; // edx
  char *v60; // r10
  char *v61; // r11
  char v62; // r14
  int *v63; // r9
  unsigned int *v64; // r8
  _DWORD *v65; // r8
  _DWORD *v66; // r9
  _DWORD *v67; // r10
  __int64 v68; // rdx
  char v69; // r12
  __int64 v70; // r9
  __int64 v71; // r8
  __int64 v72; // r9
  __int16 v74; // ax
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // eax
  unsigned int v78; // eax
  int v79; // ebx
  unsigned int v80; // eax
  unsigned int v81; // eax
  int v82; // edx
  unsigned __int8 v83; // al
  unsigned __int8 v84; // cl
  void *v85; // rcx
  int v86; // eax
  char *Pool2; // rax
  unsigned int v88; // edx
  unsigned int v89; // esi
  __int64 v90; // rcx
  __int16 v91; // dx
  __int64 v92; // rax
  char *v93; // rax
  unsigned __int8 *ScopedPolicySid; // rax
  int Cap; // eax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v96; // rdx
  char *v97; // rax
  unsigned int v98; // edx
  unsigned int v99; // esi
  __int64 v100; // rcx
  unsigned int *v101; // rax
  int *v102; // rax
  int *v103; // r11
  int *v104; // r10
  unsigned int v105; // eax
  int v106; // edx
  __int64 v107; // r13
  PVOID v108; // r8
  _QWORD *v109; // rax
  __int64 v110; // r10
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r9
  int v114; // eax
  int v115; // ebx
  _QWORD *v116; // rax
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r9
  unsigned int v121; // r14d
  unsigned int v122; // ebx
  PVOID v123; // rbx
  int v124; // edx
  unsigned int v125; // r8d
  unsigned int v126; // edx
  unsigned int v127; // r9d
  __int64 v128; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v130; // bl
  char v131; // di
  ULONGLONG TokenTrustLevel; // rax
  int PrimaryToken; // r10d
  __int16 v134; // ax
  __int64 v135; // rdx
  unsigned int v136; // ecx
  __int64 v137; // rcx
  unsigned int v138; // eax
  int v139; // r12d
  char v140; // di
  int v141; // r8d
  __int16 v142; // ax
  __int64 v143; // rdx
  unsigned int v144; // eax
  int v145; // r10d
  __int64 v146; // r8
  __int64 *v147; // r10
  __int64 v148; // rdx
  __int64 *v149; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int Object; // [rsp+20h] [rbp-2E8h]
  int HandleInformation; // [rsp+28h] [rbp-2E0h]
  char v153; // [rsp+30h] [rbp-2D8h]
  int v154; // [rsp+38h] [rbp-2D0h]
  unsigned int v155; // [rsp+40h] [rbp-2C8h]
  char v156; // [rsp+A0h] [rbp-268h]
  char v157; // [rsp+A1h] [rbp-267h]
  unsigned __int8 v158; // [rsp+A2h] [rbp-266h] BYREF
  char v159; // [rsp+A3h] [rbp-265h]
  unsigned __int8 v160; // [rsp+A4h] [rbp-264h] BYREF
  char v161; // [rsp+A5h] [rbp-263h]
  char v162; // [rsp+A6h] [rbp-262h]
  char v163; // [rsp+A7h] [rbp-261h]
  int v164; // [rsp+A8h] [rbp-260h]
  int v165; // [rsp+B0h] [rbp-258h]
  PVOID v166; // [rsp+B8h] [rbp-250h]
  char v167; // [rsp+C0h] [rbp-248h] BYREF
  char v168; // [rsp+C1h] [rbp-247h]
  int v169; // [rsp+C4h] [rbp-244h] BYREF
  char v170; // [rsp+C8h] [rbp-240h] BYREF
  char v171; // [rsp+C9h] [rbp-23Fh] BYREF
  _BYTE v172[6]; // [rsp+CAh] [rbp-23Eh] BYREF
  PVOID v173; // [rsp+D0h] [rbp-238h]
  PVOID v174; // [rsp+D8h] [rbp-230h] BYREF
  _WORD v175[2]; // [rsp+E0h] [rbp-228h] BYREF
  unsigned int v176; // [rsp+E4h] [rbp-224h] BYREF
  unsigned int v177; // [rsp+E8h] [rbp-220h] BYREF
  char v178; // [rsp+EDh] [rbp-21Bh]
  char v179; // [rsp+EEh] [rbp-21Ah]
  char v180; // [rsp+EFh] [rbp-219h]
  char v181; // [rsp+F1h] [rbp-217h]
  char v182; // [rsp+F4h] [rbp-214h]
  char v183; // [rsp+F5h] [rbp-213h]
  unsigned __int8 v184; // [rsp+F6h] [rbp-212h] BYREF
  unsigned __int8 v185; // [rsp+F7h] [rbp-211h] BYREF
  int v186; // [rsp+F8h] [rbp-210h]
  char *v187; // [rsp+100h] [rbp-208h]
  int v188; // [rsp+108h] [rbp-200h]
  int v189; // [rsp+10Ch] [rbp-1FCh]
  int v190; // [rsp+110h] [rbp-1F8h]
  unsigned int v191; // [rsp+114h] [rbp-1F4h]
  int v192; // [rsp+118h] [rbp-1F0h]
  int v193; // [rsp+11Ch] [rbp-1ECh] BYREF
  unsigned int v194; // [rsp+120h] [rbp-1E8h]
  __int64 v195; // [rsp+128h] [rbp-1E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+130h] [rbp-1D8h] BYREF
  int *v197; // [rsp+150h] [rbp-1B8h]
  PVOID v198; // [rsp+158h] [rbp-1B0h] BYREF
  PVOID v199; // [rsp+160h] [rbp-1A8h] BYREF
  int v200; // [rsp+168h] [rbp-1A0h] BYREF
  unsigned int v201; // [rsp+16Ch] [rbp-19Ch]
  char *v202; // [rsp+170h] [rbp-198h]
  volatile void *v203; // [rsp+178h] [rbp-190h]
  __int64 v204; // [rsp+180h] [rbp-188h] BYREF
  volatile void *Address; // [rsp+188h] [rbp-180h]
  PVOID v206; // [rsp+190h] [rbp-178h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v207; // [rsp+198h] [rbp-170h] BYREF
  int v208; // [rsp+1A0h] [rbp-168h]
  PVOID P; // [rsp+1A8h] [rbp-160h] BYREF
  PVOID v210; // [rsp+1B0h] [rbp-158h] BYREF
  PACCESS_TOKEN v211; // [rsp+1B8h] [rbp-150h]
  int v212[2]; // [rsp+1C0h] [rbp-148h] BYREF
  _BYTE *v213; // [rsp+1C8h] [rbp-140h]
  int v214; // [rsp+1D0h] [rbp-138h] BYREF
  __int64 v215; // [rsp+1D8h] [rbp-130h] BYREF
  PVOID v216; // [rsp+1E0h] [rbp-128h]
  PVOID v217; // [rsp+1E8h] [rbp-120h] BYREF
  void *Src; // [rsp+1F0h] [rbp-118h]
  int v219; // [rsp+1F8h] [rbp-110h] BYREF
  __int64 v220; // [rsp+200h] [rbp-108h]
  __int64 v221; // [rsp+208h] [rbp-100h]
  PVOID v222; // [rsp+220h] [rbp-E8h] BYREF
  void *v223; // [rsp+228h] [rbp-E0h]
  void *v224; // [rsp+230h] [rbp-D8h]
  __int128 v225; // [rsp+238h] [rbp-D0h] BYREF
  void **v226; // [rsp+248h] [rbp-C0h]
  __int64 v227; // [rsp+250h] [rbp-B8h]
  __int64 v228; // [rsp+258h] [rbp-B0h]
  unsigned __int64 v229; // [rsp+260h] [rbp-A8h]
  _OWORD SecurityDescriptor[2]; // [rsp+268h] [rbp-A0h] BYREF
  __int64 v231; // [rsp+288h] [rbp-80h]
  __int128 v232; // [rsp+290h] [rbp-78h] BYREF
  __int64 v233; // [rsp+2A0h] [rbp-68h]
  int v234; // [rsp+2A8h] [rbp-60h]
  __int128 v235; // [rsp+2B0h] [rbp-58h] BYREF

  v220 = a4;
  v224 = a1;
  v211 = a1;
  v215 = a2;
  v226 = a3;
  v227 = a4;
  v221 = a5;
  v228 = a6;
  Src = a7;
  v229 = a11;
  v165 = a12;
  v201 = a12;
  v18 = a13;
  v203 = a14;
  v19 = (unsigned __int64)a15;
  Address = a15;
  v213 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v164 = 0;
  v177 = 0;
  v20 = 0LL;
  v166 = 0LL;
  v168 = 0;
  v169 = -1073741823;
  v219 = 0;
  v173 = 0LL;
  v214 = 0;
  v197 = 0LL;
  v189 = 0;
  v186 = 0;
  v180 = 0;
  P = 0LL;
  v198 = 0LL;
  v210 = 0LL;
  v174 = 0LL;
  v204 = 0LL;
  v195 = 0LL;
  v176 = 0;
  v235 = 0LL;
  v206 = 0LL;
  v158 = 0;
  v160 = 0;
  v172[0] = 0;
  v167 = 0;
  v181 = 0;
  v163 = 0;
  v161 = 0;
  v184 = 1;
  v185 = 0;
  v216 = 0LL;
  v223 = 0LL;
  v178 = 0;
  v225 = 0LL;
  v212[1] = 0;
  v202 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v231 = 0LL;
  v207 = 0LL;
  v157 = 0;
  v162 = 0;
  v159 = 0;
  v179 = 0;
  v175[0] = 999;
  v232 = 0LL;
  v233 = 0LL;
  v234 = 0;
  v188 = 0;
  v182 = 0;
  v190 = 0;
  v199 = 0LL;
  v193 = 0;
  LODWORD(v187) = 0;
  v183 = 0;
  v170 = 0;
  v171 = 0;
  v217 = 0LL;
  v200 = -1;
  v212[0] = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v156 = PreviousMode;
  v172[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v25 = -1073741811;
      goto LABEL_375;
    }
    v208 = 7;
  }
  else
  {
    v208 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v25 = -1073741732;
    v20 = 0LL;
LABEL_375:
    v69 = 0;
    v57 = 0LL;
    goto LABEL_376;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v25 = -1073741659;
    v20 = 0LL;
    goto LABEL_375;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !v165 || (unsigned int)v165 > 0x1000 )
    {
      v25 = -1073741811;
      v164 = -1073741811;
      goto LABEL_19;
    }
    ProbeForWrite(Address, 4LL * (unsigned int)v165, 4u);
    ProbeForWrite(v203, 4LL * (unsigned int)v165, 4u);
  }
  else
  {
    v23 = v19;
    if ( v19 >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v24 = (__int64)v203;
    if ( (unsigned __int64)v203 >= 0x7FFFFFFF0000LL )
      v24 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v24 = *(_DWORD *)v24;
  }
  if ( (v18 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v235 = *(_OWORD *)v18;
  ClientToken = SubjectContext.ClientToken;
  v25 = v164;
LABEL_19:
  if ( v25 < 0 )
    goto LABEL_186;
  if ( !a3 )
  {
LABEL_21:
    if ( !ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    v211 = ClientToken;
    if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, PreviousMode) )
    {
LABEL_24:
      if ( (a8 & 0xF0000000) != 0 )
      {
        v25 = -1073741594;
        v20 = (char *)v166;
        v69 = (char)v166;
        v57 = v166;
        goto LABEL_376;
      }
      v25 = SeCaptureSecurityDescriptor(a6, PreviousMode, 1, 0, (__int64)&v174);
      v164 = v25;
      if ( v25 < 0 )
      {
        v26 = 0LL;
        goto LABEL_189;
      }
      v26 = (unsigned int *)v174;
      if ( v174 )
      {
        v27 = *((_WORD *)v174 + 1);
        if ( v27 >= 0 )
        {
          v29 = (char *)*((_QWORD *)v174 + 1);
        }
        else
        {
          v28 = *((unsigned int *)v174 + 1);
          if ( !(_DWORD)v28 )
            goto LABEL_191;
          v29 = (char *)v174 + v28;
        }
        if ( v29 )
        {
          if ( v27 >= 0 )
          {
            v31 = (char *)*((_QWORD *)v174 + 2);
          }
          else
          {
            v30 = *((unsigned int *)v174 + 2);
            if ( !(_DWORD)v30 )
              goto LABEL_191;
            v31 = (char *)v174 + v30;
          }
          if ( v31 )
          {
            v32 = (__int64)v213;
            if ( (unsigned __int64)v213 >= 0x7FFFFFFF0000LL )
              v32 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v32 = *(_BYTE *)v32;
            v25 = SepProbeAndCaptureString_U(v224, &P);
            v164 = v25;
            if ( v25 >= 0 )
            {
              v25 = SepProbeAndCaptureString_U(v220, &v198);
              v164 = v25;
              if ( v25 >= 0 )
              {
                v25 = SepProbeAndCaptureString_U(v221, &v210);
                v164 = v25;
              }
            }
            LOBYTE(v33) = v188;
            if ( v25 >= 0 )
            {
              if ( Src )
              {
                v25 = SeCaptureSid(Src, Object, 1, (__int64)&v204);
                if ( v25 < 0 )
                {
                  v204 = 0LL;
                  v20 = (char *)v166;
                  v69 = (char)v166;
                  v57 = v166;
                  goto LABEL_376;
                }
              }
              v25 = SeCaptureObjectTypeList(v229, v165, PreviousMode, &v195);
              if ( v25 >= 0 )
              {
                v26 = (unsigned int *)v174;
                v25 = SepTrustLevelCheck(v34, (__int64)v174, &SubjectContext, 0LL, 0LL, 1, &v200);
                if ( v25 < 0 )
                {
LABEL_190:
                  v20 = (char *)v166;
                  v69 = (char)v166;
                  v57 = v166;
                  goto LABEL_118;
                }
                v35 = a8;
                v25 = SepFilterToDiscretionary(&v200, a8);
                v164 = v25;
                if ( v25 < 0 )
                {
                  v170 = 1;
LABEL_48:
                  if ( v25 < 0 )
                    goto LABEL_54;
                  v25 = SepMandatoryIntegrityCheck(&v235, (__int64)v26, 0, (__int64)ClientToken, 1, (__int64)&v225);
                  if ( v25 >= 0 )
                  {
                    v36 = SepMandatoryToDiscretionary(&v225, v35);
                    v25 = v36;
                    v164 = v36;
                    if ( (v36 < 0 || (v35 & 0x2000000) != 0) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
                    {
                      v33 = (unsigned __int8)v33;
                      if ( HIDWORD(v225) <= 0x2000 )
                        v33 = 1;
                      v188 = v33;
                    }
                    if ( v36 >= 0 || (_BYTE)v33 )
                    {
                      v25 = SePrivilegePolicyCheck(&a8, &v176, (__int64 *)&SubjectContext, 0LL, (__int64)&v206, v156);
                      v164 = v25;
                      v35 = a8;
                      if ( !a8 )
                      {
                        v86 = (unsigned __int8)v187;
                        v37 = v176;
                        if ( v176 )
                          v86 = 1;
                        LODWORD(v187) = v86;
LABEL_55:
                        SeLockSubjectContext(&SubjectContext);
                        if ( v25 < 0 && !(_BYTE)v188 )
                        {
                          v160 = 1;
                          v169 = v25;
                          if ( !a17 )
                          {
                            v166 = &v177;
                            v45 = (char *)&v169;
                            goto LABEL_72;
                          }
                          Pool2 = (char *)ExAllocatePool2(256LL, 8LL * (unsigned int)v165, 1632068947LL);
                          v166 = Pool2;
                          if ( !Pool2 )
                          {
                            SeUnlockSubjectContext(&SubjectContext);
                            v25 = -1073741670;
LABEL_210:
                            PreviousMode = v156;
                            v20 = (char *)v166;
                            v69 = v157;
                            v57 = v173;
                            goto LABEL_118;
                          }
                          v168 = 1;
                          v45 = &Pool2[4 * v165];
                          v88 = 0;
                          v89 = v165;
                          while ( v88 < v89 )
                          {
                            v90 = 4LL * v88;
                            *(_DWORD *)&Pool2[v90] = v177;
                            *(_DWORD *)&v45[v90] = v169;
                            ++v88;
                          }
                          goto LABEL_214;
                        }
                        IsOwner = SepTokenIsOwner((__int64)ClientToken, (__int64)v26);
                        v159 = IsOwner;
                        v26 = (unsigned int *)v174;
                        if ( !SepRmEnforceCap )
                          goto LABEL_57;
                        v91 = *((_WORD *)v174 + 1);
                        if ( (v91 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
                          goto LABEL_57;
                        if ( v91 >= 0 )
                        {
                          v93 = (char *)*((_QWORD *)v174 + 3);
                        }
                        else
                        {
                          v92 = *((unsigned int *)v174 + 3);
                          if ( !(_DWORD)v92 )
                          {
                            v202 = 0LL;
LABEL_221:
                            IsOwner = v159;
LABEL_57:
                            v25 = v164;
                            goto LABEL_58;
                          }
                          v93 = (char *)v174 + v92;
                        }
                        v202 = v93;
                        if ( v93 )
                        {
                          ScopedPolicySid = SepGetScopedPolicySid((__int64)v93);
                          if ( ScopedPolicySid )
                          {
                            Cap = SepRmReferenceFindCap(ScopedPolicySid, &v207);
                            v96 = v207;
                            if ( Cap < 0 )
                              v96 = (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
                            v207 = v96;
                            v25 = 0;
                            v164 = 0;
                            v157 = 1;
                            IsOwner = v159;
LABEL_58:
                            v35 = a8;
                            if ( (a8 & 0x2060000) != 0
                              && IsOwner
                              && ((v74 = *((_WORD *)v26 + 1), (v74 & 4) == 0)
                                ? (v76 = 0LL)
                                : v74 >= 0
                                ? (v76 = *((_QWORD *)v26 + 4))
                                : (v75 = v26[4], !(_DWORD)v75)
                                ? (v76 = 0LL)
                                : (v76 = (__int64)v26 + v75),
                                  !(unsigned __int8)RtlOwnerAcesPresent(v76)) )
                            {
                              if ( (v35 & 0x2000000) != 0 )
                              {
                                v77 = 393216;
                                v37 = v176 | 0x60000;
                              }
                              else
                              {
                                v77 = v35 & 0x60000;
                                v37 = v176 | v35 & 0x60000;
                              }
                              v190 = v77;
                              v176 = v37;
                              v35 &= 0xFFF9FFFF;
                              a8 = v35;
                            }
                            else
                            {
                              v37 = v176;
                            }
                            if ( !v35
                              && (!v157 || (_BYTE)v187)
                              && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v190) )
                            {
                              v177 = v37;
                              if ( v37 )
                              {
                                v82 = 0;
                                v83 = 0;
                                v84 = 1;
                              }
                              else
                              {
                                v82 = -1073741790;
                                v83 = 1;
                                v84 = 0;
                              }
                              v158 = v84;
                              v160 = v83;
                              v169 = v82;
                              if ( !a17 )
                              {
                                v166 = &v177;
                                v45 = (char *)&v169;
LABEL_72:
                                if ( !ClientToken )
                                  goto LABEL_79;
                                if ( v170 || v171 )
                                  goto LABEL_324;
                                if ( !HIDWORD(v232) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
                                {
                                  if ( v25 < 0 )
                                    goto LABEL_79;
                                  if ( v169 < 0 || HIBYTE(v233) )
                                  {
LABEL_324:
                                    CurrentThread = KeGetCurrentThread();
                                    --CurrentThread->KernelApcDisable;
                                    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
                                    v130 = v169 >= 0;
                                    v131 = a8 | v176;
                                    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
                                    LOBYTE(v154) = 0;
                                    SeLogAccessFailure(
                                      (char *)ClientToken,
                                      0LL,
                                      0LL,
                                      TokenTrustLevel,
                                      (__int64)v174,
                                      v131,
                                      v130);
                                    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
                                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                                    v35 = a8;
                                    v25 = v164;
                                    v26 = (unsigned int *)v174;
                                    v37 = v176;
                                  }
                                }
                                if ( v25 >= 0
                                  && v169 < 0
                                  && !HIDWORD(v232)
                                  && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
                                  && SepLpacCausedAccessFailure((__int64)&v232, v35) )
                                {
                                  SepLogLpacAccessFailure();
                                }
LABEL_79:
                                if ( v181 )
                                  goto LABEL_91;
                                v48 = v208;
                                if ( v208 == 2 )
                                {
                                  if ( v158 )
                                  {
                                    LOBYTE(HandleInformation) = 0;
                                    v163 = SepAdtAuditObjectAccessWithContext(
                                             0LL,
                                             v198,
                                             v158,
                                             0LL,
                                             &SubjectContext,
                                             HandleInformation,
                                             v175,
                                             v154);
                                  }
                                  if ( !v160 )
                                  {
LABEL_84:
                                    v49 = v161;
                                    goto LABEL_85;
                                  }
                                  LOBYTE(HandleInformation) = 0;
                                  v49 = SepAdtAuditObjectAccessWithContext(
                                          0LL,
                                          v198,
                                          0LL,
                                          v160,
                                          &SubjectContext,
                                          HandleInformation,
                                          v175,
                                          v154);
                                  v161 = v49;
                                }
                                else
                                {
                                  if ( v158 )
                                  {
                                    v175[0] = 151;
                                    v163 = SepAdtAuditThisEventWithContext(151LL, v158, 0LL, &SubjectContext);
                                  }
                                  if ( !v160 )
                                    goto LABEL_84;
                                  v175[0] = 151;
                                  v49 = SepAdtAuditThisEventWithContext(151LL, 0LL, v160, &SubjectContext);
                                  v161 = v49;
                                }
LABEL_85:
                                v50 = v163;
                                if ( v163 || v49 )
                                {
                                  PrimaryToken = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    PrimaryToken = (int)SubjectContext.ClientToken;
                                  v134 = *((_WORD *)v26 + 1);
                                  if ( (v134 & 0x10) != 0 )
                                  {
                                    if ( v134 >= 0 )
                                    {
                                      v135 = *((_QWORD *)v26 + 3);
                                    }
                                    else
                                    {
                                      v136 = v26[3];
                                      if ( v136 )
                                        LODWORD(v135) = (_DWORD)v26 + v136;
                                      else
                                        LODWORD(v135) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v135) = 0;
                                  }
                                  if ( (v134 & 0x10) != 0 )
                                  {
                                    if ( v134 >= 0 )
                                    {
                                      v137 = *((_QWORD *)v26 + 3);
                                    }
                                    else
                                    {
                                      v138 = v26[3];
                                      if ( v138 )
                                        LODWORD(v137) = (_DWORD)v26 + v138;
                                      else
                                        LODWORD(v137) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v137) = 0;
                                  }
                                  v139 = v35 | v37;
                                  v51 = (int *)v166;
                                  v140 = a17;
                                  SepExamineSaclEx(
                                    v137,
                                    v135,
                                    PrimaryToken,
                                    v139,
                                    v195,
                                    v165,
                                    a17,
                                    (__int64)v45,
                                    (__int64)v166,
                                    v204,
                                    v159,
                                    (__int64)v172,
                                    (__int64)&v167);
                                  v141 = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    v141 = (int)SubjectContext.ClientToken;
                                  v142 = *((_WORD *)v26 + 1);
                                  if ( (v142 & 0x10) != 0 )
                                  {
                                    if ( v142 >= 0 )
                                    {
                                      v143 = *((_QWORD *)v26 + 3);
                                    }
                                    else
                                    {
                                      v144 = v26[3];
                                      if ( v144 )
                                        LODWORD(v143) = (_DWORD)v26 + v144;
                                      else
                                        LODWORD(v143) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v143) = 0;
                                  }
                                  v153 = v140;
                                  v52 = v165;
                                  SepExamineGlobalSaclEx(
                                    (__int64)v198,
                                    v143,
                                    v141,
                                    v139,
                                    v195,
                                    v165,
                                    v153,
                                    (__int64)v45,
                                    (__int64)v51,
                                    v204,
                                    v159,
                                    (__int64)v172,
                                    &v167);
                                  v50 = v163;
                                  v49 = v161;
                                }
                                else
                                {
                                  v51 = (int *)v166;
                                  v52 = v165;
                                }
                                if ( v172[0] || v167 )
                                {
                                  v145 = (unsigned __int8)v186;
                                  if ( v158 )
                                    v145 = 1;
                                  v186 = v145;
                                  v53 = a17;
                                  if ( v172[0] && v50 )
                                  {
                                    v146 = 0LL;
                                    if ( a17 )
                                      v146 = (__int64)v51;
                                    v147 = &v215;
                                    if ( !v158 )
                                      LODWORD(v147) = 0;
                                    v26 = (unsigned int *)v174;
                                    SepAdtOpenObjectAuditAlarm(
                                      v175[0],
                                      (int)P,
                                      (int)v147,
                                      (int)v198,
                                      (__int64)v210,
                                      v174,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      *v51,
                                      *v51,
                                      (__int64)v206,
                                      1,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v48,
                                      v195,
                                      v52,
                                      v146,
                                      0LL,
                                      0LL);
                                    v49 = v161;
                                  }
                                  if ( v167 && v49 )
                                  {
                                    v148 = 0LL;
                                    if ( v53 )
                                      v148 = (__int64)v51;
                                    v149 = &v215;
                                    if ( !v158 )
                                      LODWORD(v149) = 0;
                                    v26 = (unsigned int *)v174;
                                    SepAdtOpenObjectAuditAlarm(
                                      v175[0],
                                      (int)P,
                                      (int)v149,
                                      (int)v198,
                                      (__int64)v210,
                                      v174,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      a8,
                                      a8,
                                      (__int64)v206,
                                      0,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v48,
                                      v195,
                                      v52,
                                      v148,
                                      0LL,
                                      0LL);
                                  }
                                  goto LABEL_92;
                                }
                                if ( v206 && v158 )
                                {
                                  SepAdtPrivilegeObjectAuditAlarm(
                                    (_DWORD)P,
                                    (_DWORD)v198,
                                    (_DWORD)v210,
                                    (unsigned int)&v215,
                                    (__int64)SubjectContext.ClientToken,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                    a8,
                                    (__int64)v206,
                                    v158);
                                  v54 = 0;
                                  v26 = (unsigned int *)v174;
                                  v53 = a17;
LABEL_93:
                                  SeUnlockSubjectContext(&SubjectContext);
                                  if ( v53 )
                                  {
                                    v58 = 0;
                                    v194 = 0;
                                    if ( v45 )
                                    {
                                      v20 = (char *)v166;
                                      v65 = Address;
                                      v66 = v203;
                                      v67 = v173;
                                      while ( v58 < v165 )
                                      {
                                        v68 = 4LL * v58;
                                        v65[(unsigned __int64)v68 / 4] = *(_DWORD *)&v45[v68];
                                        v66[(unsigned __int64)v68 / 4] = *(_DWORD *)&v20[v68];
                                        if ( SepRmEnforceCap && v162 && *(int *)&v45[v68] >= 0 )
                                        {
                                          v65[v58] = v197[v58];
                                          v66[v58] &= v67[v58];
                                        }
                                        v194 = ++v58;
                                        v26 = (unsigned int *)v174;
                                      }
                                      v57 = v67;
                                      goto LABEL_117;
                                    }
                                    v59 = v169;
                                    v60 = (char *)Address;
                                    v61 = (char *)v203;
                                    v62 = v162;
                                    while ( v58 < v165 )
                                    {
                                      v63 = (int *)&v60[4 * v58];
                                      *v63 = v59;
                                      v64 = (unsigned int *)&v61[4 * v58];
                                      *v64 = v177;
                                      if ( SepRmEnforceCap && v62 )
                                      {
                                        v59 = v169;
                                        if ( v169 >= 0 )
                                        {
                                          *v63 = v169;
                                          *v64 &= v177;
                                        }
                                      }
                                      else
                                      {
                                        v59 = v169;
                                      }
                                      v194 = ++v58;
                                      v26 = (unsigned int *)v174;
                                    }
                                  }
                                  else
                                  {
                                    v55 = Address;
                                    *(_DWORD *)Address = v169;
                                    v56 = v203;
                                    *(_DWORD *)v203 = v177;
                                    if ( SepRmEnforceCap && v162 && v169 >= 0 )
                                    {
                                      *v55 = *v197;
                                      v57 = v173;
                                      *v56 &= *(_DWORD *)v173;
                                      v26 = (unsigned int *)v174;
                                      v20 = (char *)v166;
                                      goto LABEL_117;
                                    }
                                    v26 = (unsigned int *)v174;
                                  }
                                  v20 = (char *)v166;
                                  v57 = v173;
LABEL_117:
                                  *v213 = v54;
                                  v25 = 0;
                                  v164 = 0;
                                  PreviousMode = v156;
                                  v69 = v157;
                                  goto LABEL_118;
                                }
LABEL_91:
                                v53 = a17;
LABEL_92:
                                v54 = v186;
                                goto LABEL_93;
                              }
                              v97 = (char *)ExAllocatePool2(256LL, 8LL * (unsigned int)v165, 1632068947LL);
                              v166 = v97;
                              if ( v97 )
                              {
                                v168 = 1;
                                v45 = &v97[4 * v165];
                                v98 = 0;
                                v99 = v165;
                                while ( v98 < v99 )
                                {
                                  v100 = 4LL * v98;
                                  *(_DWORD *)&v97[v100] = v177;
                                  *(_DWORD *)&v45[v100] = v169;
                                  ++v98;
                                }
LABEL_214:
                                v35 = a8;
                                goto LABEL_72;
                              }
LABEL_209:
                              v25 = -1073741670;
                              SeUnlockSubjectContext(&SubjectContext);
                              goto LABEL_210;
                            }
                            v39 = v201;
                            v40 = 8LL * v201;
                            if ( a17 )
                            {
                              v101 = (unsigned int *)ExAllocatePool2(256LL, 8LL * v201, 1632068947LL);
                              v41 = v101;
                              v166 = v101;
                              if ( !v101 )
                                goto LABEL_209;
                              v168 = 1;
                              v43 = v39;
                              v42 = (char *)&v101[v43];
                            }
                            else
                            {
                              v41 = &v177;
                              v166 = &v177;
                              v42 = (char *)&v169;
                              v43 = v201;
                            }
                            v187 = v42;
                            LODWORD(v232) = v190;
                            SepAccessCheck(
                              (__int64)v26,
                              v204,
                              (__int64)SubjectContext.PrimaryToken,
                              (__int64)ClientToken,
                              v35,
                              (__int128 *)v195,
                              v165,
                              &v235,
                              v37,
                              v156,
                              v41,
                              0LL,
                              (int *)v42,
                              a17,
                              v159,
                              (int *)&v232,
                              &v199,
                              (char *)&v158,
                              (char *)&v160);
                            if ( SepRmEnforceCap && *(int *)v187 >= 0 && (v69 = v157) != 0 )
                            {
                              if ( a17 )
                              {
                                v102 = (int *)ExAllocatePool2(256LL, v40, 1632068947LL);
                                v103 = v102;
                                v173 = v102;
                                if ( !v102 )
                                {
                                  SeUnlockSubjectContext(&SubjectContext);
                                  SeReleaseSubjectContext(&SubjectContext);
                                  v25 = -1073741670;
                                  PreviousMode = v156;
                                  v20 = (char *)v166;
                                  v57 = v173;
                                  goto LABEL_376;
                                }
                                v104 = &v102[v43];
                              }
                              else
                              {
                                v103 = &v219;
                                v173 = &v219;
                                v104 = &v214;
                              }
                              v197 = v104;
                              if ( v165 )
                              {
                                v25 = SepCopyObjectTypeList(v195, v165, (__int64 *)&v217);
                                v164 = v25;
                                if ( v25 < 0 )
                                {
                                  PreviousMode = v156;
                                  v20 = (char *)v166;
                                  v57 = v173;
                                  goto LABEL_376;
                                }
                                v103 = (int *)v173;
                              }
                              else
                              {
                                v25 = v164;
                              }
                              LOBYTE(v40) = 0;
                              v192 = v40;
                              v105 = 0;
                              v35 = a8;
                              v37 = v176;
                              v106 = v189;
                              v44 = v165;
                              while ( 1 )
                              {
                                v191 = v105;
                                v201 = v106;
                                if ( v105 >= HIDWORD(v207[2].Linkage.Blink) )
                                  break;
                                v107 = *(&v207[2].Signature + v105);
                                if ( !*(_QWORD *)(v107 + 24) )
                                  goto LABEL_294;
                                v108 = v199;
                                if ( !v199 )
                                {
                                  LODWORD(v40) = (unsigned __int8)v40;
                                  if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v202, (__int64 *)&v199) < 0 )
                                    LODWORD(v40) = 1;
                                  v192 = v40;
                                  v108 = v199;
                                }
                                v109 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                v110 = v109 ? v109[75] : 0LL;
                                v111 = v109 ? v109[73] : 0LL;
                                v112 = v109 ? v109[74] : 0LL;
                                v113 = v109 ? v109[72] : 0LL;
                                v114 = AuthzBasepEvaluateAceCondition(
                                         (__int64)ClientToken,
                                         *((void **)ClientToken + 97),
                                         (__int64)v108,
                                         v113,
                                         v112,
                                         v111,
                                         v110,
                                         *(_DWORD **)(v107 + 24),
                                         *(_DWORD *)(v107 + 16),
                                         1,
                                         0,
                                         &v193);
                                v25 = v114;
                                v164 = v114;
                                v115 = v193;
                                if ( v193 == 1 )
                                  goto LABEL_294;
                                if ( v114 < 0 )
                                  goto LABEL_307;
                                if ( SeTokenIsRestricted(ClientToken) )
                                {
                                  v116 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                  if ( v116 )
                                    v117 = v116[75];
                                  else
                                    v117 = 0LL;
                                  if ( v116 )
                                    v118 = v116[73];
                                  else
                                    v118 = 0LL;
                                  if ( v116 )
                                    v119 = v116[74];
                                  else
                                    v119 = 0LL;
                                  if ( v116 )
                                    v120 = v116[72];
                                  else
                                    v120 = 0LL;
                                  v25 = AuthzBasepEvaluateAceCondition(
                                          (__int64)ClientToken,
                                          *((void **)ClientToken + 97),
                                          (__int64)v199,
                                          v120,
                                          v119,
                                          v118,
                                          v117,
                                          *(_DWORD **)(v107 + 24),
                                          *(_DWORD *)(v107 + 16),
                                          1,
                                          1,
                                          &v193);
                                  v164 = v25;
                                  if ( v25 < 0 )
                                    goto LABEL_307;
                                  v115 = v193;
                                }
                                if ( (_BYTE)v40 || v115 == 1 )
                                {
LABEL_294:
                                  if ( (*(_DWORD *)(v107 + 48) & 1) != 0 )
                                  {
                                    if ( (v35 & 0x2000000) != 0 )
                                      v121 = v35;
                                    else
                                      v121 = v35 | v37;
                                    v122 = 0;
                                  }
                                  else
                                  {
                                    v121 = v35;
                                    v122 = v37;
                                  }
                                  v25 = SepBuildCapeSecurityDescriptor(
                                          SecurityDescriptor,
                                          *(unsigned __int8 **)(v107 + 32),
                                          (__int64)v202);
                                  v164 = v25;
                                  if ( v25 < 0 )
                                  {
LABEL_307:
                                    PreviousMode = v156;
                                    v20 = (char *)v166;
                                    v69 = v157;
                                    v57 = v173;
                                    goto LABEL_376;
                                  }
                                  v155 = v122;
                                  v123 = v217;
                                  SepAccessCheck(
                                    (__int64)SecurityDescriptor,
                                    v204,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)SubjectContext.ClientToken,
                                    v121,
                                    (__int128 *)v217,
                                    v165,
                                    &v235,
                                    v155,
                                    v156,
                                    (unsigned int *)v173,
                                    0LL,
                                    v197,
                                    a17,
                                    v159,
                                    (int *)&v232,
                                    &v199,
                                    (char *)&v184,
                                    (char *)&v185);
                                  v103 = (int *)v173;
                                  v106 = *(_DWORD *)v173;
                                  if ( v162 )
                                    v106 = v201 & *(_DWORD *)v173;
                                  v189 = v106;
                                  v44 = v165;
                                  if ( v123 )
                                  {
                                    SepMergeObjectTypeListAccesses(v195, (__int64)v123, v165);
                                    v106 = v189;
                                  }
                                  v162 = 1;
                                  LOBYTE(v40) = v192;
                                }
                                else
                                {
                                  v106 = v189;
                                  v44 = v165;
                                  v103 = (int *)v173;
                                }
                                v105 = v191 + 1;
                              }
                              v158 = v184;
                              v160 = v185;
                              *v103 &= v106;
                              if ( !v106 )
                              {
                                *v197 = -1073741790;
                                v158 = 0;
                                v160 = 1;
                              }
                            }
                            else
                            {
                              v35 = a8;
                              v25 = v164;
                              v37 = v176;
                              v44 = v165;
                            }
                            if ( (v35 & 0x2000000) != 0 )
                            {
                              if ( !(_BYTE)v188
                                || !*(_WORD *)((char *)&v233 + 5)
                                && !SeIsPermissiveLearningModeEnabled((__int64)ClientToken) )
                              {
                                if ( a17 )
                                  v78 = v44;
                                else
                                  v78 = 0;
                                v45 = v187;
                                SepConstrainByMandatory((__int64)&v225, v35, (char *)v166, v187, 0LL, v78);
                                goto LABEL_68;
                              }
                            }
                            else if ( (_BYTE)v188 && !*(_WORD *)((char *)&v233 + 5) )
                            {
                              if ( !SeIsPermissiveLearningModeEnabled((__int64)ClientToken) || HIDWORD(v232) )
                              {
                                v158 = 0;
                                v160 = 1;
                                v125 = 0;
                                v177 = 0;
                                v169 = v124;
                                v47 = a17;
                                v45 = v187;
                                v46 = (char *)v166;
                                if ( !a17 )
                                  goto LABEL_70;
                                v126 = 0;
                                v127 = v165;
                                while ( v126 < v127 )
                                {
                                  v128 = 4LL * v126;
                                  *(_DWORD *)&v46[v128] = v125;
                                  *(_DWORD *)&v45[v128] = v169;
                                  ++v126;
                                  v125 = v177;
                                }
LABEL_69:
                                v47 = a17;
LABEL_70:
                                if ( (v35 & 0x2000000) != 0 )
                                {
                                  v79 = v165;
                                  if ( v47 )
                                    v80 = v165;
                                  else
                                    v80 = 0;
                                  SepConstrainByConstraintMask(v200, v35, v46, v45, 0LL, v80, &v170);
                                  if ( a17 )
                                    v81 = v79;
                                  else
                                    v81 = 0;
                                  SepConstrainByConstraintMask(v212[0], v35, (char *)v166, v45, 0LL, v81, &v171);
                                }
                                v26 = (unsigned int *)v174;
                                goto LABEL_72;
                              }
                              HIBYTE(v233) = 1;
                              v158 = 1;
                              v160 = 0;
                              v177 = v35;
                              v169 = 0;
                            }
                            v45 = v187;
LABEL_68:
                            v46 = (char *)v166;
                            goto LABEL_69;
                          }
                        }
                        goto LABEL_221;
                      }
                    }
LABEL_54:
                    v37 = v176;
                    goto LABEL_55;
                  }
                  goto LABEL_189;
                }
                v25 = SepFilterCheck((__int64)v26, (__int64 *)&v199, (__int64)ClientToken, 1, v212);
                if ( v25 >= 0 )
                {
                  v25 = SepFilterToDiscretionary(v212, v35);
                  v164 = v25;
                  if ( v25 < 0 )
                    v171 = 1;
                  goto LABEL_48;
                }
LABEL_189:
                PreviousMode = v156;
                goto LABEL_190;
              }
            }
            goto LABEL_186;
          }
        }
      }
LABEL_191:
      v25 = -1073741703;
      v20 = (char *)v166;
      v69 = (char)v166;
      v57 = v166;
      goto LABEL_118;
    }
    if ( (a10 & 1) != 0 )
    {
      v181 = 1;
      goto LABEL_24;
    }
    v25 = -1073741727;
LABEL_186:
    v20 = (char *)v166;
    v69 = (char)v166;
    v57 = v166;
LABEL_376:
    v26 = (unsigned int *)v174;
    goto LABEL_118;
  }
  v85 = *a3;
  v222 = 0LL;
  v25 = ObReferenceObjectByHandle(v85, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v222, 0LL);
  v216 = v222;
  if ( v25 >= 0 )
  {
    v223 = ClientToken;
    ClientToken = v222;
    SubjectContext.ClientToken = v222;
    v178 = 1;
    goto LABEL_21;
  }
  v216 = 0LL;
  v26 = (unsigned int *)v174;
  v20 = (char *)v166;
  v69 = (char)v166;
  v57 = v166;
  if ( v25 != -1073741816 )
    v179 = 1;
LABEL_118:
  if ( v178 )
  {
    ObfDereferenceObject(v216);
    SubjectContext.ClientToken = v223;
  }
  if ( v206 )
    ExFreePoolWithTag(v206, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v26, PreviousMode, 0LL, v70);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v198 )
    ExFreePoolWithTag(v198, 0);
  if ( v210 )
    ExFreePoolWithTag(v210, 0);
  if ( v204 )
  {
    LOBYTE(v71) = 1;
    SeReleaseSid(v204, PreviousMode, v71, v72);
  }
  if ( v195 )
    MiFreeNextAffinityWalker((void *)v195);
  if ( v168 )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v57 )
      ExFreePoolWithTag(v57, 0);
  }
  if ( v69 )
  {
    Blink = v207[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v217 )
    ExFreePoolWithTag(v217, 0);
  SepFreeResourceInfo(v199);
  if ( v25 == -1073741670 || v179 )
    SepAuditFailed((unsigned int)v25);
  return (unsigned int)v25;
}
