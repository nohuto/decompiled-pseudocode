/*
 * XREFs of ObOpenObjectByNameEx @ 0x1406E7F70
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140555EE0 (IoRevokeHandlesForProcess.c)
 *     CmCreateKey @ 0x1406BBA60 (CmCreateKey.c)
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 *     NtQueryFullAttributesFile @ 0x14070BD80 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14070C010 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1407563E0 (NtOpenSymbolicLinkObject.c)
 *     IoQueryInformationByName @ 0x14076D210 (IoQueryInformationByName.c)
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 *     NtDeleteFile @ 0x140871940 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x1409449B8 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SeClearLearningModeObjectInformation @ 0x140265EF0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140266820 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsDereferenceSiloContext @ 0x1402FEB00 (PsDereferenceSiloContext.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B5FAC (SeSetLearningModeObjectInformation.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406E9E60 (ObpCaptureObjectCreateInformation.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x140785CA4 (SeObjectCreateSaclAccessBits.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v14; // rbx
  int *v15; // r14
  int Information; // edi
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r15
  _QWORD *v19; // rdi
  ULONG_PTR v20; // rax
  signed __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r14d
  _SLIST_ENTRY *Next; // rcx
  _BYTE *v25; // rdi
  PVOID *p_Next; // rdi
  unsigned int v27; // r15d
  PVOID v28; // rcx
  char *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  struct _KPRCB *v32; // r8
  struct _SLIST_ENTRY *v33; // rdx
  _GENERAL_LOOKASIDE *v34; // rcx
  int v35; // edi
  char *v36; // rdi
  _KPROCESS *v37; // rdx
  signed __int64 v38; // rax
  signed __int64 v39; // rtt
  void *v40; // rcx
  _SLIST_ENTRY *v41; // rcx
  struct _SLIST_ENTRY *v42; // r8
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  struct _KPRCB *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  char *v48; // r15
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v54; // rax
  struct _KPRCB *v55; // rax
  _GENERAL_LOOKASIDE *v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rax
  int v59; // [rsp+38h] [rbp-B9h]
  PVOID Object; // [rsp+78h] [rbp-79h] BYREF
  __int64 v61; // [rsp+80h] [rbp-71h] BYREF
  char *v62; // [rsp+88h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-61h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+98h] [rbp-59h] BYREF
  _QWORD *v65; // [rsp+A8h] [rbp-49h] BYREF
  __int128 v66; // [rsp+B0h] [rbp-41h]
  __int64 v67; // [rsp+C0h] [rbp-31h]
  struct _KTHREAD *v68; // [rsp+C8h] [rbp-29h]
  __int128 v69; // [rsp+D0h] [rbp-21h] BYREF
  __int128 v70; // [rsp+E0h] [rbp-11h]
  __int128 v71; // [rsp+F0h] [rbp-1h]
  __int64 v72; // [rsp+100h] [rbp+Fh]
  __int64 v73; // [rsp+138h] [rbp+47h] BYREF

  v8 = a1;
  v72 = 0LL;
  Object = 0LL;
  LODWORD(v73) = 0;
  v61 = 0LL;
  *a8 = 0LL;
  v62 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v14 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v14
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_4:
    LODWORD(v14->Next) = CurrentPrcb->Number;
  }
  if ( !v14 )
    return 3221225626LL;
  v15 = (int *)&v14[10];
  Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)ListEntry, (__int64)&v14[10], 1);
  if ( Information < 0 )
  {
    v55 = KeGetCurrentPrcb();
    v56 = v55->PPLookasideList[8].P;
    ++v56->TotalFrees;
    if ( LOWORD(v56->ListHead.Alignment) < v56->Depth
      || (++v56->FreeMisses,
          v56 = v55->PPLookasideList[8].L,
          ++v56->TotalFrees,
          LOWORD(v56->ListHead.Alignment) < v56->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v56->ListHead, v14);
    }
    else
    {
      ++v56->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v56->FreeEx)(v14);
    }
    return (unsigned int)Information;
  }
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    v66 = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v67 = *(_QWORD *)(Process + 1088);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v68 = KeGetCurrentThread();
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      --v68->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v19 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v19, 0x75536553u);
        LODWORD(v66) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v19 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)v68);
    }
    else
    {
      v19 = 0LL;
    }
    v65 = v19;
    v20 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    *((_QWORD *)&v66 + 1) = v20;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
        if ( *((_QWORD *)&v66 + 1) == SepTokenLeakToken )
          __debugbreak();
        v19 = v65;
      }
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19[143] + 284LL));
        if ( v65 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v23 = SepCreateAccessStateFromSubjectContext(&v65, v14, &v14[14].Next, a5, (_DWORD *)(a2 + 76));
    if ( v23 < 0 )
      goto LABEL_35;
    a4 = (__int64)v14;
    v15 = (int *)&v14[10];
  }
  Next = v14[12].Next;
  if ( Next )
    *(_QWORD *)(a4 + 64) = Next;
  v25 = *(_BYTE **)(a4 + 64);
  if ( !v25 )
    goto LABEL_16;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
  {
    if ( (v25[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v25);
LABEL_16:
    p_Next = (PVOID *)&v14[28].Next;
    v27 = 0;
    v23 = ObpLookupObjectName(
            *((_QWORD *)&v14[10].Next + 1),
            (int)ListEntry,
            *v15,
            a2,
            a3,
            a6,
            *((_QWORD *)&v14[12].Next + 1),
            0LL,
            a7,
            a4,
            (__int64)&v14[28],
            (__int64)&v73,
            (__int64)&Object);
    if ( v23 >= 0 )
    {
      if ( *p_Next )
      {
        v48 = (char *)Object - 48;
        v62 = (char *)Object - 48;
        ObfReferenceObject(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v48[-ObpInfoMaskToOffset[v48[26] & 3] + 24]);
        v27 = 0;
      }
      if ( *p_Next )
      {
        ExReleasePushLockEx((__int64 *)*p_Next + 37, 0LL);
        if ( BYTE6(v14[29].Next) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*p_Next, 0x554C624Fu);
          BYTE6(v14[29].Next) = 0;
        }
        *p_Next = 0LL;
        BYTE5(v14[29].Next) = 0;
        KeLeaveCriticalRegion();
      }
      v28 = Object;
      v29 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v30 = *((_QWORD *)v29 + 4);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 32);
          if ( v31 )
          {
            LOBYTE(v21) = 1;
            SeReleaseSecurityDescriptor(v31, *(unsigned __int8 *)(v30 + 16), v21, v22);
            *(_QWORD *)(*((_QWORD *)v29 + 4) + 32LL) = 0LL;
          }
          v32 = KeGetCurrentPrcb();
          v33 = (struct _SLIST_ENTRY *)*((_QWORD *)v29 + 4);
          v34 = v32->PPLookasideList[4].P;
          ++v34->TotalFrees;
          if ( LOWORD(v34->ListHead.Alignment) < v34->Depth
            || (++v34->FreeMisses,
                v34 = v32->PPLookasideList[4].L,
                ++v34->TotalFrees,
                LOWORD(v34->ListHead.Alignment) < v34->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v34->ListHead, v33);
          }
          else
          {
            ++v34->FreeMisses;
            ((void (__fastcall *)(struct _SLIST_ENTRY *))v34->FreeEx)(v33);
          }
          *((_QWORD *)v29 + 4) = 0LL;
          v28 = Object;
        }
      }
      else
      {
        v27 = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v29[24] ^ (unsigned __int64)BYTE1(v29)]
                      + 72) & (__int64)v14[10].Next) != 0 )
      {
        PsDereferenceSiloContext(v28);
        v23 = -1073741811;
      }
      else
      {
        if ( SepLearningModeTokenCount )
        {
          *((_QWORD *)&v70 + 1) = ListEntry;
          *(_QWORD *)&v70 = a2 + 16;
          *(_QWORD *)&v71 = *((_QWORD *)&v14[10].Next + 1);
          SeSetLearningModeObjectInformation((__int64)&v69);
          v28 = Object;
        }
        if ( ObpTraceFlags )
        {
          v57 = (__int64)v28 - 48;
          ObpPushStackInfo((__int64)v28 - 48, 0, 1u, 0x746C6644u);
          ObpPushStackInfo(v57, 1, 1u, 0x6E48624Fu);
          v28 = Object;
        }
        LOBYTE(v59) = a3;
        v35 = ObpCreateHandle(v27, v28, 0LL, a4, 0, v14[10].Next, v59, 0LL, v73, 0LL, &v61);
        if ( v35 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          v23 = v35;
        }
        else
        {
          *a8 = v61;
        }
      }
      v36 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v62[-ObpInfoMaskToOffset[v62[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v36);
        ObfDereferenceObject(v36 + 48);
      }
    }
    goto LABEL_35;
  }
  v23 = -1073741703;
LABEL_35:
  if ( (PSLIST_ENTRY)a4 == v14 )
  {
    SepDeleteAccessState(a4);
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      v58 = *(_QWORD *)(a4 + 48);
      if ( v58 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v58 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
          __debugbreak();
      }
      v54 = *(_QWORD *)(a4 + 32);
      if ( v54 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v54 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
          __debugbreak();
      }
    }
    v21 = *(_QWORD *)(a4 + 48);
    v37 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v37[1].Affinity.StaticBitmap[5]);
    v38 = v37[1].Affinity.StaticBitmap[5];
    if ( (v21 ^ (unsigned __int64)v38) >= 0xF )
    {
LABEL_80:
      ObfDereferenceObjectWithTag((PVOID)v21, 0x75536553u);
    }
    else
    {
      while ( 1 )
      {
        v39 = v38;
        v38 = _InterlockedCompareExchange64((volatile signed __int64 *)&v37[1].Affinity.StaticBitmap[5], v38 + 1, v38);
        if ( v39 == v38 )
          break;
        if ( (v21 ^ (unsigned __int64)v38) >= 0xF )
          goto LABEL_80;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v21 - 48, 0, 1u, 0x75536553u);
    }
    v40 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v40 )
      ObfDereferenceObjectWithTag(v40, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v41 = v14[12].Next;
  if ( v41 )
  {
    LOBYTE(v21) = 1;
    SeReleaseSecurityDescriptor(v41, LOBYTE(v14[11].Next), v21, v22);
    v14[12].Next = 0LL;
  }
  v42 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->PPLookasideList[5].P;
      ++v44->TotalFrees;
      if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
        || (++v44->FreeMisses,
            v44 = v43->PPLookasideList[5].L,
            ++v44->TotalFrees,
            LOWORD(v44->ListHead.Alignment) < v44->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v44->ListHead, v42);
      }
      else
      {
        ++v44->FreeMisses;
        ((void (__fastcall *)(struct _SLIST_ENTRY *))v44->FreeEx)(v42);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  SeClearLearningModeObjectInformation();
  v45 = KeGetCurrentPrcb();
  v46 = v45->PPLookasideList[8].P;
  ++v46->TotalFrees;
  if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
    || (++v46->FreeMisses,
        v46 = v45->PPLookasideList[8].L,
        ++v46->TotalFrees,
        LOWORD(v46->ListHead.Alignment) < v46->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v46->ListHead, v14);
  }
  else
  {
    ++v46->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v46->FreeEx)(v14);
  }
  return (unsigned int)v23;
}
