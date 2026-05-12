/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B1E8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaSrbSetMiniportContext @ 0x1C00067BC (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0006BFC (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0006CBC (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00073CC (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C0007718 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000B000 (RaidZeroXrb.c)
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x1C000BE14 (RaidAllocateSrb.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0012420 (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidDriverGetName @ 0x1C00124D8 (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0012550 (RaidQueryCrashdumpFunctions.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C001263C (RaidGetTelemetryLogPageIds.c)
 *     RtlStringCbPrintfW @ 0x1C001A2BC (RtlStringCbPrintfW.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     WPP_SF_D @ 0x1C0033528 (WPP_SF_D.c)
 *     WPP_SF_DD @ 0x1C003356C (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x1C003365C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0033780 (WPP_SF_qq.c)
 *     WPP_SF_S @ 0x1C004C454 (WPP_SF_S.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  char *Pool; // rax
  PVOID v5; // r15
  _BYTE *Srb; // rsi
  char *v7; // r14
  wchar_t *v8; // r13
  char v9; // r12
  _IRP *MasterIrp; // r14
  _DWORD *v11; // rbx
  _DWORD *v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // ax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char *v19; // rax
  char *v20; // rbx
  wchar_t *v21; // rax
  PVOID v22; // rax
  int v23; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // r12
  int v28; // eax
  bool v29; // zf
  __int64 v30; // r8
  int v31; // eax
  signed int FullDriverPath; // ebx
  int v33; // eax
  char *v34; // r12
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  IRP *v40; // rdi
  int v42; // eax
  __int64 v43; // rcx
  void *v44; // rcx
  _BYTE *v45; // rax
  __int64 v46; // [rsp+38h] [rbp-70h]
  _BYTE *v47; // [rsp+40h] [rbp-68h]
  __int128 v48; // [rsp+48h] [rbp-60h] BYREF
  _OWORD *P; // [rsp+B0h] [rbp+8h]
  char *v51; // [rsp+C0h] [rbp+18h]
  __int64 v52; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 24);
  Pool = 0LL;
  v5 = 0LL;
  Srb = 0LL;
  v52 = 0LL;
  v7 = 0LL;
  v46 = 0LL;
  v8 = 0LL;
  v47 = 0LL;
  v9 = 0;
  a2->IoStatus.Information = 0LL;
  v48 = 0LL;
  if ( a2->RequestorMode )
  {
    FullDriverPath = -1073741790;
LABEL_73:
    v26 = 0LL;
    goto LABEL_112;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    FullDriverPath = -1073741789;
    Pool = 0LL;
    goto LABEL_73;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(MasterIrp, 0, 0x68uLL);
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  P = Pool;
  v11 = Pool;
  if ( Pool )
  {
    memset(Pool + 12, 0, 0x154uLL);
    *v11 = 1;
    v11[1] = 280;
    v11[2] = 1145917508;
    v12 = v11 + 70;
    P[1] = *(_OWORD *)(v2 + 328);
    P[2] = *(_OWORD *)(v2 + 344);
    P[3] = *(_OWORD *)(v2 + 360);
    P[4] = *(_OWORD *)(v2 + 376);
    P[5] = *(_OWORD *)(v2 + 392);
    P[6] = *(_OWORD *)(v2 + 408);
    P[7] = *(_OWORD *)(v2 + 424);
    P[8] = *(_OWORD *)(v2 + 440);
    P[9] = *(_OWORD *)(v2 + 456);
    P[10] = *(_OWORD *)(v2 + 472);
    P[11] = *(_OWORD *)(v2 + 488);
    P[12] = *(_OWORD *)(v2 + 504);
    P[13] = *(_OWORD *)(v2 + 520);
    P[14] = *(_OWORD *)(v2 + 536);
    RaidGetTelemetryLogPageIds(*(unsigned int *)(a1 + 3280), P + 15, P + 17);
    v13 = *(_QWORD *)(v2 + 552);
    if ( (*(_DWORD *)(v13 + 184) & 0x80u) != 0 && (*(_DWORD *)(v13 + 188) & 2) != 0 )
      v14 = HiberFileHybridPriority;
    else
      v14 = -1;
    *((_WORD *)P + 137) = v14;
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1744)) >= 0 )
      {
        *(_BYTE *)v12 = 1;
        v9 = 1;
        *((_QWORD *)v12 + 1) = **(_QWORD **)(a1 + 1744);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    }
    v15 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 5088LL);
    if ( v15 && (int)PoFxRegisterCrashdumpDevice(*v15) >= 0 )
    {
      v9 = 1;
      *((_BYTE *)v12 + 32) = 1;
      *((_QWORD *)v12 + 5) = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 5088LL);
    }
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5152LL) = 40;
    if ( (int)RaidQueryCrashdumpFunctions(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL)) >= 0
      && (v16 = *(_QWORD *)(a1 + 24), (v17 = *(_QWORD *)(v16 + 5184)) != 0)
      && *(_QWORD *)(v16 + 5176) )
    {
      *((_QWORD *)v12 + 7) = v17;
      *((_QWORD *)v12 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5160LL);
    }
    else
    {
      *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 0;
      if ( !v9 )
        goto LABEL_16;
    }
    MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v12;
    MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
LABEL_16:
    *((_QWORD *)v12 + 2) = a1 + 1734;
    v18 = *(_QWORD *)(a1 + 24) + 5037LL;
    *((_QWORD *)v12 + 3) = a1 + 1735;
    *((_QWORD *)v12 + 6) = v18;
    v19 = (char *)RaidAllocatePool(NonPagedPoolNx, 0x58uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v51 = v19;
    v20 = v19;
    if ( !v19 )
    {
      FullDriverPath = -1073741670;
      v7 = 0LL;
      v26 = 0LL;
LABEL_111:
      Pool = (char *)P;
      goto LABEL_112;
    }
    memset(v19, 0, 0x58uLL);
    v21 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x58uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v8 = v21;
    if ( !v21 )
      goto LABEL_82;
    memset(v21, 0, 0x58uLL);
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v20 + 4, 0x1EuLL, L"diskdump.sys");
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v20 + 19, 0x1EuLL, L"storport.sys");
    *(_QWORD *)v20 = v8;
    *(_QWORD *)v8 = 0LL;
    MasterIrp->MdlAddress = (_MDL *)P;
    *(_DWORD *)&MasterIrp->Type = 4;
    BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
    *(_DWORD *)(&MasterIrp->Size + 1) = 104;
    *(_QWORD *)&MasterIrp->Flags = 0LL;
    MasterIrp->ThreadListEntry.Flink = 0LL;
    MasterIrp->ThreadListEntry.Blink = (_LIST_ENTRY *)v20;
    MasterIrp->UserEvent = (_KEVENT *)(a1 + 1735);
    if ( (unsigned __int8)(*(_BYTE *)(v2 + 472) - 2) <= 2u )
      MasterIrp->IoStatus.Status |= 1u;
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 552) + 184LL) & 0x20) != 0 )
      MasterIrp->IoStatus.Status |= 4u;
    if ( *(_BYTE *)(v2 + 4514) && (*(_DWORD *)(*(_QWORD *)(v2 + 552) + 184LL) & 8) == 0 )
      goto LABEL_97;
    v22 = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v5 = v22;
    if ( v22 )
    {
      memset(v22, 0, 0x70uLL);
      Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v2 + 426), 0);
      if ( Srb )
      {
        ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v2 + 468) + 7) & 0xFFFFFFF8) + 1088,
                                  v23,
                                  v2);
        v52 = ContiguousIoResources;
        v26 = ContiguousIoResources;
        if ( ContiguousIoResources )
        {
          v27 = ContiguousIoResources + 32;
          v46 = ContiguousIoResources + 32;
          RaidZeroXrb(ContiguousIoResources + 32, v25, 0, 0LL);
          *(_BYTE *)(v27 + 17) |= 8u;
          *(_QWORD *)(v27 + 176) = a2;
          *(_QWORD *)(v27 + 184) = v5;
          *(_QWORD *)(v27 + 168) = Srb;
          if ( *(_BYTE *)(v2 + 426) == 1 )
          {
            *((_QWORD *)Srb + 10) = a2;
            *((_DWORD *)Srb + 6) = 256;
            v42 = *((_DWORD *)Srb + 6);
            *((_DWORD *)Srb + 15) = 112;
            *((_QWORD *)Srb + 12) = v27;
            *((_DWORD *)Srb + 5) = 38;
            *((_QWORD *)Srb + 8) = v5;
            v29 = *(_BYTE *)(v2 + 4514) == 0;
            *((_DWORD *)Srb + 10) = 10;
            if ( v29 )
              v42 = 64;
            v47 = Srb;
            v43 = *((unsigned int *)Srb + 13);
            *((_DWORD *)Srb + 6) = v42;
            Srb[v43 + 8] = *(_BYTE *)(a1 + 96);
            Srb[v43 + 9] = *(_BYTE *)(a1 + 97);
            Srb[v43 + 10] = *(_BYTE *)(a1 + 98);
          }
          else
          {
            *((_DWORD *)Srb + 3) = 256;
            *(_WORD *)Srb = 88;
            v28 = *((_DWORD *)Srb + 3);
            *((_DWORD *)Srb + 4) = 112;
            *((_QWORD *)Srb + 6) = v27;
            Srb[2] = 38;
            *((_QWORD *)Srb + 3) = v5;
            v29 = *(_BYTE *)(v2 + 4514) == 0;
            *((_DWORD *)Srb + 5) = 10;
            if ( v29 )
              v28 = 64;
            *((_DWORD *)Srb + 3) = v28;
            Srb[5] = *(_BYTE *)(a1 + 96);
            Srb[6] = *(_BYTE *)(a1 + 97);
            Srb[7] = *(_BYTE *)(a1 + 98);
          }
          RaSrbSetMiniportContext(v2, (__int64)Srb, v52 + 1088);
          KeInitializeEvent((PRKEVENT)(v27 + 664), NotificationEvent, 0);
          *(_QWORD *)(v27 + 656) = RaidXrbSignalCompletion;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              29LL,
              &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
              v27,
              Srb);
          }
          if ( *(_BYTE *)(v2 + 4514) )
            v31 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v27);
          else
            v31 = RaidAdapterExecuteXrb(v2, (_QWORD *)v27, v30);
          FullDriverPath = v31;
          if ( v31 >= 0 )
          {
            KeWaitForSingleObject((PVOID)(v27 + 664), Executive, 0, 0, 0LL);
            FullDriverPath = RaidSrbStatusToNtStatus(Srb[3]);
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_DD(
              WPP_GLOBAL_Control->AttachedDevice,
              30LL,
              &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
              (unsigned int)FullDriverPath,
              (unsigned __int8)Srb[3]);
          }
          if ( FullDriverPath >= 0 )
          {
            v33 = *((_DWORD *)v5 + 20);
            v34 = (char *)(P + 1);
            if ( v33 )
            {
              *((_DWORD *)P + 10) = v33;
              v35 = *((_DWORD *)v5 + 20);
            }
            else
            {
              v35 = *((_DWORD *)P + 10);
            }
            HIDWORD(MasterIrp->IoStatus.Information) = v35;
            *((_QWORD *)P + 10) = *((_QWORD *)v5 + 8);
            if ( !*(_BYTE *)(v2 + 4514) )
            {
              *((_DWORD *)P + 5) = *((_DWORD *)v5 + 18);
              *((_DWORD *)P + 6) = *((_DWORD *)v5 + 19);
              *((_DWORD *)P + 11) = *((_DWORD *)v5 + 21);
              *((_DWORD *)P + 16) = *((_DWORD *)v5 + 22);
              *((_DWORD *)P + 17) = *((_DWORD *)v5 + 23);
              *((_QWORD *)P + 9) = *((_QWORD *)v5 + 12);
              *((_BYTE *)P + 88) = *((_BYTE *)v5 + 104);
              *((_BYTE *)P + 98) = *((_BYTE *)v5 + 105);
              *((_BYTE *)P + 105) = *((_BYTE *)v5 + 106);
              *((_BYTE *)P + 113) = *((_BYTE *)v5 + 107);
              RtlStringCbPrintfW(v8 + 4, 0x1EuLL, (NTSTRSAFE_PCWSTR)v5 + 2, 0LL);
              *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
              MasterIrp->UserIosb = 0LL;
              MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v5 + 14);
            }
            v20 = v51;
            *(_BYTE *)(a1 + 1733) = 1;
            goto LABEL_45;
          }
          if ( !*(_BYTE *)(v2 + 4514) || (*(_DWORD *)(*(_QWORD *)(v2 + 552) + 184LL) & 0x1000) != 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_qD(
                WPP_GLOBAL_Control->AttachedDevice,
                31LL,
                &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
                v27,
                FullDriverPath);
            }
