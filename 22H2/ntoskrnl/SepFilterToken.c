/*
 * XREFs of SepFilterToken @ 0x1407F2180
 * Callers:
 *     NtFilterToken @ 0x1407F1DD0 (NtFilterToken.c)
 *     SeFilterToken @ 0x14080D380 (SeFilterToken.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225390 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlWalkFrameChain @ 0x140227780 (RtlWalkFrameChain.c)
 *     RtlSidHashInitialize @ 0x140228430 (RtlSidHashInitialize.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     DbgPrint @ 0x14032A510 (DbgPrint.c)
 *     SepDuplicateLogonSessionReference @ 0x14037064C (SepDuplicateLogonSessionReference.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     SeIsSystemContext @ 0x1405B91FC (SeIsSystemContext.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406B7AB4 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenSessionById @ 0x1406B7AE0 (SepSetTokenSessionById.c)
 *     SepSetTokenCapabilities @ 0x1406BD618 (SepSetTokenCapabilities.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C7894 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepSetTokenPackage @ 0x140714E10 (SepSetTokenPackage.c)
 *     RtlCopySidAndAttributesArray @ 0x140714F60 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenTrust @ 0x14071E834 (SepSetTokenTrust.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     SepSetLogonSessionToken @ 0x1407E9FEC (SepSetLogonSessionToken.c)
 *     RtlIsCapabilitySid @ 0x1407F3128 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1407F33A4 (RtlIsPackageSid.c)
 *     RtlIsSandboxedToken @ 0x1407F3D10 (RtlIsSandboxedToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1407F3DB4 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x1407F3FA0 (SepSidInSidAndAttributes.c)
 *     SepDuplicateTokenClaims @ 0x1408A6B7A (SepDuplicateTokenClaims.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C9A08 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409CF860 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1409CFEC0 (SepAddTokenLogonSession.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        char a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        _QWORD *a9,
        int a10,
        _QWORD *a11)
{
  PVOID *v13; // r14
  unsigned int v14; // esi
  __int64 Pool2; // rax
  PVOID *v16; // rsi
  struct _ERESOURCE *v17; // r15
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // r8d
  ULONG v22; // r13d
  signed int v23; // ebx
  int v24; // eax
  _QWORD *v25; // rbx
  _QWORD *v26; // rdx
  PVOID v27; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v29; // rbx
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // r14
  unsigned int v33; // eax
  int v34; // esi
  _DWORD *v35; // rcx
  __int64 v36; // r14
  int v37; // eax
  unsigned int v38; // eax
  int v39; // r12d
  unsigned int v40; // ecx
  PSID v41; // r12
  ULONG v42; // r8d
  int v43; // eax
  __int64 v44; // r8
  unsigned int v45; // r13d
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rdx
  size_t v49; // r14
  char *v50; // r12
  char v51; // al
  _DWORD *v52; // rcx
  __int64 **v53; // r13
  unsigned int v54; // r14d
  unsigned int v55; // r9d
  unsigned __int8 *v56; // rdx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // eax
  struct _ERESOURCE *v62; // rcx
  _DWORD *v63; // rbx
  int v64; // ecx
  _QWORD *v66; // rbx
  _QWORD *v67; // rbx
  __int64 v68; // rdx
  PVOID *v69; // rcx
  bool v70; // zf
  ULONG v71; // eax
  __int64 v72; // rdx
  _KPROCESS *Process; // rcx
  void *v74; // rbx
  struct _KTHREAD *v75; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v77; // edx
  PSID DestinationSid; // [rsp+28h] [rbp-E0h]
  __int64 v79; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  char PreviousMode; // [rsp+68h] [rbp-A0h]
  ULONG v82; // [rsp+6Ch] [rbp-9Ch] BYREF
  PSID v83; // [rsp+70h] [rbp-98h] BYREF
  __int64 v84; // [rsp+78h] [rbp-90h]
  __int64 **v85; // [rsp+80h] [rbp-88h]
  _DWORD *v86; // [rsp+88h] [rbp-80h]
  _QWORD *v87; // [rsp+90h] [rbp-78h]
  _QWORD *v88; // [rsp+98h] [rbp-70h]
  _QWORD *v89; // [rsp+A0h] [rbp-68h]
  _QWORD *v90; // [rsp+A8h] [rbp-60h]
  __int64 **v91; // [rsp+B0h] [rbp-58h]
  __int64 **v92; // [rsp+B8h] [rbp-50h]
  _QWORD *v93; // [rsp+C0h] [rbp-48h]
  unsigned int *v94; // [rsp+C8h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-38h] BYREF
  int v96; // [rsp+F0h] [rbp-18h]
  int v97; // [rsp+F4h] [rbp-14h]
  __int64 v98; // [rsp+F8h] [rbp-10h]
  __int64 v99; // [rsp+100h] [rbp-8h]
  int v100; // [rsp+108h] [rbp+0h]
  int v101; // [rsp+10Ch] [rbp+4h]
  __int128 v102; // [rsp+110h] [rbp+8h]
  struct _SECURITY_SUBJECT_CONTEXT v103; // [rsp+120h] [rbp+18h] BYREF

  Object = 0LL;
  v97 = 0;
  v101 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = 0LL;
  LOWORD(v79) = 0;
  LODWORD(v84) = a3 & 8;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&v103, 0, sizeof(v103));
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v14 = 0;
  if ( a8 )
  {
    v66 = a9;
    while ( !(unsigned __int8)RtlIsPackageSid(*v66) && !(unsigned __int8)RtlIsCapabilitySid(*v66) )
    {
      ++v14;
      v66 += 2;
      if ( v14 >= a8 )
        goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  Pool2 = ExAllocatePool2(256LL, 48LL, 1950442835LL);
  v16 = (PVOID *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
  *(_DWORD *)(Pool2 + 24) = 0;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    v13 = (PVOID *)ExAllocatePool2(256LL, 288LL, 1950442835LL);
    if ( !v13 )
    {
      v69 = v16;
      goto LABEL_87;
    }
  }
  v17 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1817470291LL);
  if ( !v17 )
  {
    ExFreePoolWithTag(v16, 0);
    if ( !HIDWORD(NlsMbOemCodePageTag) )
      return 3221225626LL;
    v69 = v13;
LABEL_87:
    ExFreePoolWithTag(v69, 0);
    return 3221225626LL;
  }
  v18 = *(_DWORD *)(a1 + 132);
  v19 = v18 + a10;
  if ( v18 + a10 < v18 )
  {
    v23 = -1073741675;
LABEL_122:
    ExFreePoolWithTag(v17, 0);
    ExFreePoolWithTag(v16, 0);
    v70 = HIDWORD(NlsMbOemCodePageTag) == 0;
    goto LABEL_123;
  }
  v20 = v19 + 4;
  v21 = -1;
  v22 = -1;
  if ( v19 + 4 >= v19 )
    v22 = v19 + 4;
  v23 = v20 < v19 ? 0xC0000095 : 0;
  v82 = v22;
  if ( v20 < v19 )
    goto LABEL_122;
  if ( v22 < 0xFFFFFB70 )
    v21 = v22 + 1168;
  v23 = v22 >= 0xFFFFFB70 ? 0xC0000095 : 0;
  if ( v22 + 1168 < 0x490 )
    goto LABEL_122;
  v24 = *(_DWORD *)(a1 + 136);
  v98 = 0LL;
  v100 = 0;
  v99 = 0LL;
  v96 = 48;
  v102 = 0LL;
  v23 = ObCreateObjectEx(a2, SeTokenObjectType, 0LL, a2, (__int64)DestinationSid, v21, v24, v21, &Object, 0LL);
  if ( v23 >= 0 )
  {
    v25 = Object;
    *((_QWORD *)Object + 6) = v17;
    ExInitializeResourceLite(v17);
    v26 = Object;
    v25[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v27 = Object;
    v26[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    *((_BYTE *)v27 + 204) = 0;
    *((_QWORD *)v27 + 3) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)v27 = *(_OWORD *)a1;
    *((_DWORD *)v27 + 35) = 0;
    *((_DWORD *)v27 + 32) = 0;
    *((_DWORD *)v27 + 33) = v22;
    *((_QWORD *)v27 + 4) = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v27 + 48) = *(_DWORD *)(a1 + 192);
    *((_DWORD *)v27 + 49) = *(_DWORD *)(a1 + 196);
    *((_QWORD *)v27 + 5) = *(_QWORD *)(a1 + 40);
    *((_QWORD *)v27 + 28) = *(_QWORD *)(a1 + 224);
    *((_QWORD *)v27 + 140) = 0LL;
    *((_QWORD *)v27 + 141) = 0LL;
    *((_QWORD *)v27 + 137) = 0LL;
    *((_QWORD *)v27 + 143) = v13;
    *((_DWORD *)v27 + 30) = 0;
    *((_QWORD *)v27 + 145) = 0LL;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      v71 = RtlWalkFrameChain(v13 + 5, 0x1Eu, 0);
      if ( KeGetCurrentIrql() < 2u )
        RtlWalkFrameChain((PVOID *)(*((_QWORD *)v27 + 143) + 40LL + 8LL * v71), 30 - v71, 1u);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v29 = (char *)Object;
    v30 = Object;
    *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
    v30[36] = *(_DWORD *)(a1 + 144);
    SepSetTokenSessionById((__int64)v30, *(unsigned int *)(a1 + 120), 0, 0LL, 0LL);
    v32 = v29 + 200;
    *((_DWORD *)v27 + 30) = *(_DWORD *)(a1 + 120);
    v33 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
    v86 = v29 + 200;
    *((_DWORD *)v29 + 50) = v33;
    if ( (v33 & 0x1000000) != 0 )
    {
      _InterlockedIncrement(&SepLearningModeTokenCount);
      v29 = (char *)Object;
    }
    *(_OWORD *)(v29 + 88) = *(_OWORD *)(a1 + 88);
    *(_OWORD *)(v29 + 104) = *(_OWORD *)(a1 + 104);
    *((_DWORD *)v29 + 52) = *(_DWORD *)(a1 + 208);
    *((_DWORD *)v29 + 53) = *(_DWORD *)(a1 + 212);
    *((_OWORD *)v29 + 4) = *(_OWORD *)(a1 + 64);
    *((_QWORD *)v29 + 10) = *(_QWORD *)(a1 + 80);
    *((_QWORD *)v29 + 97) = v16;
    if ( v29[119] == 2 )
    {
      LOBYTE(v31) = 1;
      SepModifyTokenPolicyCounter(v29 + 88, v31);
    }
    *((_QWORD *)v29 + 135) = 0LL;
    v88 = v29 + 1080;
    *((_QWORD *)v29 + 136) = 0LL;
    v89 = v29 + 1088;
    *((_QWORD *)v29 + 144) = 0LL;
    v90 = v29 + 1152;
    *((_QWORD *)v29 + 99) = 0LL;
    v92 = (__int64 **)(v29 + 792);
    *((_QWORD *)v29 + 98) = 0LL;
    v94 = (unsigned int *)(v29 + 800);
    *((_DWORD *)v29 + 200) = 0;
    v93 = v29 + 808;
    memset(v29 + 808, 0, 0x110uLL);
    *((_QWORD *)v29 + 22) = 0LL;
    *((_QWORD *)v29 + 138) = 0LL;
    *((_QWORD *)v29 + 139) = 0LL;
    *((_QWORD *)v29 + 142) = 0LL;
    v87 = v29 + 176;
    v34 = SepDuplicateLogonSessionReference((__int64)v29, a1);
    if ( v34 < 0 )
      goto LABEL_93;
    SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
    *((_QWORD *)v29 + 142) = *(_QWORD *)(a1 + 1136);
    v35 = *(_DWORD **)(a1 + 776);
    if ( *v35 )
    {
      v34 = AuthzBasepDuplicateSecurityAttributes((__int64)v35, *((_QWORD **)v29 + 97), 0);
      if ( v34 < 0 )
        goto LABEL_93;
    }
    if ( *(_QWORD *)(a1 + 1096) )
    {
      v34 = SepDuplicateTokenClaims(a1, v29);
      if ( v34 < 0 )
        goto LABEL_93;
    }
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      **((_QWORD **)v27 + 143) = KeGetCurrentThread()[1].CycleTime;
      *(_QWORD *)(*((_QWORD *)v27 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(*((_QWORD *)v27 + 143) + 32LL) = 15;
      *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL) = 0;
      *(_DWORD *)(*((_QWORD *)v27 + 143) + 284LL) = 0;
      v72 = *((_QWORD *)v27 + 143);
      v29 = (char *)Object;
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(v72 + 16) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
      *(_DWORD *)(v72 + 24) = Process[1].ActiveProcessors.Bitmap[0];
      *(_WORD *)(v72 + 28) = WORD2(Process[1].ActiveProcessors.StaticBitmap[0]);
      *(_BYTE *)(v72 + 30) = BYTE6(Process[1].ActiveProcessors.StaticBitmap[0]);
      SepAddTokenLogonSession(v29);
    }
    if ( (a3 & 2) != 0 )
    {
      v74 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x746C6644u);
      if ( (int)SeIsSystemContext(v74, &v79) >= 0 && (_BYTE)v79 )
        *v32 |= 0x40u;
      ObfDereferenceObject(v74);
      v29 = (char *)Object;
    }
    v36 = (__int64)(v29 + 1168);
    v37 = ((_BYTE)v29 - 112) & 7;
    if ( (((_BYTE)v29 - 112) & 7) != 0 )
    {
      v36 += (unsigned int)(8 - v37);
      v82 = v22 - (8 - v37);
    }
    v38 = *(_DWORD *)(a1 + 128);
    v39 = *(_DWORD *)(a1 + 124);
    v40 = a8;
    *((_QWORD *)v29 + 19) = v36;
    if ( v38 > a8 )
      v40 = v38;
    v91 = (__int64 **)(v29 + 152);
    v41 = (PSID)(v36 + 16LL * (v40 + v39));
    v83 = v41;
    if ( SepTokenSidSharingEnabled )
    {
      v34 = SepDuplicateTokenUserAndGroups(a1, v29);
      if ( v34 < 0 )
      {
        *((_QWORD *)v29 + 19) = 0LL;
        goto LABEL_93;
      }
    }
    else
    {
      v42 = v82;
      *((_DWORD *)v29 + 31) = *(_DWORD *)(a1 + 124);
      v43 = RtlCopySidAndAttributesArray(
              *(_DWORD *)(a1 + 124),
              *(_QWORD *)(a1 + 152),
              v42,
              v36,
              (char *)v41,
              &v83,
              &v82);
      v41 = v83;
      v34 = v43;
    }
    v45 = 0;
    v46 = (unsigned int)(16 * *(_DWORD *)(a1 + 124)) + v36;
    v85 = (__int64 **)(v29 + 160);
    *((_QWORD *)v29 + 20) = v46;
    if ( a8 )
    {
      v67 = a9;
      do
      {
        v68 = *(unsigned int *)(a1 + 128);
        if ( !(_DWORD)v68 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v68, v44, *v67) )
        {
          v34 = RtlCopySidAndAttributesArray(1u, (__int64)&a9[2 * v45], v82, v46, (char *)v41, &v83, &v82);
          v41 = v83;
          v46 += 16LL;
          LODWORD((*v85)[2 * (unsigned int)(*((_DWORD *)v27 + 32))++ + 1]) = 7;
        }
        ++v45;
        v67 += 2;
      }
      while ( v45 < a8 );
      v29 = (char *)Object;
    }
    v47 = *(_QWORD *)(a1 + 184);
    v48 = 4 * (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
    if ( v47 )
      v48 = *(unsigned __int16 *)(v47 + 2) + (unsigned int)v48;
    v49 = (unsigned int)v48;
    v50 = (char *)ExAllocatePool2(256LL, v48, 1683252563LL);
    *v87 = v50;
    if ( !v50 )
    {
      v34 = -1073741670;
      goto LABEL_93;
    }
    if ( *(_DWORD *)(a1 + 128) && !*((_DWORD *)v27 + 32) )
    {
      v34 = -1073741811;
      goto LABEL_93;
    }
    v51 = 0;
    v52 = v86;
    v53 = v85;
    if ( *((_DWORD *)v27 + 32) )
    {
      *v86 |= 0x810u;
      v51 = 1;
    }
    else
    {
      *v85 = 0LL;
    }
    if ( (_DWORD)v84 )
    {
      *v52 |= 0x18u;
    }
    else if ( !v51 )
    {
      goto LABEL_40;
    }
    SepSetLogonSessionToken(a1);
LABEL_40:
    memmove(v50, *(const void **)(a1 + 176), v49);
    if ( *(_QWORD *)(a1 + 184) )
      *((_QWORD *)v29 + 23) = &v50[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
    else
      *((_QWORD *)v29 + 23) = 0LL;
    v54 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
    v55 = *(_DWORD *)(a1 + 800);
    if ( v55 )
      v34 = SepSetTokenCapabilities((__int64)v29, *(void **)(a1 + 784), *(char **)(a1 + 792), v55);
    if ( v34 >= 0 )
    {
      v56 = *(unsigned __int8 **)(a1 + 784);
      if ( !v56 || (v57 = SepSetTokenPackage((__int64)v29, v56), v57 >= 0) )
      {
        v58 = *(_QWORD *)(a1 + 1080);
        if ( v58 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v58 + 24)) <= 1 )
            __fastfail(0xEu);
          v29 = (char *)Object;
          *v88 = *(_QWORD *)(a1 + 1080);
        }
        v59 = *(_QWORD *)(a1 + 1088);
        if ( v59 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v59 + 24)) <= 1 )
            __fastfail(0xEu);
          v29 = (char *)Object;
          *v89 = *(_QWORD *)(a1 + 1088);
        }
        v60 = *(_QWORD *)(a1 + 1152);
        if ( v60 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v60 + 24)) <= 1 )
            __fastfail(0xEu);
          v29 = (char *)Object;
          *v90 = *(_QWORD *)(a1 + 1152);
        }
        v61 = SepSetTokenTrust((__int64)v29, *(unsigned __int8 **)(a1 + 1104));
        v62 = *(struct _ERESOURCE **)(a1 + 48);
        v34 = v61;
        if ( v61 >= 0 )
        {
          ExReleaseResourceLite(v62);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v63 = Object;
          v64 = (int)Object;
          *((_QWORD *)Object + 21) = &v50[v54];
          SepRemoveDisabledGroupsAndPrivileges(v64, a3, a4, a5, a6, a7);
          RtlSidHashInitialize(*v91, v63[31], (_QWORD *)v63 + 29);
          RtlSidHashInitialize(*v53, *((_DWORD *)v27 + 32), (_QWORD *)v63 + 63);
          SeCaptureSubjectContext(&SubjectContext);
          v103.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v103) )
          {
            v75 = KeGetCurrentThread();
            PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
            --v75->KernelApcDisable;
            ExAcquireResourceSharedLite(PrimaryToken[6], 1u);
            v34 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken, (_BYTE *)&v79 + 1);
            ExReleaseResourceLite(PrimaryToken[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( v34 < 0 || !BYTE1(v79) )
            {
              ObfDereferenceObject(Object);
              SeReleaseSubjectContext(&SubjectContext);
              return (unsigned int)v34;
            }
            v63 = Object;
          }
          SeReleaseSubjectContext(&SubjectContext);
          if ( *v92 )
            RtlSidHashInitialize(*v92, *v94, v93);
          if ( HIDWORD(NlsMbOemCodePageTag) && SepTokenLeakMethodWatch == 15 )
          {
            if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
            {
              *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
              v77 = *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL);
              if ( v77 >= SepTokenLeakBreakCount )
              {
                DbgPrint("\nToken number 0x%x = 0x%p\n", v77, Object);
                __debugbreak();
              }
            }
            v63 = Object;
          }
          *a11 = v63;
          return (unsigned int)v34;
        }
LABEL_94:
        ExReleaseResourceLite(v62);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return (unsigned int)v34;
      }
      v34 = v57;
    }
LABEL_93:
    v62 = *(struct _ERESOURCE **)(a1 + 48);
    goto LABEL_94;
  }
  ExFreePoolWithTag(v17, 0);
  ExFreePoolWithTag(v16, 0);
  v70 = HIDWORD(NlsMbOemCodePageTag) == 0;
LABEL_123:
  if ( !v70 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v23;
}
