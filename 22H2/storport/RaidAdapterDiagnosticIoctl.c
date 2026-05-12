/*
 * XREFs of RaidAdapterDiagnosticIoctl @ 0x1C0077B5C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6C8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C000674C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0006B8C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0006C4C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000735C (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C00076A8 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000AF90 (RaidZeroXrb.c)
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x1C000BDA4 (RaidAllocateSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0011AD0 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001A1DC (RaidFreeSrb.c)
 *     Feature_2360613179__private_IsEnabledDeviceUsage @ 0x1C001D618 (Feature_2360613179__private_IsEnabledDeviceUsage.c)
 *     RaidCallerIsAdmin @ 0x1C001E760 (RaidCallerIsAdmin.c)
 *     memmove @ 0x1C00201C0 (memmove.c)
 *     memset @ 0x1C0020480 (memset.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D5BC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D620 (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_DD @ 0x1C003354C (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0033760 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterDiagnosticIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  int v3; // ebx
  _BYTE *Srb; // rsi
  _DWORD *v7; // r12
  __int64 v8; // r14
  _IRP *MasterIrp; // rdi
  int MdlAddress_high; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // ebx
  unsigned int *Pool; // rax
  char *v16; // r13
  int v17; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  __int128 v26; // xmm0
  unsigned __int64 v27; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  unsigned int Size; // [rsp+78h] [rbp+10h]
  __int64 v31; // [rsp+80h] [rbp+18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v31 = 0LL;
  Srb = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Size = CurrentStackLocation->Parameters.Read.Length;
  if ( (unsigned int)Feature_2360613179__private_IsEnabledDeviceUsage()
    && (!RaidCallerIsAdmin() || a2->Tail.Overlay.Thread != KeGetCurrentThread()) )
  {
    v3 = -1073741790;
    return RaidCompleteRequestEx(a2, 0, v3);
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
LABEL_6:
    v3 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v3);
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x14 || Size < 0x24 )
  {
    v3 = -1073741811;
LABEL_68:
    if ( v31 )
    {
      RaidXrbDeallocateResources(v8, 0);
      StorFreeContiguousIoResources(a1, v31);
    }
    goto LABEL_70;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 20 )
    goto LABEL_6;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != 20 )
    goto LABEL_6;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  if ( !MdlAddress_high || MdlAddress_high >= 4 || (int)MasterIrp->Flags >= 1 )
    goto LABEL_6;
  if ( MdlAddress_high == 1 )
  {
    memset(a2->AssociatedIrp.MasterIrp, 0, Size);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(GUID *)&MasterIrp->MdlAddress = GUID_DIAGNOSTIC_PROVIDER_STORPORT;
    if ( Size >= 0x1200038 )
    {
      LODWORD(MasterIrp->ThreadListEntry.Flink) = 18874392;
      HIDWORD(MasterIrp->ThreadListEntry.Flink) = 2;
      LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 5060);
      HIDWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 5056);
      memmove(&MasterIrp->IoStatus, *(const void **)(a1 + 5064), 48LL * *(unsigned int *)(a1 + 5060));
      LODWORD(MasterIrp[90742].UserEvent) = *(_DWORD *)(a1 + 5768);
      HIDWORD(MasterIrp[90742].UserEvent) = *(_DWORD *)(a1 + 5772);
      MasterIrp->AssociatedIrp.IrpCount = 18874392;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18874424;
      a2->IoStatus.Information = 18874424LL;
    }
    else
    {
      MasterIrp->AssociatedIrp.IrpCount = 18874392;
      v3 = -2147483643;
      *(_DWORD *)(&MasterIrp->Size + 1) = 36;
      a2->IoStatus.Information = 36LL;
    }
    return RaidCompleteRequestEx(a2, 0, v3);
  }
  if ( (unsigned int)(MdlAddress_high - 2) > 1 )
    return RaidCompleteRequestEx(a2, 0, v3);
  v11 = Size - 32;
  v12 = (Size - 32 + 47LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v13 = v12 + 28;
  if ( v12 > 0xFFFFFFFF || v13 > 0xFFFFFFFF )
    goto LABEL_6;
  v14 = v12 + 28;
  Pool = (unsigned int *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)v13, 0x72536152u, *(_QWORD *)(a1 + 8));
  v7 = Pool;
  if ( !Pool )
  {
    v3 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v3);
  }
  Pool[5] = 0;
  *Pool = 28;
  Pool[4] = 1771776;
  Pool[6] = v14 - 28;
  Pool[3] = 10;
  *(_QWORD *)(Pool + 1) = 0x47414944524F5453LL;
  v16 = (char *)Pool + *Pool;
  *(_DWORD *)v16 = 44;
  *((_DWORD *)v16 + 3) = MasterIrp->Flags;
  *((_DWORD *)v16 + 2) = HIDWORD(MasterIrp->MdlAddress);
  *((_DWORD *)v16 + 1) = v11 + 40;
  *((_DWORD *)v16 + 8) = v11;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 426), 0);
  if ( Srb )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(a1 + 468) + 7) & 0xFFFFFFF8) + 1088,
                              v17,
                              a1);
    v31 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v8 = ContiguousIoResources + 32;
      RaidZeroXrb(ContiguousIoResources + 32, v19, 0, 0LL);
      *(_QWORD *)(v8 + 176) = a2;
      *(_QWORD *)(v8 + 184) = v7;
      *(_QWORD *)(v8 + 168) = Srb;
      if ( *(_BYTE *)(a1 + 426) == 1 )
      {
        *((_DWORD *)Srb + 15) = v14;
        *((_QWORD *)Srb + 12) = v8;
        *((_QWORD *)Srb + 10) = a2;
        *((_DWORD *)Srb + 5) = 2;
        *((_QWORD *)Srb + 8) = v7;
        *((_DWORD *)Srb + 6) = 256;
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4268);
        v20 = *((unsigned int *)Srb + 13);
        *(_WORD *)&Srb[v20 + 8] = 0;
        Srb[v20 + 10] = 0;
      }
      else
      {
        *((_DWORD *)Srb + 4) = v14;
        *(_WORD *)Srb = 88;
        *((_QWORD *)Srb + 6) = v8;
        Srb[2] = 2;
        *((_QWORD *)Srb + 3) = v7;
        *((_DWORD *)Srb + 3) = 256;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4268);
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, v31 + 1088);
      KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
      v22 = HIDWORD(MasterIrp->MdlAddress);
      if ( v22 == 2 )
      {
        *(_BYTE *)(v8 + 17) |= 8u;
        v22 = HIDWORD(MasterIrp->MdlAddress);
      }
      if ( v22 == 3 && *(_QWORD *)(a1 + 5088) )
        RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Du,
          (__int64)&WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
          v8,
          Srb);
      }
      if ( *(_BYTE *)(a1 + 4514) )
        v23 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v8);
      else
        v23 = RaidAdapterExecuteXrb(a1, (_QWORD *)v8, v21);
      v3 = v23;
      if ( v23 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
        v3 = RaidSrbStatusToNtStatus(Srb[3]);
      }
      if ( HIDWORD(MasterIrp->MdlAddress) == 3 )
      {
        if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v8 + 748), 0LL);
          *(_BYTE *)(v8 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
      }
      if ( v3 < 0 )
      {
        v27 = 0LL;
      }
      else
      {
        memset(MasterIrp, 0, Size);
        *(_DWORD *)&MasterIrp->Type = 36;
        v24 = *((_DWORD *)v16 + 8);
        MasterIrp->AssociatedIrp.IrpCount = v24;
        v25 = v7[5];
        if ( v25 == 6 )
        {
          v26 = *((_OWORD *)v16 + 1);
          *(_DWORD *)(&MasterIrp->Size + 1) = 36;
          v3 = -2147483643;
          *(_OWORD *)&MasterIrp->MdlAddress = v26;
          a2->IoStatus.Information = 36LL;
          goto LABEL_68;
        }
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            v3 = -1073741789;
            goto LABEL_60;
          }
          if ( v25 > 3 )
          {
            if ( v25 == 4 )
            {
              v3 = -1073700864;
              goto LABEL_60;
            }
            if ( v25 != 5 )
            {
              v3 = -1073741823;
LABEL_60:
              a2->IoStatus.Information = 0LL;
              goto LABEL_68;
            }
          }
          v3 = -1073741811;
          goto LABEL_60;
        }
        *(_DWORD *)(&MasterIrp->Size + 1) = v24 + 32;
        *(_OWORD *)&MasterIrp->MdlAddress = *((_OWORD *)v16 + 1);
        memmove(&MasterIrp->ThreadListEntry, v16 + 40, *((unsigned int *)v16 + 8));
        v27 = (unsigned int)(*((_DWORD *)v16 + 8) + 32);
      }
      a2->IoStatus.Information = v27;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = (unsigned __int8)Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Eu,
          (__int64)&WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
          v3,
          Timeout);
      }
      goto LABEL_68;
    }
  }
  v3 = -1073741670;
LABEL_70:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 426) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return RaidCompleteRequestEx(a2, 0, v3);
}