LABEL_109:
            v26 = v52;
            goto LABEL_110;
          }
          v20 = v51;
LABEL_97:
          v34 = (char *)(P + 1);
LABEL_45:
          if ( *(_BYTE *)(v2 + 4514) )
          {
            RaidDriverGetName(*(_QWORD *)(v2 + 16), &v48);
            RtlStringCbPrintfW(v8 + 4, 0x1EuLL, L"%ws.sys", *((_QWORD *)&v48 + 1));
            v36 = (*(_DWORD *)(v2 + 468) + 7) & 0xFFFFFFF8;
            if ( !v36 )
              v36 = 16;
            MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v2 + 776) + 4095 + 16 * v36) & 0xFFFFF000;
            if ( !HIDWORD(MasterIrp->IoStatus.Information) )
              HIDWORD(MasterIrp->IoStatus.Information) = *((_DWORD *)v34 + 6);
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v2 + 728);
            MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v2 + 792);
            if ( (*(_DWORD *)(v2 + 548) & 1) != 0 || (v37 = *(_DWORD *)(a1 + 3280), v37 == 10) || v37 == 1 )
              MasterIrp->IoStatus.Status |= 2u;
          }
          MasterIrp->IoStatus.Status |= 8u;
          RtlInitUnicodeString((PUNICODE_STRING)(v20 + 72), L"\\SystemRoot\\System32\\Drivers\\diskdump.sys");
          FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL), v8 + 36);
          if ( FullDriverPath < 0 )
            FullDriverPath = 0;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_S(WPP_GLOBAL_Control->AttachedDevice, v38, v39, v8 + 4);
          }
          if ( *(_DWORD *)(v2 + 520) )
            FullDriverPath = StorPortGetAdditionalCrashDumpArea(v2, v34);
          if ( FullDriverPath >= 0 )
          {
            v40 = a2;
            v7 = v51;
            Pool = (char *)P;
            v26 = v52;
            a2->IoStatus.Information = 104LL;
            goto LABEL_61;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              33LL,
              &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
              (unsigned int)FullDriverPath);
          }
          goto LABEL_109;
        }
        FullDriverPath = -1073741670;
      }
      else
      {
        FullDriverPath = -1073741670;
        v26 = 0LL;
      }
    }
    else
    {
LABEL_82:
      FullDriverPath = -1073741670;
      v26 = 0LL;
    }
LABEL_110:
    v7 = v51;
    goto LABEL_111;
  }
  FullDriverPath = -1073741670;
  v7 = 0LL;
  v26 = 0LL;
LABEL_112:
  v40 = a2;
LABEL_61:
  if ( FullDriverPath < 0 )
  {
    if ( Pool )
      ExFreePoolWithTag(Pool, 0x44436152u);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x44436152u);
    if ( v8 )
    {
      v44 = (void *)*((_QWORD *)v8 + 10);
      if ( v44 )
        ExFreePoolWithTag(v44, 0);
      ExFreePoolWithTag(v8, 0x44436152u);
    }
  }
  if ( v26 )
  {
    RaidXrbDeallocateResources(v46, 0);
    StorFreeContiguousIoResources(v2, v26);
  }
  if ( Srb )
  {
    if ( Srb[2] == 40 )
    {
      v45 = Srb;
      if ( v47 )
        v45 = v47;
      *((_QWORD *)v45 + 10) = 0LL;
      *((_QWORD *)v45 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  return RaidCompleteRequestEx(v40, 0, FullDriverPath);
}
