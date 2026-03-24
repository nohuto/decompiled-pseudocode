/*
 * XREFs of ObCreateObjectEx @ 0x140651EA0
 * Callers:
 *     AlpcpCreatePort @ 0x1405E0F24 (AlpcpCreatePort.c)
 *     EtwpAddUmRegEntry @ 0x1405EAD90 (EtwpAddUmRegEntry.c)
 *     NtCreateEvent @ 0x140651360 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x140651490 (SepDuplicateToken.c)
 *     NtCreateSemaphore @ 0x1406526A0 (NtCreateSemaphore.c)
 *     MiFinishCreateSection @ 0x1406532B0 (MiFinishCreateSection.c)
 *     PsCreateSiloContext @ 0x140660F90 (PsCreateSiloContext.c)
 *     NtCreateWaitCompletionPacket @ 0x1406783D0 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x14068051C (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406806F0 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x1406868E0 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14068F21C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406962C0 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x14069B8B8 (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x1406A0050 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x1406A0E10 (NtCreateRegistryTransaction.c)
 *     WmipCreateGuidObject @ 0x1406B8578 (WmipCreateGuidObject.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     NtCreateTimer @ 0x1406C5B20 (NtCreateTimer.c)
 *     PopCreatePowerRequestObject @ 0x1406F5E38 (PopCreatePowerRequestObject.c)
 *     NtCreateTimer2 @ 0x140702200 (NtCreateTimer2.c)
 *     ObCreateObject @ 0x1407023B0 (ObCreateObject.c)
 *     NtCreateMutant @ 0x1407114E0 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x140718720 (NtCreatePrivateNamespace.c)
 *     IoCreateDevice @ 0x140719130 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140719B60 (IoCreateStreamFileObjectEx2.c)
 *     PspCreateActivityReference @ 0x1407317E8 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1407640AC (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x140786384 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1407A5330 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3E68 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407C59D0 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CB968 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407CC1D4 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE5C (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x140885BD0 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140893950 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FD57C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140905488 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14064C950 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406CF200 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x1406DA108 (ObpFreeObjectNameBuffer.c)
 *     ObpRegisterObject @ 0x1408DEE1C (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        char *a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int Information; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  char *v23; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  struct _KPRCB *v33; // rax
  _GENERAL_LOOKASIDE *v34; // r8
  _BYTE *v35; // [rsp+30h] [rbp-48h]
  __int128 v36; // [rsp+40h] [rbp-38h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  a5 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v36 = 0LL;
  ++P->TotalAllocates;
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
        return 3221225626LL;
    }
  }
  LODWORD(v16->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)&v36, (__int64)v16, 0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      v22 = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v20 = a7;
      if ( !a7 )
        v20 = a2[26];
      v21 = a8;
      if ( !a8 )
        v21 = a2[27];
      HIDWORD(v16[1].Next) = v20;
      v35 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v21;
      v22 = ObpAllocateObject((int *)v16, a4, (__int64)a2, &v36, a6, &a5, v35);
      if ( v22 >= 0 )
      {
        v23 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo((__int64)v23, 1, 1u, 0x746C6644u);
        }
        *a9 = v23 + 48;
        return (unsigned int)v22;
      }
    }
    else
    {
      v22 = -1073741727;
    }
    if ( *((_QWORD *)&v36 + 1) )
      ObpFreeObjectNameBuffer(&v36);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v18, v19);
      v16[2].Next = 0LL;
    }
    v31 = KeGetCurrentPrcb();
    v32 = v31->PPLookasideList[4].P;
    ++v32->TotalFrees;
    if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
      || (++v32->FreeMisses,
          v32 = v31->PPLookasideList[4].L,
          ++v32->TotalFrees,
          LOWORD(v32->ListHead.Alignment) < v32->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v32->ListHead, v16);
    }
    else
    {
      ++v32->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v32->FreeEx)(v16);
    }
    return (unsigned int)v22;
  }
  v33 = KeGetCurrentPrcb();
  v34 = v33->PPLookasideList[4].P;
  ++v34->TotalFrees;
  if ( LOWORD(v34->ListHead.Alignment) < v34->Depth
    || (++v34->FreeMisses,
        v34 = v33->PPLookasideList[4].L,
        ++v34->TotalFrees,
        LOWORD(v34->ListHead.Alignment) < v34->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v34->ListHead, v16);
  }
  else
  {
    ++v34->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v34->FreeEx)(v16);
  }
  return (unsigned int)Information;
}
