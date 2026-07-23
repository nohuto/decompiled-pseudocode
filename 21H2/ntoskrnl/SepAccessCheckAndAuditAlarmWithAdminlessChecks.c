/*
 * XREFs of SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140692204 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlOwnerAcesPresent @ 0x140214610 (RtlOwnerAcesPresent.c)
 *     SepLocateTokenTrustLevel @ 0x140228CC8 (SepLocateTokenTrustLevel.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140230DD8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByConstraintMask @ 0x140235F00 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x140236E64 (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x140238D50 (SeLogAccessFailure.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepLpacCausedAccessFailure @ 0x1402463DC (SepLpacCausedAccessFailure.c)
 *     SepFreeResourceInfo @ 0x14026C028 (SepFreeResourceInfo.c)
 *     SeCaptureObjectTypeList @ 0x14026C060 (SeCaptureObjectTypeList.c)
 *     SepMandatoryToDiscretionary @ 0x14026C270 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x14026C294 (SepFilterToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14026C2B0 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14026C3B0 (SePrivilegePolicyCheck.c)
 *     SepTokenIsOwner @ 0x14026C530 (SepTokenIsOwner.c)
 *     SeTokenIsRestricted @ 0x1402A4F20 (SeTokenIsRestricted.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402F24D0 (AuthzBasepEvaluateAceCondition.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140359570 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140359A20 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14035A160 (SepAccessCheck.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140361380 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SeFreeCapturedObjectTypeList @ 0x140596088 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14059619C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140596240 (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x1405962F8 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140596458 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14059656C (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1405965C0 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x140597158 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x140598084 (SepRmReferenceFindCap.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x140650980 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     SepProbeAndCaptureString_U @ 0x1406934F8 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140693624 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1406936AC (SeCheckAuditPrivilege.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSid @ 0x1406CDBCC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406CDCD0 (SeReleaseSid.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     SeLockSubjectContext @ 0x14070D210 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14070D270 (SeUnlockSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140921EB0 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarmWithAdminlessChecks(
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
        char a17,
        char a18)
{
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  int *v21; // r12
  char *v22; // r13
  unsigned __int8 v23; // si
  PACCESS_TOKEN ClientToken; // r13
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  unsigned int *v28; // rbx
  __int16 v29; // cx
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // rdx
  char v35; // r15
  __int64 v36; // rcx
  unsigned int v37; // esi
  char v38; // r14
  int v39; // eax
  int v40; // r15d
  __int64 v41; // r8
  char IsOwner; // al
  char v43; // di
  _DWORD *v44; // rax
  int *v45; // r12
  __int64 v46; // r15
  int v47; // r8d
  char v48; // al
  char *v49; // r10
  int v50; // r13d
  char v51; // r9
  char v52; // r8
  int *v53; // rsi
  int v54; // edi
  char v55; // r15
  char v56; // di
  _DWORD *v57; // rcx
  _DWORD *v58; // rdx
  unsigned int v59; // ecx
  int v60; // edx
  char *v61; // r10
  char *v62; // r11
  char v63; // r12
  int *v64; // r9
  unsigned int *v65; // r8
  _DWORD *v66; // r8
  _DWORD *v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int16 v72; // ax
  __int64 v73; // rax
  ACL *v74; // rcx
  int v75; // eax
  unsigned int v76; // eax
  int v77; // ebx
  unsigned int v78; // eax
  unsigned int v79; // eax
  int v80; // ecx
  unsigned __int8 v81; // al
  unsigned __int8 v82; // dl
  void *v83; // rcx
  int v84; // ecx
  char *PoolWithTag; // rax
  unsigned int v86; // edx
  unsigned int v87; // esi
  __int64 v88; // rcx
  __int16 v89; // dx
  __int64 v90; // rax
  ACL *v91; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v94; // rdx
  char *v95; // rax
  unsigned int v96; // edx
  unsigned int v97; // esi
  __int64 v98; // rcx
  int *v99; // rax
  int *v100; // rdx
  unsigned int v101; // eax
  unsigned __int64 v102; // r12
  PVOID v103; // r8
  _QWORD *v104; // rax
  __int64 v105; // r10
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r9
  int v109; // eax
  int v110; // ebx
  _QWORD *v111; // rax
  __int64 v112; // r8
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r9
  unsigned int v116; // r12d
  unsigned int v117; // ebx
  PVOID v118; // rbx
  int v119; // edx
  int v120; // eax
  int v121; // ecx
  unsigned int v122; // r8d
  unsigned int v123; // edx
  unsigned int v124; // r9d
  __int64 v125; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v127; // bl
  char v128; // di
  ULONGLONG TokenTrustLevel; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  int PrimaryToken; // r8d
  __int16 v134; // ax
  __int64 v135; // rdx
  unsigned int v136; // edx
  __int64 v137; // rcx
  unsigned int v138; // eax
  int v139; // r15d
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
  int Object; // [rsp+20h] [rbp-2C8h]
  int HandleInformation; // [rsp+28h] [rbp-2C0h]
  char v153; // [rsp+30h] [rbp-2B8h]
  unsigned int v154; // [rsp+40h] [rbp-2A8h]
  unsigned int v155; // [rsp+40h] [rbp-2A8h]
  char v156; // [rsp+A0h] [rbp-248h]
  unsigned __int8 v157; // [rsp+A1h] [rbp-247h] BYREF
  char v158; // [rsp+A2h] [rbp-246h]
  unsigned __int8 v159; // [rsp+A3h] [rbp-245h] BYREF
  char v160; // [rsp+A4h] [rbp-244h]
  char v161; // [rsp+A5h] [rbp-243h]
  char v162; // [rsp+A6h] [rbp-242h]
  char v163; // [rsp+A7h] [rbp-241h]
  int v164; // [rsp+A8h] [rbp-240h]
  int v165; // [rsp+B0h] [rbp-238h]
  PVOID v166; // [rsp+B8h] [rbp-230h]
  char v167; // [rsp+C0h] [rbp-228h] BYREF
  char v168; // [rsp+C1h] [rbp-227h]
  char v169; // [rsp+C2h] [rbp-226h]
  int v170; // [rsp+C4h] [rbp-224h] BYREF
  char v171; // [rsp+C8h] [rbp-220h] BYREF
  char v172; // [rsp+C9h] [rbp-21Fh] BYREF
  char v173[6]; // [rsp+CAh] [rbp-21Eh] BYREF
  PVOID v174; // [rsp+D0h] [rbp-218h] BYREF
  PVOID v175; // [rsp+D8h] [rbp-210h]
  _WORD v176[2]; // [rsp+E0h] [rbp-208h] BYREF
  int v177; // [rsp+E4h] [rbp-204h] BYREF
  unsigned int v178; // [rsp+E8h] [rbp-200h] BYREF
  char v179; // [rsp+ECh] [rbp-1FCh]
  unsigned __int8 v180; // [rsp+EDh] [rbp-1FBh] BYREF
  unsigned __int8 v181; // [rsp+EEh] [rbp-1FAh] BYREF
  char v182; // [rsp+EFh] [rbp-1F9h]
  char v183; // [rsp+F0h] [rbp-1F8h]
  char v184; // [rsp+F1h] [rbp-1F7h]
  char v185; // [rsp+F5h] [rbp-1F3h]
  int v186; // [rsp+F8h] [rbp-1F0h]
  int v187; // [rsp+FCh] [rbp-1ECh]
  int v188; // [rsp+100h] [rbp-1E8h]
  int v189; // [rsp+104h] [rbp-1E4h]
  unsigned int v190; // [rsp+108h] [rbp-1E0h]
  int v191; // [rsp+10Ch] [rbp-1DCh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+110h] [rbp-1D8h] BYREF
  unsigned int v193; // [rsp+130h] [rbp-1B8h]
  __int64 v194; // [rsp+138h] [rbp-1B0h] BYREF
  PVOID v195; // [rsp+140h] [rbp-1A8h] BYREF
  int *v196; // [rsp+148h] [rbp-1A0h]
  PVOID v197; // [rsp+150h] [rbp-198h] BYREF
  volatile void *v198; // [rsp+158h] [rbp-190h]
  __int64 v199; // [rsp+160h] [rbp-188h] BYREF
  void *Src; // [rsp+168h] [rbp-180h]
  int v201; // [rsp+170h] [rbp-178h] BYREF
  ACL *v202; // [rsp+178h] [rbp-170h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v203; // [rsp+180h] [rbp-168h] BYREF
  volatile void *Address; // [rsp+188h] [rbp-160h]
  PVOID v205; // [rsp+190h] [rbp-158h] BYREF
  int v206; // [rsp+198h] [rbp-150h]
  PVOID P; // [rsp+1A0h] [rbp-148h] BYREF
  PVOID v208; // [rsp+1A8h] [rbp-140h] BYREF
  int v209[2]; // [rsp+1B0h] [rbp-138h] BYREF
  PACCESS_TOKEN v210; // [rsp+1B8h] [rbp-130h]
  _BYTE *v211; // [rsp+1C0h] [rbp-128h]
  int v212; // [rsp+1C8h] [rbp-120h] BYREF
  int v213; // [rsp+1CCh] [rbp-11Ch] BYREF
  __int64 v214; // [rsp+1D0h] [rbp-118h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+1D8h] [rbp-110h]
  PVOID v216; // [rsp+1E0h] [rbp-108h] BYREF
  unsigned __int64 v217; // [rsp+1E8h] [rbp-100h]
  PVOID v218; // [rsp+1F0h] [rbp-F8h] BYREF
  void *v219; // [rsp+1F8h] [rbp-F0h]
  __int64 v220; // [rsp+200h] [rbp-E8h]
  __int64 v221; // [rsp+208h] [rbp-E0h]
  void *v222; // [rsp+220h] [rbp-C8h]
  __int128 v223; // [rsp+228h] [rbp-C0h] BYREF
  void **v224; // [rsp+238h] [rbp-B0h]
  __int64 v225; // [rsp+240h] [rbp-A8h]
  __int64 v226; // [rsp+248h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+250h] [rbp-98h] BYREF
  __int64 v228; // [rsp+270h] [rbp-78h]
  __int128 v229; // [rsp+278h] [rbp-70h] BYREF
  __int64 v230; // [rsp+288h] [rbp-60h]
  int v231; // [rsp+290h] [rbp-58h]
  __int128 v232; // [rsp+298h] [rbp-50h] BYREF

  v220 = a4;
  v219 = a1;
  v210 = a1;
  v214 = a2;
  v224 = a3;
  v225 = a4;
  v221 = a5;
  v226 = a6;
  Src = a7;
  v217 = a11;
  v165 = a12;
  v19 = a13;
  v198 = a14;
  v20 = (unsigned __int64)a15;
  Address = a15;
  v211 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v21 = 0LL;
  v164 = 0;
  v178 = 0;
  v22 = 0LL;
  v166 = 0LL;
  v168 = 0;
  v170 = -1073741823;
  v212 = 0;
  v175 = 0LL;
  v213 = 0;
  v196 = 0LL;
  v189 = 0;
  v186 = 0;
  v185 = 0;
  P = 0LL;
  v197 = 0LL;
  v208 = 0LL;
  v174 = 0LL;
  v199 = 0LL;
  v194 = 0LL;
  v177 = 0;
  v232 = 0LL;
  v205 = 0LL;
  v157 = 0;
  v159 = 0;
  v173[0] = 0;
  v167 = 0;
  v182 = 0;
  v163 = 0;
  v160 = 0;
  v180 = 1;
  v181 = 0;
  DmaAdapter = 0LL;
  v222 = 0LL;
  v183 = 0;
  v223 = 0LL;
  v209[1] = 0;
  v202 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v228 = 0LL;
  v203 = 0LL;
  v169 = 0;
  v162 = 0;
  v158 = 0;
  v184 = 0;
  v176[0] = 999;
  v229 = 0LL;
  v230 = 0LL;
  v231 = 0;
  v161 = 0;
  v188 = 0;
  v195 = 0LL;
  v191 = 0;
  v187 = 0;
  v179 = 0;
  v171 = 0;
  v172 = 0;
  v216 = 0LL;
  v201 = -1;
  v209[0] = -1;
  v23 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v156 = v23;
  v173[1] = v23;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v27 = -1073741811;
      goto LABEL_372;
    }
    v206 = 7;
  }
  else
  {
    v206 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( !a3 )
  {
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel >= SecurityIdentification )
        goto LABEL_6;
      v27 = -1073741659;
      v22 = 0LL;
    }
    else
    {
      v27 = -1073741732;
      v22 = 0LL;
    }
LABEL_372:
    v28 = (unsigned int *)v174;
    goto LABEL_117;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !v165 || (unsigned int)v165 > 0x1000 )
    {
      v27 = -1073741811;
      v164 = -1073741811;
      goto LABEL_19;
    }
    ProbeForWrite(Address, 4LL * (unsigned int)v165, 4u);
    ProbeForWrite(v198, 4LL * (unsigned int)v165, 4u);
  }
  else
  {
    v25 = v20;
    if ( v20 >= 0x7FFFFFFF0000LL )
      v25 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v25 = *(_DWORD *)v25;
    v26 = (__int64)v198;
    if ( (unsigned __int64)v198 >= 0x7FFFFFFF0000LL )
      v26 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v26 = *(_DWORD *)v26;
  }
  if ( (v19 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v232 = *(_OWORD *)v19;
  ClientToken = SubjectContext.ClientToken;
  v27 = v164;
LABEL_19:
  if ( v27 < 0 )
    goto LABEL_188;
  if ( !a3 )
  {
LABEL_21:
    if ( !ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    v210 = ClientToken;
    if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v23) )
    {
LABEL_24:
      if ( (a8 & 0xF0000000) != 0 )
      {
        v27 = -1073741594;
        v22 = (char *)v166;
        v21 = (int *)v166;
        goto LABEL_372;
      }
      v27 = SeCaptureSecurityDescriptor(a6, v23, PagedPool, 0, &v174);
      v164 = v27;
      if ( v27 < 0 )
      {
        v28 = 0LL;
        goto LABEL_191;
      }
      v28 = (unsigned int *)v174;
      if ( v174 )
      {
        v29 = *((_WORD *)v174 + 1);
        if ( v29 >= 0 )
        {
          v31 = (char *)*((_QWORD *)v174 + 1);
        }
        else
        {
          v30 = *((unsigned int *)v174 + 1);
          if ( !(_DWORD)v30 )
            goto LABEL_193;
          v31 = (char *)v174 + v30;
        }
        if ( v31 )
        {
          if ( v29 >= 0 )
          {
            v33 = (char *)*((_QWORD *)v174 + 2);
          }
          else
          {
            v32 = *((unsigned int *)v174 + 2);
            if ( !(_DWORD)v32 )
              goto LABEL_193;
            v33 = (char *)v174 + v32;
          }
          if ( v33 )
          {
            v34 = (__int64)v211;
            if ( (unsigned __int64)v211 >= 0x7FFFFFFF0000LL )
              v34 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v34 = *(_BYTE *)v34;
            v27 = SepProbeAndCaptureString_U(v219, &P);
            v164 = v27;
            if ( v27 >= 0 )
            {
              v27 = SepProbeAndCaptureString_U(v220, &v197);
              v164 = v27;
              if ( v27 >= 0 )
              {
                v27 = SepProbeAndCaptureString_U(v221, &v208);
                v164 = v27;
              }
            }
            v35 = v161;
            if ( v27 >= 0 )
            {
              if ( Src )
              {
                v27 = SeCaptureSid(Src, Object, 1, (__int64)&v199);
                if ( v27 < 0 )
                {
                  v199 = 0LL;
                  v22 = (char *)v166;
                  v21 = (int *)v166;
                  goto LABEL_372;
                }
              }
              v27 = SeCaptureObjectTypeList(v217, v165, v23, &v194);
              if ( v27 >= 0 )
              {
                v28 = (unsigned int *)v174;
                v27 = SepTrustLevelCheck(v36, (__int64)v174, &SubjectContext, 0LL, 0LL, 1, &v201);
                if ( v27 < 0 )
                {
LABEL_192:
                  v22 = (char *)v166;
                  v21 = (int *)v166;
                  goto LABEL_117;
                }
                v37 = a8;
                v27 = SepFilterToDiscretionary(&v201, a8);
                v164 = v27;
                if ( v27 < 0 )
                {
                  v171 = 1;
LABEL_48:
                  v38 = a18;
                  if ( v27 < 0 )
                    goto LABEL_54;
                  v27 = SepMandatoryIntegrityCheck(
                          (int *)&v232,
                          (__int64)v28,
                          0,
                          (__int64)ClientToken,
                          1,
                          a18,
                          (__int64)&v223);
                  if ( v27 >= 0 )
                  {
                    v39 = SepMandatoryToDiscretionary(&v223, v37);
                    v27 = v39;
                    v164 = v39;
                    if ( (v39 < 0 || (v37 & 0x2000000) != 0)
                      && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
                      && HIDWORD(v223) <= 0x2000 )
                    {
                      v35 = 1;
                      v161 = 1;
                    }
                    if ( v39 >= 0 || v35 )
                    {
                      v27 = SePrivilegePolicyCheck(&a8, &v177, (__int64 *)&SubjectContext, 0LL, (__int64)&v205, v156);
                      v164 = v27;
                      v37 = a8;
                      if ( !a8 )
                      {
                        v84 = (unsigned __int8)v187;
                        v40 = v177;
                        if ( v177 )
                          v84 = 1;
                        v187 = v84;
LABEL_55:
                        SeLockSubjectContext(&SubjectContext);
                        if ( v27 < 0 && !v161 )
                        {
                          v159 = 1;
                          v170 = v27;
                          if ( !a17 )
                          {
                            v166 = &v178;
                            v45 = &v170;
                            goto LABEL_71;
                          }
                          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v165, 0x61476553u);
                          v166 = PoolWithTag;
                          if ( !PoolWithTag )
                          {
                            SeUnlockSubjectContext(&SubjectContext);
                            v27 = -1073741670;
                            v23 = v156;
                            v22 = 0LL;
                            v21 = (int *)v175;
                            goto LABEL_117;
                          }
                          v168 = 1;
                          v45 = (int *)&PoolWithTag[4 * v165];
                          v86 = 0;
                          v87 = v165;
                          while ( v86 < v87 )
                          {
                            v88 = v86;
                            *(_DWORD *)&PoolWithTag[v88 * 4] = v178;
                            v45[v88] = v170;
                            ++v86;
                          }
                          goto LABEL_211;
                        }
                        IsOwner = SepTokenIsOwner((__int64)ClientToken, (__int64)v28, v41, v38);
                        v158 = IsOwner;
                        v28 = (unsigned int *)v174;
                        if ( !SepRmEnforceCap )
                          goto LABEL_57;
                        v89 = *((_WORD *)v174 + 1);
                        if ( (v89 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
                          goto LABEL_57;
                        if ( v89 >= 0 )
                        {
                          v91 = (ACL *)*((_QWORD *)v174 + 3);
                        }
                        else
                        {
                          v90 = *((unsigned int *)v174 + 3);
                          if ( !(_DWORD)v90 )
                          {
                            v202 = 0LL;
LABEL_218:
                            IsOwner = v158;
LABEL_57:
                            v27 = v164;
                            goto LABEL_58;
                          }
                          v91 = (ACL *)((char *)v174 + v90);
                        }
                        v202 = v91;
                        if ( v91 )
                        {
                          ScopedPolicySid = SepGetScopedPolicySid(v91);
                          if ( ScopedPolicySid )
                          {
                            Cap = SepRmReferenceFindCap(ScopedPolicySid, &v203);
                            v94 = v203;
                            if ( Cap < 0 )
                              v94 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
                            v203 = v94;
                            v27 = 0;
                            v164 = 0;
                            v169 = 1;
                            IsOwner = v158;
LABEL_58:
                            v37 = a8;
                            if ( (a8 & 0x2060000) != 0
                              && IsOwner
                              && ((v72 = *((_WORD *)v28 + 1), (v72 & 4) == 0)
                                ? (v74 = 0LL)
                                : v72 >= 0
                                ? (v74 = (ACL *)*((_QWORD *)v28 + 4))
                                : (v73 = v28[4], !(_DWORD)v73)
                                ? (v74 = 0LL)
                                : (v74 = (ACL *)((char *)v28 + v73)),
                                  !RtlOwnerAcesPresent(v74)) )
                            {
                              if ( (v37 & 0x2000000) != 0 )
                              {
                                v75 = 393216;
                                v40 = v177 | 0x60000;
                              }
                              else
                              {
                                v75 = v37 & 0x60000;
                                v40 = v177 | v37 & 0x60000;
                              }
                              v188 = v75;
                              v177 = v40;
                              v37 &= 0xFFF9FFFF;
                              a8 = v37;
                            }
                            else
                            {
                              v40 = v177;
                            }
                            if ( !v37
                              && (!v169 || (_BYTE)v187)
                              && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v188) )
                            {
                              v178 = v40;
                              if ( v40 )
                              {
                                v80 = 0;
                                v81 = 0;
                                v82 = 1;
                              }
                              else
                              {
                                v80 = -1073741790;
                                v81 = 1;
                                v82 = 0;
                              }
                              v157 = v82;
                              v159 = v81;
                              v170 = v80;
                              if ( !a17 )
                              {
                                v166 = &v178;
                                v45 = &v170;
LABEL_71:
                                if ( !ClientToken )
                                  goto LABEL_78;
                                if ( v171 || v172 )
                                  goto LABEL_321;
                                if ( !HIDWORD(v229) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
                                {
                                  if ( v27 < 0 )
                                    goto LABEL_78;
                                  if ( v170 < 0 || HIBYTE(v230) )
                                  {
LABEL_321:
                                    CurrentThread = KeGetCurrentThread();
                                    --CurrentThread->KernelApcDisable;
                                    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
                                    v127 = v170 >= 0;
                                    v128 = a8 | v177;
                                    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
                                    SeLogAccessFailure(
                                      (__int64)ClientToken,
                                      0LL,
                                      0LL,
                                      TokenTrustLevel,
                                      (ULONGLONG)v174,
                                      v128,
                                      v127,
                                      0);
                                    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
                                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v130, v131, v132);
                                    v37 = a8;
                                    v27 = v164;
                                    v28 = (unsigned int *)v174;
                                    v40 = v177;
                                  }
                                }
                                if ( v27 >= 0
                                  && v170 < 0
                                  && !HIDWORD(v229)
                                  && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
                                  && SepLpacCausedAccessFailure((__int64)&v229, v37) )
                                {
                                  SepLogLpacAccessFailure();
                                }
LABEL_78:
                                if ( v182 )
                                  goto LABEL_90;
                                v50 = v206;
                                if ( v206 == 2 )
                                {
                                  if ( v157 )
                                  {
                                    LOBYTE(HandleInformation) = 0;
                                    v163 = SepAdtAuditObjectAccessWithContext(
                                             0LL,
                                             v197,
                                             v157,
                                             0LL,
                                             &SubjectContext,
                                             HandleInformation,
                                             v176);
                                  }
                                  if ( !v159 )
                                  {
LABEL_83:
                                    v51 = v160;
                                    goto LABEL_84;
                                  }
                                  LOBYTE(HandleInformation) = 0;
                                  v51 = SepAdtAuditObjectAccessWithContext(
                                          0LL,
                                          v197,
                                          0LL,
                                          v159,
                                          &SubjectContext,
                                          HandleInformation,
                                          v176);
                                  v160 = v51;
                                }
                                else
                                {
                                  if ( v157 )
                                  {
                                    v176[0] = 152;
                                    v163 = SepAdtAuditThisEventWithContext(152LL, v157, 0LL, &SubjectContext);
                                  }
                                  if ( !v159 )
                                    goto LABEL_83;
                                  v176[0] = 152;
                                  v51 = SepAdtAuditThisEventWithContext(152LL, 0LL, v159, &SubjectContext);
                                  v160 = v51;
                                }
LABEL_84:
                                v52 = v163;
                                if ( v163 || v51 )
                                {
                                  PrimaryToken = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    PrimaryToken = (int)SubjectContext.ClientToken;
                                  v134 = *((_WORD *)v28 + 1);
                                  if ( (v134 & 0x10) != 0 )
                                  {
                                    if ( v134 >= 0 )
                                    {
                                      v135 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v136 = v28[3];
                                      if ( v136 )
                                        LODWORD(v135) = (_DWORD)v28 + v136;
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
                                      v137 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v138 = v28[3];
                                      if ( v138 )
                                        LODWORD(v137) = (_DWORD)v28 + v138;
                                      else
                                        LODWORD(v137) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v137) = 0;
                                  }
                                  v139 = v37 | v40;
                                  v53 = (int *)v166;
                                  v140 = a17;
                                  SepExamineSaclEx(
                                    v137,
                                    v135,
                                    PrimaryToken,
                                    v139,
                                    v194,
                                    v165,
                                    a17,
                                    (__int64)v45,
                                    (__int64)v166,
                                    v199,
                                    v158,
                                    (__int64)v173,
                                    (__int64)&v167);
                                  v141 = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    v141 = (int)SubjectContext.ClientToken;
                                  v142 = *((_WORD *)v28 + 1);
                                  if ( (v142 & 0x10) != 0 )
                                  {
                                    if ( v142 >= 0 )
                                    {
                                      v143 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v144 = v28[3];
                                      if ( v144 )
                                        LODWORD(v143) = (_DWORD)v28 + v144;
                                      else
                                        LODWORD(v143) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v143) = 0;
                                  }
                                  v153 = v140;
                                  v54 = v165;
                                  SepExamineGlobalSaclEx(
                                    (__int64)v197,
                                    v143,
                                    v141,
                                    v139,
                                    v194,
                                    v165,
                                    v153,
                                    (__int64)v45,
                                    (__int64)v53,
                                    v199,
                                    v158,
                                    v173,
                                    &v167);
                                  v52 = v163;
                                  v51 = v160;
                                }
                                else
                                {
                                  v53 = (int *)v166;
                                  v54 = v165;
                                }
                                if ( v173[0] || v167 )
                                {
                                  v145 = (unsigned __int8)v186;
                                  if ( v157 )
                                    v145 = 1;
                                  v186 = v145;
                                  v55 = a17;
                                  if ( v173[0] && v52 )
                                  {
                                    v146 = (__int64)v53;
                                    if ( !a17 )
                                      v146 = 0LL;
                                    v147 = &v214;
                                    if ( !v157 )
                                      LODWORD(v147) = 0;
                                    v28 = (unsigned int *)v174;
                                    SepAdtOpenObjectAuditAlarm(
                                      v176[0],
                                      (int)P,
                                      (int)v147,
                                      (int)v197,
                                      (__int64)v208,
                                      v174,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      *v53,
                                      *v53,
                                      (__int64)v205,
                                      1,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v50,
                                      v194,
                                      v54,
                                      v146,
                                      0LL,
                                      0LL);
                                    v51 = v160;
                                  }
                                  if ( v167 && v51 )
                                  {
                                    v148 = (__int64)v53;
                                    if ( !v55 )
                                      v148 = 0LL;
                                    v149 = &v214;
                                    if ( !v157 )
                                      LODWORD(v149) = 0;
                                    v28 = (unsigned int *)v174;
                                    SepAdtOpenObjectAuditAlarm(
                                      v176[0],
                                      (int)P,
                                      (int)v149,
                                      (int)v197,
                                      (__int64)v208,
                                      v174,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      a8,
                                      a8,
                                      (__int64)v205,
                                      0,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v50,
                                      v194,
                                      v54,
                                      v148,
                                      0LL,
                                      0LL);
                                  }
                                  goto LABEL_91;
                                }
                                if ( v205 && v157 )
                                {
                                  SepAdtPrivilegeObjectAuditAlarm(
                                    (_DWORD)P,
                                    (_DWORD)v197,
                                    (_DWORD)v208,
                                    (unsigned int)&v214,
                                    (__int64)SubjectContext.ClientToken,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                    a8,
                                    (__int64)v205,
                                    v157);
                                  v56 = 0;
                                  v28 = (unsigned int *)v174;
                                  v55 = a17;
LABEL_92:
                                  SeUnlockSubjectContext(&SubjectContext);
                                  if ( v55 )
                                  {
                                    v59 = 0;
                                    v193 = 0;
                                    if ( v45 )
                                    {
                                      v22 = (char *)v166;
                                      v66 = Address;
                                      v67 = v198;
                                      while ( v59 < v165 )
                                      {
                                        v68 = v59;
                                        v66[v68] = v45[v68];
                                        v67[v68] = *(_DWORD *)&v22[v68 * 4];
                                        if ( SepRmEnforceCap && v162 && v45[v68] >= 0 )
                                        {
                                          v66[v59] = v196[v59];
                                          v67[v59] &= *((_DWORD *)v175 + v59);
                                        }
                                        v193 = ++v59;
                                        v28 = (unsigned int *)v174;
                                      }
                                      goto LABEL_96;
                                    }
                                    v60 = v170;
                                    v61 = (char *)Address;
                                    v62 = (char *)v198;
                                    v63 = v162;
                                    while ( v59 < v165 )
                                    {
                                      v64 = (int *)&v61[4 * v59];
                                      *v64 = v60;
                                      v65 = (unsigned int *)&v62[4 * v59];
                                      *v65 = v178;
                                      if ( SepRmEnforceCap && v63 )
                                      {
                                        v60 = v170;
                                        if ( v170 >= 0 )
                                        {
                                          *v64 = v170;
                                          *v65 &= v178;
                                        }
                                      }
                                      else
                                      {
                                        v60 = v170;
                                      }
                                      v193 = ++v59;
                                      v28 = (unsigned int *)v174;
                                    }
                                  }
                                  else
                                  {
                                    v57 = Address;
                                    *(_DWORD *)Address = v170;
                                    v58 = v198;
                                    *(_DWORD *)v198 = v178;
                                    if ( SepRmEnforceCap && v162 && v170 >= 0 )
                                    {
                                      *v57 = *v196;
                                      v21 = (int *)v175;
                                      *v58 &= *(_DWORD *)v175;
                                      v28 = (unsigned int *)v174;
                                      v22 = (char *)v166;
                                      goto LABEL_116;
                                    }
                                    v28 = (unsigned int *)v174;
                                  }
                                  v22 = (char *)v166;
LABEL_96:
                                  v21 = (int *)v175;
LABEL_116:
                                  *v211 = v56;
                                  v27 = 0;
                                  v164 = 0;
                                  v23 = v156;
                                  goto LABEL_117;
                                }
LABEL_90:
                                v55 = a17;
LABEL_91:
                                v56 = v186;
                                goto LABEL_92;
                              }
                              v95 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v165, 0x61476553u);
                              v166 = v95;
                              if ( v95 )
                              {
                                v168 = 1;
                                v45 = (int *)&v95[4 * v165];
                                v96 = 0;
                                v97 = v165;
                                while ( v96 < v97 )
                                {
                                  v98 = v96;
                                  *(_DWORD *)&v95[v98 * 4] = v178;
                                  v45[v98] = v170;
                                  ++v96;
                                }
LABEL_211:
                                v37 = a8;
                                goto LABEL_71;
                              }
LABEL_238:
                              v27 = -1073741670;
                              SeUnlockSubjectContext(&SubjectContext);
                              v23 = v156;
                              v22 = (char *)v166;
                              v21 = (int *)v175;
                              goto LABEL_117;
                            }
                            v43 = a17;
                            if ( a17 )
                            {
                              v44 = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v165, 0x61476553u);
                              v166 = v44;
                              if ( !v44 )
                                goto LABEL_238;
                              v168 = 1;
                              v45 = &v44[v165];
                              v43 = a17;
                            }
                            else
                            {
                              v44 = &v178;
                              v166 = &v178;
                              v45 = &v170;
                            }
                            Src = v45;
                            LODWORD(v229) = v188;
                            v154 = v40;
                            v46 = (unsigned int)v165;
                            SepAccessCheck(
                              (__int64)v28,
                              v199,
                              (__int64)SubjectContext.PrimaryToken,
                              (__int64)ClientToken,
                              v37,
                              (__int128 *)v194,
                              v165,
                              &v232,
                              v154,
                              v156,
                              v44,
                              0LL,
                              v45,
                              v43,
                              v158,
                              (int *)&v229,
                              (__int64)&v195,
                              (char *)&v157,
                              (char *)&v159,
                              v38);
                            if ( SepRmEnforceCap && *v45 >= 0 && v169 )
                            {
                              if ( v43 )
                              {
                                LODWORD(v28) = v46;
                                v99 = (int *)ExAllocatePoolWithTag(PagedPool, 8 * v46, 0x61476553u);
                                v21 = v99;
                                v175 = v99;
                                if ( !v99 )
                                {
                                  SeUnlockSubjectContext(&SubjectContext);
                                  SeReleaseSubjectContext(&SubjectContext);
                                  v27 = -1073741670;
                                  v23 = v156;
                                  v22 = (char *)v166;
                                  goto LABEL_372;
                                }
                                v100 = &v99[v46];
                              }
                              else
                              {
                                v21 = &v212;
                                v175 = &v212;
                                v100 = &v213;
                              }
                              v196 = v100;
                              if ( v165 )
                              {
                                v27 = SepCopyObjectTypeList(v194, v165, &v216);
                                v164 = v27;
                                if ( v27 < 0 )
                                {
                                  v23 = v156;
                                  v22 = (char *)v166;
                                  goto LABEL_372;
                                }
                              }
                              else
                              {
                                v27 = v164;
                              }
                              LOBYTE(v28) = 0;
                              v187 = (int)v28;
                              v101 = 0;
                              v37 = a8;
                              v40 = v177;
                              v47 = v165;
                              while ( 1 )
                              {
                                v190 = v101;
                                if ( v101 >= HIDWORD(v203[2].Linkage.Blink) )
                                  break;
                                v102 = *(&v203[2].Signature + v101);
                                v217 = v102;
                                if ( !*(_QWORD *)(v102 + 24) )
                                  goto LABEL_291;
                                v103 = v195;
                                if ( !v195 )
                                {
                                  LODWORD(v28) = (unsigned __int8)v28;
                                  if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v202, &v195) < 0 )
                                    LODWORD(v28) = 1;
                                  v187 = (int)v28;
                                  v103 = v195;
                                }
                                v104 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                v105 = v104 ? v104[75] : 0LL;
                                v106 = v104 ? v104[73] : 0LL;
                                v107 = v104 ? v104[74] : 0LL;
                                v108 = v104 ? v104[72] : 0LL;
                                v109 = AuthzBasepEvaluateAceCondition(
                                         (__int64)ClientToken,
                                         *((_QWORD *)ClientToken + 97),
                                         (__int64)v103,
                                         v108,
                                         v107,
                                         v106,
                                         v105,
                                         *(_DWORD **)(v102 + 24),
                                         *(_DWORD *)(v102 + 16),
                                         1u,
                                         0,
                                         &v191);
                                v27 = v109;
                                v164 = v109;
                                v110 = v191;
                                if ( v191 == 1 )
                                  goto LABEL_291;
                                if ( v109 < 0 )
                                  goto LABEL_304;
                                if ( SeTokenIsRestricted(ClientToken) )
                                {
                                  v111 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                  if ( v111 )
                                    v112 = v111[75];
                                  else
                                    v112 = 0LL;
                                  if ( v111 )
                                    v113 = v111[73];
                                  else
                                    v113 = 0LL;
                                  if ( v111 )
                                    v114 = v111[74];
                                  else
                                    v114 = 0LL;
                                  if ( v111 )
                                    v115 = v111[72];
                                  else
                                    v115 = 0LL;
                                  v27 = AuthzBasepEvaluateAceCondition(
                                          (__int64)ClientToken,
                                          *((_QWORD *)ClientToken + 97),
                                          (__int64)v195,
                                          v115,
                                          v114,
                                          v113,
                                          v112,
                                          *(_DWORD **)(v102 + 24),
                                          *(_DWORD *)(v102 + 16),
                                          1u,
                                          1u,
                                          &v191);
                                  v164 = v27;
                                  if ( v27 < 0 )
                                    goto LABEL_304;
                                  v110 = v191;
                                }
                                if ( (_BYTE)v187 || v110 == 1 )
                                {
LABEL_291:
                                  if ( (*(_DWORD *)(v102 + 48) & 1) != 0 )
                                  {
                                    if ( (v37 & 0x2000000) != 0 )
                                      v116 = v37;
                                    else
                                      v116 = v37 | v40;
                                    v117 = 0;
                                  }
                                  else
                                  {
                                    v116 = v37;
                                    v117 = v40;
                                  }
                                  v27 = SepBuildCapeSecurityDescriptor(
                                          SecurityDescriptor,
                                          *(unsigned __int8 **)(v217 + 32),
                                          v202);
                                  v164 = v27;
                                  if ( v27 < 0 )
                                  {
LABEL_304:
                                    v23 = v156;
                                    v22 = (char *)v166;
                                    v21 = (int *)v175;
                                    goto LABEL_372;
                                  }
                                  v155 = v117;
                                  v118 = v216;
                                  SepAccessCheck(
                                    (__int64)SecurityDescriptor,
                                    v199,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)SubjectContext.ClientToken,
                                    v116,
                                    (__int128 *)v216,
                                    v165,
                                    &v232,
                                    v155,
                                    v156,
                                    (unsigned int *)v175,
                                    0LL,
                                    v196,
                                    a17,
                                    v158,
                                    (int *)&v229,
                                    (__int64)&v195,
                                    (char *)&v180,
                                    (char *)&v181,
                                    v38);
                                  v119 = *(_DWORD *)v175;
                                  if ( v162 )
                                    v119 = v189 & *(_DWORD *)v175;
                                  v189 = v119;
                                  v47 = v165;
                                  if ( v118 )
                                    SepMergeObjectTypeListAccesses(v194, (__int64)v118, v165);
                                  v162 = 1;
                                }
                                else
                                {
                                  v47 = v165;
                                }
                                v101 = v190 + 1;
                                LOBYTE(v28) = v187;
                              }
                              v157 = v180;
                              v159 = v181;
                              v120 = v189;
                              *(_DWORD *)v175 &= v189;
                              v45 = (int *)Src;
                              if ( !v120 )
                              {
                                *v196 = -1073741790;
                                v157 = 0;
                                v159 = 1;
                              }
                            }
                            else
                            {
                              v37 = a8;
                              v27 = v164;
                              v40 = v177;
                              v47 = v165;
                            }
                            if ( (v37 & 0x2000000) != 0 )
                            {
                              if ( !v161
                                || !*(_WORD *)((char *)&v230 + 5)
                                && !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
                              {
                                if ( a17 )
                                  v76 = v47;
                                else
                                  v76 = 0;
                                SepConstrainByMandatory((__int64)&v223, v37, (char *)v166, (char *)v45, 0LL, v76);
                              }
                            }
                            else if ( v161 && !*(_WORD *)((char *)&v230 + 5) )
                            {
                              if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() || HIDWORD(v229) )
                              {
                                v157 = 0;
                                v159 = 1;
                                v122 = 0;
                                v178 = 0;
                                v170 = v121;
                                v48 = a17;
                                if ( a17 )
                                {
                                  v123 = 0;
                                  v49 = (char *)v166;
                                  v124 = v165;
                                  while ( v123 < v124 )
                                  {
                                    v125 = v123;
                                    *(_DWORD *)&v49[v125 * 4] = v122;
                                    v45[v125] = v170;
                                    ++v123;
                                    v122 = v178;
                                  }
                                  v48 = a17;
                                  goto LABEL_69;
                                }
LABEL_68:
                                v49 = (char *)v166;
LABEL_69:
                                if ( (v37 & 0x2000000) != 0 )
                                {
                                  v77 = v165;
                                  if ( v48 )
                                    v78 = v165;
                                  else
                                    v78 = 0;
                                  SepConstrainByConstraintMask(v201, v37, v49, (char *)v45, 0LL, v78, &v171);
                                  if ( a17 )
                                    v79 = v77;
                                  else
                                    v79 = 0;
                                  SepConstrainByConstraintMask(v209[0], v37, (char *)v166, (char *)v45, 0LL, v79, &v172);
                                }
                                v28 = (unsigned int *)v174;
                                goto LABEL_71;
                              }
                              HIBYTE(v230) = 1;
                              v157 = 1;
                              v159 = 0;
                              v178 = v37;
                              v170 = 0;
                            }
                            v48 = a17;
                            goto LABEL_68;
                          }
                        }
                        goto LABEL_218;
                      }
                    }
LABEL_54:
                    v40 = v177;
                    goto LABEL_55;
                  }
                  goto LABEL_191;
                }
                v27 = SepFilterCheck((__int64)v28, &v195, (__int64)ClientToken, 1, v209);
                if ( v27 >= 0 )
                {
                  v27 = SepFilterToDiscretionary(v209, v37);
                  v164 = v27;
                  if ( v27 < 0 )
                    v172 = 1;
                  goto LABEL_48;
                }
LABEL_191:
                v23 = v156;
                goto LABEL_192;
              }
            }
            goto LABEL_188;
          }
        }
      }
LABEL_193:
      v27 = -1073741703;
      v22 = (char *)v166;
      v21 = (int *)v166;
      goto LABEL_117;
    }
    if ( (a10 & 1) != 0 )
    {
      v182 = 1;
      goto LABEL_24;
    }
    v27 = -1073741727;
LABEL_188:
    v22 = (char *)v166;
    v21 = (int *)v166;
    goto LABEL_372;
  }
  v83 = *a3;
  v218 = 0LL;
  v27 = ObReferenceObjectByHandle(v83, 8u, (POBJECT_TYPE)SeTokenObjectType, v23, &v218, 0LL);
  DmaAdapter = (PADAPTER_OBJECT)v218;
  if ( v27 >= 0 )
  {
    v222 = ClientToken;
    ClientToken = v218;
    SubjectContext.ClientToken = v218;
    v183 = 1;
    goto LABEL_21;
  }
  DmaAdapter = 0LL;
  v28 = (unsigned int *)v174;
  v22 = (char *)v166;
  v21 = (int *)v166;
  if ( v27 != -1073741816 )
    v184 = 1;
LABEL_117:
  if ( v183 )
  {
    HalPutDmaAdapter(DmaAdapter);
    SubjectContext.ClientToken = v222;
  }
  if ( v205 )
    ExFreePoolWithTag(v205, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v28, v23, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v197 )
    ExFreePoolWithTag(v197, 0);
  if ( v208 )
    ExFreePoolWithTag(v208, 0);
  if ( v199 )
  {
    LOBYTE(v69) = 1;
    SeReleaseSid(v199, v23, v69, v70);
  }
  if ( v194 )
    SeFreeCapturedObjectTypeList((void *)v194);
  if ( v168 )
  {
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
  }
  if ( v169 )
  {
    Blink = v203[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v216 )
    ExFreePoolWithTag(v216, 0);
  SepFreeResourceInfo(v195);
  if ( v27 == -1073741670 || v184 )
    SepAuditFailed((unsigned int)v27);
  return (unsigned int)v27;
}
