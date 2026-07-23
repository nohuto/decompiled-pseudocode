/*
 * XREFs of SeAccessCheckByTypeWithAdminlessChecks @ 0x140345AC0
 * Callers:
 *     SeAccessCheckByType @ 0x140346F70 (SeAccessCheckByType.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14024D5F0 (AuthzBasepEvaluateAceCondition.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1402CEFB0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x1402CF460 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x1402CFBA0 (SepAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x1402F43F0 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14030A378 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByConstraintMask @ 0x14030F440 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x140310374 (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x1403139A0 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x140321020 (SepLpacCausedAccessFailure.c)
 *     SepReferenceTokenByHandle @ 0x140345A30 (SepReferenceTokenByHandle.c)
 *     SepFreeResourceInfo @ 0x140347098 (SepFreeResourceInfo.c)
 *     SeCaptureObjectTypeList @ 0x1403470D0 (SeCaptureObjectTypeList.c)
 *     SepMandatoryToDiscretionary @ 0x1403472E0 (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x140347320 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x140347420 (SePrivilegePolicyCheck.c)
 *     SepTokenIsOwner @ 0x1403475A0 (SepTokenIsOwner.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     SeFreeCapturedObjectTypeList @ 0x140595D98 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x140595EAC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140595F50 (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140596008 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140596168 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14059627C (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x1405962B0 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140597D94 (SepRmReferenceFindCap.c)
 *     SeCaptureSid @ 0x1405DE46C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1405DE570 (SeReleaseSid.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x1406D4920 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeAccessCheckByTypeWithAdminlessChecks(
        __int16 *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        _DWORD *Address,
        unsigned int Length,
        unsigned __int64 a10,
        unsigned int *a11,
        int *a12,
        char a13,
        char a14)
{
  int v15; // r10d
  _DWORD *v16; // r8
  int *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  unsigned int v23; // r14d
  int v24; // edi
  PADAPTER_OBJECT v25; // rsi
  __int64 v26; // rax
  ULONGLONG v27; // rax
  __int64 v28; // rax
  ULONGLONG v29; // rax
  __int64 v30; // rax
  unsigned __int8 v31; // r13
  int v32; // eax
  int v33; // ecx
  struct _PRIVILEGE_SET *v34; // r15
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v36; // r12
  __int64 v37; // r8
  char IsOwner; // r13
  __int16 *v39; // rdi
  int v40; // edi
  int v41; // eax
  unsigned int *v42; // rcx
  int *v43; // r15
  __int64 v44; // rdi
  char *v45; // r13
  char v46; // r12
  _DWORD *v47; // rdi
  __int64 v48; // rax
  unsigned int v49; // r10d
  __int64 v50; // rcx
  unsigned __int8 v51; // bl
  int v52; // ecx
  unsigned int v53; // ecx
  __int64 v54; // rdx
  int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // edi
  unsigned int v58; // eax
  unsigned int v59; // eax
  struct _KTHREAD *v60; // rax
  ULONGLONG v61; // r9
  unsigned int v62; // ecx
  __int64 v63; // rcx
  _DWORD *v64; // rax
  unsigned int v65; // ecx
  unsigned int *v66; // rdx
  int *v67; // r8
  ULONG PrivilegeCount; // ecx
  ULONG v69; // eax
  unsigned int v70; // edx
  int v71; // eax
  unsigned int v72; // eax
  _DMA_OPERATIONS *DmaOperations; // rax
  int *v74; // r8
  unsigned int v75; // ecx
  _DWORD *v76; // r9
  __int64 v77; // rcx
  ACL *v78; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v81; // rdx
  __int64 v82; // r15
  unsigned int *PoolWithTag; // rax
  int v84; // r10d
  char *v85; // rax
  unsigned int v86; // eax
  PVOID v87; // r8
  _DMA_OPERATIONS *v88; // rax
  __int64 v89; // r10
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r9
  int v93; // eax
  int v94; // ecx
  _DMA_OPERATIONS *v95; // rax
  __int64 GetCommonBufferFromVectorByIndex; // r8
  __int64 AllocateCommonBufferWithBounds; // rdx
  __int64 AllocateCommonBufferVector; // rcx
  __int64 GetDmaDomain; // r9
  unsigned int v100; // ecx
  unsigned int v101; // eax
  unsigned int v102; // edi
  unsigned int v103; // edx
  int v104; // [rsp+20h] [rbp-298h]
  unsigned int v105; // [rsp+40h] [rbp-278h]
  unsigned __int8 v106; // [rsp+A0h] [rbp-218h]
  int v107; // [rsp+A4h] [rbp-214h]
  unsigned __int8 v108; // [rsp+A8h] [rbp-210h]
  char v109; // [rsp+A9h] [rbp-20Fh]
  unsigned int v110; // [rsp+B0h] [rbp-208h] BYREF
  char v111; // [rsp+B8h] [rbp-200h]
  char v112; // [rsp+B9h] [rbp-1FFh] BYREF
  char v113; // [rsp+BAh] [rbp-1FEh] BYREF
  char v114[5]; // [rsp+BBh] [rbp-1FDh] BYREF
  unsigned int v115; // [rsp+C0h] [rbp-1F8h]
  int v116; // [rsp+C8h] [rbp-1F0h]
  int v117; // [rsp+CCh] [rbp-1ECh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+D0h] [rbp-1E8h] BYREF
  unsigned int v119; // [rsp+D8h] [rbp-1E0h]
  ULONGLONG v120; // [rsp+E0h] [rbp-1D8h] BYREF
  int v121; // [rsp+E8h] [rbp-1D0h] BYREF
  int v122; // [rsp+ECh] [rbp-1CCh]
  char v123; // [rsp+F2h] [rbp-1C6h]
  volatile void *v124; // [rsp+F8h] [rbp-1C0h]
  int *v125; // [rsp+100h] [rbp-1B8h]
  int v126; // [rsp+108h] [rbp-1B0h] BYREF
  int *v127; // [rsp+110h] [rbp-1A8h]
  PVOID v128; // [rsp+118h] [rbp-1A0h]
  int v129; // [rsp+120h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+128h] [rbp-190h] BYREF
  PVOID v131; // [rsp+130h] [rbp-188h] BYREF
  unsigned __int64 v132; // [rsp+138h] [rbp-180h]
  int v133; // [rsp+140h] [rbp-178h] BYREF
  ACL *v134; // [rsp+148h] [rbp-170h]
  PVOID P; // [rsp+150h] [rbp-168h]
  __int64 v136; // [rsp+158h] [rbp-160h]
  __int128 *v137; // [rsp+160h] [rbp-158h] BYREF
  __int64 v138; // [rsp+168h] [rbp-150h] BYREF
  __int16 *v139; // [rsp+170h] [rbp-148h]
  __int64 v140; // [rsp+178h] [rbp-140h] BYREF
  PVOID v141; // [rsp+180h] [rbp-138h] BYREF
  int v142; // [rsp+188h] [rbp-130h] BYREF
  int v143; // [rsp+18Ch] [rbp-12Ch] BYREF
  int v144; // [rsp+190h] [rbp-128h] BYREF
  int v145; // [rsp+194h] [rbp-124h] BYREF
  __int64 v146; // [rsp+198h] [rbp-120h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1A0h] [rbp-118h] BYREF
  void *Src; // [rsp+1C0h] [rbp-F8h]
  _OWORD v149[2]; // [rsp+1C8h] [rbp-F0h] BYREF
  __int16 *v150; // [rsp+1E8h] [rbp-D0h]
  void *v151; // [rsp+1F0h] [rbp-C8h]
  void *v152; // [rsp+1F8h] [rbp-C0h]
  __int64 v153; // [rsp+200h] [rbp-B8h]
  _DWORD *v154; // [rsp+208h] [rbp-B0h]
  unsigned int *v155; // [rsp+210h] [rbp-A8h]
  int *v156; // [rsp+218h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+220h] [rbp-98h] BYREF
  __int64 v158; // [rsp+240h] [rbp-78h]
  __int128 v159; // [rsp+248h] [rbp-70h] BYREF
  __int64 v160; // [rsp+258h] [rbp-60h]
  int v161; // [rsp+260h] [rbp-58h]
  __int128 v162; // [rsp+268h] [rbp-50h] BYREF

  v15 = (int)a2;
  Src = a2;
  v139 = a1;
  v150 = a1;
  v151 = a2;
  v152 = a3;
  v110 = a4;
  v153 = a5;
  v115 = a6;
  v154 = Address;
  v132 = a10;
  v16 = a11;
  v124 = a11;
  v155 = a11;
  v17 = a12;
  v125 = a12;
  v156 = a12;
  v142 = 0;
  P = 0LL;
  v143 = 0;
  v144 = 0;
  v128 = 0LL;
  v145 = 0;
  v127 = 0LL;
  DmaAdapter = 0LL;
  v120 = 0LL;
  v138 = 0LL;
  v121 = 0;
  v117 = 0;
  v162 = 0LL;
  v137 = 0LL;
  Privileges = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v149[0] = 0LL;
  LOBYTE(v15) = 0;
  v108 = 0;
  v131 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v161 = 0;
  v134 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v158 = 0LL;
  v136 = 0LL;
  v111 = 0;
  v109 = 0;
  v126 = 0;
  v122 = v15;
  v123 = 0;
  v141 = 0LL;
  v114[0] = 0;
  v112 = 0;
  v113 = 0;
  v146 = 0LL;
  v116 = -1073741790;
  v133 = -1;
  v140 = 0xFFFFFFFFLL;
  v18 = (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v106 = v18;
  if ( !(_BYTE)v18 )
  {
    *a12 = 0;
    *a11 = v110;
    return 0LL;
  }
  if ( a13 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      goto LABEL_19;
    }
    ProbeForWrite(a12, 4LL * a6, 4u);
    ProbeForWrite(v124, 4LL * a6, 4u);
  }
  else
  {
    v19 = (__int64)a12;
    if ( (unsigned __int64)a12 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = (__int64)a11;
    if ( (unsigned __int64)a11 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  v21 = a10;
  if ( a10 >= 0x7FFFFFFF0000LL )
    v21 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v21 = *(_DWORD *)v21;
  ProbeForWrite(Address, Length, 4u);
  if ( Address && Length >= 0x14 )
    *Address = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v162 = *a7;
  result = 0LL;
  v18 = v106;
LABEL_19:
  if ( (int)result < 0 )
    return result;
  v23 = v110;
  if ( (v110 & 0xF0000000) != 0 )
  {
    v24 = -1073741594;
    v107 = -1073741594;
    v25 = DmaAdapter;
    goto LABEL_176;
  }
  v24 = SepReferenceTokenByHandle(a3, 8u, v18, &DmaAdapter, v114, &v146);
  v107 = v24;
  if ( v24 < 0 )
  {
    v25 = 0LL;
    DmaAdapter = 0LL;
    v51 = v106;
    v46 = a13;
    goto LABEL_80;
  }
  v25 = DmaAdapter;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *(_DWORD *)&DmaAdapter[12].Version != 2 )
    {
      v24 = -1073741732;
      v107 = -1073741732;
      v51 = v106;
      goto LABEL_172;
    }
    if ( *(int *)(&DmaAdapter[12].Size + 1) < 1 )
    {
      v24 = -1073741659;
      v107 = -1073741659;
      v51 = v106;
      goto LABEL_172;
    }
  }
  v24 = SeCaptureObjectTypeList(a5, v115, v106, &v137);
  v107 = v24;
  if ( v24 < 0 || (v24 = SeCaptureSecurityDescriptor((_DWORD)v139, v106, 1, 0, (__int64)&v120), v107 = v24, v24 < 0) )
  {
LABEL_174:
    v51 = v106;
    goto LABEL_172;
  }
  if ( !v120 )
    goto LABEL_173;
  v139 = (__int16 *)(v120 + 2);
  v18 = *(unsigned __int16 *)(v120 + 2);
  if ( (v18 & 0x8000u) == 0LL )
  {
    v27 = *(_QWORD *)(v120 + 8);
  }
  else
  {
    v26 = *(unsigned int *)(v120 + 4);
    if ( !(_DWORD)v26 )
      goto LABEL_173;
    v27 = v120 + v26;
  }
  if ( !v27 )
    goto LABEL_173;
  if ( (v18 & 0x8000u) != 0LL )
  {
    v28 = *(unsigned int *)(v120 + 8);
    if ( (_DWORD)v28 )
    {
      v29 = v120 + v28;
      goto LABEL_35;
    }
LABEL_173:
    v24 = -1073741703;
    v107 = -1073741703;
    goto LABEL_174;
  }
  v29 = *(_QWORD *)(v120 + 16);
LABEL_35:
  if ( !v29 )
    goto LABEL_173;
  if ( v114[0] )
    LODWORD(v30) = v146;
  else
    v30 = *(_QWORD *)&v25[69].Version;
  v104 = v30;
  v24 = SepTrustLevelCheck(&v133, v120, 0LL, v25);
  v107 = v24;
  if ( v24 < 0 )
    goto LABEL_176;
  if ( (v133 & v110 & 0xFDFFFFFF) != (v110 & 0xFDFFFFFF) )
  {
    v112 = 1;
LABEL_184:
    v33 = -1073741790;
    v31 = a14;
LABEL_47:
    v16 = (_DWORD *)v108;
    goto LABEL_48;
  }
  v24 = SepFilterCheck(v120, (__int64 *)&v131, (__int64)v25, 1, (int *)&v140);
  v107 = v24;
  if ( v24 < 0 )
  {
LABEL_176:
    v51 = v106;
    goto LABEL_172;
  }
  if ( ((unsigned int)v140 & v110 & 0xFDFFFFFF) != (v110 & 0xFDFFFFFF) )
  {
    v113 = 1;
    goto LABEL_184;
  }
  v31 = a14;
  v24 = SepMandatoryIntegrityCheck((int *)&v162, v120, 0, (__int64)v25, 1, a14, (__int64)v149);
  v107 = v24;
  if ( v24 < 0 )
    goto LABEL_176;
  v108 = 0;
  v32 = SepMandatoryToDiscretionary(v149, v110);
  v33 = v32;
  if ( (v32 < 0 || (v110 & 0x2000000) != 0)
    && ((__int64)v25[12].DmaOperations & 0x4000) != 0
    && HIDWORD(v149[0]) <= 0x2000 )
  {
    LOBYTE(v16) = 1;
    v108 = 1;
  }
  if ( v32 >= 0 || (_BYTE)v16 )
  {
    v33 = SePrivilegePolicyCheck((unsigned int)&v110, (unsigned int)&v121, 0, (_DWORD)v25, (__int64)&Privileges, v106);
    v23 = v110;
    if ( !v110 )
    {
      v18 = (unsigned __int8)v122;
      if ( v121 )
        v18 = 1LL;
      v122 = v18;
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( v33 < 0 && !(_BYTE)v16 )
  {
    v46 = a13;
    v16 = v125;
    if ( a13 )
    {
      v18 = 0LL;
      v119 = 0;
      v17 = (int *)v124;
      while ( (unsigned int)v18 < v115 )
      {
        v16[(unsigned int)v18] = v33;
        v17[(unsigned int)v18] = 0;
        v18 = (unsigned int)(v18 + 1);
        v119 = v18;
      }
    }
    else
    {
      *v125 = v33;
      *(_DWORD *)v124 = 0;
    }
    v116 = v33;
    v24 = 0;
    v107 = 0;
    v51 = v106;
    goto LABEL_80;
  }
  v34 = Privileges;
  if ( Privileges )
  {
    PrivilegeCount = Privileges->PrivilegeCount;
    v69 = 12 * Privileges->PrivilegeCount;
    v70 = v69 + 8;
    if ( !Privileges->PrivilegeCount )
      v70 = 8;
    if ( v70 > Length )
    {
      v71 = v69 + 8;
      if ( !PrivilegeCount )
        v71 = 8;
      *(_DWORD *)v132 = v71;
      v24 = -1073741789;
      v107 = -1073741789;
      v51 = v106;
      CmSiFreeMemory(v34);
      goto LABEL_172;
    }
    v72 = v69 + 8;
    if ( !PrivilegeCount )
      v72 = 8;
    memmove(Address, Privileges, v72);
    CmSiFreeMemory(v34);
  }
  else
  {
    if ( Length < 0x14 )
    {
      *(_DWORD *)v132 = 20;
      v24 = -1073741789;
      v107 = -1073741789;
      v46 = a13;
      v51 = v106;
      goto LABEL_80;
    }
    *(_QWORD *)Address = Privileges;
  }
  if ( Src )
  {
    v24 = SeCaptureSid(Src, v104, 1, (__int64)&v138);
    v107 = v24;
    if ( v24 < 0 )
    {
      v138 = 0LL;
      v51 = v106;
LABEL_172:
      v46 = a13;
      goto LABEL_80;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = DmaAdapter;
  v36 = (PERESOURCE *)&DmaAdapter[3];
  ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
  IsOwner = SepTokenIsOwner(v25, v120, v37, v31);
  if ( !SepAllowAccessUponLogoff && ((__int64)v25[12].DmaOperations & 0x20) == 0 )
  {
    DmaOperations = v25[13].DmaOperations;
    if ( DmaOperations )
    {
      if ( ((__int64)DmaOperations->AllocateAdapterChannel & 0x20) != 0 )
      {
        v46 = a13;
        v74 = v125;
        if ( a13 )
        {
          v75 = 0;
          v119 = 0;
          v76 = v124;
          while ( v75 < v115 )
          {
            v74[v75] = -1073741790;
            v76[v75++] = 0;
            v119 = v75;
          }
        }
        else
        {
          *v125 = -1073741790;
          *(_DWORD *)v124 = 0;
        }
        v116 = -1073741790;
        v24 = 0;
        v107 = 0;
        v51 = v106;
        ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
        KeLeaveCriticalRegion();
        SeReleaseSubjectContext(&SubjectContext);
        v23 = v110;
        goto LABEL_80;
      }
    }
  }
  v39 = v139;
  if ( SepRmEnforceCap && (*v139 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
  {
    if ( *v139 >= 0 )
    {
      v78 = *(ACL **)(v120 + 24);
    }
    else
    {
      v77 = *(unsigned int *)(v120 + 12);
      if ( !(_DWORD)v77 )
      {
        v134 = 0LL;
        goto LABEL_55;
      }
      v78 = (ACL *)(v120 + v77);
    }
    v134 = v78;
    if ( v78 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid(v78);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid);
        v81 = v136;
        if ( Cap < 0 )
          v81 = SepRmDefaultCap;
        v136 = v81;
        v111 = 1;
      }
    }
  }
LABEL_55:
  v23 = v110;
  if ( (v110 & 0x2060000) != 0
    && IsOwner
    && ((*v39 & 4) == 0
      ? (v54 = 0LL)
      : *v39 >= 0
      ? (v54 = *(_QWORD *)(v120 + 32))
      : (v53 = *(_DWORD *)(v120 + 16)) == 0
      ? (v54 = 0LL)
      : (v54 = v120 + v53),
        !RtlpOwnerAcesPresent(0, v54)) )
  {
    if ( (v23 & 0x2000000) != 0 )
    {
      v55 = 393216;
      v40 = v121 | 0x60000;
    }
    else
    {
      v55 = v23 & 0x60000;
      v40 = v121 | v23 & 0x60000;
    }
    v117 = v55;
    v121 = v40;
    v23 &= 0xFFF9FFFF;
    v110 = v23;
  }
  else
  {
    v40 = v121;
  }
  if ( v23 || v111 && !(_BYTE)v122 )
  {
    v25 = DmaAdapter;
    v41 = v117;
  }
  else
  {
    v25 = DmaAdapter;
    if ( ((__int64)DmaAdapter[12].DmaOperations & 0x2000) != 0 || (v41 = v117) == 0 )
    {
      v46 = a13;
      if ( a13 )
      {
        v65 = 0;
        v119 = 0;
        v66 = v155;
        v67 = v156;
        while ( v65 < v115 )
        {
          if ( v40 )
          {
            v67[v65] = 0;
            v116 = 0;
            v66[v65] = v40;
          }
          else
          {
            v67[v65] = -1073741790;
            v116 = -1073741790;
            v66[v65] = 0;
          }
          v119 = ++v65;
        }
      }
      else
      {
        v64 = v124;
        if ( v40 )
        {
          *v125 = 0;
          v116 = 0;
          *v64 = v40;
        }
        else
        {
          *v125 = -1073741790;
          v116 = -1073741790;
          *v64 = 0;
        }
      }
      v24 = 0;
      v107 = 0;
      v51 = v106;
      ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
      KeLeaveCriticalRegion();
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_80;
    }
  }
  if ( a13 )
  {
    v82 = v115;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * v115, 0x61476553u);
    v42 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      ExReleaseResourceLite(*v36);
      KeLeaveCriticalRegion();
      SeReleaseSubjectContext(&SubjectContext);
      v24 = -1073741670;
      v107 = -1073741670;
      v51 = v106;
      goto LABEL_172;
    }
    v43 = (int *)&PoolWithTag[v82];
    v41 = v117;
  }
  else
  {
    v42 = (unsigned int *)&v142;
    P = &v142;
    v43 = &v143;
  }
  LODWORD(v159) = v41;
  v105 = v40;
  v44 = v115;
  SepAccessCheck(
    v120,
    v138,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v25,
    v23,
    v137,
    v115,
    &v162,
    v105,
    v106,
    v42,
    0LL,
    v43,
    a13,
    IsOwner,
    (int *)&v159,
    (__int64)&v131,
    0LL,
    0LL,
    a14);
  if ( SepRmEnforceCap && (v84 = *v43, v117 = v84, v84 >= 0) && v111 )
  {
    if ( a13 )
    {
      v85 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v44, 0x61476553u);
      v128 = v85;
      if ( !v85 )
      {
        ExReleaseResourceLite(*v36);
        KeLeaveCriticalRegion();
        SeReleaseSubjectContext(&SubjectContext);
        v24 = -1073741670;
        v107 = -1073741670;
        v25 = DmaAdapter;
        v23 = v110;
        v51 = v106;
        goto LABEL_172;
      }
      v127 = (int *)&v85[4 * v44];
      v84 = *v43;
      v117 = *v43;
    }
    else
    {
      v128 = &v144;
      v127 = &v145;
    }
    LODWORD(Privileges) = *(_DWORD *)P;
    LOBYTE(v44) = 0;
    v122 = v44;
    if ( v115 )
    {
      v24 = SepCopyObjectTypeList(v137, v115, &v141);
      v107 = v24;
      if ( v24 < 0 )
      {
        v25 = DmaAdapter;
        v23 = v110;
        v51 = v106;
        goto LABEL_172;
      }
      v84 = v117;
      LOBYTE(v44) = v122;
    }
    v86 = 0;
    v129 = 0;
    v25 = DmaAdapter;
    v23 = v110;
    while ( v86 < *(_DWORD *)(v136 + 60) )
    {
      v132 = *(_QWORD *)(v136 + 8LL * v86 + 64);
      if ( !*(_QWORD *)(v132 + 24) )
        goto LABEL_278;
      v87 = v131;
      if ( !v131 )
      {
        LODWORD(v44) = (unsigned __int8)v44;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v134, (__int64 *)&v131) < 0 )
          LODWORD(v44) = 1;
        v122 = v44;
        v87 = v131;
      }
      v88 = v25[68].DmaOperations;
      v89 = v88 ? (__int64)v88[1].GetCommonBufferFromVectorByIndex : 0LL;
      v90 = v88 ? (__int64)v88[1].AllocateCommonBufferWithBounds : 0LL;
      v91 = v88 ? (__int64)v88[1].AllocateCommonBufferVector : 0LL;
      v92 = v88 ? (__int64)v88[1].GetDmaDomain : 0LL;
      v93 = AuthzBasepEvaluateAceCondition(
              (__int64)v25,
              (__int64)v25[48].DmaOperations,
              (__int64)v87,
              v92,
              v91,
              v90,
              v89,
              *(_DWORD **)(v132 + 24),
              *(_DWORD *)(v132 + 16),
              1u,
              0,
              &v126);
      v24 = v93;
      v107 = v93;
      v94 = v126;
      if ( v126 == 1 )
        goto LABEL_278;
      if ( v93 < 0 )
        goto LABEL_294;
      if ( ((__int64)v25[12].DmaOperations & 0x10) != 0 )
      {
        v95 = v25[68].DmaOperations;
        if ( v95 )
          GetCommonBufferFromVectorByIndex = (__int64)v95[1].GetCommonBufferFromVectorByIndex;
        else
          GetCommonBufferFromVectorByIndex = 0LL;
        if ( v95 )
          AllocateCommonBufferWithBounds = (__int64)v95[1].AllocateCommonBufferWithBounds;
        else
          AllocateCommonBufferWithBounds = 0LL;
        if ( v95 )
          AllocateCommonBufferVector = (__int64)v95[1].AllocateCommonBufferVector;
        else
          AllocateCommonBufferVector = 0LL;
        if ( v95 )
          GetDmaDomain = (__int64)v95[1].GetDmaDomain;
        else
          GetDmaDomain = 0LL;
        v24 = AuthzBasepEvaluateAceCondition(
                (__int64)v25,
                (__int64)v25[48].DmaOperations,
                (__int64)v131,
                GetDmaDomain,
                AllocateCommonBufferVector,
                AllocateCommonBufferWithBounds,
                GetCommonBufferFromVectorByIndex,
                *(_DWORD **)(v132 + 24),
                *(_DWORD *)(v132 + 16),
                1u,
                1u,
                &v126);
        v107 = v24;
        if ( v24 < 0 )
        {
LABEL_294:
          ExReleaseResourceLite(*v36);
          KeLeaveCriticalRegion();
          SeReleaseSubjectContext(&SubjectContext);
          v51 = v106;
          goto LABEL_172;
        }
        v94 = v126;
      }
      LOBYTE(v44) = v122;
      if ( (_BYTE)v122 || v94 == 1 )
      {
LABEL_278:
        v24 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        v107 = v24;
        if ( v24 < 0 )
          goto LABEL_294;
        v100 = v23;
        if ( (*(_DWORD *)(v132 + 48) & 1) != 0 )
        {
          if ( (v23 & 0x2000000) == 0 )
            v100 = v121 | v23;
          v101 = 0;
        }
        else
        {
          v101 = v121;
        }
        v102 = v115;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v138,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)v25,
          v100,
          (__int128 *)v141,
          v115,
          &v162,
          v101,
          v106,
          (unsigned int *)v128,
          0LL,
          v127,
          a13,
          IsOwner,
          (int *)&v159,
          (__int64)&v131,
          0LL,
          0LL,
          a14);
        v103 = *(_DWORD *)v128;
        if ( v109 )
          v103 = (unsigned int)Privileges & *(_DWORD *)v128;
        LODWORD(Privileges) = v103;
        if ( v103 )
          v84 = *v127;
        else
          v84 = -1073741790;
        v117 = v84;
        v109 = 1;
        if ( v141 )
          SepMergeObjectTypeListAccesses(v137, v141, v102);
        if ( v84 < 0 )
          break;
        LOBYTE(v44) = v122;
      }
      else
      {
        v84 = v117;
      }
      v86 = ++v129;
    }
    *v43 = v84;
    v45 = (char *)P;
    *(_DWORD *)P &= (unsigned int)Privileges;
  }
  else
  {
    v25 = DmaAdapter;
    v23 = v110;
    v45 = (char *)P;
  }
  ExReleaseResourceLite(*v36);
  KeLeaveCriticalRegion();
  SeReleaseSubjectContext(&SubjectContext);
  if ( (v23 & 0x2000000) != 0 )
  {
    if ( !v108 || !*(_WORD *)((char *)&v160 + 5) )
    {
      v46 = a13;
      if ( a13 )
        v56 = v115;
      else
        v56 = 0;
      SepConstrainByMandatory((__int64)v149, v23, v45, (char *)v43, 0LL, v56);
      goto LABEL_66;
    }
  }
  else if ( v108 && !*(_WORD *)((char *)&v160 + 5) )
  {
    v46 = a13;
    v16 = v125;
    if ( a13 )
    {
      v62 = 0;
      v119 = 0;
      v17 = (int *)v124;
      while ( v62 < v115 )
      {
        v16[v62] = -1073741790;
        v17[v62++] = 0;
        v119 = v62;
      }
    }
    else
    {
      *v125 = -1073741790;
      *(_DWORD *)v124 = 0;
    }
    v116 = -1073741790;
    v24 = 0;
    v107 = 0;
    v51 = v106;
    goto LABEL_80;
  }
  v46 = a13;
LABEL_66:
  if ( (v23 & 0x2000000) != 0 )
  {
    v57 = v115;
    if ( v46 )
      v58 = v115;
    else
      v58 = 0;
    SepConstrainByConstraintMask(v133, v23, v45, (char *)v43, 0LL, v58, &v112);
    if ( v46 )
      v59 = v57;
    else
      v59 = 0;
    SepConstrainByConstraintMask(v140, v23, v45, (char *)v43, 0LL, v59, &v113);
  }
  v18 = (__int64)v125;
  *v125 = *v43;
  v16 = v124;
  *(_DWORD *)v124 = *(_DWORD *)v45;
  v116 = *v43;
  v17 = v127;
  v47 = v128;
  if ( SepRmEnforceCap && v109 && *v43 >= 0 )
  {
    *(_DWORD *)v18 = *v127;
    *v16 &= *v47;
    v116 = *v17;
  }
  if ( v46 )
  {
    v48 = 1LL;
    v49 = v115;
    while ( 1 )
    {
      v119 = v48;
      if ( (unsigned int)v48 >= v49 )
        break;
      v50 = v48;
      *(_DWORD *)(v18 + v50 * 4) = v43[v48];
      v16[v50] = *(_DWORD *)&v45[4 * v48];
      if ( SepRmEnforceCap && v109 && v43[v50] >= 0 )
      {
        *(_DWORD *)(v18 + 4 * v48) = v17[v48];
        v16[v48] &= v47[v48];
      }
      v48 = v119 + 1;
    }
  }
  v24 = 0;
  v107 = 0;
  v25 = DmaAdapter;
  v23 = v110;
  v51 = v106;
LABEL_80:
  if ( v120 && v25 )
  {
    if ( v112 || v113 )
    {
LABEL_129:
      v60 = KeGetCurrentThread();
      --v60->KernelApcDisable;
      v25 = DmaAdapter;
      ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
      if ( v114[0] )
        v61 = v146;
      else
        v61 = *(_QWORD *)&v25[69].Version;
      v23 = v110;
      SeLogAccessFailure((__int64)v25, 0LL, 0LL, v61, v120, v121 | v110, v116 >= 0, 0);
      ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
      KeLeaveCriticalRegion();
      v24 = v107;
      v52 = HIDWORD(v159);
LABEL_86:
      if ( v24 >= 0
        && v116 < 0
        && !v52
        && ((__int64)v25[12].DmaOperations & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v159, v23) )
      {
        SepLogLpacAccessFailure(v63, v18);
      }
      goto LABEL_88;
    }
    v52 = HIDWORD(v159);
    if ( HIDWORD(v159) || ((__int64)v25[12].DmaOperations & 0x4000) == 0 )
      goto LABEL_86;
    if ( v24 >= 0 )
    {
      if ( v116 >= 0 && !HIBYTE(v160) )
        goto LABEL_86;
      goto LABEL_129;
    }
  }
LABEL_88:
  if ( v46 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v128 )
      ExFreePoolWithTag(v128, 0);
  }
  if ( v25 )
    HalPutDmaAdapter(v25);
  if ( v137 )
    SeFreeCapturedObjectTypeList(v137, v18, v16, v17);
  if ( v138 )
  {
    LOBYTE(v16) = 1;
    SeReleaseSid(v138, v51, v16, v17);
  }
  if ( v120 )
    SeReleaseSecurityDescriptor(v120, v51, 0LL, v17);
  if ( v111 )
    SepRmDereferenceCap(v136, v18, v16, v17);
  if ( v141 )
    ExFreePoolWithTag(v141, 0);
  SepFreeResourceInfo(v131);
  return (unsigned int)v24;
}
