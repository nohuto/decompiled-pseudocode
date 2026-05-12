/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C00752D4
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C00751AC (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C007BD70 (RaWmiIrpNormalRequest.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0005CB0 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D80 (RaidUnitPoFxActivateComponent.c)
 *     RaSrbSetMiniportContext @ 0x1C00067BC (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0006BFC (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0006CBC (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00073CC (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C0007718 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000B000 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C000BE14 (RaidAllocateSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0011B40 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001A24C (RaidFreeSrb.c)
 *     RaidBuildMdlAndLockPagesForXrb @ 0x1C001D158 (RaidBuildMdlAndLockPagesForXrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D5DC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D640 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0033004 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C00335BC (WPP_SF_ddd.c)
 *     WPP_SF_qD @ 0x1C003365C (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C00338A0 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  _BYTE *v5; // rbp
  _BYTE *v6; // r13
  __int64 v7; // rdi
  unsigned int v8; // r12d
  ULONG v9; // esi
  int v10; // edx
  _BYTE *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // r13
  __int64 v16; // rcx
  char v17; // r10
  int v18; // r11d
  __int64 v19; // rcx
  char v20; // al
  char v21; // al
  __int64 v22; // r8
  PDEVICE_OBJECT v23; // rcx
  int v24; // eax
  int v25; // eax
  char v27; // al
  _BYTE *v28; // rcx
  char v29; // al
  char v30; // dl
  int v31; // eax
  unsigned __int16 v32; // dx
  int v33; // r8d
  int v34; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  _QWORD *v37; // [rsp+30h] [rbp-58h]
  _BYTE *v38; // [rsp+38h] [rbp-50h]
  char v42; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  v42 = 0;
  v6 = 0LL;
  if ( *(_DWORD *)v3 == 1 )
    v7 = *(_QWORD *)(v3 + 24);
  else
    v7 = v3;
  v8 = *(_DWORD *)(a3 + 16);
  if ( *(_DWORD *)v3 != 1 )
    v3 = 0LL;
  v37 = 0LL;
  v9 = *(_DWORD *)(a3 + 16);
  if ( a2 == 9 && v8 <= **(_DWORD **)(a3 + 24) )
    v9 = **(_DWORD **)(a3 + 24);
  Srb = RaidAllocateSrb(*(_QWORD *)(v7 + 8), 0x17u, *(_BYTE *)(v7 + 426), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v7 + 468) + 7) & 0xFFFFFFF8) + 1088,
                                  v10,
                                  v7),
        (v4 = ContiguousIoResources) == 0) )
  {
    v14 = -1073741801;
    goto LABEL_33;
  }
  v37 = (_QWORD *)(ContiguousIoResources + 32);
  RaidZeroXrb(ContiguousIoResources + 32, v13, 0, 0LL);
  *(_QWORD *)(v4 + 208) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v4 + 200) = Srb;
  v14 = RaidBuildMdlAndLockPagesForXrb((__int64)v37, *(void **)(a3 + 24), v9);
  if ( v14 >= 0 )
  {
    if ( *(_BYTE *)(v7 + 426) == 1 )
    {
      v5 = &Srb[*((unsigned int *)Srb + 13)];
      *((_DWORD *)Srb + 5) = 23;
      v15 = *((unsigned int *)Srb + 30);
      *((_QWORD *)Srb + 12) = v37;
      v6 = &Srb[v15];
      *((_QWORD *)Srb + 8) = *(_QWORD *)(a3 + 24);
      *((_DWORD *)Srb + 15) = v8;
      *((_DWORD *)Srb + 6) = 320;
      *((_DWORD *)Srb + 10) = 10;
      v6[8] = a2;
      *(_DWORD *)v6 = 96;
      *((_DWORD *)v6 + 1) = 16;
      *((_QWORD *)v6 + 2) = *(_QWORD *)(a3 + 8);
      v16 = *((_QWORD *)Srb + 8);
      v38 = Srb;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v37;
      Srb[2] = 23;
      v16 = *(_QWORD *)(a3 + 24);
      *(_WORD *)Srb = 88;
      Srb[4] = a2;
      *((_QWORD *)Srb + 3) = v16;
      *((_DWORD *)Srb + 4) = v8;
      *((_QWORD *)Srb + 4) = *(_QWORD *)(a3 + 8);
      *((_DWORD *)Srb + 3) = 320;
      *((_DWORD *)Srb + 5) = 10;
    }
    *(_QWORD *)(v4 + 216) = v16;
    RaSrbSetMiniportContext(v7, (__int64)Srb, v4 + 1088);
    v19 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v19 == v18 )
    {
      v20 = *(_BYTE *)(v19 + 96);
      if ( *(_BYTE *)(v7 + 426) == (_BYTE)v18 )
      {
        v5[8] = v20;
        v5[9] = *(_BYTE *)(v19 + 97);
        v21 = *(_BYTE *)(v19 + 98);
LABEL_14:
        v5[10] = v21;
        goto LABEL_15;
      }
      Srb[5] = v20;
      Srb[6] = *(_BYTE *)(v19 + 97);
      v27 = *(_BYTE *)(v19 + 98);
    }
    else
    {
      v28 = *(_BYTE **)(v7 + 136);
      if ( *(_BYTE *)(v7 + 426) == (_BYTE)v18 )
        v6[9] = v18;
      else
        Srb[9] = v18;
      v29 = *(_BYTE *)(v7 + 426);
      if ( v28 == (_BYTE *)(v7 + 136) )
      {
        if ( v29 == (_BYTE)v18 )
        {
          *((_WORD *)v5 + 4) = 0;
          v5[10] = v17;
        }
        else
        {
          *(_WORD *)(Srb + 5) = 0;
          Srb[7] = v17;
        }
LABEL_15:
        KeInitializeEvent((PRKEVENT)(v4 + 696), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine((__int64)v37, (__int64)RaidXrbSignalCompletion);
        if ( Srb[2] == 40 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
              v37,
              v38,
              *((_QWORD *)v38 + 13));
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v31 = (unsigned __int8)v5[10];
          v32 = 12;
          v33 = (unsigned __int8)v5[9];
          v34 = (unsigned __int8)v5[8];
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
              v37,
              Srb,
              *((_QWORD *)Srb + 7));
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v31 = (unsigned __int8)Srb[7];
          v32 = 14;
          v33 = (unsigned __int8)Srb[6];
          v34 = (unsigned __int8)Srb[5];
        }
        LODWORD(v36) = v31;
        LODWORD(Timeout) = v33;
        WPP_SF_ddd(
          (__int64)v23->AttachedDevice,
          v32,
          (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
          v34,
          Timeout,
          v36);
LABEL_20:
        if ( v3 )
        {
          RaidUnitPoFxActivateComponent(v3, 0, 1LL, &v42);
        }
        else if ( *(_QWORD *)(v7 + 5088) )
        {
          RaidAdapterPoFxActivateComponent(v7, 0LL, 1LL);
        }
        if ( *(_BYTE *)(v7 + 4514) )
          v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, (__int64)v37);
        else
          v24 = RaidAdapterExecuteXrb(v7, v37, v22);
        v14 = v24;
        if ( v24 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v4 + 696), Executive, 0, 0, 0LL);
          v14 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v3 )
        {
          if ( (*(_BYTE *)(v4 + 49) & 2) != 0 )
          {
            RaidUnitPoFxIdleComponentFromMiniport(v3, *(_DWORD *)(v4 + 780));
            *(_BYTE *)(v4 + 49) &= ~2u;
          }
          RaidUnitPoFxIdleComponent(v3, 0, 0, &v42);
        }
        else if ( *(_QWORD *)(v7 + 5088) )
        {
          if ( (*(_BYTE *)(v4 + 49) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponent(v7, *(unsigned int *)(v4 + 780), 0LL);
            *(_BYTE *)(v4 + 49) &= ~1u;
          }
          RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(Timeout) = v14;
          WPP_SF_qD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xFu,
            (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
            v37,
            Timeout);
        }
        goto LABEL_32;
      }
      v30 = v28[40];
      if ( v29 == (_BYTE)v18 )
      {
        v5[8] = v30;
        v5[9] = v28[41];
        v21 = v28[42];
        goto LABEL_14;
      }
      Srb[5] = v30;
      Srb[6] = v28[41];
      v27 = v28[42];
    }
    Srb[7] = v27;
    goto LABEL_15;
  }
LABEL_32:
  if ( v14 < 0 )
  {
LABEL_33:
    v25 = 0;
    goto LABEL_34;
  }
  if ( Srb[2] == 40 )
    v25 = *((_DWORD *)v38 + 15);
  else
    v25 = *((_DWORD *)Srb + 4);
LABEL_34:
  *(_DWORD *)(a3 + 16) = v25;
  if ( v4 )
  {
    RaidXrbDeallocateResources((__int64)v37, 0);
    StorFreeContiguousIoResources(v7, v4);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v7 + 426) == 1 )
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
  return (unsigned int)v14;
}
