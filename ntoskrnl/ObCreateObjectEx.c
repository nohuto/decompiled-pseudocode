/*
 * XREFs of ObCreateObjectEx @ 0x1407D1090
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068A160 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14068A750 (NtCreateTimer2.c)
 *     EtwpAddUmRegEntry @ 0x140695184 (EtwpAddUmRegEntry.c)
 *     WmipCreateGuidObject @ 0x14069AA20 (WmipCreateGuidObject.c)
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406B5020 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateJobObject @ 0x1406F7BA0 (NtCreateJobObject.c)
 *     ObCreateObject @ 0x140709D30 (ObCreateObject.c)
 *     AlpcpCreatePort @ 0x1407137E0 (AlpcpCreatePort.c)
 *     NtCreateIoCompletion @ 0x140729910 (NtCreateIoCompletion.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140735A88 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PsCreateSiloContext @ 0x140738810 (PsCreateSiloContext.c)
 *     ObpCreateDirectoryObject @ 0x14073DED0 (ObpCreateDirectoryObject.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     ObCreateSymbolicLink @ 0x140740FE8 (ObCreateSymbolicLink.c)
 *     NtCreatePrivateNamespace @ 0x140741A50 (NtCreatePrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x140748BFC (EtwpRealtimeConnect.c)
 *     MiSessionObjectCreate @ 0x140757A78 (MiSessionObjectCreate.c)
 *     NtCreateMutant @ 0x140761E00 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x140768EF0 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x140777040 (NtCreateTimer.c)
 *     NtCreateRegistryTransaction @ 0x1407837C0 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140789490 (NtAllocateReserveObject.c)
 *     EtwpCreateUmReplyObject @ 0x14078BE14 (EtwpCreateUmReplyObject.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 *     MiFinishCreateSection @ 0x1407D0800 (MiFinishCreateSection.c)
 *     NtCreateEvent @ 0x1407D0E20 (NtCreateEvent.c)
 *     NtCreateSemaphore @ 0x1407D0F50 (NtCreateSemaphore.c)
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 *     PspCreateActivityReference @ 0x1407FC704 (PspCreateActivityReference.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140821840 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140822570 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x14084B6A0 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x14084F34C (PopEtEnergyTrackerCreate.c)
 *     PsCreateCpuPartition @ 0x140853FE4 (PsCreateCpuPartition.c)
 *     NtCreateDebugObject @ 0x140935540 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140944220 (IoCreateController.c)
 *     NtCreateIoRing @ 0x140947140 (NtCreateIoRing.c)
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1409A901C (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x1409AD160 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409AD370 (NtCreateThreadStateChange.c)
 *     EtwpRegisterPrivateSession @ 0x1409E9A6C (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140A01038 (ExpProfileCreate.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A1628C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x140699240 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406E9E60 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x1407BA8D0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ObpRegisterObject @ 0x14097A3B4 (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        char a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v16; // rbx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  __int64 v21; // rbx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v29; // rdx
  _GENERAL_LOOKASIDE *v30; // rcx
  struct _KPRCB *v31; // rax
  _GENERAL_LOOKASIDE *v32; // r8
  _BYTE *v33; // [rsp+30h] [rbp-48h]
  __int128 v34; // [rsp+40h] [rbp-38h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  a5 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v34 = 0LL;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v16
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_2:
    LODWORD(v16->Next) = CurrentPrcb->Number;
  }
  if ( !v16 )
    return 3221225626LL;
  v17 = ObpCaptureObjectCreateInformation(a1, a4, a3, &v34, (__int64)v16, 0);
  if ( v17 >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      v20 = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v18 = a7;
      if ( !a7 )
        v18 = a2[26];
      v19 = a8;
      if ( !a8 )
        v19 = a2[27];
      HIDWORD(v16[1].Next) = v18;
      v33 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v19;
      v20 = ObpAllocateObject(v16, a4, (__int64)a2, &v34, a6, &a5, v33);
      if ( v20 >= 0 )
      {
        v21 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v21, 1, 1u, 0x746C6644u);
        }
        *a9 = v21 + 48;
        return (unsigned int)v20;
      }
    }
    else
    {
      v20 = -1073741727;
    }
    if ( *((_QWORD *)&v34 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v34);
    Next = v16[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v16[1].Next, 1);
      v16[2].Next = 0LL;
    }
    v29 = KeGetCurrentPrcb();
    v30 = v29->PPLookasideList[4].P;
    ++v30->TotalFrees;
    if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
      || (++v30->FreeMisses,
          v30 = v29->PPLookasideList[4].L,
          ++v30->TotalFrees,
          LOWORD(v30->ListHead.Alignment) < v30->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v30->ListHead, v16);
    }
    else
    {
      ++v30->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v30->FreeEx)(v16);
    }
    return (unsigned int)v20;
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
  return (unsigned int)v17;
}
