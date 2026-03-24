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
  __int64 v38; // rdx
  __int64 v39; // r8
  char IsOwner; // r13
  __int16 *v41; // rdi
  int v42; // edi
  int v43; // eax
  unsigned int *v44; // rcx
  int *v45; // r15
  __int64 v46; // rdi
  char *v47; // r13
  char v48; // r12
  _DWORD *v49; // rdi
  __int64 v50; // rax
  unsigned int v51; // r10d
  __int64 v52; // rcx
  unsigned __int8 v53; // bl
  int v54; // ecx
  unsigned int v55; // ecx
  __int64 v56; // rdx
  int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // edi
  unsigned int v60; // eax
  unsigned int v61; // eax
  struct _KTHREAD *v62; // rax
  ULONGLONG v63; // r9
  unsigned int v64; // ecx
  __int64 v65; // rcx
  _DWORD *v66; // rax
  unsigned int v67; // ecx
  unsigned int *v68; // rdx
  int *v69; // r8
  ULONG PrivilegeCount; // ecx
  ULONG v71; // eax
  unsigned int v72; // edx
  int v73; // eax
  unsigned int v74; // eax
  _DMA_OPERATIONS *DmaOperations; // rax
  int *v76; // r8
  unsigned int v77; // ecx
  _DWORD *v78; // r9
  __int64 v79; // rcx
  __int64 v80; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v83; // rdx
  __int64 v84; // r15
  unsigned int *PoolWithTag; // rax
  int v86; // r10d
  char *v87; // rax
  unsigned int v88; // eax
  PVOID v89; // r8
  _DMA_OPERATIONS *v90; // rax
  __int64 v91; // r10
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r9
  int v95; // eax
  int v96; // ecx
  _DMA_OPERATIONS *v97; // rax
  __int64 GetCommonBufferFromVectorByIndex; // r8
  __int64 AllocateCommonBufferWithBounds; // rdx
  __int64 AllocateCommonBufferVector; // rcx
  __int64 GetDmaDomain; // r9
  unsigned int v102; // ecx
  unsigned int v103; // eax
  unsigned int v104; // edi
  unsigned int v105; // edx
  int v106; // [rsp+20h] [rbp-298h]
  unsigned int v107; // [rsp+40h] [rbp-278h]
  unsigned __int8 v108; // [rsp+A0h] [rbp-218h]
  int v109; // [rsp+A4h] [rbp-214h]
  unsigned __int8 v110; // [rsp+A8h] [rbp-210h]
  char v111; // [rsp+A9h] [rbp-20Fh]
  unsigned int v112; // [rsp+B0h] [rbp-208h] BYREF
  char v113; // [rsp+B8h] [rbp-200h]
  char v114; // [rsp+B9h] [rbp-1FFh] BYREF
  char v115; // [rsp+BAh] [rbp-1FEh] BYREF
  char v116[5]; // [rsp+BBh] [rbp-1FDh] BYREF
  unsigned int v117; // [rsp+C0h] [rbp-1F8h]
  int v118; // [rsp+C8h] [rbp-1F0h]
  int v119; // [rsp+CCh] [rbp-1ECh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+D0h] [rbp-1E8h] BYREF
  unsigned int v121; // [rsp+D8h] [rbp-1E0h]
  ULONGLONG v122; // [rsp+E0h] [rbp-1D8h] BYREF
  int v123; // [rsp+E8h] [rbp-1D0h] BYREF
  int v124; // [rsp+ECh] [rbp-1CCh]
  char v125; // [rsp+F2h] [rbp-1C6h]
  volatile void *v126; // [rsp+F8h] [rbp-1C0h]
  int *v127; // [rsp+100h] [rbp-1B8h]
  int v128; // [rsp+108h] [rbp-1B0h] BYREF
  int *v129; // [rsp+110h] [rbp-1A8h]
  PVOID v130; // [rsp+118h] [rbp-1A0h]
  int v131; // [rsp+120h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+128h] [rbp-190h] BYREF
  PVOID v133; // [rsp+130h] [rbp-188h] BYREF
  unsigned __int64 v134; // [rsp+138h] [rbp-180h]
  int v135; // [rsp+140h] [rbp-178h] BYREF
  __int64 v136; // [rsp+148h] [rbp-170h]
  PVOID P; // [rsp+150h] [rbp-168h]
  __int64 v138; // [rsp+158h] [rbp-160h]
  __int128 *v139; // [rsp+160h] [rbp-158h] BYREF
  __int64 v140; // [rsp+168h] [rbp-150h] BYREF
  __int16 *v141; // [rsp+170h] [rbp-148h]
  __int64 v142; // [rsp+178h] [rbp-140h] BYREF
  PVOID v143; // [rsp+180h] [rbp-138h] BYREF
  int v144; // [rsp+188h] [rbp-130h] BYREF
  int v145; // [rsp+18Ch] [rbp-12Ch] BYREF
  int v146; // [rsp+190h] [rbp-128h] BYREF
  int v147; // [rsp+194h] [rbp-124h] BYREF
  __int64 v148; // [rsp+198h] [rbp-120h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1A0h] [rbp-118h] BYREF
  void *Src; // [rsp+1C0h] [rbp-F8h]
  _OWORD v151[2]; // [rsp+1C8h] [rbp-F0h] BYREF
  __int16 *v152; // [rsp+1E8h] [rbp-D0h]
  void *v153; // [rsp+1F0h] [rbp-C8h]
  void *v154; // [rsp+1F8h] [rbp-C0h]
  __int64 v155; // [rsp+200h] [rbp-B8h]
  _DWORD *v156; // [rsp+208h] [rbp-B0h]
  unsigned int *v157; // [rsp+210h] [rbp-A8h]
  int *v158; // [rsp+218h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+220h] [rbp-98h] BYREF
  __int64 v160; // [rsp+240h] [rbp-78h]
  __int128 v161; // [rsp+248h] [rbp-70h] BYREF
  __int64 v162; // [rsp+258h] [rbp-60h]
  int v163; // [rsp+260h] [rbp-58h]
  __int128 v164; // [rsp+268h] [rbp-50h] BYREF

  v15 = (int)a2;
  Src = a2;
  v141 = a1;
  v152 = a1;
  v153 = a2;
  v154 = a3;
  v112 = a4;
  v155 = a5;
  v117 = a6;
  v156 = Address;
  v134 = a10;
  v16 = a11;
  v126 = a11;
  v157 = a11;
  v17 = a12;
  v127 = a12;
  v158 = a12;
  v144 = 0;
  P = 0LL;
  v145 = 0;
  v146 = 0;
  v130 = 0LL;
  v147 = 0;
  v129 = 0LL;
  DmaAdapter = 0LL;
  v122 = 0LL;
  v140 = 0LL;
  v123 = 0;
  v119 = 0;
  v164 = 0LL;
  v139 = 0LL;
  Privileges = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v151[0] = 0LL;
  LOBYTE(v15) = 0;
  v110 = 0;
  v133 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0;
  v136 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v160 = 0LL;
  v138 = 0LL;
  v113 = 0;
  v111 = 0;
  v128 = 0;
  v124 = v15;
  v125 = 0;
  v143 = 0LL;
  v116[0] = 0;
  v114 = 0;
  v115 = 0;
  v148 = 0LL;
  v118 = -1073741790;
  v135 = -1;
  v142 = 0xFFFFFFFFLL;
  v18 = (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v108 = v18;
  if ( !(_BYTE)v18 )
  {
    *a12 = 0;
    *a11 = v112;
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
    ProbeForWrite(v126, 4LL * a6, 4u);
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
  v164 = *a7;
  result = 0LL;
  v18 = v108;
LABEL_19:
  if ( (int)result < 0 )
    return result;
  v23 = v112;
  if ( (v112 & 0xF0000000) != 0 )
  {
    v24 = -1073741594;
    v109 = -1073741594;
    v25 = DmaAdapter;
    goto LABEL_176;
  }
  v24 = SepReferenceTokenByHandle(a3, 8u, v18, &DmaAdapter, v116, &v148);
  v109 = v24;
  if ( v24 < 0 )
  {
    v25 = 0LL;
    DmaAdapter = 0LL;
    v53 = v108;
    v48 = a13;
    goto LABEL_80;
  }
  v25 = DmaAdapter;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *(_DWORD *)&DmaAdapter[12].Version != 2 )
    {
      v24 = -1073741732;
      v109 = -1073741732;
      v53 = v108;
      goto LABEL_172;
    }
    if ( *(int *)(&DmaAdapter[12].Size + 1) < 1 )
    {
      v24 = -1073741659;
      v109 = -1073741659;
      v53 = v108;
      goto LABEL_172;
    }
  }
  v24 = SeCaptureObjectTypeList(a5, v117, v108, &v139);
  v109 = v24;
  if ( v24 < 0 || (v24 = SeCaptureSecurityDescriptor((_DWORD)v141, v108, 1, 0, (__int64)&v122), v109 = v24, v24 < 0) )
  {
LABEL_174:
    v53 = v108;
    goto LABEL_172;
  }
  if ( !v122 )
    goto LABEL_173;
  v141 = (__int16 *)(v122 + 2);
  v18 = *(unsigned __int16 *)(v122 + 2);
  if ( (v18 & 0x8000u) == 0LL )
  {
    v27 = *(_QWORD *)(v122 + 8);
  }
  else
  {
    v26 = *(unsigned int *)(v122 + 4);
    if ( !(_DWORD)v26 )
      goto LABEL_173;
    v27 = v122 + v26;
  }
  if ( !v27 )
    goto LABEL_173;
  if ( (v18 & 0x8000u) != 0LL )
  {
    v28 = *(unsigned int *)(v122 + 8);
    if ( (_DWORD)v28 )
    {
      v29 = v122 + v28;
      goto LABEL_35;
    }
LABEL_173:
    v24 = -1073741703;
    v109 = -1073741703;
    goto LABEL_174;
  }
  v29 = *(_QWORD *)(v122 + 16);
