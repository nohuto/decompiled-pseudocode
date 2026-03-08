/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     NtEnumerateValueKey @ 0x1407AB260 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeExtraParameter @ 0x140797DC0 (CmpFreeExtraParameter.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1407B96F0 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1409C6FC8 (SeCreateAccessStateFromSubjectContext.c)
 *     CmVirtualKCBToRealPath @ 0x140A15B68 (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x140A17264 (CmpReparseToVirtualPath.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByName @ 0x140AF2458 (CmObReferenceObjectByName.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(PVOID *a1, char a2, int a3, PVOID *a4)
{
  _QWORD *v6; // r15
  _KPROCESS *v7; // rdx
  PVOID v8; // r8
  __int64 v9; // r9
  char v10; // r12
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r13
  _QWORD *v14; // rdi
  int AccessStateFromSubjectContext; // ebx
  struct _KTHREAD *v16; // r15
  signed __int64 *p_WaitBlockList; // rsi
  ULONG_PTR v18; // rax
  _QWORD *v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r13d
  PVOID *v40; // r14
  int v41; // edx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  PVOID *v50; // rcx
  signed __int64 v51; // rax
  signed __int64 v52; // rtt
  wchar_t *Buffer; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  char v62; // [rsp+48h] [rbp-C0h]
  char v64; // [rsp+4Ah] [rbp-BEh]
  char v65; // [rsp+4Bh] [rbp-BDh]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v67; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v68[2]; // [rsp+60h] [rbp-A8h]
  __int64 v69; // [rsp+70h] [rbp-98h]
  PVOID TokenInformation; // [rsp+78h] [rbp-90h] BYREF
  int v71; // [rsp+80h] [rbp-88h]
  PVOID *v72; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v74; // [rsp+A0h] [rbp-68h]
  _DWORD v75[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING *p_DestinationString; // [rsp+B8h] [rbp-50h]
  int v78; // [rsp+C0h] [rbp-48h]
  int v79; // [rsp+C4h] [rbp-44h]
  __int128 v80; // [rsp+C8h] [rbp-40h]
  __int128 v81; // [rsp+E0h] [rbp-28h]
  __int128 v82; // [rsp+F0h] [rbp-18h]
  _OWORD v83[19]; // [rsp+108h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+238h] [rbp+130h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v85[5]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v86[224]; // [rsp+308h] [rbp+200h] BYREF

  v71 = a3;
  v74 = a1;
  v72 = a4;
  DestinationString = 0LL;
  memset(v85, 0, sizeof(v85));
  memset(v86, 0, sizeof(v86));
  v65 = 0;
  v75[1] = 0;
  v79 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  TokenInformation = *a1;
  v6 = TokenInformation;
  Object = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v83, 0, 0x128uLL);
  LODWORD(v83[6]) = -1;
  *a4 = 0LL;
  *((_QWORD *)&v83[9] + 1) = &v83[9];
  v10 = 0;
  *(_OWORD *)((char *)&v83[13] + 8) = 0LL;
  v62 = 0;
  *(_QWORD *)&v83[9] = &v83[9];
  *(_OWORD *)((char *)&v83[14] + 8) = 0LL;
  v64 = 0;
  *(_OWORD *)((char *)&v83[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v83[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v83[17] + 8) = 0LL;
  v11 = v6[1];
  *(_OWORD *)v68 = 0LL;
  if ( *(_WORD *)(v11 + 66) || (v6[6] & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_81;
  v7 = (_KPROCESS *)*(unsigned int *)(v11 + 184);
  if ( ((unsigned int)v7 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v11) )
  {
    v10 = 1;
    goto LABEL_9;
  }
  if ( ((unsigned int)v7 & 0x1000000) == 0 )
  {
LABEL_81:
    AccessStateFromSubjectContext = 0;
    goto LABEL_82;
  }
  v62 = 1;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v69 = *(_QWORD *)(Process + 1088);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v16 = KeGetCurrentThread();
    p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
    --v16->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v14 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v14, 0x75536553u);
      LODWORD(v68[0]) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      AccessStateFromSubjectContext = 0;
    }
    else
    {
      AccessStateFromSubjectContext = 0;
      v14 = 0LL;
    }
    if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_WaitBlockList);
    KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v16);
    v6 = TokenInformation;
  }
  else
  {
    v14 = 0LL;
    AccessStateFromSubjectContext = 0;
  }
  v67 = v14;
  v18 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
  v19 = (_QWORD *)v18;
  v68[1] = (PVOID)v18;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 1144) + 284LL));
      v19 = v68[1];
      if ( v68[1] == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v14 = v67;
    }
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14[143] + 284LL));
      v14 = v67;
      if ( v67 == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
      v19 = v68[1];
    }
  }
  v81 = 0LL;
  v82 = 0LL;
  if ( !CmpVEEnabled )
  {
LABEL_59:
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v64 )
      goto LABEL_63;
    goto LABEL_62;
  }
  v20 = v83[1];
  if ( (v83[1] & 1) == 0 )
  {
    if ( !a2 )
      goto LABEL_59;
    LODWORD(TokenInformation) = 0;
    if ( !v14 )
    {
      SeQueryInformationToken(v19, TokenVirtualizationEnabled, &TokenInformation);
      if ( (_DWORD)TokenInformation )
      {
        LODWORD(v83[1]) |= 5u;
        goto LABEL_34;
      }
      v20 = v83[1];
    }
    LODWORD(v83[1]) = v20 | 3;
    goto LABEL_59;
  }
  if ( (v83[1] & 2) != 0 )
    goto LABEL_59;
