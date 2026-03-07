__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9)
{
  struct _KPRCB *CurrentPrcb; // rsi
  POBJECT_TYPE *v10; // rdi
  char v12; // r14
  _GENERAL_LOOKASIDE *P; // rbp
  __int64 v14; // r15
  PSLIST_ENTRY v15; // rbx
  int Object; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rbx
  _DWORD *v21; // rbx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v27; // rcx
  __int64 v28; // r14
  int v29; // ecx
  _QWORD *v30; // rbx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 Silo; // rax
  struct _KPRCB *v36; // rdx
  _GENERAL_LOOKASIDE *v37; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  __int16 v41; // [rsp+40h] [rbp-88h] BYREF
  __int64 v42; // [rsp+48h] [rbp-80h] BYREF
  __int128 v43; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v44[3]; // [rsp+60h] [rbp-68h] BYREF
  int v45; // [rsp+78h] [rbp-50h]
  int v46; // [rsp+7Ch] [rbp-4Ch]
  __int128 v47; // [rsp+80h] [rbp-48h]
  char v50; // [rsp+E8h] [rbp+20h]

  v50 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v41 = 0;
  v12 = a4;
  v44[0] = 48LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v14 = a3;
  v46 = 0;
  v44[1] = 0LL;
  v45 = a4;
  ++P->TotalAllocates;
  v44[2] = 0LL;
  v47 = 0LL;
  LOBYTE(v41) = 1;
  v43 = 0LL;
  v42 = 0LL;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v15 )
    goto LABEL_2;
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
LABEL_2:
    LODWORD(v15->Next) = CurrentPrcb->Number;
  }
  if ( !v15 )
  {
    Object = -1073741670;
LABEL_72:
    if ( !a8 )
      *(_QWORD *)a1 = 0LL;
    return (unsigned int)Object;
  }
  Object = ObpCaptureObjectCreateInformation(0, a5, (__int64)v44, &v43, (__int64)v15, 0);
  if ( Object < 0 )
  {
    v36 = KeGetCurrentPrcb();
    v37 = v36->PPLookasideList[4].P;
    ++v37->TotalFrees;
    if ( LOWORD(v37->ListHead.Alignment) < v37->Depth
      || (++v37->FreeMisses,
          v37 = v36->PPLookasideList[4].L,
          ++v37->TotalFrees,
          LOWORD(v37->ListHead.Alignment) < v37->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v37->ListHead, v15);
    }
    else
    {
      ++v37->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v37->FreeEx)(v15);
    }
    goto LABEL_72;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    Object = -1073741811;
    goto LABEL_64;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Object = -1073741727;
    goto LABEL_64;
  }
  v19 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v19;
  Object = ObpAllocateObject((_DWORD)v15, a5, (_DWORD)v10, (unsigned int)&v43, 216, (__int64)&v42, (__int64)&v41);
  if ( Object < 0 )
  {
LABEL_64:
    if ( *((_QWORD *)&v43 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v43);
    Next = v15[2].Next;
    if ( Next )
    {
      LOBYTE(v17) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v15[1].Next), v17, v18);
      v15[2].Next = 0LL;
    }
    v39 = KeGetCurrentPrcb();
    v40 = v39->PPLookasideList[4].P;
    ++v40->TotalFrees;
    if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
      || (++v40->FreeMisses,
          v40 = v39->PPLookasideList[4].L,
          ++v40->TotalFrees,
          LOWORD(v40->ListHead.Alignment) < v40->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v40->ListHead, v15);
    }
    else
    {
      ++v40->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v15);
    }
    goto LABEL_72;
  }
  v20 = v42;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v42);
    ObpPushStackInfo(v20, 1, 1u, 0x746C6644u);
  }
  v21 = (_DWORD *)(v20 + 48);
  memset(v21, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v21 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v21 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v21 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v21 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v21 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v32 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v32 )
      *((_QWORD *)v21 + 26) = v32;
  }
  else
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0
      && PsIsHostSilo(*(_QWORD *)(a7 + 8))
      && ((v27 = *(_QWORD *)(a6 + 40)) == 0 || (Silo = IoGetSilo(v27), PsIsHostSilo(Silo))) )
    {
      v28 = a2;
    }
    else
    {
      v28 = a2;
      Object = IopAllocateFoExtensionsOnCreate((__int64)v21, a2, a6, a7, a9);
    }
    if ( Object >= 0 && a5 )
    {
      if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
        || (*(_DWORD *)(v28 + 48) & 0x40000) == 0
        && (v33 = *(unsigned int *)(v28 + 72), (_DWORD)v33 != 8)
        && ((unsigned int)v33 > 0x35 || (v34 = 0x20000100100008LL, !_bittest64(&v34, v33)))
        || (Object = IopRetrieveTransactionParameters(v28, a6, a9, (__int64)v21), Object >= 0) )
      {
        if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
          Object = IopCheckInitiatorHint((__int64)v21, *(_QWORD *)(a6 + 40));
      }
    }
    v12 = v50;
    v14 = a3;
  }
  *(_QWORD *)a1 = v21;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v29 = v21[20] | 2;
      v21[20] = v29;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v21[20] = v29 | 4;
    }
    if ( (v21[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v21 + 32), SynchronizationEvent, 0);
      v21[28] = 0;
      *((_QWORD *)v21 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(a6 + 64) & 8) != 0 )
      v21[20] |= 8u;
    if ( (*(_DWORD *)(a6 + 64) & 2) != 0 )
      v21[20] |= 0x10u;
    if ( (*(_DWORD *)(a6 + 64) & 4) != 0 )
      v21[20] |= 0x20u;
    if ( (*(_DWORD *)(a6 + 64) & 0x800) != 0 )
      v21[20] |= 0x100000u;
    if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      v21[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v21[20] |= 0x20000u;
  *v21 = 14155781;
  *((_QWORD *)v21 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v21 + 1) = v14;
  *((_QWORD *)v21 + 23) = 0LL;
  v30 = v21 + 48;
  v30[1] = v30;
  *v30 = v30;
  return (unsigned int)Object;
}