LABEL_35:
  if ( !v29 )
    goto LABEL_173;
  if ( v116[0] )
    LODWORD(v30) = v148;
  else
    v30 = *(_QWORD *)&v25[69].Version;
  v106 = v30;
  v24 = SepTrustLevelCheck(&v135, v122, 0LL, v25);
  v109 = v24;
  if ( v24 < 0 )
    goto LABEL_176;
  if ( (v135 & v112 & 0xFDFFFFFF) != (v112 & 0xFDFFFFFF) )
  {
    v114 = 1;
LABEL_184:
    v33 = -1073741790;
    v31 = a14;
LABEL_47:
    v16 = (_DWORD *)v110;
    goto LABEL_48;
  }
  v24 = SepFilterCheck(v122, (__int64 *)&v133, (__int64)v25, 1, (int *)&v142);
  v109 = v24;
  if ( v24 < 0 )
  {
LABEL_176:
    v53 = v108;
    goto LABEL_172;
  }
  if ( ((unsigned int)v142 & v112 & 0xFDFFFFFF) != (v112 & 0xFDFFFFFF) )
  {
    v115 = 1;
    goto LABEL_184;
  }
  v31 = a14;
  v24 = SepMandatoryIntegrityCheck((int *)&v164, v122, 0, (__int64)v25, 1, a14, (__int64)v151);
  v109 = v24;
  if ( v24 < 0 )
    goto LABEL_176;
  v110 = 0;
  v32 = SepMandatoryToDiscretionary(v151, v112);
  v33 = v32;
  if ( (v32 < 0 || (v112 & 0x2000000) != 0)
    && ((__int64)v25[12].DmaOperations & 0x4000) != 0
    && HIDWORD(v151[0]) <= 0x2000 )
  {
    LOBYTE(v16) = 1;
    v110 = 1;
  }
  if ( v32 >= 0 || (_BYTE)v16 )
  {
    v33 = SePrivilegePolicyCheck((unsigned int)&v112, (unsigned int)&v123, 0, (_DWORD)v25, (__int64)&Privileges, v108);
    v23 = v112;
    if ( !v112 )
    {
      v18 = (unsigned __int8)v124;
      if ( v123 )
        v18 = 1LL;
      v124 = v18;
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( v33 < 0 && !(_BYTE)v16 )
  {
    v48 = a13;
    v16 = v127;
    if ( a13 )
    {
      v18 = 0LL;
      v121 = 0;
      v17 = (int *)v126;
      while ( (unsigned int)v18 < v117 )
      {
        v16[(unsigned int)v18] = v33;
        v17[(unsigned int)v18] = 0;
        v18 = (unsigned int)(v18 + 1);
        v121 = v18;
      }
    }
    else
    {
      *v127 = v33;
      *(_DWORD *)v126 = 0;
    }
    v118 = v33;
    v24 = 0;
    v109 = 0;
    v53 = v108;
    goto LABEL_80;
  }
  v34 = Privileges;
  if ( Privileges )
  {
    PrivilegeCount = Privileges->PrivilegeCount;
    v71 = 12 * Privileges->PrivilegeCount;
    v72 = v71 + 8;
    if ( !Privileges->PrivilegeCount )
      v72 = 8;
    if ( v72 > Length )
    {
      v73 = v71 + 8;
      if ( !PrivilegeCount )
        v73 = 8;
      *(_DWORD *)v134 = v73;
      v24 = -1073741789;
      v109 = -1073741789;
      v53 = v108;
      CmSiFreeMemory(v34);
      goto LABEL_172;
    }
    v74 = v71 + 8;
    if ( !PrivilegeCount )
      v74 = 8;
    memmove(Address, Privileges, v74);
    CmSiFreeMemory(v34);
  }
  else
  {
    if ( Length < 0x14 )
    {
      *(_DWORD *)v134 = 20;
      v24 = -1073741789;
      v109 = -1073741789;
      v48 = a13;
      v53 = v108;
      goto LABEL_80;
    }
    *(_QWORD *)Address = Privileges;
  }
  if ( Src )
  {
    v24 = SeCaptureSid(Src, v106, 1, (__int64)&v140);
    v109 = v24;
    if ( v24 < 0 )
    {
      v140 = 0LL;
      v53 = v108;
LABEL_172:
      v48 = a13;
      goto LABEL_80;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = DmaAdapter;
  v36 = (PERESOURCE *)&DmaAdapter[3];
  ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
  IsOwner = SepTokenIsOwner(v25, v122, v37, v31);
  if ( !SepAllowAccessUponLogoff && ((__int64)v25[12].DmaOperations & 0x20) == 0 )
  {
    DmaOperations = v25[13].DmaOperations;
    if ( DmaOperations )
    {
      if ( ((__int64)DmaOperations->AllocateAdapterChannel & 0x20) != 0 )
      {
        v48 = a13;
        v76 = v127;
        if ( a13 )
        {
          v77 = 0;
          v121 = 0;
          v78 = v126;
          while ( v77 < v117 )
          {
            v76[v77] = -1073741790;
            v78[v77++] = 0;
            v121 = v77;
          }
        }
        else
        {
          *v127 = -1073741790;
          *(_DWORD *)v126 = 0;
        }
        v118 = -1073741790;
        v24 = 0;
        v109 = 0;
        v53 = v108;
        ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
        KeLeaveCriticalRegion();
        SeReleaseSubjectContext(&SubjectContext);
        v23 = v112;
        goto LABEL_80;
      }
    }
  }
  v41 = v141;
  if ( SepRmEnforceCap && (*v141 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
  {
    if ( *v141 >= 0 )
    {
      v80 = *(_QWORD *)(v122 + 24);
    }
    else
    {
      v79 = *(unsigned int *)(v122 + 12);
      if ( !(_DWORD)v79 )
      {
        v136 = 0LL;
        goto LABEL_55;
      }
      v80 = v122 + v79;
    }
    v136 = v80;
    if ( v80 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid(v80, v38, v39);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid);
        v83 = v138;
        if ( Cap < 0 )
          v83 = SepRmDefaultCap;
        v138 = v83;
        v113 = 1;
      }
    }
  }
LABEL_55:
  v23 = v112;
  if ( (v112 & 0x2060000) != 0
    && IsOwner
    && ((*v41 & 4) == 0
      ? (v56 = 0LL)
      : *v41 >= 0
      ? (v56 = *(_QWORD *)(v122 + 32))
      : (v55 = *(_DWORD *)(v122 + 16)) == 0
      ? (v56 = 0LL)
      : (v56 = v122 + v55),
        !RtlpOwnerAcesPresent(0, v56)) )
  {
    if ( (v23 & 0x2000000) != 0 )
    {
      v57 = 393216;
      v42 = v123 | 0x60000;
    }
    else
    {
      v57 = v23 & 0x60000;
      v42 = v123 | v23 & 0x60000;
    }
    v119 = v57;
    v123 = v42;
    v23 &= 0xFFF9FFFF;
    v112 = v23;
  }
  else
  {
    v42 = v123;
  }
  if ( v23 || v113 && !(_BYTE)v124 )
  {
    v25 = DmaAdapter;
    v43 = v119;
  }
  else
  {
    v25 = DmaAdapter;
    if ( ((__int64)DmaAdapter[12].DmaOperations & 0x2000) != 0 || (v43 = v119) == 0 )
    {
      v48 = a13;
      if ( a13 )
      {
        v67 = 0;
        v121 = 0;
        v68 = v157;
        v69 = v158;
        while ( v67 < v117 )
        {
          if ( v42 )
          {
            v69[v67] = 0;
            v118 = 0;
            v68[v67] = v42;
          }
          else
          {
            v69[v67] = -1073741790;
            v118 = -1073741790;
            v68[v67] = 0;
          }
          v121 = ++v67;
        }
      }
      else
      {
        v66 = v126;
        if ( v42 )
        {
          *v127 = 0;
          v118 = 0;
          *v66 = v42;
        }
        else
        {
          *v127 = -1073741790;
          v118 = -1073741790;
          *v66 = 0;
        }
      }
      v24 = 0;
      v109 = 0;
      v53 = v108;
      ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
      KeLeaveCriticalRegion();
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_80;
    }
  }
  if ( a13 )
  {
    v84 = v117;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * v117, 0x61476553u);
    v44 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      ExReleaseResourceLite(*v36);
      KeLeaveCriticalRegion();
      SeReleaseSubjectContext(&SubjectContext);
      v24 = -1073741670;
      v109 = -1073741670;
      v53 = v108;
      goto LABEL_172;
    }
    v45 = (int *)&PoolWithTag[v84];
    v43 = v119;
  }
  else
  {
    v44 = (unsigned int *)&v144;
    P = &v144;
    v45 = &v145;
  }
  LODWORD(v161) = v43;
  v107 = v42;
  v46 = v117;
  SepAccessCheck(
    v122,
    v140,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v25,
    v23,
    v139,
    v117,
    &v164,
    v107,
    v108,
    v44,
    0LL,
    v45,
    a13,
    IsOwner,
    (int *)&v161,
    (__int64)&v133,
    0LL,
    0LL,
    a14);
  if ( SepRmEnforceCap && (v86 = *v45, v119 = v86, v86 >= 0) && v113 )
  {
    if ( a13 )
    {
      v87 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v46, 0x61476553u);
      v130 = v87;
      if ( !v87 )
      {
        ExReleaseResourceLite(*v36);
        KeLeaveCriticalRegion();
        SeReleaseSubjectContext(&SubjectContext);
        v24 = -1073741670;
        v109 = -1073741670;
        v25 = DmaAdapter;
        v23 = v112;
        v53 = v108;
        goto LABEL_172;
      }
      v129 = (int *)&v87[4 * v46];
      v86 = *v45;
      v119 = *v45;
    }
    else
    {
      v130 = &v146;
      v129 = &v147;
    }
    LODWORD(Privileges) = *(_DWORD *)P;
    LOBYTE(v46) = 0;
    v124 = v46;
    if ( v117 )
    {
      v24 = SepCopyObjectTypeList(v139, v117, &v143);
      v109 = v24;
      if ( v24 < 0 )
      {
        v25 = DmaAdapter;
        v23 = v112;
        v53 = v108;
        goto LABEL_172;
      }
      v86 = v119;
      LOBYTE(v46) = v124;
    }
    v88 = 0;
    v131 = 0;
    v25 = DmaAdapter;
    v23 = v112;
    while ( v88 < *(_DWORD *)(v138 + 60) )
    {
      v134 = *(_QWORD *)(v138 + 8LL * v88 + 64);
      if ( !*(_QWORD *)(v134 + 24) )
        goto LABEL_278;
      v89 = v133;
      if ( !v133 )
      {
        LODWORD(v46) = (unsigned __int8)v46;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl(v136, (__int64 *)&v133) < 0 )
          LODWORD(v46) = 1;
        v124 = v46;
        v89 = v133;
      }
      v90 = v25[68].DmaOperations;
      v91 = v90 ? (__int64)v90[1].GetCommonBufferFromVectorByIndex : 0LL;
      v92 = v90 ? (__int64)v90[1].AllocateCommonBufferWithBounds : 0LL;
      v93 = v90 ? (__int64)v90[1].AllocateCommonBufferVector : 0LL;
      v94 = v90 ? (__int64)v90[1].GetDmaDomain : 0LL;
      v95 = AuthzBasepEvaluateAceCondition(
              (__int64)v25,
              (__int64)v25[48].DmaOperations,
              (__int64)v89,
              v94,
              v93,
              v92,
              v91,
              *(_DWORD **)(v134 + 24),
              *(_DWORD *)(v134 + 16),
              1u,
              0,
              &v128);
      v24 = v95;
      v109 = v95;
      v96 = v128;
      if ( v128 == 1 )
        goto LABEL_278;
      if ( v95 < 0 )
        goto LABEL_294;
      if ( ((__int64)v25[12].DmaOperations & 0x10) != 0 )
      {
        v97 = v25[68].DmaOperations;
        if ( v97 )
          GetCommonBufferFromVectorByIndex = (__int64)v97[1].GetCommonBufferFromVectorByIndex;
        else
          GetCommonBufferFromVectorByIndex = 0LL;
        if ( v97 )
          AllocateCommonBufferWithBounds = (__int64)v97[1].AllocateCommonBufferWithBounds;
        else
          AllocateCommonBufferWithBounds = 0LL;
        if ( v97 )
          AllocateCommonBufferVector = (__int64)v97[1].AllocateCommonBufferVector;
        else
          AllocateCommonBufferVector = 0LL;
        if ( v97 )
          GetDmaDomain = (__int64)v97[1].GetDmaDomain;
        else
          GetDmaDomain = 0LL;
        v24 = AuthzBasepEvaluateAceCondition(
                (__int64)v25,
                (__int64)v25[48].DmaOperations,
                (__int64)v133,
                GetDmaDomain,
                AllocateCommonBufferVector,
                AllocateCommonBufferWithBounds,
                GetCommonBufferFromVectorByIndex,
                *(_DWORD **)(v134 + 24),
                *(_DWORD *)(v134 + 16),
                1u,
                1u,
                &v128);
        v109 = v24;
        if ( v24 < 0 )
        {
LABEL_294:
          ExReleaseResourceLite(*v36);
          KeLeaveCriticalRegion();
          SeReleaseSubjectContext(&SubjectContext);
          v53 = v108;
          goto LABEL_172;
        }
        v96 = v128;
      }
      LOBYTE(v46) = v124;
      if ( (_BYTE)v124 || v96 == 1 )
      {
LABEL_278:
        v24 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        v109 = v24;
        if ( v24 < 0 )
          goto LABEL_294;
        v102 = v23;
        if ( (*(_DWORD *)(v134 + 48) & 1) != 0 )
        {
          if ( (v23 & 0x2000000) == 0 )
            v102 = v123 | v23;
          v103 = 0;
        }
        else
        {
          v103 = v123;
        }
        v104 = v117;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v140,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)v25,
          v102,
          (__int128 *)v143,
          v117,
          &v164,
          v103,
          v108,
          (unsigned int *)v130,
          0LL,
          v129,
          a13,
          IsOwner,
          (int *)&v161,
          (__int64)&v133,
          0LL,
          0LL,
          a14);
        v105 = *(_DWORD *)v130;
        if ( v111 )
          v105 = (unsigned int)Privileges & *(_DWORD *)v130;
        LODWORD(Privileges) = v105;
        if ( v105 )
          v86 = *v129;
        else
          v86 = -1073741790;
        v119 = v86;
        v111 = 1;
        if ( v143 )
          SepMergeObjectTypeListAccesses(v139, v143, v104);
        if ( v86 < 0 )
          break;
        LOBYTE(v46) = v124;
      }
      else
      {
        v86 = v119;
      }
      v88 = ++v131;
    }
    *v45 = v86;
    v47 = (char *)P;
    *(_DWORD *)P &= (unsigned int)Privileges;
  }
  else
  {
    v25 = DmaAdapter;
    v23 = v112;
    v47 = (char *)P;
  }
  ExReleaseResourceLite(*v36);
  KeLeaveCriticalRegion();
  SeReleaseSubjectContext(&SubjectContext);
  if ( (v23 & 0x2000000) != 0 )
  {
    if ( !v110 || !*(_WORD *)((char *)&v162 + 5) )
    {
      v48 = a13;
      if ( a13 )
        v58 = v117;
      else
        v58 = 0;
      SepConstrainByMandatory((__int64)v151, v23, v47, (char *)v45, 0LL, v58);
      goto LABEL_66;
    }
  }
  else if ( v110 && !*(_WORD *)((char *)&v162 + 5) )
  {
    v48 = a13;
    v16 = v127;
    if ( a13 )
    {
      v64 = 0;
      v121 = 0;
      v17 = (int *)v126;
      while ( v64 < v117 )
      {
        v16[v64] = -1073741790;
        v17[v64++] = 0;
        v121 = v64;
      }
    }
    else
    {
      *v127 = -1073741790;
      *(_DWORD *)v126 = 0;
    }
    v118 = -1073741790;
    v24 = 0;
    v109 = 0;
    v53 = v108;
    goto LABEL_80;
  }
  v48 = a13;
