/*
 * XREFs of ObCreateObjectEx @ 0x140730870
 * Callers:
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     NtCreateIoCompletion @ 0x1406B26D0 (NtCreateIoCompletion.c)
 *     ObCreateObject @ 0x1406B6350 (ObCreateObject.c)
 *     EtwpAddUmRegEntry @ 0x1406BFA94 (EtwpAddUmRegEntry.c)
 *     WmipCreateGuidObject @ 0x1406C50E0 (WmipCreateGuidObject.c)
 *     AlpcpCreatePort @ 0x140717C64 (AlpcpCreatePort.c)
 *     MiFinishCreateSection @ 0x140722DA0 (MiFinishCreateSection.c)
 *     NtCreateSemaphore @ 0x1407336E0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     NtCreateEvent @ 0x14075D290 (NtCreateEvent.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1407681F0 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14076B4E0 (IoCreateDevice.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A578 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PsCreateSiloContext @ 0x14077D1F0 (PsCreateSiloContext.c)
 *     EtwpCreateUmReplyObject @ 0x14077EFDC (EtwpCreateUmReplyObject.c)
 *     NtCreateWorkerFactory @ 0x1407860A0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140786690 (NtCreateTimer2.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     MiSessionObjectCreate @ 0x1407AA29C (MiSessionObjectCreate.c)
 *     NtCreateMutant @ 0x1407B3DC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x1407BAD10 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1407C6B20 (NtCreateTimer.c)
 *     NtCreatePrivateNamespace @ 0x1407C8E30 (NtCreatePrivateNamespace.c)
 *     NtCreateRegistryTransaction @ 0x1407D22C0 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x1407D7E40 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1407DC8B0 (ExCreateCallback.c)
 *     ObpCreateDirectoryObject @ 0x1407F1B90 (ObpCreateDirectoryObject.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     ObCreateSymbolicLink @ 0x1407F38E8 (ObCreateSymbolicLink.c)
 *     EtwpRealtimeConnect @ 0x1407F5B64 (EtwpRealtimeConnect.c)
 *     PspCreateActivityReference @ 0x1408013B4 (PspCreateActivityReference.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1408298B0 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x14082A5E0 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x14084EA50 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x14085278C (PopEtEnergyTrackerCreate.c)
 *     PsCreateCpuPartition @ 0x140858214 (PsCreateCpuPartition.c)
 *     NtCreateDebugObject @ 0x140938560 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140947240 (IoCreateController.c)
 *     NtCreateIoRing @ 0x14094A160 (NtCreateIoRing.c)
 *     TtmiCreateTerminal @ 0x1409AAE58 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1409AC09C (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x1409B01B0 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409B03C0 (NtCreateThreadStateChange.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC90C (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3C8C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140A03D28 (ExpProfileCreate.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18FDC (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1406C2FB0 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406EEFC0 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x14072FBB0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x1407378D0 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     ObpRegisterObject @ 0x14097D464 (ObpRegisterObject.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  __int64 v23; // rbx
  _GENERAL_LOOKASIDE *L; // rbp
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
  v17 = ObpCaptureObjectCreateInformation(a1, a4, a3, &v36, (__int64)v16, 0);
  if ( v17 >= 0 )
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
      v22 = ObpAllocateObject(v16, a4, (__int64)a2, &v36, a6, &a5, v35);
      if ( v22 >= 0 )
      {
        v23 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v23, 1, 1u, 0x746C6644u);
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
      ObpFreeObjectNameBuffer((__int64)&v36);
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
  return (unsigned int)v17;
}
