/*
 * XREFs of ObpLookupObjectName @ 0x140641640
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1406D9EC0 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406DB6F0 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObpLockDirectoryShared @ 0x1402065CC (ObpLockDirectoryShared.c)
 *     NLS_UPCASE @ 0x140206AB0 (NLS_UPCASE.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x14025EE20 (PsGetCurrentProcessSessionId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     SeAccessCheckWithHint @ 0x1402CE400 (SeAccessCheckWithHint.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1402D6DE0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     PsGetPermanentSiloContext @ 0x1402EDF20 (PsGetPermanentSiloContext.c)
 *     SeClearLearningModeObjectInformation @ 0x1403455C0 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x140345990 (SeSetLearningModeObjectInformation.c)
 *     ObpUnlockDirectory @ 0x140347B1C (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x14034D1A0 (ObpLockDirectoryExclusive.c)
 *     ObReferenceObjectByPointer @ 0x14035F490 (ObReferenceObjectByPointer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ObpUseSystemDeviceMap @ 0x1405CF1CC (ObpUseSystemDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x140625954 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140625B10 (ObpReferenceDeviceMap.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140676FE8 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406770FC (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x14067F314 (ObpInsertDirectoryEntry.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406CF720 (PsReferenceImpersonationTokenEx.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     ObCheckCreateObjectAccess @ 0x1406DBC80 (ObCheckCreateObjectAccess.c)
 *     ObpIsUnsecureName @ 0x1408DC3C4 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x1408DD180 (ObpCheckTraverseAccess.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

int __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        __m128i *a2,
        int a3,
        struct _OBJECT_TYPE *a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *Object,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v13; // r12
  __int16 v14; // bx
  struct _OBJECT_TYPE *v15; // rdi
  __int64 v17; // r9
  char v18; // cl
  int v19; // r13d
  bool v20; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  PVOID v23; // r13
  int result; // eax
  int v25; // ecx
  struct _DMA_ADAPTER *v26; // rbx
  NTSTATUS v27; // eax
  PVOID v28; // rcx
  __m128i v29; // xmm0
  __int64 v30; // rdx
  struct _DMA_ADAPTER *v31; // rdi
  int PermanentSiloContext; // eax
  struct _OBJECT_TYPE *v33; // r14
  __m128i *v34; // r15
  __int64 v35; // rcx
  char v36; // si
  struct _KTHREAD *CurrentThread; // r15
  struct _DMA_ADAPTER *v38; // r14
  __int64 Process; // r13
  __int64 ProcessServerSilo; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  bool v43; // zf
  __int64 v44; // rcx
  bool v45; // di
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  volatile signed __int32 *v48; // r13
  volatile signed __int32 **CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v50; // rcx
  volatile signed __int32 **v51; // rbx
  __int64 v52; // rcx
  struct _KTHREAD *v53; // rax
  __m128i v54; // xmm0
  PVOID *v55; // rax
  PVOID *v56; // r13
  struct _DMA_ADAPTER *v57; // rsi
  __int64 v58; // r14
  struct _OBJECT_TYPE *v59; // rax
  __int64 (__usercall *ParseProcedure)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  char *v61; // rsi
  NTSTATUS v62; // edx
  struct _KTHREAD *v63; // rax
  unsigned int v64; // ebx
  unsigned __int16 *v65; // rdi
  unsigned __int64 v66; // r11
  __int64 v67; // r9
  __int64 v68; // r10
  __int64 v69; // rax
  __int128 v70; // rt0
  unsigned int v71; // r10d
  int v72; // r10d
  int v73; // r9d
  int v74; // r10d
  __int64 v75; // rbx
  ULONG_PTR v76; // r12
  char v77; // r13
  unsigned __int16 v78; // ax
  __int64 v79; // rcx
  char *v80; // r14
  struct _KTHREAD *v81; // rax
  __int64 *v82; // rsi
  char *v83; // r11
  _QWORD *v84; // rbx
  char *v85; // rdi
  signed __int64 v86; // rbx
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // r9
  struct _DMA_ADAPTER *v89; // rcx
  struct _DMA_ADAPTER *v90; // rcx
  _DWORD *v91; // rsi
  int v92; // eax
  char *v93; // r14
  void *v94; // rax
  struct _KTHREAD *v95; // rcx
  ULONG_PTR v96; // rbx
  __int64 v97; // rax
  struct _KTHREAD *v98; // rax
  char v99; // r13
  char *v100; // r15
  struct _KTHREAD *v101; // rax
  char *v102; // rsi
  int v103; // r12d
  char *v104; // r9
  _QWORD *v105; // r11
  char *v106; // rdi
  signed __int64 v107; // r11
  unsigned __int16 v108; // bx
  unsigned __int16 v109; // cx
  unsigned __int16 v110; // ax
  __int16 v111; // r10
  struct _DMA_ADAPTER *v112; // rcx
  __int64 (__usercall *v113)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  struct _DMA_ADAPTER *v114; // r14
  struct _DMA_ADAPTER *v115; // rcx
  struct _DMA_ADAPTER *v116; // rcx
  NTSTATUS v117; // eax
  struct _DMA_ADAPTER *v118; // rsi
  __int16 *v119; // rax
  __int16 v120; // cx
  int v121; // eax
  signed __int32 v122; // ebx
  signed __int32 v123; // eax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v125; // rcx
  ULONG_PTR v126; // rdi
  void *v127; // rcx
  struct _DMA_ADAPTER *v128; // rcx
  __int64 v129; // rdx
  _DWORD *v130; // r14
  KPROCESSOR_MODE v131; // r13
  int v132; // edi
  struct _DMA_ADAPTER *v133; // rcx
  NTSTATUS v134; // ecx
  unsigned int v135; // esi
  PVOID PoolWithTag; // rdi
  char *v137; // rbx
  void *v138; // rcx
  __int16 v139; // ax
  int Tag; // [rsp+20h] [rbp-E0h]
  int *v141; // [rsp+28h] [rbp-D8h]
  NTSTATUS v142; // [rsp+60h] [rbp-A0h] BYREF
  bool v143; // [rsp+64h] [rbp-9Ch]
  char v144; // [rsp+65h] [rbp-9Bh]
  PADAPTER_OBJECT v145; // [rsp+68h] [rbp-98h]
  __m128i v146; // [rsp+70h] [rbp-90h] BYREF
  PVOID v147; // [rsp+80h] [rbp-80h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h]
  unsigned int v150; // [rsp+98h] [rbp-68h]
  int v151; // [rsp+9Ch] [rbp-64h] BYREF
  char v152; // [rsp+A0h] [rbp-60h] BYREF
  char v153; // [rsp+A1h] [rbp-5Fh] BYREF
  PVOID TokenInformation; // [rsp+A4h] [rbp-5Ch] BYREF
  int v155; // [rsp+ACh] [rbp-54h]
  int v156; // [rsp+B0h] [rbp-50h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v158[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v159; // [rsp+D4h] [rbp-2Ch]
  __int64 v160; // [rsp+D8h] [rbp-28h]
  int v161; // [rsp+E0h] [rbp-20h] BYREF
  int v162; // [rsp+E4h] [rbp-1Ch] BYREF
  struct _DMA_ADAPTER *v163; // [rsp+E8h] [rbp-18h] BYREF
  struct _DMA_ADAPTER *v164; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v165; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v166; // [rsp+100h] [rbp+0h] BYREF
  PVOID v167; // [rsp+108h] [rbp+8h]
  char v168[8]; // [rsp+110h] [rbp+10h] BYREF
  PVOID v169; // [rsp+118h] [rbp+18h]
  _QWORD v170[2]; // [rsp+120h] [rbp+20h] BYREF
  _UNICODE_STRING *p_Name; // [rsp+130h] [rbp+30h]
  __m128i *v172; // [rsp+138h] [rbp+38h]
  ULONG_PTR v173; // [rsp+140h] [rbp+40h]
  __int128 v174; // [rsp+148h] [rbp+48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+158h] [rbp+58h] BYREF
  char v176; // [rsp+1D0h] [rbp+D0h]
  __m128i *v177; // [rsp+1D8h] [rbp+D8h]
  int v178; // [rsp+1E0h] [rbp+E0h]

  v178 = a3;
  v177 = a2;
  v13 = a11;
  v14 = a3;
  v156 = 64;
  DmaAdapter = 0LL;
  v15 = a4;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v158[1] = 0;
  v165 = 0LL;
  v170[0] = 0LL;
  v170[1] = 0LL;
  P = 0LL;
  v143 = 0;
  v176 = 0;
  v174 = 0LL;
  v146 = 0LL;
  if ( a12 )
    *a12 = 0;
  v43 = ObpCaseInsensitive == 0;
  v17 = a9;
  v142 = 0;
  v151 = 0;
  *a13 = 0LL;
  v158[0] = 16;
  v144 = 1;
  v147 = 0LL;
  v145 = 0LL;
  v159 = -1;
  v160 = a9;
  if ( !v43
    && (v15->TypeInfo.ObjectTypeFlags & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v178 = a3 | 0x40;
  }
  v18 = a5;
  v19 = 1;
  if ( (v14 & 0x400) == 0 )
    v19 = a5;
  v150 = v19;
  if ( !Object )
  {
    v20 = 0;
    v176 = 1;
    LODWORD(TokenInformation) = 0;
    v162 = 0;
    p_SubjectContext = 0LL;
    v161 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( (_BYTE)v19 )
    {
      if ( a10 == -32 )
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      else
      {
        p_SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)(a10 + 32);
      }
      if ( (unsigned __int8)SeAccessCheckWithHint(
                              (__int64)SeMediumDaclSd,
                              8LL,
                              (__int64)p_SubjectContext,
                              0LL,
                              0x20000,
                              0,
                              0LL,
                              (__int64)RtlpRestrictedMapping,
                              v19,
                              (__int64)&v162,
                              (__int64)&v161) == 1 )
      {
        if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        {
          ClientToken = p_SubjectContext->ClientToken;
          if ( !p_SubjectContext->ClientToken )
            ClientToken = p_SubjectContext->PrimaryToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0 )
            v20 = (_DWORD)TokenInformation == 0;
        }
        else
        {
          v20 = 1;
        }
      }
    }
    else
    {
      v20 = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
      SeReleaseSubjectContext(p_SubjectContext);
    v14 = v178;
    v43 = v20;
    a2 = v177;
    v15 = a4;
    v143 = !v43;
    v18 = a5;
    v17 = a9;
  }
  if ( !BugCheckParameter1 )
  {
    if ( !a2->m128i_i16[0] || *(_WORD *)a2->m128i_i64[1] != 92 )
      return -1073741765;
    v23 = 0LL;
    v163 = 0LL;
    PermanentSiloContext = PsGetPermanentSiloContext(v17, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v163);
    v31 = v163;
    if ( PermanentSiloContext < 0 )
      v31 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
    v163 = v31;
    DmaAdapter = v31;
    if ( v31 )
      ObfReferenceObject(v31);
    if ( v177->m128i_i16[0] == 2 )
    {
      if ( v31 )
      {
        v142 = ObReferenceObjectByPointer(v31, 0, a4, a5);
        if ( v142 >= 0 )
          *a13 = v31;
        HalPutDmaAdapter(v31);
        return v142;
      }
      else if ( Object )
      {
        result = ObReferenceObjectByPointer(Object, 0, a4, a5);
        if ( result >= 0 )
          *a13 = Object;
      }
      else
      {
        return -1073741811;
      }
      return result;
    }
    v33 = a4;
    v34 = v177;
    v172 = v177;
    v173 = 0LL;
    p_Name = &a4->Name;
    SeSetLearningModeObjectInformation((__int64)v170);
    while ( 1 )
    {
      v35 = v34->m128i_i64[1];
      if ( (v35 & 7) != 0 )
        goto LABEL_95;
      v30 = v34->m128i_u16[0];
      v36 = (v14 & 0x800) != 0;
      if ( (unsigned __int16)v30 < 8u || *(_QWORD *)v35 != ObpDosDevicesShortNamePrefix )
      {
        if ( (_WORD)v30 == 6 && *(_DWORD *)v35 == *(_DWORD *)L"\\??" && *(_WORD *)(v35 + 4) == 63 )
        {
          v55 = (PVOID *)ObpReferenceDeviceMap(v36);
          P = v55;
          v56 = v55;
          if ( v55 && *v55 )
          {
            v142 = ObReferenceObjectByPointer(*v55, 0, v33, a5);
            if ( v142 >= 0 )
            {
              if ( a12 && v159 != -1 )
                *a12 = v159;
              *a13 = *v56;
            }
            ObfDereferenceDeviceMap(v56);
            HalPutDmaAdapter(v31);
            SeClearLearningModeObjectInformation();
            return v142;
          }
LABEL_94:
          v23 = 0LL;
        }
LABEL_95:
        v146 = *v34;
        goto LABEL_96;
      }
      if ( v33 == (struct _OBJECT_TYPE *)IoFileObjectType )
        v36 |= ObpUseSystemDeviceMap((__int64)v34);
      CurrentThread = KeGetCurrentThread();
      v38 = (struct _DMA_ADAPTER *)v23;
      P = v23;
      Process = (__int64)CurrentThread->Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v43 = ProcessServerSilo == PsGetCurrentServerSilo(v42, v41);
      v44 = 1LL;
      v45 = !v43;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || v36 )
      {
        if ( !v43 )
          goto LABEL_74;
      }
      else
      {
        if ( !v43 )
          goto LABEL_74;
        v46 = PsReferenceImpersonationTokenEx(
                (_DWORD)CurrentThread,
                1,
                (unsigned int)&v153,
                (unsigned int)&v152,
                (__int64)v168,
                0LL);
        v38 = (struct _DMA_ADAPTER *)v46;
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 24);
          if ( (_DWORD)v47 == 999 )
          {
            v44 = HIDWORD(v47);
            if ( !(_DWORD)v44 )
            {
              v45 = 1;
              goto LABEL_74;
            }
          }
          v166 = 0LL;
          if ( (int)SeGetTokenDeviceMap(v46, &v166) >= 0 )
          {
            P = (PVOID)v166;
            if ( v166 )
            {
              v48 = v166;
              _InterlockedIncrement(v166 + 6);
              goto LABEL_83;
            }
          }
        }
      }
      if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
      {
        v48 = (volatile signed __int32 *)P;
        goto LABEL_83;
      }
LABEL_74:
      CurrentServerSiloGlobals = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals(v44, v30);
      v50 = KeGetCurrentThread();
      v51 = CurrentServerSiloGlobals;
      --v50->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
      if ( v45 )
        v48 = *v51;
      else
        v48 = *(volatile signed __int32 **)(Process + 1416);
      P = (PVOID)v48;
      if ( v48 )
        _InterlockedIncrement(v48 + 6);
      ExReleasePushLockEx((ULONG_PTR)(v51 + 15), 0LL);
      v53 = KeGetCurrentThread();
      v43 = v53->SpecialApcDisable++ == -1;
      if ( v43 && ($C459BD0D405E8E46662177FB3D0A143F *)v53->ApcState.ApcListHead[0].Flink != &v53->152 )
        KiCheckForKernelApcDelivery(v52);
LABEL_83:
      if ( v38 )
        HalPutDmaAdapter(v38);
      if ( !v48 || !*(_QWORD *)v48 )
      {
        v31 = DmaAdapter;
        v34 = v177;
        goto LABEL_94;
      }
      v54 = *v177;
      v146.m128i_i64[0] = v177->m128i_i64[0];
      v146.m128i_i16[0] -= 8;
      v146.m128i_i16[1] -= 8;
      v146.m128i_i64[1] = _mm_srli_si128(v54, 8).m128i_u64[0] + 8;
      v31 = *(struct _DMA_ADAPTER **)v48;
      v23 = 0LL;
LABEL_96:
      v147 = v31;
LABEL_97:
      while ( 1 )
      {
        v57 = v31 - 3;
        v58 = (unsigned __int8)((unsigned __int16)((_WORD)v31 - 48) >> 8);
        v59 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v58 ^ LOBYTE(v31[-2].DmaOperations)];
        ParseProcedure = (__int64 (__usercall *)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))v59->TypeInfo.ParseProcedure;
        if ( ParseProcedure )
          break;
        if ( v59 != ObpDirectoryObjectType )
          goto LABEL_333;
        v61 = (char *)v31;
        v167 = v31;
        if ( v146.m128i_i16[0] && *(_WORD *)v146.m128i_i64[1] == 92 )
        {
          v146.m128i_i64[1] += 2LL;
          v146.m128i_i16[0] -= 2;
          v146.m128i_i16[1] -= 2;
        }
        for ( *(__m128i *)Src = v146; v146.m128i_i16[0]; v146.m128i_i16[0] -= 2 )
        {
          if ( *(_WORD *)v146.m128i_i64[1] == 92 )
            break;
          v146.m128i_i64[1] += 2LL;
        }
        v146.m128i_i16[1] -= LOWORD(Src[0]) - v146.m128i_i16[0];
        LOWORD(Src[0]) -= v146.m128i_i16[0];
        if ( !LOWORD(Src[0]) )
        {
LABEL_332:
          v142 = -1073741773;
          goto LABEL_307;
        }
        if ( !(_BYTE)v150
          || (HIDWORD(v30) = HIDWORD(a10), (*(_DWORD *)(a10 + 12) & 1) != 0)
          || (v141 = &v151, (v144 = ObpCheckTraverseAccess(v31, a10, a10)) != 0) )
        {
          if ( v146.m128i_i16[0] )
            goto LABEL_117;
          if ( !Object )
          {
            *(_DWORD *)(v13 + 32) = -1145368012;
            v63 = KeGetCurrentThread();
            --v63->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&v31[18].DmaOperations, 0LL);
            *(_DWORD *)(v13 + 32) = -572714444;
            ObfReferenceObject(v31);
            *(_QWORD *)v13 = v31;
            *(_WORD *)(v13 + 30) = 1;
            goto LABEL_117;
          }
        }
        else
        {
          v62 = v151;
          if ( v151 >= 0 )
            v62 = -1073741772;
          v151 = v62;
          if ( v146.m128i_i16[0] || !Object )
            goto LABEL_331;
        }
        ObpLockDirectoryExclusive(v13, v31);
LABEL_117:
        HIDWORD(TokenInformation) = LOWORD(Src[0]);
        v64 = LOWORD(Src[0]) >> 1;
        v169 = v31;
        v65 = (unsigned __int16 *)Src[1];
        v155 = v178 & 0x40;
        if ( v64 < 4 )
        {
          v71 = (unsigned int)v23;
        }
        else
        {
          v66 = (unsigned __int64)v23;
          do
          {
            v67 = *(_QWORD *)v65;
            if ( (*(_QWORD *)v65 & 0xFF80FF80FF80FF80uLL) != 0 )
            {
              v68 = 4LL;
              do
              {
                v69 = (unsigned __int16)v67;
                if ( (unsigned __int16)v67 >= 0x61u )
                {
                  if ( (unsigned __int16)v67 <= 0x7Au )
                    v69 = (unsigned int)(unsigned __int16)v67 - 32;
                  else
                    v69 = NLS_UPCASE(v67);
                }
                *(_QWORD *)&v70 = v67;
                *((_QWORD *)&v70 + 1) = v69;
                v67 = v70 >> 16;
                --v68;
              }
              while ( v68 );
            }
            else
            {
              v67 &= 0xFFDFFFDFFFDFFFDFuLL;
            }
            v65 += 4;
            v64 -= 4;
            v66 = v67 + (v66 >> 1) + 3 * v66;
          }
          while ( v64 >= 4 );
          v61 = (char *)v167;
          v71 = v66 + HIDWORD(v66);
        }
        if ( v64 )
        {
          while ( 1 )
          {
            v30 = *v65++;
            --v64;
            v72 = (v71 >> 1) + 3 * v71;
            if ( (unsigned int)v30 < 0x61 )
              goto LABEL_135;
            if ( (unsigned int)v30 <= 0x7A )
              break;
            v73 = NLS_UPCASE(v30);
            v71 = v73 + v74;
LABEL_136:
            if ( !v64 )
              goto LABEL_137;
          }
          v72 -= 32;
LABEL_135:
          v71 = v30 + v72;
          goto LABEL_136;
        }
LABEL_137:
        v75 = a11;
        v76 = (ULONG_PTR)(v61 + 296);
        LODWORD(v30) = (3134165325u * (unsigned __int64)v71) >> 32;
        v77 = *(_BYTE *)(a11 + 30);
        *(_DWORD *)(a11 + 24) = v71;
        v78 = v71 % 0x25;
        v79 = v78;
        *(_WORD *)(a11 + 28) = v78;
        v80 = &v61[8 * v78];
        if ( !v77 )
        {
          *(_DWORD *)(a11 + 32) = -1145368012;
          v81 = KeGetCurrentThread();
          --v81->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v61 + 296), 0LL);
          *(_DWORD *)(a11 + 32) = -572714444;
          ObfReferenceObject(v61);
          *(_QWORD *)a11 = v61;
          *(_WORD *)(a11 + 30) = 1;
        }
        v82 = *(__int64 **)v80;
        if ( !*(_QWORD *)v80 )
        {
LABEL_171:
          if ( !v77 )
          {
            ExReleasePushLockEx(v76, 0LL);
            v90 = *(struct _DMA_ADAPTER **)v75;
            *(_DWORD *)(v75 + 32) = -286387660;
            HalPutDmaAdapter(v90);
            *(_QWORD *)v75 = 0LL;
            *(_WORD *)(v75 + 30) = 0;
            KeLeaveCriticalRegion();
          }
          v31 = 0LL;
          goto LABEL_179;
        }
        while ( 1 )
        {
          if ( *((_DWORD *)v82 + 4) == *(_DWORD *)(a11 + 24) )
          {
            v79 = SHIDWORD(TokenInformation);
            v30 = v82[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v82[1] - 48 + 26) & 3];
            if ( HIDWORD(TokenInformation) == *(unsigned __int16 *)(v30 + 8) )
              break;
          }
LABEL_169:
          v80 = (char *)v82;
          v82 = (__int64 *)*v82;
          if ( !v82 )
          {
            v75 = a11;
            goto LABEL_171;
          }
        }
        v83 = (char *)Src[1];
        v84 = *(_QWORD **)(v30 + 16);
        v85 = (char *)Src[1] + SHIDWORD(TokenInformation);
        if ( HIDWORD(TokenInformation) >= 8 )
        {
          do
          {
            if ( *(_QWORD *)v83 != *v84 )
              break;
            v43 = (_DWORD)v79 == 8;
            v79 = (unsigned int)(v79 - 8);
            if ( v43 )
              goto LABEL_164;
            v83 += 8;
            ++v84;
          }
          while ( (unsigned int)v79 >= 8 );
        }
        if ( v83 < v85 )
        {
          if ( v155 )
          {
            v86 = (char *)v84 - v83;
            while ( 1 )
            {
              v87 = *(unsigned __int16 *)v83;
              v88 = *(unsigned __int16 *)&v83[v86];
              if ( (_WORD)v87 != (_WORD)v88 )
              {
                if ( (unsigned int)v87 >= 0x61 )
                {
                  if ( (unsigned int)v87 > 0x7A )
                  {
                    if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v87 >= 0xC0u )
                    {
                      v30 = v87 & 0xF;
                      v79 = (unsigned int)v30
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * (((unsigned __int8)v87 >> 4)
                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2 * (v87 >> 8))));
                      LOWORD(v87) = *(_WORD *)(Nls844UnicodeUpcaseTable + 2 * v79) + v87;
                    }
                  }
                  else
                  {
                    LOWORD(v87) = v87 - 32;
                  }
                }
                if ( (unsigned int)v88 >= 0x61 )
                {
                  if ( (unsigned int)v88 > 0x7A )
                  {
                    if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v88 >= 0xC0u )
                    {
                      v30 = v88 & 0xF;
                      v79 = (unsigned int)v30
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * (((unsigned __int8)v88 >> 4)
                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2 * (v88 >> 8))));
                      LOWORD(v88) = *(_WORD *)(Nls844UnicodeUpcaseTable + 2 * v79) + v88;
                    }
                  }
                  else
                  {
                    LOWORD(v88) = v88 - 32;
                  }
                }
                if ( (_WORD)v87 != (_WORD)v88 )
                  break;
              }
              v83 += 2;
              if ( v83 >= v85 )
                goto LABEL_164;
            }
          }
          else
          {
            while ( *(_WORD *)v83 == *(_WORD *)v84 )
            {
              v83 += 2;
              v84 = (_QWORD *)((char *)v84 + 2);
              if ( v83 >= v85 )
                goto LABEL_164;
            }
          }
          goto LABEL_169;
        }
LABEL_164:
        v31 = (struct _DMA_ADAPTER *)v82[1];
        ObfReferenceObject(v31);
        if ( v77 )
        {
          v75 = a11;
        }
        else
        {
          ExReleasePushLockEx(v76, 0LL);
          v75 = a11;
          v89 = *(struct _DMA_ADAPTER **)a11;
          *(_DWORD *)(a11 + 32) = -286387660;
          HalPutDmaAdapter(v89);
          *(_QWORD *)a11 = 0LL;
          *(_WORD *)(a11 + 30) = 0;
          KeLeaveCriticalRegion();
          v80 = 0LL;
        }
        v79 = *(_QWORD *)(v75 + 8);
        if ( v79 )
          HalPutDmaAdapter((PADAPTER_OBJECT)v79);
        *(_QWORD *)(v75 + 8) = v31;
        *(_QWORD *)(v75 + 16) = v80;
        if ( v31 )
          goto LABEL_226;
LABEL_179:
        if ( !v176 )
          goto LABEL_226;
        v91 = v169;
        while ( 2 )
        {
          v92 = v91[84];
          v93 = 0LL;
          if ( (v92 & 4) != 0 )
          {
            if ( (v92 & 0x10) != 0 && !v143 )
              goto LABEL_224;
            v93 = (char *)*((_QWORD *)v91 + 39);
          }
          else
          {
            v94 = PsGetCurrentServerSiloGlobals(v79, v30);
            v95 = KeGetCurrentThread();
            --v95->SpecialApcDisable;
            v96 = (ULONG_PTR)v94 + 120;
            ExAcquirePushLockSharedEx((ULONG_PTR)v94 + 120, 0LL);
            v97 = *((_QWORD *)v91 + 38);
            if ( v97 )
              v93 = *(char **)(v97 + 8);
            ExReleasePushLockEx(v96, 0LL);
            v98 = KeGetCurrentThread();
            v43 = v98->SpecialApcDisable++ == -1;
            if ( v43 && ($C459BD0D405E8E46662177FB3D0A143F *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
              KiCheckForKernelApcDelivery(v79);
            v75 = a11;
          }
          if ( !v93 )
            goto LABEL_224;
          v99 = *(_BYTE *)(v75 + 30);
          if ( v99 )
          {
            ObfReferenceObject(v91);
            ObpUnlockDirectory((__int64)v91, v75);
            ObpLockDirectoryShared(v75, v93);
            HalPutDmaAdapter((PADAPTER_OBJECT)v91);
            v99 = *(_BYTE *)(v75 + 30);
          }
          v100 = &v93[8 * *(unsigned __int16 *)(v75 + 28)];
          if ( !v99 )
          {
            *(_DWORD *)(v75 + 32) = -1145368012;
            v101 = KeGetCurrentThread();
            --v101->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v93 + 296), 0LL);
            *(_DWORD *)(v75 + 32) = -572714444;
            ObfReferenceObject(v93);
            *(_QWORD *)v75 = v93;
            *(_WORD *)(v75 + 30) = 1;
          }
          v102 = *(char **)v100;
          if ( !*(_QWORD *)v100 )
          {
LABEL_217:
            if ( !v99 )
              ObpUnlockDirectory((__int64)v93, v75);
            v31 = 0LL;
            v91 = v93;
            goto LABEL_225;
          }
          v103 = *(_DWORD *)(v75 + 24);
          while ( 2 )
          {
            if ( *((_DWORD *)v102 + 4) != v103
              || (v30 = SHIDWORD(TokenInformation),
                  v79 = *((_QWORD *)v102 + 1)
                      - 48LL
                      - ObpInfoMaskToOffset[*(_BYTE *)(*((_QWORD *)v102 + 1) - 48LL + 26) & 3],
                  HIDWORD(TokenInformation) != *(unsigned __int16 *)(v79 + 8)) )
            {
LABEL_215:
              v100 = v102;
              v102 = *(char **)v102;
              if ( !v102 )
              {
                v75 = a11;
                goto LABEL_217;
              }
              continue;
            }
            break;
          }
          v104 = (char *)Src[1];
          v105 = *(_QWORD **)(v79 + 16);
          v106 = (char *)Src[1] + SHIDWORD(TokenInformation);
          if ( HIDWORD(TokenInformation) >= 8 )
          {
            do
            {
              if ( *(_QWORD *)v104 != *v105 )
                break;
              v43 = (_DWORD)v30 == 8;
              v30 = (unsigned int)(v30 - 8);
              if ( v43 )
                goto LABEL_210;
              v104 += 8;
              ++v105;
            }
            while ( (unsigned int)v30 >= 8 );
          }
          if ( v104 < v106 )
          {
            if ( v155 )
            {
              v107 = (char *)v105 - v104;
              while ( 1 )
              {
                v108 = *(_WORD *)v104;
                v109 = *(_WORD *)&v104[v107];
                if ( *(_WORD *)v104 != v109 )
                {
                  NLS_UPCASE(v109);
                  v110 = NLS_UPCASE(v108);
                  if ( v110 != v111 )
                    break;
                }
                v104 += 2;
                if ( v104 >= v106 )
                  goto LABEL_210;
              }
            }
            else
            {
              while ( *(_WORD *)v104 == *(_WORD *)v105 )
              {
                v104 += 2;
                v105 = (_QWORD *)((char *)v105 + 2);
                if ( v104 >= v106 )
                  goto LABEL_210;
              }
            }
            goto LABEL_215;
          }
LABEL_210:
          v31 = (struct _DMA_ADAPTER *)*((_QWORD *)v102 + 1);
          ObfReferenceObject(v31);
          if ( v99 )
          {
            v75 = a11;
          }
          else
          {
            ExReleasePushLockEx((ULONG_PTR)(v93 + 296), 0LL);
            v75 = a11;
            v112 = *(struct _DMA_ADAPTER **)a11;
            *(_DWORD *)(a11 + 32) = -286387660;
            HalPutDmaAdapter(v112);
            *(_QWORD *)a11 = 0LL;
            *(_WORD *)(a11 + 30) = 0;
            KeLeaveCriticalRegion();
            v100 = 0LL;
          }
          v79 = *(_QWORD *)(v75 + 8);
          if ( v79 )
            HalPutDmaAdapter((PADAPTER_OBJECT)v79);
          *(_QWORD *)(v75 + 8) = v31;
          *(_QWORD *)(v75 + 16) = v100;
LABEL_224:
          v91 = v93;
          if ( !v31 )
          {
LABEL_225:
            if ( !v93 )
              break;
            continue;
          }
          break;
        }
LABEL_226:
        v147 = v31;
        if ( !v144 )
        {
          if ( !v31 )
          {
LABEL_290:
            if ( v146.m128i_i16[0] )
            {
              v13 = a11;
              v142 = -1073741766;
              goto LABEL_307;
            }
            if ( !Object )
            {
              v13 = a11;
              v142 = -1073741772;
              goto LABEL_307;
            }
            v129 = 4LL;
            v130 = v167;
            v131 = v150;
            if ( a4 == ObpDirectoryObjectType )
              v129 = 8LL;
            LOBYTE(v141) = v150;
            LOBYTE(Tag) = 0;
            if ( !(unsigned __int8)ObCheckCreateObjectAccess(v167, v129, a10, Src, Tag, v141, &v142) )
            {
              v13 = a11;
              v114 = v145;
              if ( v142 >= 0 )
                v142 = -1073741772;
              goto LABEL_308;
            }
            v132 = v130[85];
            if ( v132 != -1
              && (a4 == MmSectionObjectType || a4 == ObpSymbolicLinkObjectType)
              && v132 != (unsigned int)PsGetCurrentProcessSessionId()
              && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v131)
              && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
            {
              v13 = a11;
LABEL_306:
              v142 = -1073741790;
              goto LABEL_307;
            }
            v135 = LOWORD(Src[0]);
            v13 = a11;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
            if ( PoolWithTag )
            {
              if ( (unsigned __int8)ObpInsertDirectoryEntry(v130, Object) )
              {
                memmove(PoolWithTag, Src[1], v135);
                v137 = &Object[-ObpInfoMaskToOffset[*(Object - 22) & 3] - 48];
                v138 = (void *)*((_QWORD *)v137 + 2);
                if ( v138 )
                  ExFreePoolWithTag(v138, 0);
                v139 = (__int16)Src[0];
                v114 = v145;
                *((_WORD *)v137 + 4) = Src[0];
                *((_WORD *)v137 + 5) = v139;
                *((_QWORD *)v137 + 2) = PoolWithTag;
                v147 = Object;
                v142 = 0;
                goto LABEL_312;
              }
              ExFreePoolWithTag(PoolWithTag, 0);
            }
            v142 = -1073741670;
            goto LABEL_307;
          }
          v62 = v151;
          v13 = a11;
LABEL_331:
          v114 = v145;
LABEL_337:
          v142 = v62;
LABEL_338:
          if ( v62 < 0 )
          {
LABEL_308:
            if ( *(_BYTE *)(v13 + 30) )
              ObpUnlockDirectory(*(_QWORD *)v13, v13);
            v133 = *(struct _DMA_ADAPTER **)(v13 + 8);
            if ( v133 )
            {
              HalPutDmaAdapter(v133);
              *(_QWORD *)(v13 + 8) = 0LL;
            }
          }
LABEL_312:
          if ( P )
            ObfDereferenceDeviceMap(P);
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( v114 )
            HalPutDmaAdapter(v114);
          SeClearLearningModeObjectInformation();
          v134 = v142;
          if ( v142 < 0 )
          {
            *a13 = 0LL;
            return v134;
          }
          else
          {
            if ( a12 )
            {
              if ( v159 != -1 )
                *a12 = v159;
            }
            *a13 = v147;
            return v134;
          }
        }
        if ( !v31 )
          goto LABEL_290;
        v13 = a11;
        v23 = 0LL;
        if ( !v146.m128i_i16[0] )
        {
          v113 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v31[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v31 - 48) >> 8)] + 144);
          if ( !v113 || (v30 = (__int64)ObpParseSymbolicLinkEx, v113 != ObpParseSymbolicLinkEx) && Object )
          {
            v13 = a11;
            v62 = ObReferenceObjectByPointer(v31, 0, a4, a5);
            v114 = v145;
            v142 = v62;
            goto LABEL_338;
          }
        }
      }
      if ( ParseProcedure == ObpParseSymbolicLinkEx )
        goto LABEL_240;
      if ( Object )
      {
LABEL_333:
        v142 = -1073741788;
LABEL_307:
        v114 = v145;
        goto LABEL_308;
      }
      ObfReferenceObject(v31);
      if ( *(_BYTE *)(v13 + 30) )
      {
        ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
        v115 = *(struct _DMA_ADAPTER **)v13;
        *(_DWORD *)(v13 + 32) = -286387660;
        HalPutDmaAdapter(v115);
        *(_QWORD *)v13 = v23;
        *(_WORD *)(v13 + 30) = 0;
        KeLeaveCriticalRegion();
      }
      v116 = *(struct _DMA_ADAPTER **)(v13 + 8);
      if ( v116 )
      {
        HalPutDmaAdapter(v116);
        *(_QWORD *)(v13 + 8) = v23;
      }
      v31 = (struct _DMA_ADAPTER *)v147;
LABEL_240:
      v34 = v177;
      if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v58 ^ LOBYTE(v57[1].DmaOperations)] + 67) & 1) != 0 )
        v117 = ((__int64 (__fastcall *)(struct _DMA_ADAPTER *, struct _OBJECT_TYPE *, __int64, _QWORD, int, __m128i *, __m128i *, __int64, __int64, _WORD *, PVOID *))ParseProcedure)(
                 v31,
                 a4,
                 a10,
                 v150,
                 v178,
                 v177,
                 &v146,
                 a6,
                 a7,
                 v158,
                 &v147);
      else
        v117 = ((__int64 (__fastcall *)(struct _DMA_ADAPTER *, struct _OBJECT_TYPE *, __int64, _QWORD, int, __m128i *, __m128i *, __int64, __int64, PVOID *))ParseProcedure)(
                 v31,
                 a4,
                 a10,
                 v150,
                 v178,
                 v177,
                 &v146,
                 a6,
                 a7,
                 &v147);
      v62 = v117;
      v142 = v117;
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
      {
        HalPutDmaAdapter(v57 + 3);
        v62 = v142;
      }
      if ( v62 < 0 )
        goto LABEL_307;
      if ( v62 != 260 )
      {
        v118 = v145;
        if ( v62 != 872 )
          v118 = (struct _DMA_ADAPTER *)v147;
        v145 = v118;
      }
      if ( (v159 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
        goto LABEL_306;
      if ( v62 != 260 && v62 != 872 && v62 != 280 )
      {
        if ( !v147 )
          v62 = -1073741772;
        v114 = 0LL;
        goto LABEL_337;
      }
      v14 = v178;
      if ( (v178 & 0x1000) != 0 && v62 != 872 )
      {
        v142 = -1073740533;
        goto LABEL_307;
      }
      if ( !--v156 )
      {
        v142 = -1073741772;
        goto LABEL_307;
      }
      if ( !v177->m128i_i16[0] )
        goto LABEL_332;
      HalPutDmaAdapter(DmaAdapter);
      v119 = (__int16 *)v177->m128i_i64[1];
      DmaAdapter = 0LL;
      v120 = *v119;
      if ( v142 == 280 )
      {
        if ( v120 == 92 )
          goto LABEL_332;
        v31 = (struct _DMA_ADAPTER *)v147;
        DmaAdapter = (PADAPTER_OBJECT)v147;
        v145 = 0LL;
      }
      else
      {
        if ( v120 != 92 )
          goto LABEL_332;
        if ( v142 == 872 )
        {
          v31 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
        }
        else
        {
          v164 = 0LL;
          v121 = PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v164);
          v31 = v164;
          if ( v121 < 0 )
            v31 = (struct _DMA_ADAPTER *)ObpRootDirectoryObject;
          v164 = v31;
        }
        DmaAdapter = v31;
        ObfReferenceObject(v31);
      }
      v23 = P;
      if ( P )
      {
        v122 = *((_DWORD *)P + 6);
        if ( v122 == 1 )
        {
LABEL_272:
          ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v23 + 8));
          v125 = KeGetCurrentThread();
          --v125->SpecialApcDisable;
          v126 = (ULONG_PTR)ServerSiloGlobals + 120;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
          v122 = _InterlockedExchangeAdd((volatile signed __int32 *)v23 + 6, 0xFFFFFFFF);
          if ( v122 != 1 )
          {
            ExReleasePushLockEx(v126, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            goto LABEL_277;
          }
          *(_QWORD *)(*(_QWORD *)v23 + 304LL) = 0LL;
          ExReleasePushLockEx(v126, 0LL);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          v127 = (void *)*((_QWORD *)v23 + 8);
          if ( v127 )
            ObfDereferenceObjectWithTag(v127, 0x6D44624Fu);
          ZwClose(*((HANDLE *)v23 + 2));
          HalPutDmaAdapter(*(PADAPTER_OBJECT *)v23);
          ExFreePoolWithTag(v23, 0x6D44624Fu);
          v31 = DmaAdapter;
          v23 = 0LL;
          v14 = v178;
          P = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v123 = _InterlockedCompareExchange((volatile signed __int32 *)v23 + 6, v122 - 1, v122);
            v43 = v122 == v123;
            v122 = v123;
            if ( v43 )
              break;
            if ( v123 == 1 )
              goto LABEL_272;
          }
LABEL_277:
          if ( v122 <= 0 )
            __fastfail(0xEu);
          v31 = DmaAdapter;
          v23 = 0LL;
          v14 = v178;
          P = 0LL;
        }
      }
      if ( *(_BYTE *)(v13 + 30) )
        ObpUnlockDirectory(*(_QWORD *)v13, v13);
      v128 = *(struct _DMA_ADAPTER **)(v13 + 8);
      v33 = a4;
      if ( v128 )
      {
        HalPutDmaAdapter(v128);
        *(_QWORD *)(v13 + 8) = v23;
      }
    }
  }
  v23 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, v18, 0x746C6644u, &DmaAdapter, 0LL, &v165);
  v142 = result;
  if ( result < 0 )
    return result;
  if ( HIDWORD(v165) )
  {
    v25 = *(_DWORD *)(a10 + 24);
    v159 &= HIDWORD(v165);
    if ( (v159 & v25) != v25 )
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741790;
    }
  }
  v26 = DmaAdapter;
  if ( v177->m128i_i16[0] )
  {
    if ( *(_WORD *)v177->m128i_i64[1] == 92
      && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)] != IoFileObjectType )
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741765;
    }
LABEL_39:
    v29 = *v177;
    v147 = DmaAdapter;
    v172 = v177;
    v146 = v29;
    p_Name = &v15->Name;
    v173 = BugCheckParameter1;
    SeSetLearningModeObjectInformation((__int64)v170);
    v31 = (struct _DMA_ADAPTER *)v147;
    goto LABEL_97;
  }
  if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)] != ObpDirectoryObjectType )
    goto LABEL_39;
  v27 = ObReferenceObjectByPointer(DmaAdapter, 0, v15, a5);
  v28 = v147;
  v142 = v27;
  if ( v27 >= 0 )
    v28 = v26;
  v147 = v28;
  HalPutDmaAdapter(v26);
  *a13 = v147;
  return v142;
}