LABEL_66:
  if ( (v23 & 0x2000000) != 0 )
  {
    v59 = v117;
    if ( v48 )
      v60 = v117;
    else
      v60 = 0;
    SepConstrainByConstraintMask(v135, v23, v47, (char *)v45, 0LL, v60, &v114);
    if ( v48 )
      v61 = v59;
    else
      v61 = 0;
    SepConstrainByConstraintMask(v142, v23, v47, (char *)v45, 0LL, v61, &v115);
  }
  v18 = (__int64)v127;
  *v127 = *v45;
  v16 = v126;
  *(_DWORD *)v126 = *(_DWORD *)v47;
  v118 = *v45;
  v17 = v129;
  v49 = v130;
  if ( SepRmEnforceCap && v111 && *v45 >= 0 )
  {
    *(_DWORD *)v18 = *v129;
    *v16 &= *v49;
    v118 = *v17;
  }
  if ( v48 )
  {
    v50 = 1LL;
    v51 = v117;
    while ( 1 )
    {
      v121 = v50;
      if ( (unsigned int)v50 >= v51 )
        break;
      v52 = v50;
      *(_DWORD *)(v18 + v52 * 4) = v45[v50];
      v16[v52] = *(_DWORD *)&v47[4 * v50];
      if ( SepRmEnforceCap && v111 && v45[v52] >= 0 )
      {
        *(_DWORD *)(v18 + 4 * v50) = v17[v50];
        v16[v50] &= v49[v50];
      }
      v50 = v121 + 1;
    }
  }
  v24 = 0;
  v109 = 0;
  v25 = DmaAdapter;
  v23 = v112;
  v53 = v108;
