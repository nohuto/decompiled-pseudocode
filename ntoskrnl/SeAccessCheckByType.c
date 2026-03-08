/*
 * XREFs of SeAccessCheckByType @ 0x14033BB40
 * Callers:
 *     NtAccessCheck @ 0x1402DC230 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x1402E97B0 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x1405B5450 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SepConstrainByConstraintMask @ 0x1402077A4 (SepConstrainByConstraintMask.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140247AA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14025DED0 (ExpAcquireResourceSharedLite.c)
 *     SepFilterCheck @ 0x140263850 (SepFilterCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x140263A50 (SepMandatoryIntegrityCheck.c)
 *     SepAccessCheck @ 0x140266980 (SepAccessCheck.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlpOwnerAcesPresent @ 0x1402CBBC0 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x1402E40BC (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x1402EE66C (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x1402F8D5C (SepLpacCausedAccessFailure.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ExpReleaseResourceForThreadLite @ 0x14033ABF0 (ExpReleaseResourceForThreadLite.c)
 *     SeCaptureObjectTypeList @ 0x14033DA18 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x14033DC28 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14033DD14 (SePrivilegePolicyCheck.c)
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C33D4 (ExpFastResourceLegacyAcquireShared.c)
 *     ExpFastResourceLegacyRelease @ 0x1403C5290 (ExpFastResourceLegacyRelease.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405B5678 (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x1405B571C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x1405B57D4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1405B5948 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x1405B5A5C (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1405B5A90 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x1405B7498 (SepRmReferenceFindCap.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406D8E50 (ObReferenceObjectByHandleWithTag.c)
 *     SeCaptureSid @ 0x140710930 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140710A34 (SeReleaseSid.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x1407C8A50 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int16 *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        unsigned int *a10,
        _DWORD *a11,
        char a12)
{
  __int64 v14; // rdx
  _DWORD *v15; // r8
  unsigned __int64 PreviousMode; // r9
  int v17; // eax
  __int64 v18; // rax
  __int64 result; // rax
  _QWORD *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // r13
  int v25; // ebx
  int v26; // eax
  __int16 v27; // cx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  ULONGLONG v32; // rax
  PVOID v33; // r14
  __int64 v34; // rsi
  unsigned int v35; // r15d
  char v36; // r15
  char v37; // si
  unsigned int v38; // ecx
  _DWORD *v39; // r12
  unsigned __int8 v40; // di
  PVOID v41; // rsi
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // edx
  int v45; // eax
  unsigned int v46; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v48; // rbx
  ULONG_PTR v49; // r10
  __int16 v50; // cx
  __int16 v51; // ax
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v53; // rdx
  unsigned __int8 v54; // dl
  struct _KTHREAD *v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // r8
  char v60; // r12
  __int64 v61; // rax
  unsigned int v62; // ecx
  __int64 v63; // r8
  _DWORD *v64; // r9
  struct _ERESOURCE *v65; // rcx
  __int64 v66; // rsi
  __int16 v67; // cx
  __int64 v68; // rax
  __int64 v69; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v72; // rdx
  unsigned int v73; // r14d
  __int16 v74; // ax
  __int64 v75; // rdx
  __int64 v76; // rax
  int v77; // eax
  unsigned int v78; // ebx
  PVOID v79; // r15
  unsigned int v80; // ecx
  unsigned int *v81; // rdx
  _DWORD *v82; // r8
  __int64 v83; // r13
  __int64 v84; // r12
  unsigned int *Pool2; // rax
  unsigned int *v86; // rdx
  __int64 v87; // r13
  int *v88; // rax
  char *v89; // r14
  _DWORD *v90; // rax
  int *v91; // rax
  int v92; // r12d
  char *v93; // r15
  int v94; // r10d
  unsigned int v95; // r13d
  unsigned int v96; // ecx
  __int64 v97; // rdx
  PVOID i; // rsi
  __int64 v99; // rbx
  PVOID v100; // r8
  int v101; // eax
  int v102; // edx
  _QWORD *v103; // rax
  __int64 v104; // r10
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r9
  int v108; // eax
  int v109; // ecx
  _QWORD *v110; // rax
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r9
  unsigned int v115; // eax
  unsigned int v116; // ecx
  int *v117; // r12
  PVOID v118; // rbx
  ULONG_PTR v119; // r8
  __int16 v120; // cx
  __int16 v121; // ax
  unsigned __int8 v122; // al
  struct _KTHREAD *v123; // rdx
  unsigned __int8 v124; // al
  struct _KTHREAD *v125; // rdx
  int v126; // ebx
  unsigned int v127; // r12d
  unsigned int v128; // eax
  unsigned int v129; // edx
  __int64 v130; // rax
  unsigned int v131; // r8d
  unsigned int v132; // r9d
  __m128i v133; // xmm1
  unsigned int v134; // r10d
  __int64 v135; // rax
  __int64 v136; // rax
  int v137; // r8d
  int *v138; // rcx
  __int64 v139; // rdx
  unsigned int v140; // ecx
  unsigned int j; // eax
  __int64 v142; // rcx
  struct _KTHREAD *v143; // rax
  PVOID v144; // rbx
  ULONGLONG v145; // r9
  __int64 v146; // rcx
  PVOID v147; // rdi
  int Tag; // [rsp+20h] [rbp-2B8h]
  int Taga; // [rsp+20h] [rbp-2B8h]
  int Object; // [rsp+28h] [rbp-2B0h]
  int Objecta; // [rsp+28h] [rbp-2B0h]
  int Objectb; // [rsp+28h] [rbp-2B0h]
  unsigned __int8 v153; // [rsp+A0h] [rbp-238h]
  int v154; // [rsp+A4h] [rbp-234h]
  char v155; // [rsp+A8h] [rbp-230h]
  char v156; // [rsp+A9h] [rbp-22Fh]
  char v157; // [rsp+AAh] [rbp-22Eh]
  unsigned int v158; // [rsp+B0h] [rbp-228h] BYREF
  PVOID v159; // [rsp+B8h] [rbp-220h]
  char v160; // [rsp+C0h] [rbp-218h] BYREF
  char v161; // [rsp+C1h] [rbp-217h] BYREF
  char v162[6]; // [rsp+C2h] [rbp-216h] BYREF
  PVOID v163; // [rsp+C8h] [rbp-210h] BYREF
  int v164; // [rsp+D0h] [rbp-208h]
  int v165; // [rsp+D4h] [rbp-204h]
  unsigned int v166; // [rsp+D8h] [rbp-200h]
  unsigned int v167; // [rsp+DCh] [rbp-1FCh] BYREF
  char v168; // [rsp+E0h] [rbp-1F8h]
  unsigned int v169; // [rsp+E8h] [rbp-1F0h]
  unsigned int v170; // [rsp+F0h] [rbp-1E8h]
  BOOL v171; // [rsp+F4h] [rbp-1E4h]
  __int64 v172; // [rsp+F8h] [rbp-1E0h] BYREF
  int v173; // [rsp+100h] [rbp-1D8h]
  _DWORD Length[3]; // [rsp+104h] [rbp-1D4h]
  volatile void *Address; // [rsp+110h] [rbp-1C8h]
  int *v176; // [rsp+118h] [rbp-1C0h]
  int v177; // [rsp+120h] [rbp-1B8h] BYREF
  PVOID v178; // [rsp+128h] [rbp-1B0h] BYREF
  __int64 v179; // [rsp+130h] [rbp-1A8h]
  int *v180; // [rsp+138h] [rbp-1A0h]
  __int64 v181; // [rsp+140h] [rbp-198h]
  _OWORD *v182; // [rsp+148h] [rbp-190h] BYREF
  PVOID v183; // [rsp+150h] [rbp-188h]
  PVOID v184; // [rsp+158h] [rbp-180h] BYREF
  __int64 v185; // [rsp+160h] [rbp-178h] BYREF
  PVOID P; // [rsp+168h] [rbp-170h] BYREF
  __int64 v187; // [rsp+170h] [rbp-168h] BYREF
  volatile void *v188; // [rsp+178h] [rbp-160h]
  int v189; // [rsp+180h] [rbp-158h] BYREF
  int v190; // [rsp+184h] [rbp-154h] BYREF
  unsigned int v191; // [rsp+188h] [rbp-150h]
  int v192; // [rsp+18Ch] [rbp-14Ch] BYREF
  int v193; // [rsp+190h] [rbp-148h] BYREF
  int v194[2]; // [rsp+198h] [rbp-140h] BYREF
  PVOID v195; // [rsp+1A0h] [rbp-138h] BYREF
  __int16 *v196; // [rsp+1A8h] [rbp-130h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1B0h] [rbp-128h] BYREF
  void *Src; // [rsp+1D0h] [rbp-108h]
  void *v199; // [rsp+1E8h] [rbp-F0h]
  void *v200; // [rsp+1F0h] [rbp-E8h]
  __int128 v201; // [rsp+1F8h] [rbp-E0h] BYREF
  _DWORD *v202; // [rsp+208h] [rbp-D0h]
  _DWORD *v203; // [rsp+210h] [rbp-C8h]
  unsigned int *v204; // [rsp+218h] [rbp-C0h]
  _OWORD *v205; // [rsp+220h] [rbp-B8h]
  __int64 v206; // [rsp+228h] [rbp-B0h]
  unsigned int *v207; // [rsp+230h] [rbp-A8h]
  _DWORD *v208; // [rsp+238h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+240h] [rbp-98h] BYREF
  __int64 v210; // [rsp+260h] [rbp-78h]
  __int128 v211; // [rsp+268h] [rbp-70h] BYREF
  __int64 v212; // [rsp+278h] [rbp-60h]
  int v213; // [rsp+280h] [rbp-58h]
  __int128 v214; // [rsp+288h] [rbp-50h] BYREF

  Src = a2;
  v166 = a6;
  v205 = a7;
  v14 = (__int64)a10;
  v204 = a10;
  v15 = a11;
  v203 = a11;
  v202 = a9;
  v196 = a1;
  v199 = a2;
  v200 = a3;
  v158 = a4;
  v206 = a5;
  v169 = a6;
  v191 = a6;
  v182 = a7;
  v188 = a8;
  v180 = a9;
  *(_QWORD *)&Length[1] = a10;
  v207 = a10;
  Address = a11;
  v208 = a11;
  v190 = 0;
  v183 = 0LL;
  v189 = 0;
  v193 = 0;
  v159 = 0LL;
  v192 = 0;
  v176 = 0LL;
  v163 = 0LL;
  v172 = 0LL;
  v185 = 0LL;
  v167 = 0;
  v165 = 0;
  v214 = 0LL;
  v184 = 0LL;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v201 = 0LL;
  v171 = 0;
  v168 = 0;
  v178 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0;
  v179 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v210 = 0LL;
  v181 = 0LL;
  v157 = 0;
  v156 = 0;
  v177 = 0;
  v195 = 0LL;
  v162[0] = 0;
  v160 = 0;
  v161 = 0;
  *(_QWORD *)v194 = 0LL;
  v187 = 0LL;
  v164 = -1073741790;
  Length[0] = 0;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v153 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v18 = (__int64)a9;
    v17 = *(_DWORD *)v18;
  }
  else
  {
    v17 = *a9;
  }
  Length[0] = v17;
  LODWORD(v182) = -1;
  LODWORD(v187) = -1;
  if ( !(_BYTE)PreviousMode )
  {
    *a11 = 0;
    *a10 = v158;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      v20 = v188;
      goto LABEL_24;
    }
    ProbeForWrite(Address, 4LL * a6, 4u);
    ProbeForWrite(*(volatile void **)&Length[1], 4LL * a6, 4u);
  }
  else
  {
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a11 < 0x7FFFFFFF0000LL )
      v21 = (__int64)a11;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
      v22 = (__int64)a10;
    *(_DWORD *)v22 = *(_DWORD *)v22;
  }
  v23 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v180 < 0x7FFFFFFF0000LL )
    v23 = (__int64)a9;
  *(_DWORD *)v23 = *(_DWORD *)v23;
  v20 = v188;
  ProbeForWrite(v188, Length[0], 4u);
  if ( v188 && Length[0] >= 0x14u )
    *(_DWORD *)v188 = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v214 = *a7;
  result = 0LL;
  PreviousMode = v153;
LABEL_24:
  v24 = Src;
  if ( (int)result < 0 )
    return result;
  if ( (v158 & 0xF0000000) != 0 )
  {
    v25 = -1073741594;
LABEL_322:
    v154 = v25;
LABEL_323:
    v40 = v153;
LABEL_324:
    v37 = a12;
    goto LABEL_325;
  }
  if ( (unsigned __int64)a3 + 6 <= 2 )
    v26 = SepReferenceTokenUsingPseudoHandle((__int64)a3, v14, (__int64 *)&v163, v162, (__int64 *)v194);
  else
    v26 = ObReferenceObjectByHandleWithTag(
            a3,
            8u,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            0x74726853u,
            &v163,
            0LL);
  v25 = v26;
  v154 = v26;
  if ( v26 < 0 )
  {
    v163 = 0LL;
    goto LABEL_323;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v163 + 48) != 2 )
    {
      v25 = -1073741732;
      goto LABEL_322;
    }
    if ( *((int *)v163 + 49) < 1 )
    {
      v25 = -1073741659;
      goto LABEL_322;
    }
  }
  v25 = SeCaptureObjectTypeList(v206, v169, v153, &v184);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  v25 = SeCaptureSecurityDescriptor((_DWORD)v196, v153, 1, 0, (__int64)&v172);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  if ( !v172 )
    goto LABEL_321;
  v196 = (__int16 *)(v172 + 2);
  v27 = *(_WORD *)(v172 + 2);
  if ( v27 >= 0 )
  {
    v29 = *(_QWORD *)(v172 + 8);
  }
  else
  {
    v28 = *(unsigned int *)(v172 + 4);
    if ( !(_DWORD)v28 )
      goto LABEL_321;
    v29 = v172 + v28;
  }
  if ( !v29 )
    goto LABEL_321;
  if ( v27 < 0 )
  {
    v30 = *(unsigned int *)(v172 + 8);
    if ( (_DWORD)v30 )
    {
      v31 = v172 + v30;
      goto LABEL_49;
    }
LABEL_321:
    v25 = -1073741703;
    goto LABEL_322;
  }
  v31 = *(_QWORD *)(v172 + 16);
LABEL_49:
  if ( !v31 )
    goto LABEL_321;
  if ( v162[0] )
    v32 = *(_QWORD *)v194;
  else
    v32 = *((_QWORD *)v163 + 138);
  LOBYTE(Object) = 1;
  v33 = v163;
  v34 = v172;
  v25 = SepTrustLevelCheck(&v182, v172, 0LL, v163, v32, Object, &v182);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  v35 = v158 & 0xFDFFFFFF;
  if ( ((unsigned int)v182 & v158 & 0xFDFFFFFF) != (v158 & 0xFDFFFFFF) )
  {
    v160 = 1;
    goto LABEL_71;
  }
  v25 = SepFilterCheck(v34, (__int64 *)&v178, (__int64)v33, 1, (int *)&v187);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  if ( ((unsigned int)v187 & v35) != v35 )
  {
    v161 = 1;
LABEL_71:
    LOBYTE(v25) = v171;
    v14 = 3221225506LL;
LABEL_72:
    v36 = 0;
    goto LABEL_73;
  }
  v25 = SepMandatoryIntegrityCheck(&v214, v34, 0, (__int64)v33, 1, (__int64)&v201);
  v154 = v25;
  if ( v25 < 0 )
    goto LABEL_323;
  LOBYTE(v25) = 0;
  v171 = v25;
  if ( DWORD2(v201) && (v35 & (unsigned int)v201) != v35 )
  {
    v14 = 3221225506LL;
  }
  else
  {
    v14 = 0LL;
    if ( (v158 & 0x2000000) == 0 )
      goto LABEL_61;
  }
  if ( (*((_DWORD *)v163 + 50) & 0x4000) != 0 )
  {
    LOBYTE(v25) = HIDWORD(v201) <= 0x2000;
    v171 = HIDWORD(v201) <= 0x2000;
  }
LABEL_61:
  if ( (int)v14 < 0 && !(_BYTE)v25 )
    goto LABEL_72;
  v14 = (unsigned int)SePrivilegePolicyCheck(
                        (unsigned int)&v158,
                        (unsigned int)&v167,
                        0,
                        (_DWORD)v163,
                        (__int64)&P,
                        v153);
  if ( v158 || !v167 )
    goto LABEL_72;
  v36 = 1;
LABEL_73:
  if ( (int)v14 < 0 && !(_BYTE)v25 )
  {
    v37 = a12;
    if ( a12 )
    {
      v38 = 0;
      v15 = *(_DWORD **)&Length[1];
      PreviousMode = (unsigned __int64)Address;
      while ( 1 )
      {
        v170 = v38;
        if ( v38 >= v169 )
          break;
        *(_DWORD *)(PreviousMode + 4LL * v38) = v14;
        v15[v38++] = 0;
      }
    }
    else
    {
      *(_DWORD *)Address = v14;
      **(_DWORD **)&Length[1] = 0;
    }
    v164 = v14;
    v25 = 0;
    v154 = 0;
    v39 = v159;
    v40 = v153;
    goto LABEL_326;
  }
  v41 = P;
  if ( P )
  {
    v42 = *(_DWORD *)P;
    v43 = 12 * *(_DWORD *)P;
    v44 = v43 + 8;
    if ( !*(_DWORD *)P )
      v44 = 8;
    if ( v44 > Length[0] )
    {
      v45 = v43 + 8;
      if ( !v42 )
        v45 = 8;
      *v180 = v45;
      v25 = -1073741789;
      v154 = -1073741789;
      v40 = v153;
      ExFreePoolWithTag(v41, 0);
      goto LABEL_324;
    }
    v46 = v43 + 8;
    if ( !v42 )
      v46 = 8;
    memmove(v20, P, v46);
    ExFreePoolWithTag(v41, 0);
  }
  else
  {
    if ( Length[0] < 0x14u )
    {
      *v180 = 20;
      v25 = -1073741789;
      v154 = -1073741789;
      v39 = v159;
      v37 = a12;
      v40 = v153;
      goto LABEL_326;
    }
    *v20 = 0LL;
  }
  if ( v24 )
  {
    v25 = SeCaptureSid(v24, Tag, 1, (__int64)&v185);
    v154 = v25;
    if ( v25 < 0 )
    {
      v185 = 0LL;
      goto LABEL_323;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v48 = (char *)v163;
  v49 = *((_QWORD *)v163 + 6);
  v50 = *(_WORD *)(v49 + 26);
  v51 = v50 & 0x41;
  if ( FeatureFastResource2 )
  {
    if ( v51 != 1 )
    {
      if ( (v50 & 1) == 0 )
        goto LABEL_115;
      CurrentIrql = KeGetCurrentIrql();
      v53 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v53->ApcState.InProgressFlags & 2) == 0 )
      {
        if ( !CurrentIrql && (v53->MiscFlags & 0x400) == 0 && !v53->WaitBlock[3].SpareLong )
          goto LABEL_374;
        v50 = *(_WORD *)(v49 + 26);
        goto LABEL_113;
      }
LABEL_370:
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    }
LABEL_368:
    KeBugCheckEx(0x1C6u, 0xFuLL, v49, 0LL, 0LL);
  }
  if ( v51 == 1 )
    goto LABEL_368;
  if ( (v50 & 1) == 0 )
    goto LABEL_115;
  v54 = KeGetCurrentIrql();
  v55 = KeGetCurrentThread();
  if ( v54 > 1u )
    KeBugCheckEx(0x1C6u, 0LL, v54, 1uLL, 0LL);
  if ( (v55->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_370;
  if ( !v54 && (v55->MiscFlags & 0x400) == 0 && !v55->WaitBlock[3].SpareLong )
    goto LABEL_374;
LABEL_113:
  v48 = (char *)v163;
  if ( (v50 & 1) != 0 )
  {
    ExpFastResourceLegacyAcquireShared(*((_QWORD *)v163 + 6));
    goto LABEL_116;
  }
LABEL_115:
  ExpAcquireResourceSharedLite(*((_QWORD *)v163 + 6), 1);
LABEL_116:
  if ( *v196 >= 0 )
  {
    v57 = *(_QWORD *)(v172 + 8);
  }
  else
  {
    v56 = *(unsigned int *)(v172 + 4);
    if ( (_DWORD)v56 )
      v57 = v172 + v56;
    else
      v57 = 0LL;
  }
  LOBYTE(Objecta) = 0;
  LOBYTE(Tag) = 0;
  v60 = SepSidInTokenSidHash(v48 + 232, 0LL, v57, 0LL, Tag, Objecta);
  v155 = v60;
  if ( v60 && *((_DWORD *)v48 + 32) )
  {
    LOBYTE(Objectb) = 0;
    LOBYTE(Taga) = 1;
    v60 = SepSidInTokenSidHash(v48 + 504, 0LL, v57, 0LL, Taga, Objectb);
    v155 = v60;
  }
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v48 + 50) & 0x20) == 0 )
  {
    v61 = *((_QWORD *)v48 + 27);
    if ( v61 )
    {
      if ( (*(_DWORD *)(v61 + 32) & 0x20) != 0 )
      {
        v37 = a12;
        if ( a12 )
        {
          v62 = 0;
          v63 = *(_QWORD *)&Length[1];
          v64 = Address;
          while ( 1 )
          {
            v170 = v62;
            if ( v62 >= v169 )
              break;
            v64[v62] = -1073741790;
            *(_DWORD *)(v63 + 4LL * v62++) = 0;
          }
        }
        else
        {
          *(_DWORD *)Address = -1073741790;
          **(_DWORD **)&Length[1] = 0;
        }
        v164 = -1073741790;
        v154 = 0;
        v40 = v153;
        v65 = (struct _ERESOURCE *)*((_QWORD *)v48 + 6);
LABEL_134:
        ExReleaseResourceLite(v65);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v25 = 0;
LABEL_325:
        v39 = v159;
        goto LABEL_326;
      }
    }
  }
  v66 = v172;
  if ( SepRmEnforceCap )
  {
    v67 = *(_WORD *)(v172 + 2);
    if ( (v67 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
    {
      if ( v67 >= 0 )
      {
        v69 = *(_QWORD *)(v172 + 24);
      }
      else
      {
        v68 = *(unsigned int *)(v172 + 12);
        if ( !(_DWORD)v68 )
        {
          v179 = 0LL;
          goto LABEL_148;
        }
        v69 = v172 + v68;
      }
      v179 = v69;
      if ( v69 )
      {
        ScopedPolicySid = (void *)SepGetScopedPolicySid(v69, v58, v59);
        if ( ScopedPolicySid )
        {
          Cap = SepRmReferenceFindCap(ScopedPolicySid);
          v72 = v181;
          if ( Cap < 0 )
            v72 = SepRmDefaultCap;
          v181 = v72;
          v157 = 1;
        }
      }
    }
  }
LABEL_148:
  v73 = v158;
  if ( (v158 & 0x2060000) != 0
    && v60
    && ((v74 = *(_WORD *)(v66 + 2), (v74 & 4) != 0)
      ? (v74 >= 0
       ? (v75 = *(_QWORD *)(v66 + 32))
       : (v76 = *(unsigned int *)(v66 + 16), (_DWORD)v76)
       ? (v75 = v66 + v76)
       : (v75 = 0LL))
      : (v75 = 0LL),
        !RtlpOwnerAcesPresent(0, v75)) )
  {
    if ( (v73 & 0x2000000) != 0 )
    {
      v77 = 393216;
      v78 = v167 | 0x60000;
    }
    else
    {
      v77 = v73 & 0x60000;
      v78 = v167 | v73 & 0x60000;
    }
    v165 = v77;
    v167 = v78;
    v73 &= 0xFFF9FFFF;
    v158 = v73;
  }
  else
  {
    v78 = v167;
  }
  if ( v73 || v157 && !v36 )
  {
    v79 = v163;
  }
  else
  {
    v79 = v163;
    if ( (*((_DWORD *)v163 + 50) & 0x2000) != 0 || !v165 )
    {
      v37 = a12;
      if ( a12 )
      {
        v80 = 0;
        v81 = v207;
        v82 = v208;
        while ( 1 )
        {
          v170 = v80;
          if ( v80 >= v169 )
            break;
          if ( v78 )
          {
            v82[v80] = 0;
            v164 = 0;
            v81[v80] = v78;
          }
          else
          {
            v82[v80] = -1073741790;
            v164 = -1073741790;
            v81[v80] = 0;
          }
          ++v80;
        }
      }
      else if ( v78 )
      {
        *(_DWORD *)Address = 0;
        v164 = 0;
        **(_DWORD **)&Length[1] = v78;
      }
      else
      {
        *(_DWORD *)Address = -1073741790;
        v164 = -1073741790;
        **(_DWORD **)&Length[1] = 0;
      }
      v154 = 0;
      v40 = v153;
      v65 = (struct _ERESOURCE *)*((_QWORD *)v79 + 6);
      goto LABEL_134;
    }
  }
  v83 = v191;
  v84 = 8LL * v191;
  if ( a12 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8LL * v191, 1632068947LL);
    v86 = Pool2;
    v183 = Pool2;
    if ( !Pool2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v79 + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v25 = -1073741670;
      goto LABEL_322;
    }
    v87 = v83;
    v88 = (int *)&Pool2[v87];
  }
  else
  {
    v86 = (unsigned int *)&v190;
    v183 = &v190;
    v88 = &v189;
    v87 = v191;
  }
  v180 = v88;
  LODWORD(v211) = v165;
  SepAccessCheck(
    v66,
    v185,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v79,
    v73,
    (__int128 *)v184,
    v169,
    &v214,
    v78,
    v153,
    v86,
    0LL,
    v88,
    a12,
    v155,
    (int *)&v211,
    &v178,
    0LL,
    0LL);
  v89 = (char *)v180;
  if ( SepRmEnforceCap && *v180 >= 0 && v157 )
  {
    v37 = a12;
    if ( a12 )
    {
      v90 = (_DWORD *)ExAllocatePool2(256LL, v84, 1632068947LL);
      v39 = v90;
      v159 = v90;
      if ( !v90 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v163 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v25 = -1073741670;
        v154 = -1073741670;
        v40 = v153;
        goto LABEL_326;
      }
      v91 = &v90[v87];
    }
    else
    {
      v159 = &v193;
      v91 = &v192;
    }
    v176 = v91;
    v92 = *(_DWORD *)v89;
    v93 = (char *)v183;
    v94 = *(_DWORD *)v183;
    v165 = *(_DWORD *)v183;
    LOBYTE(v173) = 0;
    v95 = v169;
    if ( v169 )
    {
      v25 = SepCopyObjectTypeList(v184, v169, &v195);
      v154 = v25;
      if ( v25 < 0 )
      {
        v40 = v153;
        goto LABEL_325;
      }
      v94 = v165;
    }
    v96 = 0;
    v169 = 0;
    v97 = v181;
    for ( i = v163; v96 < *(_DWORD *)(v181 + 60); v97 = v181 )
    {
      v99 = *(_QWORD *)(v97 + 8LL * v96 + 64);
      if ( !*(_QWORD *)(v99 + 24) )
        goto LABEL_234;
      v100 = v178;
      if ( !v178 )
      {
        v101 = AuthzBasepInitializeResourceClaimsFromSacl(v179, (__int64 *)&v178);
        v102 = (unsigned __int8)v173;
        if ( v101 < 0 )
          v102 = 1;
        v173 = v102;
        v100 = v178;
      }
      v103 = (_QWORD *)*((_QWORD *)i + 137);
      v104 = v103 ? v103[75] : 0LL;
      v105 = v103 ? v103[73] : 0LL;
      v106 = v103 ? v103[74] : 0LL;
      v107 = v103 ? v103[72] : 0LL;
      v108 = AuthzBasepEvaluateAceCondition(
               (__int64)i,
               *((void **)i + 97),
               (__int64)v100,
               v107,
               v106,
               v105,
               v104,
               *(_DWORD **)(v99 + 24),
               *(_DWORD *)(v99 + 16),
               1,
               0,
               &v177);
      v154 = v108;
      v109 = v177;
      if ( v177 == 1 )
        goto LABEL_234;
      if ( v108 < 0 )
        goto LABEL_253;
      if ( (*((_DWORD *)i + 50) & 0x10) != 0 )
      {
        v110 = (_QWORD *)*((_QWORD *)i + 137);
        if ( v110 )
          v111 = v110[75];
        else
          v111 = 0LL;
        if ( v110 )
          v112 = v110[73];
        else
          v112 = 0LL;
        if ( v110 )
          v113 = v110[74];
        else
          v113 = 0LL;
        if ( v110 )
          v114 = v110[72];
        else
          v114 = 0LL;
        v154 = AuthzBasepEvaluateAceCondition(
                 (__int64)i,
                 *((void **)i + 97),
                 (__int64)v178,
                 v114,
                 v113,
                 v112,
                 v111,
                 *(_DWORD **)(v99 + 24),
                 *(_DWORD *)(v99 + 16),
                 1,
                 1,
                 &v177);
        if ( v154 < 0 )
        {
LABEL_253:
          ExReleaseResourceLite(*((PERESOURCE *)i + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v25 = v154;
          goto LABEL_323;
        }
        v109 = v177;
      }
      if ( (_BYTE)v173 || v109 == 1 )
      {
LABEL_234:
        v154 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v154 < 0 )
          goto LABEL_253;
        v115 = v158;
        if ( (*(_DWORD *)(v99 + 48) & 1) != 0 )
        {
          if ( (v158 & 0x2000000) == 0 )
            v115 = v167 | v158;
          v116 = 0;
        }
        else
        {
          v116 = v167;
        }
        v117 = (int *)v159;
        v118 = v195;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v185,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)i,
          v115,
          (__int128 *)v195,
          v95,
          &v214,
          v116,
          v153,
          (unsigned int *)v159,
          0LL,
          v176,
          a12,
          v155,
          (int *)&v211,
          &v178,
          0LL,
          0LL);
        if ( v156 )
          v94 = *v117 & v165;
        else
          v94 = *v117;
        v165 = v94;
        if ( v94 )
          v92 = *v176;
        else
          v92 = -1073741790;
        v156 = 1;
        if ( v118 )
          SepMergeObjectTypeListAccesses(v184, v118, v95);
        if ( v92 < 0 )
          break;
      }
      else
      {
        v94 = v165;
      }
      v96 = v169 + 1;
      v169 = v96;
    }
    *(_DWORD *)v89 = v92;
    *(_DWORD *)v93 &= v94;
  }
  else
  {
    i = v163;
    v93 = (char *)v183;
    v95 = v169;
  }
  v119 = *((_QWORD *)i + 6);
  v120 = *(_WORD *)(v119 + 26);
  v121 = v120 & 0x41;
  if ( !FeatureFastResource2 )
  {
    if ( v121 != 1 )
    {
      if ( (v120 & 1) == 0 )
        goto LABEL_271;
      v124 = KeGetCurrentIrql();
      v125 = KeGetCurrentThread();
      if ( v124 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v124, 2uLL, 0LL);
      if ( v124 || (v125->MiscFlags & 0x400) != 0 || v125->WaitBlock[3].SpareLong )
        goto LABEL_262;
LABEL_374:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_372:
    KeBugCheckEx(0x1C6u, 0xFuLL, v119, 0LL, 0LL);
  }
  if ( v121 == 1 )
    goto LABEL_372;
  if ( (v120 & 1) == 0 )
    goto LABEL_271;
  v122 = KeGetCurrentIrql();
  v123 = KeGetCurrentThread();
  if ( v122 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v122, 2uLL, 0LL);
  if ( !v122 && (v123->MiscFlags & 0x400) == 0 && !v123->WaitBlock[3].SpareLong )
    goto LABEL_374;
LABEL_262:
  if ( (v120 & 1) != 0 )
  {
    ExpFastResourceLegacyRelease(*((_QWORD *)i + 6));
    goto LABEL_272;
  }
LABEL_271:
  ExpReleaseResourceForThreadLite(*((_QWORD *)i + 6), (ULONG_PTR)KeGetCurrentThread());
LABEL_272:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v126 = v158 & 0x2000000;
  if ( (v158 & 0x2000000) != 0 )
  {
    if ( !v171 || !*(_WORD *)((char *)&v212 + 5) && (*((_DWORD *)v163 + 50) & 0x3000000) != 0x3000000 )
    {
      v127 = v166;
      v128 = v166;
      v37 = a12;
      if ( !a12 )
        v128 = 0;
      SepConstrainByMandatory((__int64)&v201, v158, v93, v89, 0LL, v128);
      goto LABEL_304;
    }
  }
  else if ( v171 && !*(_WORD *)((char *)&v212 + 5) )
  {
    if ( (*((_DWORD *)v163 + 50) & 0x3000000) != 0x3000000 || HIDWORD(v211) )
    {
      v37 = a12;
      if ( a12 )
      {
        v140 = 0;
        v15 = *(_DWORD **)&Length[1];
        PreviousMode = (unsigned __int64)Address;
        while ( 1 )
        {
          v170 = v140;
          if ( v140 >= v95 )
            break;
          *(_DWORD *)(PreviousMode + 4LL * v140) = -1073741790;
          v15[v140++] = 0;
        }
      }
      else
      {
        *(_DWORD *)Address = -1073741790;
        **(_DWORD **)&Length[1] = 0;
      }
      v164 = -1073741790;
      v25 = 0;
      v154 = 0;
      v39 = v159;
      v40 = v153;
      goto LABEL_326;
    }
    HIBYTE(v212) = 1;
    v37 = a12;
    if ( a12 )
    {
      v129 = 0;
      if ( v95 < 0x10 || (v130 = v95 - 1, v93 <= &v89[4 * v130]) && &v93[4 * v130] >= v89 )
      {
        v132 = v167;
        v127 = v166;
      }
      else
      {
        v127 = v166;
        v131 = v166 & 0xFFFFFFF0;
        v132 = v167;
        v133 = _mm_or_si128(
                 _mm_shuffle_epi32(_mm_cvtsi32_si128(v158), 0),
                 _mm_shuffle_epi32(_mm_cvtsi32_si128(v167), 0));
        v134 = 8;
        do
        {
          *(_OWORD *)&v89[4 * v129] = 0LL;
          *(__m128i *)&v93[4 * v129] = v133;
          v135 = v134 - 4;
          *(_OWORD *)&v89[4 * v135] = 0LL;
          *(__m128i *)&v93[4 * v135] = v133;
          *(_OWORD *)&v89[4 * v134] = 0LL;
          *(__m128i *)&v93[4 * v134] = v133;
          v136 = v134 + 4;
          *(_OWORD *)&v89[4 * v136] = 0LL;
          *(__m128i *)&v93[4 * v136] = v133;
          v129 += 16;
          v134 += 16;
        }
        while ( v129 < v131 );
      }
      if ( v129 < v95 )
      {
        v137 = v132 | v158;
        v138 = (int *)&v93[4 * v129];
        v139 = v95 - v129;
        do
        {
          *(int *)((char *)v138 + v89 - v93) = 0;
          *v138++ = v137;
          --v139;
        }
        while ( v139 );
      }
      goto LABEL_304;
    }
    *(_DWORD *)v89 = 0;
    *(_DWORD *)v93 = v167 | v158;
    goto LABEL_303;
  }
  v37 = a12;
LABEL_303:
  v127 = v166;
LABEL_304:
  if ( v126 )
  {
    if ( !v37 )
      v127 = 0;
    SepConstrainByConstraintMask((int)v182, v158, v93, v89, 0LL, v127, &v160);
    SepConstrainByConstraintMask(v187, v158, v93, v89, 0LL, v127, &v161);
  }
  v15 = Address;
  *(_DWORD *)Address = *(_DWORD *)v89;
  v14 = *(_QWORD *)&Length[1];
  **(_DWORD **)&Length[1] = *(_DWORD *)v93;
  v164 = *(_DWORD *)v89;
  PreviousMode = (unsigned __int64)v176;
  v39 = v159;
  if ( SepRmEnforceCap && v156 && *(int *)v89 >= 0 )
  {
    *v15 = *v176;
    *(_DWORD *)v14 &= *v39;
    v164 = *(_DWORD *)PreviousMode;
  }
  if ( v37 )
  {
    for ( j = 1; ; j = v170 + 1 )
    {
      v170 = j;
      if ( j >= v95 )
        break;
      v142 = 4LL * j;
      v15[(unsigned __int64)v142 / 4] = *(_DWORD *)&v89[v142];
      *(_DWORD *)(v14 + v142) = *(_DWORD *)&v93[v142];
      if ( SepRmEnforceCap && v156 && *(int *)&v89[v142] >= 0 )
      {
        v15[j] = *(_DWORD *)(4LL * j + PreviousMode);
        *(_DWORD *)(v14 + 4LL * j) &= v39[j];
      }
    }
  }
  v25 = 0;
  v154 = 0;
  v40 = v153;
LABEL_326:
  if ( v172 && v163 )
  {
    if ( v160 || v161 )
      goto LABEL_335;
    if ( HIDWORD(v211) || (*((_DWORD *)v163 + 50) & 0x4000) == 0 )
    {
LABEL_338:
      if ( v25 >= 0
        && v164 < 0
        && !HIDWORD(v211)
        && (*((_DWORD *)v163 + 50) & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v211, v158) )
      {
        SepLogLpacAccessFailure();
      }
      goto LABEL_344;
    }
    if ( v25 >= 0 )
    {
      if ( v164 < 0 || HIBYTE(v212) )
      {
LABEL_335:
        v143 = KeGetCurrentThread();
        --v143->KernelApcDisable;
        v144 = v163;
        ExAcquireResourceSharedLite(*((PERESOURCE *)v163 + 6), 1u);
        v145 = *(_QWORD *)v194;
        if ( !v162[0] )
          v145 = *((_QWORD *)v144 + 138);
        SeLogAccessFailure((char *)v144, 0LL, 0LL, v145, v172, v167 | v158, v164 >= 0);
        ExReleaseResourceLite(*((PERESOURCE *)v144 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v25 = v154;
        goto LABEL_338;
      }
      goto LABEL_338;
    }
  }
LABEL_344:
  if ( v37 )
  {
    if ( v183 )
      ExFreePoolWithTag(v183, 0);
    if ( v39 )
      ExFreePoolWithTag(v39, 0);
  }
  if ( v163 )
    ObfDereferenceObjectWithTag(v163, 0x74726853u);
  if ( v184 )
    ExFreePoolWithTag(v184, 0);
  if ( v185 )
  {
    LOBYTE(v15) = 1;
    SeReleaseSid(v185, v40, v15, PreviousMode);
  }
  if ( v172 )
    SeReleaseSecurityDescriptor(v172, v40, 0LL, PreviousMode);
  if ( v157 )
  {
    v146 = *(_QWORD *)(v181 + 32);
    if ( v146 )
      SepRmDereferenceCapTable(v146, v14, v15);
  }
  if ( v195 )
    ExFreePoolWithTag(v195, 0);
  v147 = v178;
  if ( v178 )
  {
    AuthzBasepFreeSecurityAttributesList(v178);
    ExFreePoolWithTag(v147, 0);
  }
  return (unsigned int)v25;
}
