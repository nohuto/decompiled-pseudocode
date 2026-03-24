/*
 * XREFs of IopAllocRealFileObject @ 0x140650820
 * Callers:
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 * Callees:
 *     IopCheckInitiatorHint @ 0x14025FB40 (IopCheckInitiatorHint.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     IoGetSilo @ 0x1403618F0 (IoGetSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14064C950 (ObpAllocateObject.c)
 *     IopRetrieveTransactionParameters @ 0x1406511B0 (IopRetrieveTransactionParameters.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406CF200 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x1406DA108 (ObpFreeObjectNameBuffer.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071F81C (IopAllocateFoExtensionsOnCreate.c)
 *     ObpRegisterObject @ 0x1408DEE1C (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned int a9)
{
  struct _KPRCB *CurrentPrcb; // r14
  POBJECT_TYPE *v10; // rbp
  char v12; // r13
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v14; // r12
  _DWORD *v15; // rbx
  PSLIST_ENTRY v16; // rsi
  unsigned int Number; // eax
  char v18; // r14
  int v19; // edx
  int Information; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  char *v24; // rbx
  int TransactionParameters; // esi
  __int64 v26; // rdi
  unsigned int v27; // r12d
  int v28; // ebp
  __int64 v29; // rcx
  __int64 v30; // rbp
  int v31; // ecx
  int v32; // eax
  _QWORD *v33; // rbx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 Silo; // rax
  int v39; // r9d
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v45; // rax
  _GENERAL_LOOKASIDE *v46; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v48; // rdx
  _GENERAL_LOOKASIDE *v49; // rcx
  char *v50; // [rsp+40h] [rbp-88h] BYREF
  __int128 v51; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v52[3]; // [rsp+58h] [rbp-70h] BYREF
  int v53; // [rsp+70h] [rbp-58h]
  int v54; // [rsp+74h] [rbp-54h]
  __int128 v55; // [rsp+78h] [rbp-50h]
  __int16 v58; // [rsp+E8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v52[0] = 48LL;
  v54 = 0;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v14 = a3;
  v52[1] = 0LL;
  v53 = a4;
  v15 = 0LL;
  v52[2] = 0LL;
  ++P->TotalAllocates;
  v58 = 1;
  v55 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v16 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v16 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v16 )
      {
        TransactionParameters = -1073741670;
LABEL_56:
        if ( !a8 )
          *(_QWORD *)a1 = 0LL;
        return (unsigned int)TransactionParameters;
      }
    }
  }
  Number = CurrentPrcb->Number;
  v18 = a5;
  v19 = a5;
  LODWORD(v16->Next) = Number;
  Information = ObpCaptureObjectCreateInformation(0, v19, (unsigned int)v52, (unsigned int)&v51, (__int64)v16, 0);
  if ( Information < 0 )
  {
    v45 = KeGetCurrentPrcb();
    v46 = v45->PPLookasideList[4].P;
    ++v46->TotalFrees;
    if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
      || (++v46->FreeMisses,
          v46 = v45->PPLookasideList[4].L,
          ++v46->TotalFrees,
          LOWORD(v46->ListHead.Alignment) < v46->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v46->ListHead, v16);
    }
    else
    {
      ++v46->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v46->FreeEx)(v16);
    }
    goto LABEL_9;
  }
  if ( ((__int64)v16->Next & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_65;
  }
  if ( ((__int64)v16->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Information = -1073741727;
    goto LABEL_65;
  }
  v23 = *((_DWORD *)v10 + 27);
  HIDWORD(v16[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v16[1].Next + 2) = v23;
  Information = ObpAllocateObject((int *)v16, v18, (__int64)v10, &v51, 216, &v50, &v58);
  if ( Information < 0 )
  {
LABEL_65:
    if ( *((_QWORD *)&v51 + 1) )
      ObpFreeObjectNameBuffer(&v51);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v21) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v21, v22);
      v16[2].Next = 0LL;
    }
    v48 = KeGetCurrentPrcb();
    v49 = v48->PPLookasideList[4].P;
    ++v49->TotalFrees;
    if ( LOWORD(v49->ListHead.Alignment) < v49->Depth
      || (++v49->FreeMisses,
          v49 = v48->PPLookasideList[4].L,
          ++v49->TotalFrees,
          LOWORD(v49->ListHead.Alignment) < v49->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v49->ListHead, v16);
    }
    else
    {
      ++v49->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v49->FreeEx)(v16);
    }
    goto LABEL_9;
  }
  v24 = v50;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v50);
    ObpPushStackInfo((__int64)v24, 1, 1u, 0x746C6644u);
  }
  v15 = v24 + 48;
LABEL_9:
  TransactionParameters = Information;
  if ( Information < 0 )
    goto LABEL_56;
  memset(v15, 0, 0xD8uLL);
  v26 = a6;
  if ( a8 )
  {
    *((_QWORD *)v15 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v15 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v15 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v15 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v15 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v35 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v35 )
      *((_QWORD *)v15 + 26) = v35;
  }
  else
  {
    v27 = a9;
    v28 = a7;
    if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0
      && PsIsHostSilo(*(_QWORD *)(a7 + 8))
      && ((v29 = *(_QWORD *)(v26 + 40)) == 0 || (Silo = IoGetSilo(v29), PsIsHostSilo(Silo))) )
    {
      v30 = a2;
    }
    else
    {
      v39 = v28;
      v30 = a2;
      TransactionParameters = IopAllocateFoExtensionsOnCreate((_DWORD)v15, a2, v26, v39, v27);
    }
    if ( TransactionParameters >= 0 )
    {
      if ( v18 )
      {
        if ( (*(_DWORD *)(v26 + 152) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(v30 + 48) & 0x40000) != 0
            || (v36 = *(unsigned int *)(v30 + 72), (unsigned int)v36 <= 0x35)
            && (v37 = 0x20000100100108LL, _bittest64(&v37, v36)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(v30, v26, v27, v15);
          }
        }
      }
      if ( TransactionParameters >= 0 && v18 && (*(_DWORD *)(v26 + 64) & 0x20000) != 0 )
        TransactionParameters = IopCheckInitiatorHint((__int64)v15, *(_QWORD *)(v26 + 40));
    }
    v14 = a3;
  }
  *(_QWORD *)a1 = v15;
  if ( !*(_BYTE *)(v26 + 138) && !*(_BYTE *)(v26 + 137) )
  {
    if ( (*(_DWORD *)(v26 + 64) & 0x30) != 0 )
    {
      v31 = v15[20] | 2;
      v15[20] = v31;
      if ( (*(_DWORD *)(v26 + 64) & 0x10) != 0 )
        v15[20] = v31 | 4;
    }
    if ( (v15[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v15 + 32), SynchronizationEvent, 0);
      v15[28] = 0;
      *((_QWORD *)v15 + 13) = 0LL;
    }
    v32 = *(_DWORD *)(v26 + 64);
    if ( (v32 & 8) != 0 )
    {
      v15[20] |= 8u;
      v32 = *(_DWORD *)(v26 + 64);
    }
    if ( (v32 & 2) != 0 )
    {
      v15[20] |= 0x10u;
      v32 = *(_DWORD *)(v26 + 64);
    }
    if ( (v32 & 4) != 0 )
    {
      v15[20] |= 0x20u;
      v32 = *(_DWORD *)(v26 + 64);
    }
    if ( (v32 & 0x800) != 0 )
    {
      v15[20] |= 0x100000u;
      v32 = *(_DWORD *)(v26 + 64);
    }
    if ( (v32 & 0x20000) != 0 )
      v15[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v15[20] |= 0x20000u;
  *v15 = 14155781;
  *((_QWORD *)v15 + 8) = *(_QWORD *)(v26 + 40);
  *((_QWORD *)v15 + 1) = v14;
  *((_QWORD *)v15 + 23) = 0LL;
  v33 = v15 + 48;
  v33[1] = v33;
  *v33 = v33;
  return (unsigned int)TransactionParameters;
}