LABEL_34:
  if ( v10 && (*(_DWORD *)(v11 + 184) & 0x800000) == 0 )
    goto LABEL_59;
  CmpAttachToRegistryProcess(&ApcState);
  v65 = 1;
  CmpLockRegistry(v22, v21, v23, v24);
  CmpLockKcbShared(v11);
  if ( !v10 )
  {
    if ( (int)CmVirtualKCBToRealPath(v11, &DestinationString) >= 0 )
      goto LABEL_42;
LABEL_41:
    CmpUnlockKcb(v11);
    CmpUnlockRegistry(v32, v31, v33, v34);
    goto LABEL_59;
  }
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v6, 0LL);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_41;
  v26 = CmpReparseToVirtualPath(v11, v25, &v67, &DestinationString);
  v19 = v68[1];
  v14 = v67;
  if ( !v26 )
  {
    AccessStateFromSubjectContext = 0;
    CmpUnlockKcb(v11);
    CmpUnlockRegistry(v28, v27, v29, v30);
    goto LABEL_59;
  }
LABEL_42:
  CmpUnlockKcb(v11);
  CmpUnlockRegistry(v36, v35, v37, v38);
  v39 = v71;
  v40 = v74;
  v41 = 8;
  LODWORD(v83[0]) = 8;
  if ( !v71 )
    v41 = 4104;
  *((_QWORD *)&v83[4] + 1) = *((_QWORD *)*v74 + 7);
  LODWORD(v83[0]) = v41;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    (unsigned int)&v67,
                                    (unsigned int)v85,
                                    (unsigned int)v86,
                                    v71,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_59;
  v42 = 1600;
  v64 = 1;
  v75[0] = 48;
  if ( a2 != 1 )
    v42 = 576;
  v76 = 0LL;
  v78 = v42;
  p_DestinationString = &DestinationString;
  v80 = 0LL;
  AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                    (unsigned int)v75,
                                    (unsigned int)v85,
                                    v39,
                                    v9,
                                    0,
                                    (__int64)v83,
                                    (__int64)&Object);
  if ( AccessStateFromSubjectContext < 0 )
  {
    if ( v62 )
      AccessStateFromSubjectContext = 0;
    goto LABEL_59;
  }
  CmpLockRegistry(v44, v43, v45, v9);
  v49 = *((_QWORD *)Object + 1);
  if ( *(_WORD *)(v49 + 66) )
  {
    if ( v62 )
      AccessStateFromSubjectContext = 0;
    CmpUnlockRegistry(v49, v46, v47, v48);
    goto LABEL_59;
  }
  CmpUnlockRegistry(v49, v46, v47, v48);
  v50 = v72;
  if ( v10 )
  {
    *v72 = Object;
    Object = 0LL;
    AccessStateFromSubjectContext = 0;
  }
  else
  {
    *v40 = Object;
    Object = 0LL;
    AccessStateFromSubjectContext = 0;
    *v50 = v6;
  }
LABEL_62:
  SepDeleteAccessState((__int64)v85);
  SeReleaseSubjectContext(&v85[1]);
LABEL_63:
  if ( v65 )
    CmpDetachFromRegistryProcess(&ApcState);
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v19 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v19[143] + 284LL));
      if ( v68[1] == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v14 = v67;
    }
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v14[143] + 284LL));
      if ( v67 == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v7 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v7[1].Affinity.StaticBitmap[5]);
  v51 = v7[1].Affinity.StaticBitmap[5];
  v8 = v68[1];
  if ( (v51 ^ (unsigned __int64)v68[1]) >= 0xF )
  {
LABEL_76:
    ObfDereferenceObjectWithTag(v8, 0x75536553u);
  }
  else
  {
    while ( 1 )
    {
      v52 = v51;
      v51 = _InterlockedCompareExchange64((volatile signed __int64 *)&v7[1].Affinity.StaticBitmap[5], v51 + 1, v51);
      if ( v52 == v51 )
        break;
      v8 = v68[1];
      if ( (v51 ^ (unsigned __int64)v68[1]) >= 0xF )
        goto LABEL_76;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)v68[1] - 48, 0, 1u, 0x75536553u);
  }
  if ( v67 )
    ObfDereferenceObjectWithTag(v67, 0x75536553u);
LABEL_82:
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( *((_QWORD *)&v83[5] + 1) )
  {
    CmpLockRegistry(Buffer, v7, v8, v9);
    CmpDereferenceKeyControlBlock(*((ULONG_PTR *)&v83[5] + 1));
    CmpUnlockRegistry(v55, v54, v56, v57);
  }
  v58 = *(_QWORD **)&v83[9];
  v59 = **(_QWORD **)&v83[9];
  if ( *(_OWORD **)(*(_QWORD *)&v83[9] + 8LL) != &v83[9] || *(_QWORD *)(v59 + 8) != *(_QWORD *)&v83[9] )
    goto LABEL_93;
  *(_QWORD *)&v83[9] = **(_QWORD **)&v83[9];
  *(_QWORD *)(v59 + 8) = &v83[9];
  if ( v58 != (_QWORD *)&v83[9] )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(v58);
      v58 = *(_QWORD **)&v83[9];
      v60 = **(_QWORD **)&v83[9];
      if ( *(_OWORD **)(*(_QWORD *)&v83[9] + 8LL) != &v83[9] || *(_QWORD *)(v60 + 8) != *(_QWORD *)&v83[9] )
        break;
      *(_QWORD *)&v83[9] = **(_QWORD **)&v83[9];
      *(_QWORD *)(v60 + 8) = &v83[9];
      if ( v58 == (_QWORD *)&v83[9] )
        return (unsigned int)AccessStateFromSubjectContext;
    }
LABEL_93:
    __fastfail(3u);
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