LABEL_80:
  if ( v122 && v25 )
  {
    if ( v114 || v115 )
    {
LABEL_129:
      v62 = KeGetCurrentThread();
      --v62->KernelApcDisable;
      v25 = DmaAdapter;
      ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
      if ( v116[0] )
        v63 = v148;
      else
        v63 = *(_QWORD *)&v25[69].Version;
      v23 = v112;
      SeLogAccessFailure((__int64)v25, 0LL, 0LL, v63, v122, v123 | v112, v118 >= 0, 0);
      ExReleaseResourceLite(*(PERESOURCE *)&v25[3].Version);
      KeLeaveCriticalRegion();
      v24 = v109;
      v54 = HIDWORD(v161);
LABEL_86:
      if ( v24 >= 0
        && v118 < 0
        && !v54
        && ((__int64)v25[12].DmaOperations & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v161, v23) )
      {
        SepLogLpacAccessFailure(v65, v18);
      }
      goto LABEL_88;
    }
    v54 = HIDWORD(v161);
    if ( HIDWORD(v161) || ((__int64)v25[12].DmaOperations & 0x4000) == 0 )
      goto LABEL_86;
    if ( v24 >= 0 )
    {
      if ( v118 >= 0 && !HIBYTE(v162) )
        goto LABEL_86;
      goto LABEL_129;
    }
  }
LABEL_88:
  if ( v48 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v130 )
      ExFreePoolWithTag(v130, 0);
  }
  if ( v25 )
    HalPutDmaAdapter(v25);
  if ( v139 )
    SeFreeCapturedObjectTypeList(v139, v18, v16, v17);
  if ( v140 )
  {
    LOBYTE(v16) = 1;
    SeReleaseSid(v140, v53, v16, v17);
  }
  if ( v122 )
    SeReleaseSecurityDescriptor(v122, v53, 0LL, v17);
  if ( v113 )
    SepRmDereferenceCap(v138, v18, v16, v17);
  if ( v143 )
    ExFreePoolWithTag(v143, 0);
  SepFreeResourceInfo(v133);
  return (unsigned int)v24;
}
