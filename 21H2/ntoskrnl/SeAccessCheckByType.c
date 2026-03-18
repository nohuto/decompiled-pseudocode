/*
 * XREFs of SeAccessCheckByType @ 0x1402FBEC0
 * Callers:
 *     NtAccessCheckByType @ 0x140241910 (NtAccessCheckByType.c)
 *     NtAccessCheck @ 0x1402FDDF0 (NtAccessCheck.c)
 *     NtAccessCheckByTypeResultList @ 0x1405F3FA0 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140218B60 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140219130 (AuthzBasepEvaluateAceCondition.c)
 *     RtlpOwnerAcesPresent @ 0x14022A380 (RtlpOwnerAcesPresent.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14023B484 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepConstrainByConstraintMask @ 0x14023F0CC (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x1402402D0 (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x14024429C (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x14024F43C (SepLpacCausedAccessFailure.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SepTrustLevelCheck @ 0x1402F9614 (SepTrustLevelCheck.c)
 *     SepAccessCheck @ 0x1402FA820 (SepAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1402FB7E0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x1402FBC90 (SepFilterCheck.c)
 *     SeCaptureObjectTypeList @ 0x1402FD2CC (SeCaptureObjectTypeList.c)
 *     SePrivilegePolicyCheck @ 0x1402FD4DC (SePrivilegePolicyCheck.c)
 *     SepSidInTokenSidHash @ 0x1402FD65C (SepSidInTokenSidHash.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FDBE0 (ExpReleaseResourceForThreadLite.c)
 *     SepLogLpacAccessFailure @ 0x140374F38 (SepLogLpacAccessFailure.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14039C618 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExpFastResourceLegacyRelease @ 0x14039CA48 (ExpFastResourceLegacyRelease.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405F412C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x1405F41D0 (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x1405F4288 (SepGetScopedPolicySid.c)
 *     SepMergeObjectTypeListAccesses @ 0x1405F42D0 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1405F4304 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x1405F5D18 (SepRmReferenceFindCap.c)
 *     SeReleaseSid @ 0x140668444 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x14066846C (SeCaptureSid.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int16 *a1,
        void *a2,
        void *a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        _DWORD *Address,
        PERESOURCE *a9,
        unsigned int *a10,
        int *a11,
        char a12)
{
  unsigned __int64 v13; // rdx
  _DWORD *v14; // r8
  int *v15; // r9
  unsigned __int8 PreviousMode; // r13
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  int v23; // eax
  int v24; // edi
  __int16 v25; // cx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // r14
  __int64 v32; // rsi
  unsigned int v33; // r15d
  char v34; // cl
  PVOID v35; // rsi
  __int64 CurrentIrql; // rdx
  struct _KTHREAD *v37; // r8
  struct _KTHREAD *CurrentThread; // rax
  char *v39; // rsi
  ULONG_PTR v40; // rdi
  __int64 v41; // rcx
  __int16 *v42; // r14
  __int64 v43; // rcx
  __int64 v44; // rdi
  char v45; // r12
  __int64 v46; // r13
  unsigned int v47; // edi
  unsigned int v48; // r15d
  PERESOURCE *v49; // r14
  char v50; // al
  unsigned int *v51; // rcx
  int *v52; // rsi
  char *v53; // r14
  __int16 v54; // cx
  bool v55; // zf
  PERESOURCE v56; // rcx
  int v57; // edi
  char v58; // r15
  unsigned int v59; // r12d
  _DWORD *v60; // r11
  unsigned int j; // eax
  __int64 v62; // rcx
  PVOID v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // eax
  struct _KTHREAD *v70; // rax
  PVOID v71; // rbx
  ULONGLONG v72; // r9
  _DWORD *v73; // rax
  unsigned int v74; // ecx
  unsigned int *v75; // rdx
  int *v76; // r8
  unsigned int v77; // ecx
  unsigned int v78; // ecx
  unsigned __int8 v79; // al
  struct _KTHREAD *v80; // rdx
  int v81; // ecx
  int v82; // eax
  unsigned int v83; // edx
  int v84; // eax
  unsigned int v85; // eax
  void *OwnerEntryForLegacyShim; // r14
  __int64 v87; // rax
  int *v88; // r8
  unsigned int v89; // ecx
  _DWORD *v90; // r9
  __int64 v91; // rax
  __int64 v92; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v95; // rdx
  unsigned int *Pool2; // rax
  int v97; // r14d
  char *v98; // rax
  __int64 v99; // rax
  _DWORD *v100; // r15
  int v101; // r13d
  __int64 v102; // rdi
  PVOID v103; // r8
  int v104; // eax
  int v105; // ecx
  _QWORD *v106; // rax
  __int64 v107; // r10
  __int64 v108; // rdx
  __int64 v109; // rcx
  void *v110; // r9
  int v111; // eax
  int v112; // ecx
  _QWORD *v113; // rax
  __int64 v114; // r8
  __int64 v115; // rdx
  __int64 v116; // rcx
  void *v117; // r9
  unsigned int v118; // eax
  unsigned int v119; // ecx
  int *v120; // r14
  PVOID v121; // rdi
  int v122; // edx
  unsigned int i; // edx
  __int64 v124; // rcx
  __int64 v125; // rcx
  int Tag; // [rsp+20h] [rbp-298h]
  int Taga; // [rsp+20h] [rbp-298h]
  int Object; // [rsp+28h] [rbp-290h]
  int Objecta; // [rsp+28h] [rbp-290h]
  char v130; // [rsp+A0h] [rbp-218h]
  char v131; // [rsp+A1h] [rbp-217h]
  int v132; // [rsp+A4h] [rbp-214h]
  char v133; // [rsp+A8h] [rbp-210h]
  char v134; // [rsp+B8h] [rbp-200h]
  char v135; // [rsp+B9h] [rbp-1FFh]
  unsigned int v136; // [rsp+C0h] [rbp-1F8h] BYREF
  char v137; // [rsp+C8h] [rbp-1F0h] BYREF
  char v138; // [rsp+C9h] [rbp-1EFh] BYREF
  char v139[2]; // [rsp+CAh] [rbp-1EEh] BYREF
  int v140; // [rsp+CCh] [rbp-1ECh]
  unsigned int v141; // [rsp+D4h] [rbp-1E4h] BYREF
  PVOID v142; // [rsp+D8h] [rbp-1E0h] BYREF
  unsigned int v143; // [rsp+E0h] [rbp-1D8h]
  int v144; // [rsp+E4h] [rbp-1D4h]
  __int64 v145; // [rsp+E8h] [rbp-1D0h] BYREF
  int v146; // [rsp+F0h] [rbp-1C8h]
  volatile void *v147; // [rsp+F8h] [rbp-1C0h]
  PERESOURCE *v148; // [rsp+100h] [rbp-1B8h]
  SIZE_T Length; // [rsp+108h] [rbp-1B0h]
  int *v150; // [rsp+110h] [rbp-1A8h]
  int v151; // [rsp+118h] [rbp-1A0h] BYREF
  PVOID v152; // [rsp+120h] [rbp-198h]
  int *v153; // [rsp+128h] [rbp-190h]
  PVOID v154; // [rsp+130h] [rbp-188h]
  PVOID P; // [rsp+138h] [rbp-180h] BYREF
  __int64 v156; // [rsp+140h] [rbp-178h]
  PVOID Src; // [rsp+148h] [rbp-170h] BYREF
  _OWORD *v158; // [rsp+150h] [rbp-168h] BYREF
  PVOID v159; // [rsp+158h] [rbp-160h] BYREF
  __int64 v160; // [rsp+160h] [rbp-158h] BYREF
  __int64 v161; // [rsp+168h] [rbp-150h]
  __int64 v162; // [rsp+170h] [rbp-148h] BYREF
  int v163; // [rsp+178h] [rbp-140h] BYREF
  int v164; // [rsp+17Ch] [rbp-13Ch] BYREF
  int v165; // [rsp+180h] [rbp-138h] BYREF
  int v166; // [rsp+184h] [rbp-134h] BYREF
  void *v167; // [rsp+188h] [rbp-130h]
  ULONGLONG v168; // [rsp+190h] [rbp-128h] BYREF
  PVOID v169; // [rsp+198h] [rbp-120h] BYREF
  __int16 *v170; // [rsp+1A0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1A8h] [rbp-110h] BYREF
  void *v172; // [rsp+1D8h] [rbp-E0h]
  void *v173; // [rsp+1E0h] [rbp-D8h]
  _DWORD *v174; // [rsp+1E8h] [rbp-D0h]
  __int128 v175; // [rsp+1F0h] [rbp-C8h] BYREF
  __int64 v176; // [rsp+200h] [rbp-B8h]
  unsigned int *v177; // [rsp+208h] [rbp-B0h]
  int *v178; // [rsp+210h] [rbp-A8h]
  _OWORD SecurityDescriptor[2]; // [rsp+218h] [rbp-A0h] BYREF
  __int64 v180; // [rsp+238h] [rbp-80h]
  __int128 v181; // [rsp+240h] [rbp-78h] BYREF
  __int64 v182; // [rsp+250h] [rbp-68h]
  int v183; // [rsp+258h] [rbp-60h]
  __int128 v184; // [rsp+260h] [rbp-58h] BYREF

  v167 = a2;
  v170 = a1;
  v172 = a2;
  v173 = a3;
  v136 = a4;
  v176 = a5;
  v158 = a7;
  v174 = Address;
  v13 = (unsigned __int64)a9;
  v148 = a9;
  v14 = a10;
  v147 = a10;
  v177 = a10;
  v15 = a11;
  v150 = a11;
  v178 = a11;
  v163 = 0;
  v154 = 0LL;
  v166 = 0;
  v165 = 0;
  v152 = 0LL;
  v164 = 0;
  v153 = 0LL;
  v142 = 0LL;
  v145 = 0LL;
  v160 = 0LL;
  v141 = 0;
  v144 = 0;
  v184 = 0LL;
  v159 = 0LL;
  Src = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v175 = 0LL;
  v131 = 0;
  P = 0LL;
  v181 = 0LL;
  v182 = 0LL;
  v183 = 0;
  v156 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v180 = 0LL;
  v161 = 0LL;
  v135 = 0;
  v133 = 0;
  v151 = 0;
  v134 = 0;
  v169 = 0LL;
  v138 = 0;
  v137 = 0;
  v139[0] = 0;
  v168 = 0LL;
  v162 = 0LL;
  v140 = -1073741790;
  LODWORD(Length) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v130 = PreviousMode;
  if ( PreviousMode )
  {
    v17 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v18 = *(_DWORD *)v17;
  }
  else
  {
    v18 = *(_DWORD *)a9;
  }
  LODWORD(Length) = v18;
  LODWORD(v158) = -1;
  LODWORD(v162) = -1;
  if ( !PreviousMode )
  {
    *a11 = 0;
    *a10 = v136;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      goto LABEL_24;
    }
    ProbeForWrite(a11, 4LL * a6, 4u);
    ProbeForWrite(v147, 4LL * a6, 4u);
    v13 = (unsigned __int64)v148;
  }
  else
  {
    v19 = (__int64)a11;
    if ( (unsigned __int64)a11 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = (__int64)a10;
    if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  v21 = v13;
  if ( v13 >= 0x7FFFFFFF0000LL )
    v21 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v21 = *(_DWORD *)v21;
  ProbeForWrite(Address, (unsigned int)Length, 4u);
  if ( Address && (unsigned int)Length >= 0x14 )
    *Address = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v184 = *a7;
  result = 0LL;
LABEL_24:
  if ( (int)result < 0 )
    return result;
  if ( (v136 & 0xF0000000) != 0 )
  {
    v24 = -1073741594;
    goto LABEL_212;
  }
  if ( (unsigned __int64)a3 + 6 <= 2 )
    v23 = SepReferenceTokenUsingPseudoHandle((__int64)a3, v13, (__int64 *)&v142, &v138, &v168);
  else
    v23 = ObReferenceObjectByHandleWithTag(
            a3,
            8u,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            0x74726853u,
            &v142,
            0LL);
  v24 = v23;
  v132 = v23;
  if ( v23 < 0 )
  {
    v142 = 0LL;
    v58 = a12;
    goto LABEL_102;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v142 + 48) != 2 )
    {
      v24 = -1073741732;
      goto LABEL_212;
    }
    if ( *((int *)v142 + 49) < 1 )
    {
      v24 = -1073741659;
      goto LABEL_212;
    }
  }
  v24 = SeCaptureObjectTypeList(v176, a6, PreviousMode, &v159);
  v132 = v24;
  if ( v24 < 0
    || (v24 = SeCaptureSecurityDescriptor((_DWORD)v170, PreviousMode, 1, 0, (__int64)&v145), v132 = v24, v24 < 0) )
  {
LABEL_180:
    v58 = a12;
    goto LABEL_102;
  }
  if ( !v145 )
    goto LABEL_217;
  v170 = (__int16 *)(v145 + 2);
  v25 = *(_WORD *)(v145 + 2);
  if ( v25 >= 0 )
  {
    v27 = *(_QWORD *)(v145 + 8);
  }
  else
  {
    v26 = *(unsigned int *)(v145 + 4);
    if ( !(_DWORD)v26 )
      goto LABEL_217;
    v27 = v145 + v26;
  }
  if ( !v27 )
    goto LABEL_217;
  if ( v25 < 0 )
  {
    v28 = *(unsigned int *)(v145 + 8);
    if ( (_DWORD)v28 )
    {
      v29 = v145 + v28;
      goto LABEL_42;
    }
LABEL_217:
    v24 = -1073741703;
    goto LABEL_212;
  }
  v29 = *(_QWORD *)(v145 + 16);
LABEL_42:
  if ( !v29 )
    goto LABEL_217;
  if ( v138 )
    v30 = v168;
  else
    v30 = *((_QWORD *)v142 + 138);
  v31 = v142;
  v32 = v145;
  v24 = SepTrustLevelCheck((__int64)&v158, v145, 0LL, (__int64)v142, v30, 1, (int *)&v158);
  v132 = v24;
  if ( v24 < 0 )
    goto LABEL_180;
  v33 = v136 & 0xFDFFFFFF;
  if ( ((unsigned int)v158 & v136 & 0xFDFFFFFF) != (v136 & 0xFDFFFFFF) )
  {
    v137 = 1;
    goto LABEL_228;
  }
  v24 = SepFilterCheck(v32, (__int64 *)&P, v31, 1, (int *)&v162);
  v132 = v24;
  if ( v24 < 0 )
    goto LABEL_180;
  if ( ((unsigned int)v162 & v33) != v33 )
  {
    v139[0] = 1;
LABEL_228:
    v13 = 3221225506LL;
    goto LABEL_55;
  }
  v24 = SepMandatoryIntegrityCheck((int *)&v184, v32, 0LL, (__int64)v31, 1, (__int64)&v175);
  v132 = v24;
  if ( v24 < 0 )
    goto LABEL_180;
  v34 = 0;
  v131 = 0;
  if ( DWORD2(v175) && (v33 & (unsigned int)v175) != v33 )
  {
    v13 = 3221225506LL;
  }
  else
  {
    v13 = 0LL;
    if ( (v136 & 0x2000000) == 0 )
      goto LABEL_53;
  }
  if ( (*((_DWORD *)v142 + 50) & 0x4000) != 0 && HIDWORD(v175) <= 0x2000 )
  {
    v34 = 1;
    v131 = 1;
  }
LABEL_53:
  if ( (v13 & 0x80000000) != 0LL && !v34 )
    goto LABEL_56;
  v13 = (unsigned int)SePrivilegePolicyCheck(
                        (unsigned int)&v136,
                        (unsigned int)&v141,
                        0,
                        (_DWORD)v142,
                        (__int64)&Src,
                        PreviousMode);
  if ( v136 )
  {
LABEL_55:
    v34 = v131;
    goto LABEL_56;
  }
  v34 = v131;
  if ( v141 )
    v134 = 1;
LABEL_56:
  if ( (v13 & 0x80000000) != 0LL && !v34 )
  {
    v58 = a12;
    v14 = v150;
    if ( a12 )
    {
      v78 = 0;
      v143 = 0;
      v15 = (int *)v147;
      while ( v78 < a6 )
      {
        v14[v78] = v13;
        v15[v78++] = 0;
        v143 = v78;
      }
    }
    else
    {
      *v150 = v13;
      *(_DWORD *)v147 = 0;
    }
    v140 = v13;
    v24 = 0;
    v132 = 0;
    goto LABEL_102;
  }
  v35 = Src;
  if ( Src )
  {
    v81 = *(_DWORD *)Src;
    if ( *(_DWORD *)Src )
    {
      v82 = 12 * *(_DWORD *)Src;
      v83 = v82 + 8;
    }
    else
    {
      v83 = 8;
      v82 = 12 * *(_DWORD *)Src;
    }
    if ( v83 > (unsigned int)Length )
    {
      v84 = v82 + 8;
      if ( !v81 )
        v84 = 8;
      *(_DWORD *)v148 = v84;
      v24 = -1073741789;
      v132 = -1073741789;
      ExFreePoolWithTag(v35, 0);
      goto LABEL_180;
    }
    v85 = v82 + 8;
    if ( !v81 )
      v85 = 8;
    memmove(Address, Src, v85);
    ExFreePoolWithTag(v35, 0);
  }
  else
  {
    if ( (unsigned int)Length < 0x14 )
    {
      *(_DWORD *)v148 = 20;
      v24 = -1073741789;
      v132 = -1073741789;
      v58 = a12;
      goto LABEL_102;
    }
    *(_QWORD *)Address = Src;
  }
  if ( v167 )
  {
    v24 = SeCaptureSid(v167, Tag, 1, (__int64)&v160);
    v132 = v24;
    if ( v24 < 0 )
    {
      v160 = 0LL;
      goto LABEL_180;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v39 = (char *)v142;
  v148 = (PERESOURCE *)((char *)v142 + 48);
  v40 = *((_QWORD *)v142 + 6);
  v41 = *(unsigned __int16 *)(v40 + 26);
  if ( (v41 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v40, 0LL, 0LL);
  LOWORD(v41) = *(_WORD *)(v40 + 26) & 1;
  if ( (_WORD)v41 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v37 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (v37->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (v37->MiscFlags & 0x400) == 0 && !v37->WaitBlock[3].SpareLong )
      goto LABEL_341;
    v39 = (char *)v142;
  }
  if ( (_WORD)v41 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v41, CurrentIrql, v37);
    if ( !(unsigned __int8)ExAcquireFastResourceShared(v40, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    ExpAcquireResourceSharedLite(*((_QWORD *)v142 + 6), 1);
  }
  v42 = v170;
  if ( *v170 >= 0 )
  {
    v44 = *(_QWORD *)(v145 + 8);
  }
  else
  {
    v43 = *(unsigned int *)(v145 + 4);
    if ( (_DWORD)v43 )
      v44 = v145 + v43;
    else
      v44 = 0LL;
  }
  LOBYTE(Object) = 0;
  LOBYTE(Tag) = 0;
  v45 = SepSidInTokenSidHash(v39 + 232, 0LL, v44, 0LL, Tag, Object);
  if ( v45 && *((_DWORD *)v39 + 32) )
  {
    LOBYTE(Objecta) = 0;
    LOBYTE(Taga) = 1;
    v45 = SepSidInTokenSidHash(v39 + 504, 0LL, v44, 0LL, Taga, Objecta);
  }
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v39 + 50) & 0x20) == 0 )
  {
    v87 = *((_QWORD *)v39 + 27);
    if ( v87 )
    {
      if ( (*(_DWORD *)(v87 + 32) & 0x20) != 0 )
      {
        v58 = a12;
        v88 = v150;
        if ( a12 )
        {
          v89 = 0;
          v143 = 0;
          v90 = v147;
          while ( v89 < a6 )
          {
            v88[v89] = -1073741790;
            v90[v89++] = 0;
            v143 = v89;
          }
        }
        else
        {
          *v150 = -1073741790;
          *(_DWORD *)v147 = 0;
        }
        v140 = -1073741790;
        v132 = 0;
        ExReleaseResourceLite(*((PERESOURCE *)v39 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v24 = 0;
        goto LABEL_102;
      }
    }
  }
  if ( !SepRmEnforceCap || (*v42 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
    v46 = v145;
    goto LABEL_72;
  }
  v46 = v145;
  if ( *v42 >= 0 )
  {
    v92 = *(_QWORD *)(v145 + 24);
  }
  else
  {
    v91 = *(unsigned int *)(v145 + 12);
    if ( !(_DWORD)v91 )
    {
      v156 = 0LL;
      goto LABEL_72;
    }
    v92 = v145 + v91;
  }
  v156 = v92;
  if ( v92 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v92);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v95 = v161;
      if ( Cap < 0 )
        v95 = SepRmDefaultCap;
      v161 = v95;
      v135 = 1;
    }
  }
LABEL_72:
  v47 = v136;
  if ( (v136 & 0x2060000) != 0
    && v45
    && ((*v42 & 4) == 0
      ? (v65 = 0LL)
      : *v42 >= 0
      ? (v65 = *(_QWORD *)(v46 + 32))
      : (v64 = *(unsigned int *)(v46 + 16), !(_DWORD)v64)
      ? (v65 = 0LL)
      : (v65 = v64 + v46),
        !RtlpOwnerAcesPresent(0, v65)) )
  {
    if ( (v47 & 0x2000000) != 0 )
    {
      v66 = 393216;
      v48 = v141 | 0x60000;
    }
    else
    {
      v66 = v47 & 0x60000;
      v48 = v141 | v47 & 0x60000;
    }
    v144 = v66;
    v141 = v48;
    v47 &= 0xFFF9FFFF;
    v136 = v47;
  }
  else
  {
    v48 = v141;
  }
  if ( v47 || v135 && !v134 )
  {
    v49 = (PERESOURCE *)v142;
  }
  else
  {
    v49 = (PERESOURCE *)v142;
    if ( (*((_DWORD *)v142 + 50) & 0x2000) != 0 || !v144 )
    {
      if ( a12 )
      {
        v74 = 0;
        v143 = 0;
        v75 = v177;
        v76 = v178;
        while ( v74 < a6 )
        {
          if ( v48 )
          {
            v76[v74] = 0;
            v140 = 0;
            v75[v74] = v48;
          }
          else
          {
            v76[v74] = -1073741790;
            v140 = -1073741790;
            v75[v74] = 0;
          }
          v143 = ++v74;
        }
      }
      else
      {
        v73 = v147;
        if ( v48 )
        {
          *v150 = 0;
          v140 = 0;
          *v73 = v48;
        }
        else
        {
          *v150 = -1073741790;
          v140 = -1073741790;
          *v73 = 0;
        }
      }
      v132 = 0;
      PreviousMode = v130;
      ExReleaseResourceLite(v49[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v24 = 0;
      goto LABEL_180;
    }
  }
  v50 = a12;
  if ( a12 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8LL * a6, 1632068947LL);
    v51 = Pool2;
    v154 = Pool2;
    if ( Pool2 )
    {
      v52 = (int *)&Pool2[a6];
      v50 = a12;
      goto LABEL_78;
    }
    ExReleaseResourceLite(*v148);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    SeReleaseSubjectContext(&SubjectContext);
    v24 = -1073741670;
    PreviousMode = v130;
LABEL_212:
    v132 = v24;
    goto LABEL_180;
  }
  v51 = (unsigned int *)&v163;
  v154 = &v163;
  v52 = &v166;
LABEL_78:
  LODWORD(v181) = v144;
  SepAccessCheck(
    v46,
    v160,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v49,
    v47,
    (__int128 *)v159,
    a6,
    &v184,
    v48,
    v130,
    v51,
    0LL,
    v52,
    v50,
    v45,
    (int *)&v181,
    (__int64 *)&P,
    0LL,
    0LL);
  if ( SepRmEnforceCap && (v97 = *v52, *v52 >= 0) && v135 )
  {
    v58 = a12;
    if ( a12 )
    {
      v98 = (char *)ExAllocatePool2(256LL, 8LL * a6, 1632068947LL);
      v152 = v98;
      if ( !v98 )
      {
        ExReleaseResourceLite(*v148);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v24 = -1073741670;
        v132 = -1073741670;
        PreviousMode = v130;
        goto LABEL_102;
      }
      v153 = (int *)&v98[4 * a6];
      v97 = *v52;
    }
    else
    {
      v152 = &v165;
      v153 = &v164;
    }
    v146 = *(_DWORD *)v154;
    LOBYTE(v144) = 0;
    if ( a6 )
    {
      v24 = SepCopyObjectTypeList(v159, a6, &v169);
      v132 = v24;
      if ( v24 < 0 )
      {
        PreviousMode = v130;
        goto LABEL_102;
      }
    }
    v99 = 0LL;
    v100 = v142;
    v101 = v136;
    while ( 1 )
    {
      LODWORD(Src) = v99;
      if ( (unsigned int)v99 >= *(_DWORD *)(v161 + 60) )
        break;
      v102 = *(_QWORD *)(v161 + 8 * v99 + 64);
      if ( !*(_QWORD *)(v102 + 24) )
        goto LABEL_323;
      v103 = P;
      if ( !P )
      {
        v104 = AuthzBasepInitializeResourceClaimsFromSacl(v156, (__int64 *)&P);
        v105 = (unsigned __int8)v144;
        if ( v104 < 0 )
          v105 = 1;
        v144 = v105;
        v103 = P;
      }
      v106 = (_QWORD *)*((_QWORD *)v100 + 137);
      v107 = v106 ? v106[75] : 0LL;
      v108 = v106 ? v106[73] : 0LL;
      v109 = v106 ? v106[74] : 0LL;
      v110 = v106 ? (void *)v106[72] : 0LL;
      v111 = AuthzBasepEvaluateAceCondition(
               v100,
               *((void **)v100 + 97),
               v103,
               v110,
               v109,
               v108,
               v107,
               *(_DWORD **)(v102 + 24),
               *(_DWORD *)(v102 + 16),
               1,
               0,
               &v151);
      v132 = v111;
      v112 = v151;
      if ( v151 == 1 )
        goto LABEL_323;
      if ( v111 < 0 )
        goto LABEL_338;
      if ( (v100[50] & 0x10) != 0 )
      {
        v113 = (_QWORD *)*((_QWORD *)v100 + 137);
        if ( v113 )
          v114 = v113[75];
        else
          v114 = 0LL;
        if ( v113 )
          v115 = v113[73];
        else
          v115 = 0LL;
        if ( v113 )
          v116 = v113[74];
        else
          v116 = 0LL;
        if ( v113 )
          v117 = (void *)v113[72];
        else
          v117 = 0LL;
        v132 = AuthzBasepEvaluateAceCondition(
                 v100,
                 *((void **)v100 + 97),
                 P,
                 v117,
                 v116,
                 v115,
                 v114,
                 *(_DWORD **)(v102 + 24),
                 *(_DWORD *)(v102 + 16),
                 1,
                 1,
                 &v151);
        if ( v132 < 0 )
        {
LABEL_338:
          ExReleaseResourceLite(*v148);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v24 = v132;
          PreviousMode = v130;
          goto LABEL_180;
        }
        v112 = v151;
      }
      if ( (_BYTE)v144 || v112 == 1 )
      {
LABEL_323:
        v132 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v132 < 0 )
          goto LABEL_338;
        v118 = v101;
        if ( (*(_DWORD *)(v102 + 48) & 1) != 0 )
        {
          if ( (v101 & 0x2000000) == 0 )
            v118 = v141 | v101;
          v119 = 0;
        }
        else
        {
          v119 = v141;
        }
        v120 = v153;
        v121 = v169;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v160,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)v100,
          v118,
          (__int128 *)v169,
          a6,
          &v184,
          v119,
          v130,
          (unsigned int *)v152,
          0LL,
          v153,
          a12,
          v45,
          (int *)&v181,
          (__int64 *)&P,
          0LL,
          0LL);
        v122 = *(_DWORD *)v152;
        if ( v133 )
          v122 = v146 & *(_DWORD *)v152;
        v146 = v122;
        if ( v122 )
          v97 = *v120;
        else
          v97 = -1073741790;
        v133 = 1;
        if ( v121 )
          SepMergeObjectTypeListAccesses(v159, v121, a6);
        if ( v97 < 0 )
          break;
      }
      v99 = (unsigned int)((_DWORD)Src + 1);
    }
    *v52 = v97;
    v53 = (char *)v154;
    *(_DWORD *)v154 &= v146;
  }
  else
  {
    v53 = (char *)v154;
  }
  if ( ((*v148)->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)*v148, 0LL, 0LL);
  v54 = (*v148)->Flag & 1;
  if ( v54 )
  {
    v79 = KeGetCurrentIrql();
    v80 = KeGetCurrentThread();
    if ( v79 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v79, 2uLL, 0LL);
    if ( !v79 && (v80->MiscFlags & 0x400) == 0 && !v80->WaitBlock[3].SpareLong )
LABEL_341:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  v55 = v54 == 0;
  v56 = *v148;
  if ( v55 )
    ExpReleaseResourceForThreadLite((ULONG_PTR)v56, (ULONG_PTR)KeGetCurrentThread());
  else
    ExpFastResourceLegacyRelease((ULONG_PTR)v56);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v57 = v136 & 0x2000000;
  if ( (v136 & 0x2000000) != 0 )
  {
    if ( !v131 || !*(_WORD *)((char *)&v182 + 5) && (*((_DWORD *)v142 + 50) & 0x400000) == 0 )
    {
      v58 = a12;
      if ( a12 )
        v67 = a6;
      else
        v67 = 0;
      SepConstrainByMandatory((__int64)&v175, v136, v53, (char *)v52, 0LL, v67);
      goto LABEL_87;
    }
LABEL_86:
    v58 = a12;
LABEL_87:
    v59 = a6;
    goto LABEL_88;
  }
  if ( !v131 || *(_WORD *)((char *)&v182 + 5) )
    goto LABEL_86;
  if ( (*((_DWORD *)v142 + 50) & 0x400000) == 0 || HIDWORD(v181) )
  {
    v58 = a12;
    v14 = v150;
    if ( a12 )
    {
      v77 = 0;
      v143 = 0;
      v15 = (int *)v147;
      while ( v77 < a6 )
      {
        v14[v77] = -1073741790;
        v15[v77++] = 0;
        v143 = v77;
      }
    }
    else
    {
      *v150 = -1073741790;
      *(_DWORD *)v147 = 0;
    }
    v140 = -1073741790;
    v24 = 0;
    v132 = 0;
    PreviousMode = v130;
    goto LABEL_102;
  }
  HIBYTE(v182) = 1;
  v58 = a12;
  v59 = a6;
  if ( a12 )
  {
    for ( i = 0; i < a6; ++i )
    {
      v124 = i;
      v52[v124] = 0;
      *(_DWORD *)&v53[v124 * 4] = v141 | v136;
    }
  }
  else
  {
    *v52 = 0;
    *(_DWORD *)v53 = v141 | v136;
  }
LABEL_88:
  if ( v57 )
  {
    if ( v58 )
      v68 = v59;
    else
      v68 = 0;
    SepConstrainByConstraintMask((int)v158, v136, v53, (char *)v52, 0LL, v68, &v137);
    if ( v58 )
      v69 = v59;
    else
      v69 = 0;
    SepConstrainByConstraintMask(v162, v136, v53, (char *)v52, 0LL, v69, v139);
  }
  v13 = (unsigned __int64)v150;
  *v150 = *v52;
  v14 = v147;
  *(_DWORD *)v147 = *(_DWORD *)v53;
  v140 = *v52;
  v15 = v153;
  v60 = v152;
  if ( SepRmEnforceCap && v133 && *v52 >= 0 )
  {
    *(_DWORD *)v13 = *v153;
    *v14 &= *v60;
    v140 = *v15;
  }
  if ( v58 )
  {
    for ( j = 1; ; j = v143 + 1 )
    {
      v143 = j;
      if ( j >= v59 )
        break;
      v62 = j;
      *(_DWORD *)(v13 + v62 * 4) = v52[v62];
      v14[v62] = *(_DWORD *)&v53[v62 * 4];
      if ( SepRmEnforceCap && v133 && v52[v62] >= 0 )
      {
        *(_DWORD *)(v13 + 4LL * j) = v15[j];
        v14[j] &= v60[j];
      }
    }
  }
  v24 = 0;
  v132 = 0;
  PreviousMode = v130;
LABEL_102:
  if ( v145 && v142 )
  {
    if ( v137 || v139[0] )
    {
LABEL_158:
      v70 = KeGetCurrentThread();
      --v70->KernelApcDisable;
      v71 = v142;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v142 + 6), 1u);
      if ( v138 )
        v72 = v168;
      else
        v72 = *((_QWORD *)v71 + 138);
      SeLogAccessFailure((char *)v71, 0LL, 0LL, v72, v145, v141 | v136, v140 >= 0);
      ExReleaseResourceLite(*((PERESOURCE *)v71 + 6));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v24 = v132;
LABEL_108:
      if ( v24 >= 0
        && v140 < 0
        && !HIDWORD(v181)
        && (*((_DWORD *)v142 + 50) & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v181, v136) )
      {
        SepLogLpacAccessFailure();
      }
      goto LABEL_110;
    }
    if ( HIDWORD(v181) || (*((_DWORD *)v142 + 50) & 0x4000) == 0 )
      goto LABEL_108;
    if ( v24 >= 0 )
    {
      if ( v140 >= 0 && !HIBYTE(v182) )
        goto LABEL_108;
      goto LABEL_158;
    }
  }
LABEL_110:
  if ( v58 )
  {
    if ( v154 )
      ExFreePoolWithTag(v154, 0);
    if ( v152 )
      ExFreePoolWithTag(v152, 0);
  }
  if ( v142 )
    ObfDereferenceObjectWithTag(v142, 0x74726853u);
  if ( v159 )
    ExFreePoolWithTag(v159, 0);
  if ( v160 )
  {
    LOBYTE(v14) = 1;
    SeReleaseSid(v160, PreviousMode, v14, v15);
  }
  if ( v145 )
    SeReleaseSecurityDescriptor(v145, PreviousMode, 0LL, v15);
  if ( v135 )
  {
    v125 = *(_QWORD *)(v161 + 32);
    if ( v125 )
      SepRmDereferenceCapTable(v125, v13, v14, v15);
  }
  if ( v169 )
    ExFreePoolWithTag(v169, 0);
  v63 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v63, 0);
  }
  return (unsigned int)v24;
}
