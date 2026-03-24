/*
 * XREFs of ObReferenceObjectByNameEx @ 0x1405DE69C
 * Callers:
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     AlpcpCreateClientPort @ 0x1405E054C (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 *     ObInitServerSilo @ 0x1407C9000 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x140868720 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868940 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E774 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     SeClearLearningModeObjectInformation @ 0x1403455C0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140345670 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140345940 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x140345990 (SeSetLearningModeObjectInformation.c)
 *     ObpReleaseLookupContext @ 0x140347AE0 (ObpReleaseLookupContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ObpAdjustAccessMask @ 0x1405DE9A0 (ObpAdjustAccessMask.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406CF200 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     ObpCheckObjectReference @ 0x1406D9CFC (ObpCheckObjectReference.c)
 *     ObpFreeObjectNameBuffer @ 0x1406DA108 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1406DA670 (SeCreateAccessState.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  int v10; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  int v13; // edx
  int v14; // ecx
  PSLIST_ENTRY v15; // rbx
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v21; // rdx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-31h] BYREF
  __int128 v32; // [rsp+80h] [rbp-29h] BYREF
  __int128 v33; // [rsp+90h] [rbp-19h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-9h]
  __int128 v35; // [rsp+B0h] [rbp+7h]
  __int64 v36; // [rsp+C0h] [rbp+17h]
  NTSTATUS Information; // [rsp+F8h] [rbp+4Fh] BYREF

  DmaAdapter = 0LL;
  v36 = 0LL;
  v10 = a1;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v15 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v15 )
        return 3221225626LL;
    }
  }
  v16 = a5;
  LOBYTE(v13) = a5;
  LOBYTE(v14) = a5;
  LODWORD(v15->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(v14, v13, v10, (unsigned int)&v32, (__int64)&v15[10], 1);
  if ( Information >= 0 )
  {
    if ( !a2 )
    {
      Information = SeCreateAccessState(v15, &v15[14], a3, a4 + 76);
      if ( Information < 0 )
      {
LABEL_14:
        if ( a2 == (struct _SECURITY_SUBJECT_CONTEXT *)v15 )
        {
          SepDeleteAccessState((__int64)a2);
          SeReleaseSubjectContext(a2 + 1);
        }
        Next = v15[12].Next;
        if ( Next )
        {
          LOBYTE(v17) = v15[11].Next;
          LOBYTE(v18) = 1;
          SeReleaseSecurityDescriptor(Next, v17, v18, v19);
          v15[12].Next = 0LL;
        }
        if ( *((_QWORD *)&v32 + 1) )
          ObpFreeObjectNameBuffer(&v32);
        goto LABEL_20;
      }
      a2 = (struct _SECURITY_SUBJECT_CONTEXT *)v15;
    }
    Information = ObpAdjustAccessMask(a2);
    if ( Information >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      Information = ObpLookupObjectName(
                      *((_QWORD *)&v15[10].Next + 1),
                      v16,
                      a6,
                      0LL,
                      0LL,
                      (__int64)CurrentSilo,
                      (__int64)a2,
                      (__int64)&v15[28],
                      0LL,
                      (__int64)&DmaAdapter);
      if ( Information >= 0 )
      {
        ObpReleaseLookupContext((__int64)&v15[28]);
        v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)];
        if ( (*(_DWORD *)(v21 + 72) & (__int64)v15[10].Next) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          Information = -1073741811;
        }
        else
        {
          *(_QWORD *)&v34 = v21 + 16;
          *((_QWORD *)&v34 + 1) = &v32;
          *(_QWORD *)&v35 = *((_QWORD *)&v15[10].Next + 1);
          SeSetLearningModeObjectInformation((__int64)&v33);
          if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)DmaAdapter, &Information) )
            *a7 = DmaAdapter;
          else
            HalPutDmaAdapter(DmaAdapter);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_14;
  }
LABEL_20:
  v23 = KeGetCurrentPrcb();
  v24 = v23->PPLookasideList[8].P;
  ++v24->TotalFrees;
  if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
    || (++v24->FreeMisses,
        v24 = v23->PPLookasideList[8].L,
        ++v24->TotalFrees,
        LOWORD(v24->ListHead.Alignment) < v24->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v24->ListHead, v15);
  }
  else
  {
    ++v24->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v15);
  }
  return (unsigned int)Information;
}
