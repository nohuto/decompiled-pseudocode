/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002F24 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002ADFC (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C002AFC8 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002CEA8 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002CFA0 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C002D0EC (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002D950 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C002F7DC (RaidAdapterSetBootLunIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C003122C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0031430 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C0032E40 (RaidSetStorageAdapterProtocolSpecificProperty.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidBuildMdlForXrb @ 0x1C00065A4 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C000674C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0006B8C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0006C4C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000735C (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C00076A8 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000AF90 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C000BDA4 (RaidAllocateSrb.c)
 *     RaidPauseAdapterQueue @ 0x1C00143DC (RaidPauseAdapterQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D5BC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D620 (RaidAdapterPoFxIdleComponent.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032DC8 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C0033880 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C004E574 (StorSetIoGatewayEmptyEvent.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0059758 (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  __int64 v7; // r13
  int v10; // ebx
  __int64 v11; // rcx
  _WORD *v12; // r15
  __int64 v13; // r12
  _WORD *Srb; // rdi
  __int64 v15; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  int v19; // r14d
  char v20; // r13
  int v21; // eax
  int v22; // eax
  PIRP v23; // rbx
  PIRP v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  PIRP v29; // r14
  __int64 v30; // rbx
  IRP *v31; // rcx
  KIRQL v32; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+10h]
  __int64 v36; // [rsp+B0h] [rbp+18h]
  unsigned int v37; // [rsp+B8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  Irp = a2;
  v7 = a3;
  LOBYTE(a3) = *(_BYTE *)(a1 + 426);
  v10 = *(_DWORD *)(a1 + 468) + 7;
  v11 = *(_QWORD *)(a1 + 8);
  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  v13 = 0LL;
  Srb = (_WORD *)RaidAllocateSrb(v11, 2LL, a3, 0LL);
  ContiguousIoResources = StorAllocateContiguousIoResources((v10 & 0xFFFFFFF8) + 1088, v15, a1);
  v18 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v13 = ContiguousIoResources + 32;
    RaidZeroXrb(ContiguousIoResources + 32, v17, 0LL, 0LL);
    v19 = RaidBuildMdlForXrb(v13, v7, a4);
    if ( v19 >= 0 )
    {
      v20 = a6;
      v21 = a7;
      if ( !a6 )
      {
        v21 = a7 | 0x102;
        if ( *((_BYTE *)Srb + 2) == 40 )
          Srb[19] = 32;
        else
          *((_BYTE *)Srb + 9) = 32;
      }
      v22 = v21 | 1;
      if ( *(_BYTE *)(a1 + 426) == 1 )
      {
        v29 = Irp;
        v12 = Srb;
        v30 = *((unsigned int *)Srb + 13);
        v31 = Irp;
        *((_DWORD *)Srb + 8) = -1;
        *((_DWORD *)Srb + 6) = v22;
        *((_QWORD *)Srb + 8) = v36;
        *((_DWORD *)Srb + 15) = v37;
        *((_DWORD *)Srb + 5) = 2;
        Srb[18] = IoGetIoPriorityHint(v31);
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4268);
        *((_QWORD *)Srb + 12) = v13;
        *((_QWORD *)Srb + 10) = v29;
        *(_WORD *)((char *)Srb + v30 + 8) = 0;
        *((_BYTE *)Srb + v30 + 10) = 0;
        v23 = v29;
        *(_QWORD *)(v18 + 200) = Srb;
        *(_QWORD *)(v18 + 216) = *((_QWORD *)Srb + 8);
        v24 = (PIRP)*((_QWORD *)Srb + 12);
      }
      else
      {
        *((_DWORD *)Srb + 3) = v22;
        *((_QWORD *)Srb + 3) = v36;
        *((_DWORD *)Srb + 4) = v37;
        *Srb = 88;
        *((_BYTE *)Srb + 2) = 2;
        *((_BYTE *)Srb + 8) = -1;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4268);
        *(_WORD *)((char *)Srb + 5) = 0;
        *((_BYTE *)Srb + 7) = 0;
        v23 = Irp;
        *((_QWORD *)Srb + 6) = v13;
        *(_QWORD *)(v18 + 200) = Srb;
        *(_QWORD *)(v18 + 216) = *((_QWORD *)Srb + 3);
        v24 = v23;
      }
      *(_QWORD *)(v18 + 208) = v24;
      RaSrbSetMiniportContext(a1, Srb, v18 + 1088);
      if ( v20 )
        *(_BYTE *)(v18 + 49) |= 8u;
      KeInitializeEvent((PRKEVENT)(v18 + 696), NotificationEvent, 0);
      *(_QWORD *)(v18 + 688) = RaidXrbSignalCompletion;
      if ( v20
        && (RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 832, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        v23->IoStatus.Information = 0LL;
        v19 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 426) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              63LL,
              &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
              v13,
              v12,
              *((_QWORD *)v12 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            64LL,
            &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
            v13,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4514) )
          v25 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v13);
        else
          v25 = RaidAdapterExecuteXrb(a1, v13);
        v19 = v25;
        if ( v25 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v18 + 696), Executive, 0, 0, 0LL);
          LOBYTE(v27) = *((_BYTE *)Srb + 3);
          v19 = RaidSrbStatusToNtStatus(v27);
        }
        if ( v20 )
        {
          v32 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v32);
        }
        if ( (*(_BYTE *)(v18 + 49) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v18 + 780), 0LL);
          *(_BYTE *)(v18 + 49) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v19 >= 0 )
        {
          if ( a5 )
            v19 = a5(*(unsigned int *)(v36 + 20));
          if ( v19 >= 0 )
          {
            LOBYTE(v26) = *((_BYTE *)Srb + 3);
            v19 = PortSrbTranslateSrbToNtStatus(v26);
          }
        }
      }
    }
  }
  else
  {
    v19 = -1073741801;
  }
  if ( v18 )
  {
    RaidXrbDeallocateResources(v13, 0LL);
    StorFreeContiguousIoResources(a1, v18);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 426) == 1 )
    {
      if ( !v12 )
        v12 = Srb;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v19;
}
