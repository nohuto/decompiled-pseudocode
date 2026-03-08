/*
 * XREFs of SepDuplicateToken @ 0x1407BCF00
 * Callers:
 *     SepGetAnonymousToken @ 0x1402B7BE0 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x1402E832C (SepLinkLogonSessions.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     SeCopyClientToken @ 0x1406D1D40 (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x1406D2730 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1406DAB50 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     SeGetLogonSessionToken @ 0x1407904F0 (SeGetLogonSessionToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1407945AC (SeDuplicateTokenAndAddOriginClaim.c)
 *     SepSetLogonSessionToken @ 0x14079AF7C (SepSetLogonSessionToken.c)
 *     SeGetLinkedToken @ 0x1409CC300 (SeGetLinkedToken.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140205CA0 (RtlWalkFrameChain.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402976E0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     MmGetSessionObjectById @ 0x1402BE684 (MmGetSessionObjectById.c)
 *     SepReferenceLuidToIndexEntry @ 0x1402DFF34 (SepReferenceLuidToIndexEntry.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     RtlSidHashInitialize @ 0x140310020 (RtlSidHashInitialize.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x140699240 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406E9E60 (ObpCaptureObjectCreateInformation.c)
 *     SepSetTokenCapabilities @ 0x140710278 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x140739590 (SepSetTokenPackage.c)
 *     SepMakeTokenEffectiveOnly @ 0x140770990 (SepMakeTokenEffectiveOnly.c)
 *     SepReferenceLogonSession @ 0x140773DC0 (SepReferenceLogonSession.c)
 *     ObpAllocateObject @ 0x1407BA8D0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateTokenClaims @ 0x1408A1CFA (SepDuplicateTokenClaims.c)
 *     ObpRegisterObject @ 0x14097A3B4 (ObpRegisterObject.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C69B8 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409CC9C0 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1409CD020 (SepAddTokenLogonSession.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int128 *a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7,
        __int64 *a8)
{
  PVOID *v9; // rbx
  _DWORD *Pool2; // rax
  _DWORD *v11; // r14
  _QWORD *v12; // rax
  struct _ERESOURCE *v13; // r12
  int v14; // esi
  int v15; // r13d
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *v17; // rbp
  PSLIST_ENTRY v18; // rbx
  int v19; // ebp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rbx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int128 v30; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rdx
  unsigned int v33; // eax
  unsigned int v34; // ebp
  __int64 v35; // xmm1_8
  __int64 v36; // rdx
  bool v37; // zf
  __int64 v38; // rcx
  int v39; // r12d
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  __int64 v42; // rsi
  int v43; // ecx
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // ecx
  unsigned int v48; // ebp
  char *v49; // rax
  char *v50; // rsi
  __int64 v51; // rax
  char *v52; // rsi
  unsigned int v53; // r9d
  unsigned __int8 *v54; // rdx
  int v55; // esi
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int8 *v59; // rsi
  void *v60; // rbp
  unsigned int v61; // r14d
  void *v62; // rax
  unsigned int v63; // ecx
  void *v64; // rcx
  __int64 *v65; // rcx
  void *v66; // rcx
  int v67; // ecx
  _QWORD *v68; // rax
  PVOID *v70; // rcx
  struct _KPRCB *v71; // rdx
  _GENERAL_LOOKASIDE *v72; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v74; // rdx
  _GENERAL_LOOKASIDE *v75; // rcx
  ULONG v76; // eax
  __int64 v77; // rdx
  _KPROCESS *Process; // rcx
  int v79; // edx
  PVOID *P; // [rsp+40h] [rbp-68h]
  POBJECT_TYPE *v81; // [rsp+48h] [rbp-60h]
  __int64 v82; // [rsp+50h] [rbp-58h] BYREF
  __int128 v83; // [rsp+58h] [rbp-50h] BYREF

  v9 = 0LL;
  P = 0LL;
  if ( a5 > 3 && a4 == 2 )
    return 3221225637LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 48LL, 1950442835LL);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0;
  v12 = Pool2 + 2;
  v11[6] = 0;
  v12[1] = v12;
  *v12 = v12;
  *((_QWORD *)v11 + 5) = v11 + 8;
  *((_QWORD *)v11 + 4) = v11 + 8;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    P = (PVOID *)ExAllocatePool2(256LL, 288LL, 1950442835LL);
    v9 = P;
    if ( !P )
    {
      v70 = (PVOID *)v11;
      goto LABEL_84;
    }
  }
  v13 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1817470291LL);
  if ( !v13 )
  {
    ExFreePoolWithTag(v11, 0);
    if ( !HIDWORD(NlsMbOemCodePageTag) )
      return 3221225626LL;
    v70 = v9;
LABEL_84:
    ExFreePoolWithTag(v70, 0);
    return 3221225626LL;
  }
  v14 = *((_DWORD *)a1 + 33) + 1168;
  if ( *((_DWORD *)a1 + 33) < 0xFFFFFB70 )
  {
    v15 = *((_DWORD *)a1 + 34);
    CurrentPrcb = KeGetCurrentPrcb();
    v82 = 0LL;
    v81 = SeTokenObjectType;
    v83 = 0LL;
    v17 = CurrentPrcb->PPLookasideList[4].P;
    ++v17->TotalAllocates;
    v18 = RtlpInterlockedPopEntrySList(&v17->ListHead);
    if ( v18 )
      goto LABEL_7;
    ++v17->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v18 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( v18
      || (Size = L->Size,
          AllocateEx = L->AllocateEx,
          Tag = L->Tag,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (v18 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
    {
LABEL_7:
      LODWORD(v18->Next) = CurrentPrcb->Number;
    }
    if ( v18 )
    {
      v19 = ObpCaptureObjectCreateInformation(a6, a6, a2, &v83, (__int64)v18, 0);
      if ( v19 >= 0 )
      {
        v22 = (__int64)v81;
        if ( ((__int64)v18->Next & (_DWORD)v81[9]) != 0 )
        {
          v19 = -1073741811;
        }
        else
        {
          if ( ((__int64)v18->Next & 0x10) == 0 )
            goto LABEL_12;
          if ( SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a6) )
          {
            v22 = (__int64)v81;
LABEL_12:
            if ( !v15 )
              v15 = *(_DWORD *)(v22 + 104);
            HIDWORD(v18[1].Next) = v15;
            *((_DWORD *)&v18[1].Next + 2) = v14;
            v19 = ObpAllocateObject(v18, a6, v22, &v83, v14, &v82, 0LL);
            if ( v19 >= 0 )
            {
              v23 = v82;
              if ( ObpTraceFlags )
              {
                ObpRegisterObject(v82);
                ObpPushStackInfo(v23, 1, 1u, 0x746C6644u);
              }
              v24 = v23 + 48;
              *(_QWORD *)(v24 + 16) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              *(_DWORD *)(v24 + 192) = a4;
              *(_DWORD *)(v24 + 196) = a5;
              *(_BYTE *)(v24 + 204) = 0;
              *(_QWORD *)(v24 + 48) = v13;
              ExInitializeResourceLite(v13);
              *(_QWORD *)(v24 + 24) = *((_QWORD *)a1 + 3);
              v30 = *a1;
              *(_DWORD *)(v24 + 140) = 0;
              *(_OWORD *)v24 = v30;
              *(_QWORD *)(v24 + 32) = *((_QWORD *)a1 + 4);
              *(_QWORD *)(v24 + 40) = *((_QWORD *)a1 + 5);
              *(_QWORD *)(v24 + 224) = *((_QWORD *)a1 + 28);
              *(_QWORD *)(v24 + 1120) = 0LL;
              *(_QWORD *)(v24 + 1128) = 0LL;
              *(_QWORD *)(v24 + 1096) = 0LL;
              *(_QWORD *)(v24 + 1144) = P;
              *(_DWORD *)(v24 + 120) = 0;
              *(_QWORD *)(v24 + 1160) = 0LL;
              if ( HIDWORD(NlsMbOemCodePageTag) )
              {
                v76 = RtlWalkFrameChain(P + 5, 0x1Eu, 0);
                if ( KeGetCurrentIrql() < 2u )
                  RtlWalkFrameChain((PVOID *)(*(_QWORD *)(v24 + 1144) + 8 * (v76 + 5LL)), 30 - v76, 1u);
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)a1 + 6), 1u);
              *(_QWORD *)(v24 + 56) = *((_QWORD *)a1 + 7);
              *(_DWORD *)(v24 + 136) = *((_DWORD *)a1 + 34);
              *(_DWORD *)(v24 + 144) = *((_DWORD *)a1 + 36);
              *(_DWORD *)(v24 + 128) = *((_DWORD *)a1 + 32);
              *(_DWORD *)(v24 + 132) = *((_DWORD *)a1 + 33);
              v33 = *((_DWORD *)a1 + 50) & 0xFFFFFBDF;
              *(_DWORD *)(v24 + 200) = v33;
              if ( (v33 & 0x1000000) != 0 )
                _InterlockedIncrement(&SepLearningModeTokenCount);
              v34 = *((_DWORD *)a1 + 30);
              if ( *(_DWORD *)(v24 + 120) != v34 )
              {
                *(_DWORD *)(v24 + 120) = v34;
                if ( !SeTokenDoesNotTrackSessionObject )
                {
                  v66 = *(void **)(v24 + 1160);
                  if ( v66 )
                    ObfDereferenceObject(v66);
                  *(_QWORD *)(v24 + 1160) = MmGetSessionObjectById(v34, v32);
                }
              }
              *(_DWORD *)(v24 + 120) = *((_DWORD *)a1 + 30);
              *(_OWORD *)(v24 + 88) = *(__int128 *)((char *)a1 + 88);
              *(_QWORD *)(v24 + 104) = *((_QWORD *)a1 + 13);
              *(_DWORD *)(v24 + 112) = *((_DWORD *)a1 + 28);
              *(_WORD *)(v24 + 116) = *((_WORD *)a1 + 58);
              *(_BYTE *)(v24 + 118) = *((_BYTE *)a1 + 118);
              *(_DWORD *)(v24 + 208) = *((_DWORD *)a1 + 52);
              *(_DWORD *)(v24 + 212) = *((_DWORD *)a1 + 53);
              *(_OWORD *)(v24 + 64) = a1[4];
              v35 = *((_QWORD *)a1 + 10);
              *(_QWORD *)(v24 + 776) = v11;
              *(_QWORD *)(v24 + 1080) = 0LL;
              *(_QWORD *)(v24 + 1088) = 0LL;
              *(_QWORD *)(v24 + 1152) = 0LL;
              *(_QWORD *)(v24 + 792) = 0LL;
              *(_QWORD *)(v24 + 784) = 0LL;
              *(_DWORD *)(v24 + 800) = 0;
              *(_QWORD *)(v24 + 80) = v35;
              memset((void *)(v24 + 808), 0, 0x110uLL);
              v37 = *(_BYTE *)(v24 + 118) == 2;
              *(_QWORD *)(v24 + 176) = 0LL;
              *(_QWORD *)(v24 + 1104) = 0LL;
              *(_QWORD *)(v24 + 1112) = 0LL;
              *(_QWORD *)(v24 + 1136) = 0LL;
              if ( v37 )
              {
                LOBYTE(v36) = 1;
                SepModifyTokenPolicyCounter(v24 + 88, v36);
              }
              if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 )
              {
                v39 = SepReferenceLogonSession((__int64)a1 + 24, v24 + 216);
                if ( v39 < 0 )
                {
                  *(_DWORD *)(v24 + 200) |= 0x20u;
                  *(_QWORD *)(v24 + 216) = 0LL;
                  goto LABEL_113;
                }
              }
              else
              {
                v38 = *((_QWORD *)a1 + 27);
                *(_QWORD *)(v24 + 216) = v38;
                if ( _InterlockedIncrement64((volatile signed __int64 *)(v38 + 24)) <= 1 )
                  __fastfail(0xEu);
                v39 = 0;
              }
              v40 = *((_QWORD *)a1 + 142);
              if ( v40 )
                SepReferenceLuidToIndexEntry(v40);
              *(_QWORD *)(v24 + 1136) = *((_QWORD *)a1 + 142);
              v41 = (_DWORD *)*((_QWORD *)a1 + 97);
              if ( *v41 )
              {
                v39 = AuthzBasepDuplicateSecurityAttributes((__int64)v41, *(_QWORD **)(v24 + 776), a7);
                if ( v39 < 0 )
                  goto LABEL_113;
              }
              memmove((void *)(v24 + 1168), a1 + 73, *((unsigned int *)a1 + 33));
              v42 = v24 - (_QWORD)a1;
              if ( SepTokenSidSharingEnabled )
              {
                *(_QWORD *)(v24 + 152) = v42 + *((_QWORD *)a1 + 19);
                v39 = SepDuplicateTokenUserAndGroups(a1, v24);
                if ( v39 < 0 )
                {
                  *(_QWORD *)(v24 + 152) = 0LL;
                  goto LABEL_113;
                }
              }
              else
              {
                v43 = *((_DWORD *)a1 + 31);
                *(_DWORD *)(v24 + 124) = v43;
                v44 = (_QWORD *)(v42 + *((_QWORD *)a1 + 19));
                for ( *(_QWORD *)(v24 + 152) = v44; v43; --v43 )
                {
                  *v44 += v42;
                  v44 += 2;
                }
              }
              v45 = *((_QWORD *)a1 + 20);
              *(_QWORD *)(v24 + 160) = v45;
              if ( v45 )
              {
                v67 = *(_DWORD *)(v24 + 128);
                v68 = (_QWORD *)(v42 + v45);
                for ( *(_QWORD *)(v24 + 160) = v68; v67; --v67 )
                {
                  *v68 += v42;
                  v68 += 2;
                }
              }
              v46 = *((_QWORD *)a1 + 23);
              v47 = 4 * *(unsigned __int8 *)(*((_QWORD *)a1 + 21) + 1LL) + 8;
              if ( v46 )
                v47 += *(unsigned __int16 *)(v46 + 2);
              v48 = v47;
              v49 = (char *)ExAllocatePool2(256LL, v47, 1683252563LL);
              *(_QWORD *)(v24 + 176) = v49;
              v50 = v49;
              if ( !v49 )
                goto LABEL_121;
              memmove(v49, *((const void **)a1 + 22), v48);
              v51 = *((_QWORD *)a1 + 23);
              v52 = &v50[-*((_QWORD *)a1 + 22)];
              *(_QWORD *)(v24 + 184) = v51;
              if ( v51 )
                *(_QWORD *)(v24 + 184) = &v52[v51];
              *(_QWORD *)(v24 + 168) = &v52[*((_QWORD *)a1 + 21)];
              v53 = *((_DWORD *)a1 + 200);
              if ( v53 )
                v39 = SepSetTokenCapabilities(v24, *((void **)a1 + 98), *((void **)a1 + 99), v53);
              if ( v39 >= 0 )
              {
                v54 = (unsigned __int8 *)*((_QWORD *)a1 + 98);
                if ( v54 )
                {
                  v55 = SepSetTokenPackage(v24, v54);
                  if ( v55 < 0 )
                    goto LABEL_120;
                }
                v56 = *((_QWORD *)a1 + 135);
                if ( v56 )
                {
                  if ( _InterlockedIncrement64((volatile signed __int64 *)(v56 + 24)) <= 1 )
                    __fastfail(0xEu);
                  *(_QWORD *)(v24 + 1080) = *((_QWORD *)a1 + 135);
                }
                v57 = *((_QWORD *)a1 + 136);
                if ( v57 )
                {
                  if ( _InterlockedIncrement64((volatile signed __int64 *)(v57 + 24)) <= 1 )
                    __fastfail(0xEu);
                  *(_QWORD *)(v24 + 1088) = *((_QWORD *)a1 + 136);
                }
                v58 = *((_QWORD *)a1 + 144);
                if ( v58 )
                {
                  if ( _InterlockedIncrement64((volatile signed __int64 *)(v58 + 24)) <= 1 )
                    __fastfail(0xEu);
                  *(_QWORD *)(v24 + 1152) = *((_QWORD *)a1 + 144);
                }
                if ( *((_QWORD *)a1 + 137) )
                {
                  v55 = SepDuplicateTokenClaims(a1, v24);
                  if ( v55 < 0 )
                  {
LABEL_120:
                    ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
                    KeLeaveCriticalRegion();
                    ObfDereferenceObject((PVOID)v24);
                    return (unsigned int)v55;
                  }
                }
                v59 = (unsigned __int8 *)*((_QWORD *)a1 + 138);
                v60 = 0LL;
                if ( !v59 )
                  goto LABEL_57;
                v61 = 4 * v59[1] + 8;
                v62 = (void *)ExAllocatePool2(256LL, v61, 1767073107LL);
                v60 = v62;
                if ( v62 )
                {
                  v63 = 4 * v59[1] + 8;
                  if ( v63 <= v61 )
                    memmove(v62, v59, v63);
LABEL_57:
                  v64 = *(void **)(v24 + 1104);
                  if ( v64 )
                  {
                    ExFreePoolWithTag(v64, 0);
                    *(_QWORD *)(v24 + 1104) = 0LL;
                  }
                  *(_QWORD *)(v24 + 1104) = v60;
                  ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
                  KeLeaveCriticalRegion();
                  if ( HIDWORD(NlsMbOemCodePageTag) )
                  {
                    **(_QWORD **)(v24 + 1144) = KeGetCurrentThread()[1].CycleTime;
                    *(_QWORD *)(*(_QWORD *)(v24 + 1144) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
                    *(_DWORD *)(*(_QWORD *)(v24 + 1144) + 32LL) = 13;
                    *(_DWORD *)(*(_QWORD *)(v24 + 1144) + 280LL) = 0;
                    *(_DWORD *)(*(_QWORD *)(v24 + 1144) + 284LL) = 0;
                    v77 = *(_QWORD *)(v24 + 1144);
                    Process = KeGetCurrentThread()->ApcState.Process;
                    *(_QWORD *)(v77 + 16) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
                    *(_DWORD *)(v77 + 24) = Process[1].ActiveProcessors.Bitmap[0];
                    *(_WORD *)(v77 + 28) = WORD2(Process[1].ActiveProcessors.StaticBitmap[0]);
                    *(_BYTE *)(v77 + 30) = BYTE6(Process[1].ActiveProcessors.StaticBitmap[0]);
                    SepAddTokenLogonSession(v24);
                  }
                  if ( a3 )
                    SepMakeTokenEffectiveOnly(v24);
                  RtlSidHashInitialize(*(__int64 **)(v24 + 152), *(_DWORD *)(v24 + 124), (_QWORD *)(v24 + 232));
                  RtlSidHashInitialize(*(__int64 **)(v24 + 160), *(_DWORD *)(v24 + 128), (_QWORD *)(v24 + 504));
                  v65 = *(__int64 **)(v24 + 792);
                  if ( v65 )
                    RtlSidHashInitialize(v65, *(_DWORD *)(v24 + 800), (_QWORD *)(v24 + 808));
                  if ( HIDWORD(NlsMbOemCodePageTag)
                    && SepTokenLeakMethodWatch == 13
                    && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                  {
                    *(_DWORD *)(*(_QWORD *)(v24 + 1144) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                    v79 = *(_DWORD *)(*(_QWORD *)(v24 + 1144) + 280LL);
                    if ( v79 >= SepTokenLeakBreakCount )
                    {
                      DbgPrint("\nToken number 0x%x = 0x%p\n", v79, (const void *)v24);
                      __debugbreak();
                    }
                  }
                  *a8 = v24;
                  return 0LL;
                }
LABEL_121:
                ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
                KeLeaveCriticalRegion();
                ObfDereferenceObject((PVOID)v24);
                return 3221225626LL;
              }
LABEL_113:
              ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
              KeLeaveCriticalRegion();
              ObfDereferenceObject((PVOID)v24);
              return (unsigned int)v39;
            }
            goto LABEL_97;
          }
          v19 = -1073741727;
        }
LABEL_97:
        if ( *((_QWORD *)&v83 + 1) )
          ObpFreeObjectNameBuffer((__int64)&v83);
        Next = v18[2].Next;
        if ( Next )
        {
          LOBYTE(v20) = 1;
          SeReleaseSecurityDescriptor(Next, LOBYTE(v18[1].Next), v20, v21);
          v18[2].Next = 0LL;
        }
        v74 = KeGetCurrentPrcb();
        v75 = v74->PPLookasideList[4].P;
        ++v75->TotalFrees;
        if ( LOWORD(v75->ListHead.Alignment) < v75->Depth
          || (++v75->FreeMisses,
              v75 = v74->PPLookasideList[4].L,
              ++v75->TotalFrees,
              LOWORD(v75->ListHead.Alignment) < v75->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v75->ListHead, v18);
        }
        else
        {
          ++v75->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v75->FreeEx)(v18);
        }
        goto LABEL_89;
      }
      v71 = KeGetCurrentPrcb();
      v72 = v71->PPLookasideList[4].P;
      ++v72->TotalFrees;
      if ( LOWORD(v72->ListHead.Alignment) < v72->Depth
        || (++v72->FreeMisses,
            v72 = v71->PPLookasideList[4].L,
            ++v72->TotalFrees,
            LOWORD(v72->ListHead.Alignment) < v72->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v72->ListHead, v18);
      }
      else
      {
        ++v72->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v72->FreeEx)(v18);
      }
    }
    else
    {
      v19 = -1073741670;
    }
LABEL_89:
    ExFreePoolWithTag(v11, 0);
    ExFreePoolWithTag(v13, 0);
    if ( HIDWORD(NlsMbOemCodePageTag) )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v19;
  }
  ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag(v13, 0);
  if ( HIDWORD(NlsMbOemCodePageTag) )
    ExFreePoolWithTag(v9, 0);
  return 3221225621LL;
}
