/*
 * XREFs of SepFilterToken @ 0x14078E3F0
 * Callers:
 *     NtFilterToken @ 0x1406623D0 (NtFilterToken.c)
 *     SeFilterToken @ 0x140831700 (SeFilterToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140204B30 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepDuplicateLogonSessionReference @ 0x140258DE8 (SepDuplicateLogonSessionReference.c)
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeIsSystemContext @ 0x1405F5174 (SeIsSystemContext.c)
 *     SepSetTokenPackage @ 0x14066A17C (SepSetTokenPackage.c)
 *     RtlCopySidAndAttributesArray @ 0x14066A420 (RtlCopySidAndAttributesArray.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14067231C (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenSessionById @ 0x140672524 (SepSetTokenSessionById.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140695E18 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1406A26A8 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x1406A28A8 (SepSidInSidAndAttributes.c)
 *     SepSetLogonSessionToken @ 0x1406E5F34 (SepSetLogonSessionToken.c)
 *     SepSetTokenTrust @ 0x1407259B0 (SepSetTokenTrust.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     RtlIsCapabilitySid @ 0x14078EC8C (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x14078ECD8 (RtlIsPackageSid.c)
 *     SepSetTokenCapabilities @ 0x140799BB0 (SepSetTokenCapabilities.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C6578 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409CCCB0 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1409CD320 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1409CEB64 (SepDuplicateTokenClaims.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        unsigned int a8,
        _QWORD *a9,
        int a10,
        _QWORD *a11)
{
  PVOID *v13; // r14
  unsigned int v14; // esi
  _QWORD *v15; // rbx
  __int64 Pool2; // rax
  PVOID *v17; // rsi
  struct _ERESOURCE *v18; // r15
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // r8d
  ULONG v23; // r13d
  signed int v24; // ebx
  int v25; // eax
  _QWORD *v26; // rbx
  _QWORD *v27; // rdx
  PVOID v28; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v30; // rbx
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // r14
  unsigned int v34; // eax
  int v35; // esi
  _DWORD *v36; // rcx
  __int64 v37; // r14
  int v38; // eax
  unsigned int v39; // eax
  __int64 *v40; // r13
  unsigned int v41; // r12d
  PSID v42; // r12
  ULONG v43; // r8d
  int v44; // eax
  __int64 v45; // r8
  unsigned int v46; // r13d
  __int64 v47; // r14
  char **v48; // rbx
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rdx
  size_t v52; // r14
  char *v53; // r12
  char v54; // al
  _DWORD *v55; // rcx
  __int64 **v56; // r13
  unsigned int v57; // r14d
  __int64 v58; // r9
  unsigned __int8 *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  struct _ERESOURCE *v64; // rcx
  _DWORD *v65; // rbx
  PVOID v66; // rcx
  int v68; // eax
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
    v15 = a9;
    while ( !(unsigned __int8)RtlIsPackageSid(*v15) && !(unsigned __int8)RtlIsCapabilitySid(*v15) )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= a8 )
        goto LABEL_7;
    }
    return 3221225485LL;
  }
LABEL_7:
  Pool2 = ExAllocatePool2(256LL, 48LL, 1950442835LL);
  v17 = (PVOID *)Pool2;
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
      v69 = v17;
      goto LABEL_77;
    }
  }
  v18 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1817470291LL);
  if ( !v18 )
  {
    ExFreePoolWithTag(v17, 0);
    if ( !HIDWORD(NlsMbOemCodePageTag) )
      return 3221225626LL;
    v69 = v13;
LABEL_77:
    ExFreePoolWithTag(v69, 0);
    return 3221225626LL;
  }
  v19 = *(_DWORD *)(a1 + 132);
  v20 = v19 + a10;
  if ( v19 + a10 < v19 )
  {
    v24 = -1073741675;
LABEL_80:
    ExFreePoolWithTag(v18, 0);
    ExFreePoolWithTag(v17, 0);
    v70 = HIDWORD(NlsMbOemCodePageTag) == 0;
    goto LABEL_81;
  }
  v21 = v20 + 4;
  v22 = -1;
  v23 = -1;
  if ( v20 + 4 >= v20 )
    v23 = v20 + 4;
  v24 = v21 < v20 ? 0xC0000095 : 0;
  v82 = v23;
  if ( v21 < v20 )
    goto LABEL_80;
  if ( v23 < 0xFFFFFB70 )
    v22 = v23 + 1168;
  v24 = v23 >= 0xFFFFFB70 ? 0xC0000095 : 0;
  if ( v23 + 1168 < 0x490 )
    goto LABEL_80;
  v25 = *(_DWORD *)(a1 + 136);
  v98 = 0LL;
  v100 = 0;
  v99 = 0LL;
  v96 = 48;
  v102 = 0LL;
  v24 = ObCreateObjectEx(a2, SeTokenObjectType, 0, a2, (__int64)DestinationSid, v22, v25, v22, &Object, 0LL);
  if ( v24 >= 0 )
  {
    v26 = Object;
    *((_QWORD *)Object + 6) = v18;
    ExInitializeResourceLite(v18);
    v27 = Object;
    v26[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v28 = Object;
    v27[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    *((_BYTE *)v28 + 204) = 0;
    *((_QWORD *)v28 + 3) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)v28 = *(_OWORD *)a1;
    *((_DWORD *)v28 + 35) = 0;
    *((_DWORD *)v28 + 32) = 0;
    *((_DWORD *)v28 + 33) = v23;
    *((_QWORD *)v28 + 4) = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v28 + 48) = *(_DWORD *)(a1 + 192);
    *((_DWORD *)v28 + 49) = *(_DWORD *)(a1 + 196);
    *((_QWORD *)v28 + 5) = *(_QWORD *)(a1 + 40);
    *((_QWORD *)v28 + 28) = *(_QWORD *)(a1 + 224);
    *((_QWORD *)v28 + 140) = 0LL;
    *((_QWORD *)v28 + 141) = 0LL;
    *((_QWORD *)v28 + 137) = 0LL;
    *((_QWORD *)v28 + 143) = v13;
    *((_DWORD *)v28 + 30) = 0;
    *((_QWORD *)v28 + 145) = 0LL;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      v71 = RtlWalkFrameChain(v13 + 5, 0x1Eu, 0);
      if ( KeGetCurrentIrql() < 2u )
        RtlWalkFrameChain((PVOID *)(*((_QWORD *)v28 + 143) + 40LL + 8LL * v71), 30 - v71, 1u);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v30 = (char *)Object;
    v31 = Object;
    *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
    v31[36] = *(_DWORD *)(a1 + 144);
    SepSetTokenSessionById((__int64)v31, *(unsigned int *)(a1 + 120), 0LL, 0LL, 0LL);
    v33 = v30 + 200;
    *((_DWORD *)v28 + 30) = *(_DWORD *)(a1 + 120);
    v34 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
    v86 = v30 + 200;
    *((_DWORD *)v30 + 50) = v34;
    if ( (v34 & 0x400000) != 0 )
    {
      _InterlockedIncrement(&SepLearningModeTokenCount);
      v30 = (char *)Object;
    }
    *(_OWORD *)(v30 + 88) = *(_OWORD *)(a1 + 88);
    *((_QWORD *)v30 + 13) = *(_QWORD *)(a1 + 104);
    *((_DWORD *)v30 + 28) = *(_DWORD *)(a1 + 112);
    *((_WORD *)v30 + 58) = *(_WORD *)(a1 + 116);
    v30[118] = *(_BYTE *)(a1 + 118);
    *((_DWORD *)v30 + 52) = *(_DWORD *)(a1 + 208);
    *((_DWORD *)v30 + 53) = *(_DWORD *)(a1 + 212);
    *((_OWORD *)v30 + 4) = *(_OWORD *)(a1 + 64);
    *((_QWORD *)v30 + 10) = *(_QWORD *)(a1 + 80);
    *((_QWORD *)v30 + 97) = v17;
    if ( v30[118] == 2 )
    {
      LOBYTE(v32) = 1;
      SepModifyTokenPolicyCounter(v30 + 88, v32);
    }
    *((_QWORD *)v30 + 135) = 0LL;
    v88 = v30 + 1080;
    *((_QWORD *)v30 + 136) = 0LL;
    v89 = v30 + 1088;
    *((_QWORD *)v30 + 144) = 0LL;
    v90 = v30 + 1152;
    *((_QWORD *)v30 + 99) = 0LL;
    v92 = (__int64 **)(v30 + 792);
    *((_QWORD *)v30 + 98) = 0LL;
    v94 = (unsigned int *)(v30 + 800);
    *((_DWORD *)v30 + 200) = 0;
    v93 = v30 + 808;
    memset(v30 + 808, 0, 0x110uLL);
    *((_QWORD *)v30 + 22) = 0LL;
    *((_QWORD *)v30 + 138) = 0LL;
    *((_QWORD *)v30 + 139) = 0LL;
    *((_QWORD *)v30 + 142) = 0LL;
    v87 = v30 + 176;
    v35 = SepDuplicateLogonSessionReference((__int64)v30, a1);
    if ( v35 < 0 )
      goto LABEL_86;
    SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
    *((_QWORD *)v30 + 142) = *(_QWORD *)(a1 + 1136);
    v36 = *(_DWORD **)(a1 + 776);
    if ( *v36 )
    {
      v35 = AuthzBasepDuplicateSecurityAttributes((__int64)v36, *((_QWORD **)v30 + 97), 0);
      if ( v35 < 0 )
        goto LABEL_86;
    }
    if ( *(_QWORD *)(a1 + 1096) )
    {
      v35 = SepDuplicateTokenClaims(a1, v30);
      if ( v35 < 0 )
        goto LABEL_86;
    }
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      **((_QWORD **)v28 + 143) = KeGetCurrentThread()[1].CycleTime;
      *(_QWORD *)(*((_QWORD *)v28 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(*((_QWORD *)v28 + 143) + 32LL) = 15;
      *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL) = 0;
      *(_DWORD *)(*((_QWORD *)v28 + 143) + 284LL) = 0;
      v72 = *((_QWORD *)v28 + 143);
      v30 = (char *)Object;
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(v72 + 16) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
      *(_DWORD *)(v72 + 24) = Process[1].ActiveProcessors.Bitmap[0];
      *(_WORD *)(v72 + 28) = WORD2(Process[1].ActiveProcessors.StaticBitmap[0]);
      *(_BYTE *)(v72 + 30) = BYTE6(Process[1].ActiveProcessors.StaticBitmap[0]);
      SepAddTokenLogonSession(v30);
    }
    if ( (a3 & 2) != 0 )
    {
      v74 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x746C6644u);
      if ( (int)SeIsSystemContext(v74, &v79) >= 0 && (_BYTE)v79 )
        *v33 |= 0x40u;
      ObfDereferenceObject(v74);
      v30 = (char *)Object;
    }
    v37 = (__int64)(v30 + 1168);
    v38 = ((_BYTE)v30 - 112) & 7;
    if ( (((_BYTE)v30 - 112) & 7) != 0 )
    {
      v37 += (unsigned int)(8 - v38);
      v82 = v23 - (8 - v38);
    }
    v39 = *(_DWORD *)(a1 + 128);
    v40 = (__int64 *)(v30 + 152);
    v41 = a8;
    v91 = (__int64 **)(v30 + 152);
    if ( v39 > a8 )
      v41 = v39;
    v42 = (PSID)(v37 + 16LL * (*(_DWORD *)(a1 + 124) + v41));
    *v40 = v37;
    v83 = v42;
    if ( SepTokenSidSharingEnabled )
    {
      v35 = SepDuplicateTokenUserAndGroups(a1, v30);
      if ( v35 < 0 )
      {
        *v40 = 0LL;
        goto LABEL_86;
      }
    }
    else
    {
      v43 = v82;
      *((_DWORD *)v30 + 31) = *(_DWORD *)(a1 + 124);
      v44 = RtlCopySidAndAttributesArray(
              *(_DWORD *)(a1 + 124),
              *(_QWORD *)(a1 + 152),
              v43,
              v37,
              (char *)v42,
              &v83,
              &v82);
      v42 = v83;
      v35 = v44;
    }
    v46 = 0;
    v47 = (unsigned int)(16 * *(_DWORD *)(a1 + 124)) + v37;
    v85 = (__int64 **)(v30 + 160);
    *((_QWORD *)v30 + 20) = v47;
    if ( a8 )
    {
      v48 = (char **)a9;
      do
      {
        v49 = *(_DWORD *)(a1 + 128);
        if ( !v49 || SepSidInSidAndAttributes(*(unsigned __int8 ***)(a1 + 160), v49, v45, *v48) )
        {
          v35 = RtlCopySidAndAttributesArray(1u, (__int64)&a9[2 * v46], v82, v47, (char *)v42, &v83, &v82);
          v42 = v83;
          v47 += 16LL;
          LODWORD((*v85)[2 * (unsigned int)(*((_DWORD *)v28 + 32))++ + 1]) = 7;
        }
        ++v46;
        v48 += 2;
      }
      while ( v46 < a8 );
      v30 = (char *)Object;
    }
    v50 = *(_QWORD *)(a1 + 184);
    v51 = 4 * (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
    if ( v50 )
      v51 = *(unsigned __int16 *)(v50 + 2) + (unsigned int)v51;
    v52 = (unsigned int)v51;
    v53 = (char *)ExAllocatePool2(256LL, v51, 1683252563LL);
    *v87 = v53;
    if ( !v53 )
    {
      v35 = -1073741670;
      goto LABEL_86;
    }
    if ( *(_DWORD *)(a1 + 128) && !*((_DWORD *)v28 + 32) )
    {
      v35 = -1073741811;
      goto LABEL_86;
    }
    v54 = 0;
    v55 = v86;
    v56 = v85;
    if ( *((_DWORD *)v28 + 32) )
    {
      *v86 |= 0x810u;
      v54 = 1;
    }
    else
    {
      *v85 = 0LL;
    }
    if ( (_DWORD)v84 )
    {
      *v55 |= 0x18u;
    }
    else if ( !v54 )
    {
      goto LABEL_51;
    }
    SepSetLogonSessionToken(a1);
LABEL_51:
    memmove(v53, *(const void **)(a1 + 176), v52);
    if ( *(_QWORD *)(a1 + 184) )
      *((_QWORD *)v30 + 23) = &v53[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
    else
      *((_QWORD *)v30 + 23) = 0LL;
    v57 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
    v58 = *(unsigned int *)(a1 + 800);
    if ( (_DWORD)v58 )
      v35 = SepSetTokenCapabilities(v30, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v58);
    if ( v35 >= 0 )
    {
      v59 = *(unsigned __int8 **)(a1 + 784);
      if ( !v59 || (v68 = SepSetTokenPackage((__int64)v30, v59), v68 >= 0) )
      {
        v60 = *(_QWORD *)(a1 + 1080);
        if ( v60 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v60 + 24)) <= 1 )
            __fastfail(0xEu);
          v30 = (char *)Object;
          *v88 = *(_QWORD *)(a1 + 1080);
        }
        v61 = *(_QWORD *)(a1 + 1088);
        if ( v61 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v61 + 24)) <= 1 )
            __fastfail(0xEu);
          v30 = (char *)Object;
          *v89 = *(_QWORD *)(a1 + 1088);
        }
        v62 = *(_QWORD *)(a1 + 1152);
        if ( v62 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v62 + 24)) <= 1 )
            __fastfail(0xEu);
          v30 = (char *)Object;
          *v90 = *(_QWORD *)(a1 + 1152);
        }
        v63 = SepSetTokenTrust((__int64)v30, *(unsigned __int8 **)(a1 + 1104));
        v64 = *(struct _ERESOURCE **)(a1 + 48);
        v35 = v63;
        if ( v63 >= 0 )
        {
          ExReleaseResourceLite(v64);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v65 = Object;
          v66 = Object;
          *((_QWORD *)Object + 21) = &v53[v57];
          SepRemoveDisabledGroupsAndPrivileges((__int64)v66, a3, a4, a5, a6, a7);
          RtlSidHashInitialize(*v91, v65[31], (_QWORD *)v65 + 29);
          RtlSidHashInitialize(*v56, *((_DWORD *)v28 + 32), (_QWORD *)v65 + 63);
          SeCaptureSubjectContext(&SubjectContext);
          v103.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v103) )
          {
            v75 = KeGetCurrentThread();
            --v75->KernelApcDisable;
            PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v35 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken, (_BYTE *)&v79 + 1);
            ExReleaseResourceLite(PrimaryToken[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( v35 < 0 || !BYTE1(v79) )
            {
              ObfDereferenceObject(Object);
              SeReleaseSubjectContext(&SubjectContext);
              return (unsigned int)v35;
            }
            v65 = Object;
          }
          SeReleaseSubjectContext(&SubjectContext);
          if ( *v92 )
            RtlSidHashInitialize(*v92, *v94, v93);
          if ( HIDWORD(NlsMbOemCodePageTag) && SepTokenLeakMethodWatch == 15 )
          {
            if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
            {
              *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
              v77 = *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL);
              if ( v77 >= SepTokenLeakBreakCount )
              {
                DbgPrint("\nToken number 0x%x = 0x%p\n", v77, Object);
                __debugbreak();
              }
            }
            v65 = Object;
          }
          *a11 = v65;
          return (unsigned int)v35;
        }
LABEL_87:
        ExReleaseResourceLite(v64);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return (unsigned int)v35;
      }
      v35 = v68;
    }
LABEL_86:
    v64 = *(struct _ERESOURCE **)(a1 + 48);
    goto LABEL_87;
  }
  ExFreePoolWithTag(v18, 0);
  ExFreePoolWithTag(v17, 0);
  v70 = HIDWORD(NlsMbOemCodePageTag) == 0;
LABEL_81:
  if ( !v70 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v24;
}
