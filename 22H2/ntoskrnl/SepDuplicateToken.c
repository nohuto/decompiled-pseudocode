/*
 * XREFs of SepDuplicateToken @ 0x140651490
 * Callers:
 *     SepLinkLogonSessions @ 0x14032C264 (SepLinkLogonSessions.c)
 *     SepGetAnonymousToken @ 0x14035F51C (SepGetAnonymousToken.c)
 *     SepSetLogonSessionToken @ 0x1405D9EE0 (SepSetLogonSessionToken.c)
 *     SeSubProcessToken @ 0x140603E44 (SeSubProcessToken.c)
 *     NtDuplicateToken @ 0x1406527E0 (NtDuplicateToken.c)
 *     NtOpenThreadTokenEx @ 0x140653590 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     SeCopyClientToken @ 0x1406DAAF4 (SeCopyClientToken.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1409227FC (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeGetLinkedToken @ 0x1409228E0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x140922A00 (SeGetLogonSessionToken.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     MmGetSessionObjectById @ 0x140206324 (MmGetSessionObjectById.c)
 *     ExInitializeResourceLite @ 0x14021CC10 (ExInitializeResourceLite.c)
 *     RtlWalkFrameChain @ 0x14021CE70 (RtlWalkFrameChain.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     RtlSidHashInitialize @ 0x1402D6590 (RtlSidHashInitialize.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402D6890 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepReferenceLuidToIndexEntry @ 0x1402D6D8C (SepReferenceLuidToIndexEntry.c)
 *     DbgPrint @ 0x140364360 (DbgPrint.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     SepReferenceLogonSession @ 0x1405DC7C4 (SepReferenceLogonSession.c)
 *     SepSetTokenCapabilities @ 0x1405DD33C (SepSetTokenCapabilities.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     SepDuplicateSid @ 0x140654430 (SepDuplicateSid.c)
 *     SepMakeTokenEffectiveOnly @ 0x1406797C8 (SepMakeTokenEffectiveOnly.c)
 *     SepSetTokenPackage @ 0x140710940 (SepSetTokenPackage.c)
 *     SepModifyTokenPolicyCounter @ 0x14091CBE0 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x14092310C (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x140923720 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1409252CC (SepDuplicateTokenClaims.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        _QWORD *a8)
{
  unsigned int v8; // r12d
  PVOID *v11; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rsi
  _QWORD *v15; // rax
  PVOID *v16; // rcx
  struct _ERESOURCE *v17; // r14
  int Object; // ebp
  ULONG v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rdx
  unsigned int v22; // r14d
  int v23; // esi
  __int64 v24; // rax
  _DWORD *v25; // rcx
  _QWORD *v26; // rcx
  int i; // eax
  __int64 v28; // rax
  _QWORD *v29; // rax
  int j; // ecx
  __int64 v31; // rax
  unsigned int v32; // ecx
  size_t v33; // r12
  char *v34; // r14
  __int64 v35; // rax
  char *v36; // r14
  ULONG v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  void *v42; // rcx
  __int64 v43; // rdx
  _KPROCESS *Process; // rcx
  int v45; // edx
  ULONG pulResult; // [rsp+108h] [rbp+20h] BYREF

  v8 = a5;
  pulResult = 0;
  v11 = 0LL;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v15 = PoolWithTag + 2;
  v14[6] = 0;
  v15[1] = v15;
  *v15 = v15;
  *((_QWORD *)v14 + 5) = v14 + 8;
  *((_QWORD *)v14 + 4) = v14 + 8;
  if ( SeTokenLeakTracking )
  {
    v11 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v11 )
    {
      v16 = (PVOID *)v14;
      goto LABEL_8;
    }
  }
  v17 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v17 )
  {
    ExFreePoolWithTag(v14, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v16 = v11;
LABEL_8:
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  Object = RtlULongAdd(0x490u, *(_DWORD *)(a1 + 132), &pulResult);
  if ( Object < 0 || (Object = ObCreateObjectEx(a6, (_DWORD)SeTokenObjectType, a2, a6), Object < 0) )
  {
    ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(v17, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v11, 0);
    return (unsigned int)Object;
  }
  MEMORY[0x10] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  MEMORY[0xCC] = 0;
  MEMORY[0xC0] = a4;
  MEMORY[0xC4] = v8;
  MEMORY[0x30] = v17;
  ExInitializeResourceLite(v17);
  MEMORY[0x18] = *(_QWORD *)(a1 + 24);
  MEMORY[0] = *(_OWORD *)a1;
  MEMORY[0x8C] = 0;
  MEMORY[0x20] = *(_QWORD *)(a1 + 32);
  MEMORY[0x28] = *(_QWORD *)(a1 + 40);
  MEMORY[0xE0] = *(_QWORD *)(a1 + 224);
  MEMORY[0x460] = 0LL;
  MEMORY[0x468] = 0LL;
  MEMORY[0x448] = 0LL;
  MEMORY[0x478] = v11;
  MEMORY[0x78] = 0;
  MEMORY[0x488] = 0LL;
  if ( SeTokenLeakTracking )
  {
    v19 = RtlWalkFrameChain(v11 + 5, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)(MEMORY[0x478] + 40LL + 8LL * v19), 30 - v19, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  MEMORY[0x38] = *(_QWORD *)(a1 + 56);
  MEMORY[0x88] = *(_DWORD *)(a1 + 136);
  MEMORY[0x90] = *(_DWORD *)(a1 + 144);
  MEMORY[0x80] = *(_DWORD *)(a1 + 128);
  MEMORY[0x84] = *(_DWORD *)(a1 + 132);
  MEMORY[0xC8] = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
  v22 = *(_DWORD *)(a1 + 120);
  if ( MEMORY[0x78] != v22 )
  {
    MEMORY[0x78] = *(_DWORD *)(a1 + 120);
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( MEMORY[0x488] )
        HalPutDmaAdapter(MEMORY[0x488]);
      MEMORY[0x488] = MmGetSessionObjectById(v22, v21);
    }
  }
  MEMORY[0x78] = *(_DWORD *)(a1 + 120);
  MEMORY[0x58] = *(_OWORD *)(a1 + 88);
  MEMORY[0x68] = *(_OWORD *)(a1 + 104);
  MEMORY[0xD0] = *(_DWORD *)(a1 + 208);
  MEMORY[0xD4] = *(_DWORD *)(a1 + 212);
  MEMORY[0x40] = *(_OWORD *)(a1 + 64);
  MEMORY[0x50] = *(_QWORD *)(a1 + 80);
  MEMORY[0x308] = v14;
  MEMORY[0x438] = 0LL;
  MEMORY[0x440] = 0LL;
  MEMORY[0x480] = 0LL;
  MEMORY[0x318] = 0LL;
  MEMORY[0x310] = 0LL;
  MEMORY[0x320] = 0;
  memset((void *)0x328, 0, 0x110uLL);
  MEMORY[0xB0] = 0LL;
  MEMORY[0x450] = 0LL;
  MEMORY[0x458] = 0LL;
  MEMORY[0x470] = 0LL;
  if ( MEMORY[0x77] == 2 )
    SepModifyTokenPolicyCounter(88LL, 1LL);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v23 = SepReferenceLogonSession(a1 + 24, 216LL);
    if ( v23 < 0 )
    {
      MEMORY[0xC8] |= 0x20u;
      MEMORY[0xD8] = 0LL;
LABEL_41:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
LABEL_42:
      HalPutDmaAdapter(0LL);
      return (unsigned int)v23;
    }
  }
  else
  {
    MEMORY[0xD8] = *(_QWORD *)(a1 + 216);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(MEMORY[0xD8] + 24LL)) <= 1 )
      __fastfail(0xEu);
    v23 = 0;
  }
  v24 = *(_QWORD *)(a1 + 1136);
  if ( v24 )
  {
    SepReferenceLuidToIndexEntry(*(_QWORD *)(a1 + 1136));
    v24 = *(_QWORD *)(a1 + 1136);
  }
  MEMORY[0x470] = v24;
  v25 = *(_DWORD **)(a1 + 776);
  if ( *v25 )
  {
    v23 = AuthzBasepDuplicateSecurityAttributes((__int64)v25, MEMORY[0x308], a7);
    if ( v23 < 0 )
      goto LABEL_41;
  }
  memmove((void *)0x490, (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
  if ( SepTokenSidSharingEnabled )
  {
    MEMORY[0x98] = *(_QWORD *)(a1 + 152) - a1;
    v23 = SepDuplicateTokenUserAndGroups(a1, 0LL);
    if ( v23 < 0 )
    {
      MEMORY[0x98] = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    MEMORY[0x7C] = *(_DWORD *)(a1 + 124);
    v26 = (_QWORD *)(*(_QWORD *)(a1 + 152) - a1);
    MEMORY[0x98] = v26;
    for ( i = MEMORY[0x7C]; i; --i )
    {
      *v26 -= a1;
      v26 += 2;
    }
  }
  v28 = *(_QWORD *)(a1 + 160);
  MEMORY[0xA0] = v28;
  if ( v28 )
  {
    v29 = (_QWORD *)(v28 - a1);
    MEMORY[0xA0] = v29;
    for ( j = MEMORY[0x80]; j; --j )
    {
      *v29 -= a1;
      v29 += 2;
    }
  }
  v31 = *(_QWORD *)(a1 + 184);
  v32 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v31 )
    v32 += *(unsigned __int16 *)(v31 + 2);
  v33 = v32;
  v34 = (char *)ExAllocatePoolWithTag(PagedPool, v32, 0x64546553u);
  MEMORY[0xB0] = v34;
  if ( !v34 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
    HalPutDmaAdapter(0LL);
    return 3221225626LL;
  }
  memmove(v34, *(const void **)(a1 + 176), v33);
  v35 = *(_QWORD *)(a1 + 184);
  v36 = &v34[-*(_QWORD *)(a1 + 176)];
  MEMORY[0xB8] = v35;
  if ( v35 )
    MEMORY[0xB8] = &v36[v35];
  MEMORY[0xA8] = &v36[*(_QWORD *)(a1 + 168)];
  v37 = *(_DWORD *)(a1 + 800);
  if ( v37 )
    v23 = SepSetTokenCapabilities(0LL, *(void **)(a1 + 784), *(void **)(a1 + 792), v37);
  if ( v23 < 0 )
    goto LABEL_41;
  v38 = *(_QWORD *)(a1 + 784);
  if ( v38 )
    v23 = SepSetTokenPackage(0LL, v38);
  if ( v23 < 0 )
    goto LABEL_41;
  v39 = *(_QWORD *)(a1 + 1080);
  if ( v39 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v39 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x438] = *(_QWORD *)(a1 + 1080);
  }
  v40 = *(_QWORD *)(a1 + 1088);
  if ( v40 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v40 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x440] = *(_QWORD *)(a1 + 1088);
  }
  v41 = *(_QWORD *)(a1 + 1152);
  if ( v41 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v41 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x480] = *(_QWORD *)(a1 + 1152);
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v23 = SepDuplicateTokenClaims(a1, 0LL);
    if ( v23 < 0 )
      goto LABEL_41;
  }
  v42 = *(void **)(a1 + 1104);
  v23 = 0;
  if ( !v42 || (v23 = SepDuplicateSid(v42), v23 >= 0) )
  {
    if ( MEMORY[0x450] )
    {
      ExFreePoolWithTag(MEMORY[0x450], 0);
      MEMORY[0x450] = 0LL;
    }
    MEMORY[0x450] = 0LL;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v23 < 0 )
    goto LABEL_42;
  if ( SeTokenLeakTracking )
  {
    *MEMORY[0x478] = KeGetCurrentThread()[1].CycleTime;
    *(_QWORD *)(MEMORY[0x478] + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(MEMORY[0x478] + 32LL) = 13;
    *(_DWORD *)(MEMORY[0x478] + 280LL) = 0;
    *(_DWORD *)(MEMORY[0x478] + 284LL) = 0;
    v43 = MEMORY[0x478];
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(MEMORY[0x478] + 16LL) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
    *(_DWORD *)(v43 + 24) = Process[1].ActiveProcessors.Bitmap[0];
    *(_WORD *)(v43 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[0]);
    *(_BYTE *)(v43 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[0]);
    SepAddTokenLogonSession(0LL);
  }
  if ( a3 )
    SepMakeTokenEffectiveOnly(0LL);
  RtlSidHashInitialize(MEMORY[0x98], MEMORY[0x7C], (PSID_AND_ATTRIBUTES_HASH)0xE8);
  RtlSidHashInitialize(MEMORY[0xA0], MEMORY[0x80], (PSID_AND_ATTRIBUTES_HASH)0x1F8);
  if ( MEMORY[0x318] )
    RtlSidHashInitialize(MEMORY[0x318], MEMORY[0x320], (PSID_AND_ATTRIBUTES_HASH)0x328);
  if ( SeTokenLeakTracking )
  {
    if ( SepTokenLeakMethodWatch == 13
      && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
    {
      *(_DWORD *)(MEMORY[0x478] + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
      v45 = *(_DWORD *)(MEMORY[0x478] + 280LL);
      if ( v45 >= SepTokenLeakBreakCount )
      {
        DbgPrint("\nToken number 0x%x = 0x%p\n", v45, 0LL);
        __debugbreak();
      }
    }
  }
  *a8 = 0LL;
  return (unsigned int)v23;
}
