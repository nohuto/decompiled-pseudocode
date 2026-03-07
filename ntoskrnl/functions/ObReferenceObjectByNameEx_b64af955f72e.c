__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v12; // rbx
  char v13; // r14
  int *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v31; // [rsp+70h] [rbp-41h] BYREF
  int v32[4]; // [rsp+78h] [rbp-39h] BYREF
  __int128 v33; // [rsp+88h] [rbp-29h] BYREF
  __int128 v34; // [rsp+98h] [rbp-19h]
  __int128 v35; // [rsp+A8h] [rbp-9h]
  __int64 v36; // [rsp+B8h] [rbp+7h]
  NTSTATUS Information; // [rsp+100h] [rbp+4Fh] BYREF
  int v38; // [rsp+110h] [rbp+5Fh]

  v38 = a3;
  v31 = 0LL;
  v36 = 0LL;
  *(_OWORD *)v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v12 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v12 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v12 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v12
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v12 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_4:
    LODWORD(v12->Next) = CurrentPrcb->Number;
  }
  if ( !v12 )
    return 3221225626LL;
  v13 = a5;
  v14 = (int *)&v12[10];
  Information = ObpCaptureObjectCreateInformation(a5, a5, a1, v32, (__int64)&v12[10], 1u);
  if ( Information >= 0 )
  {
    if ( !a2 )
    {
      Information = SeCreateAccessState((int)v12, (int)v12 + 224, v38, a4 + 76);
      if ( Information < 0 )
      {
LABEL_20:
        if ( a2 == (struct _SECURITY_SUBJECT_CONTEXT *)v12 )
        {
          SepDeleteAccessState((__int64)a2);
          SeReleaseSubjectContext(a2 + 1);
        }
        Next = v12[12].Next;
        if ( Next )
        {
          LOBYTE(v15) = v12[11].Next;
          LOBYTE(v16) = 1;
          SeReleaseSecurityDescriptor(Next, v15, v16, v17);
          v12[12].Next = 0LL;
        }
        if ( *(_QWORD *)&v32[2] )
          ObpFreeObjectNameBuffer((__int64)v32);
        goto LABEL_26;
      }
      a2 = (struct _SECURITY_SUBJECT_CONTEXT *)v12;
    }
    Information = ObpAdjustAccessMask(a2);
    if ( Information >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      Information = ObpLookupObjectName(
                      *((_QWORD *)&v12[10].Next + 1),
                      (__int64)v32,
                      *v14,
                      a4,
                      v13,
                      a6,
                      0LL,
                      0LL,
                      (__int64)CurrentSilo,
                      (__int64)a2,
                      &v12[28].Next,
                      0LL,
                      &v31);
      if ( Information >= 0 )
      {
        if ( v12[28].Next )
          ObpUnlockDirectory((__int64)&v12[28]);
        v19 = v31;
        v20 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v31 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v31 - 48) >> 8);
        v21 = ObTypeIndexTable[v20];
        if ( (*(_DWORD *)(v21 + 72) & *v14) != 0 )
        {
          PsDereferenceSiloContext((void *)v31);
          Information = -1073741811;
        }
        else
        {
          if ( SepLearningModeTokenCount )
          {
            *(_QWORD *)&v34 = v21 + 16;
            *((_QWORD *)&v34 + 1) = v32;
            *(_QWORD *)&v35 = *((_QWORD *)&v12[10].Next + 1);
            SeSetLearningModeObjectInformation((__int64)&v33);
            v19 = v31;
          }
          LOBYTE(v17) = v13;
          if ( ObpCheckObjectReference(v19, (__int64)a2, v20, v17, &Information) )
            *a7 = v31;
          else
            PsDereferenceSiloContext((void *)v31);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_20;
  }
LABEL_26:
  v23 = KeGetCurrentPrcb();
  v24 = v23->PPLookasideList[8].P;
  ++v24->TotalFrees;
  if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
    || (++v24->FreeMisses,
        v24 = v23->PPLookasideList[8].L,
        ++v24->TotalFrees,
        LOWORD(v24->ListHead.Alignment) < v24->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v24->ListHead, v12);
  }
  else
  {
    ++v24->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v12);
  }
  return (unsigned int)Information;
}
