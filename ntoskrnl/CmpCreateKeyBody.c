/*
 * XREFs of CmpCreateKeyBody @ 0x1407BA4F0
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140738F48 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140204F00 (PsGetCurrentThreadProcessId.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x140699240 (ObpFreeObjectNameBuffer.c)
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     CmpTransReferenceTransaction @ 0x1406B5C38 (CmpTransReferenceTransaction.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406B6158 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406E9E60 (ObpCaptureObjectCreateInformation.c)
 *     CmpRecordParseFailure @ 0x140774724 (CmpRecordParseFailure.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     ObpAllocateObject @ 0x1407BA8D0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ObpRegisterObject @ 0x14097A3B4 (ObpRegisterObject.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 **a7,
        bool *a8)
{
  signed __int64 v11; // rax
  POBJECT_TYPE *v12; // rbp
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v15; // rbx
  int Object; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rbx
  __int64 *v21; // rbx
  int v22; // eax
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v28; // r14
  __int64 *v29; // rdi
  int i; // r9d
  unsigned int v31; // r8d
  __int64 v32; // rax
  __int64 **v33; // rcx
  bool v34; // dl
  char v35; // bl
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  __int16 v45; // [rsp+40h] [rbp-68h] BYREF
  __int64 v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+50h] [rbp-58h] BYREF
  __int64 v48; // [rsp+58h] [rbp-50h]
  __int128 v49; // [rsp+60h] [rbp-48h] BYREF

  v46 = 0LL;
  v48 = 0LL;
  v11 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v11 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v11 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v46 = *(_QWORD *)(a4 + 56);
      v22 = CmpTransReferenceTransaction(v46);
      Object = v22;
      if ( v22 < 0 )
      {
        CmpRecordParseFailure(a3, 131840, v22);
        goto LABEL_52;
      }
    }
    else
    {
      v48 = a4 + 88;
    }
  }
  v12 = CmKeyObjectType;
  v47 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = 1;
  v49 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v15 )
    goto LABEL_5;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v15
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_5:
    LODWORD(v15->Next) = CurrentPrcb->Number;
  }
  if ( !v15 )
  {
    Object = -1073741670;
LABEL_55:
    CmpRecordParseFailure(a3, 132096, Object);
    v28 = v46;
    v35 = 1;
    goto LABEL_38;
  }
  Object = ObpCaptureObjectCreateInformation(a2, a2, 0LL, &v49, (__int64)v15, 0);
  if ( Object < 0 )
  {
    v40 = KeGetCurrentPrcb();
    v41 = v40->PPLookasideList[4].P;
    ++v41->TotalFrees;
    if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
      || (++v41->FreeMisses,
          v41 = v40->PPLookasideList[4].L,
          ++v41->TotalFrees,
          LOWORD(v41->ListHead.Alignment) < v41->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v41->ListHead, v15);
    }
    else
    {
      ++v41->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v41->FreeEx)(v15);
    }
    goto LABEL_55;
  }
  if ( ((__int64)v15->Next & (_DWORD)v12[9]) != 0 )
  {
    Object = -1073741811;
    goto LABEL_63;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Object = -1073741727;
    goto LABEL_63;
  }
  v19 = *((_DWORD *)v12 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v12 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v19;
  Object = ObpAllocateObject((_DWORD)v15, a2, (_DWORD)v12, (unsigned int)&v49, 112, (__int64)&v47, (__int64)&v45);
  if ( Object < 0 )
  {
LABEL_63:
    if ( *((_QWORD *)&v49 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v49);
    Next = v15[2].Next;
    if ( Next )
    {
      LOBYTE(v17) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v15[1].Next), v17, v18);
      v15[2].Next = 0LL;
    }
    v43 = KeGetCurrentPrcb();
    v44 = v43->PPLookasideList[4].P;
    ++v44->TotalFrees;
    if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
      || (++v44->FreeMisses,
          v44 = v43->PPLookasideList[4].L,
          ++v44->TotalFrees,
          LOWORD(v44->ListHead.Alignment) < v44->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v44->ListHead, v15);
    }
    else
    {
      ++v44->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v44->FreeEx)(v15);
    }
    goto LABEL_55;
  }
  v20 = v47;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v47);
    ObpPushStackInfo(v20, 1, 1u, 0x746C6644u);
  }
  v21 = (__int64 *)(v20 + 48);
  memset(v21, 0, 0x70uLL);
  *((_WORD *)v21 + 25) = *(_WORD *)(a3 + 20);
  v21[1] = BugCheckParameter2;
  v21[3] = PsGetCurrentThreadProcessId();
  *((_WORD *)v21 + 2) = 0;
  *((_DWORD *)v21 + 24) = -1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v39 = *(int *)(BugCheckParameter2 + 96);
    *(_DWORD *)v21 = v39;
    *(_QWORD *)(a3 + 56) = v39;
  }
  else
  {
    *(_DWORD *)v21 = 1803104306;
  }
  v28 = v46;
  if ( a4 )
  {
    v38 = v48;
    v21[7] = v46;
    v28 = 0LL;
    v21[8] = v38;
  }
  v21[10] = (__int64)(v21 + 9);
  v21[9] = (__int64)(v21 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v21 + 24) |= 0x10u;
  if ( (a5 & 2) == 0 || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
LABEL_37:
    v34 = (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0;
    *a7 = v21;
    v35 = 0;
    Object = 0;
    *a8 = v34;
    goto LABEL_38;
  }
  v29 = v21 + 4;
  if ( (a5 & 1) != 0 )
    goto LABEL_44;
  for ( i = 0; ; i = 2 )
  {
    v21[5] = (__int64)(v21 + 4);
    v31 = 0;
    *v29 = (__int64)v29;
    do
    {
      if ( !_InterlockedCompareExchange64(
              (volatile signed __int64 *)(v21[1] + 8LL * v31 + 136),
              (signed __int64)v21,
              0LL) )
        goto LABEL_36;
      ++v31;
    }
    while ( v31 < 4 );
    if ( i )
    {
      v32 = v21[1] + 120;
      v33 = *(__int64 ***)(v21[1] + 128);
      if ( *v33 != (__int64 *)v32 )
        __fastfail(3u);
      *v29 = v32;
      v21[5] = (__int64)v33;
      *v33 = v29;
      *(_QWORD *)(v32 + 8) = v29;
LABEL_36:
      *((_WORD *)v21 + 24) |= 0x40u;
      goto LABEL_37;
    }
    v37 = v21[1];
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 48), 1LL, 17LL) == 17 )
    {
      *(_QWORD *)(v37 + 56) = KeGetCurrentThread();
      continue;
    }
    CmpUnlockKcb(v21[1]);
    CmpLockKcbExclusive(v21[1]);
    if ( (*(_DWORD *)(v21[1] + 8) & 0x20000) != 0 || CmpIsKeyStackDeleted(a6) )
      break;
LABEL_44:
    ;
  }
  Object = -1073741444;
  CmpRecordParseFailure(a3, 132352, -1073741444);
  v35 = 1;
LABEL_38:
  if ( v28 )
    ObfDereferenceObject((PVOID)(v28 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( v35 )
LABEL_52:
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
  return (unsigned int)Object;
}
