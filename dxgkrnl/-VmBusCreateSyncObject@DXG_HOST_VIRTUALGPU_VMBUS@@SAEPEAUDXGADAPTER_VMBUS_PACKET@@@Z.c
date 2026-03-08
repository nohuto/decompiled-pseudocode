/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03773A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C0047E90 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C0047F60 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AD04 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C018768C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  char v4; // di
  __int64 v5; // rbx
  const wchar_t *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ecx
  struct DXGADAPTER *v10; // r12
  __int64 Pool2; // r14
  __int64 v13; // rax
  int v14; // ecx
  __int64 SynchronizationObjectImpl; // r12
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  __int64 v20; // [rsp+28h] [rbp-39h]
  char v21[8]; // [rsp+58h] [rbp-9h] BYREF
  DXGPUSHLOCK *v22; // [rsp+60h] [rbp-1h]
  int v23; // [rsp+68h] [rbp+7h]
  _DWORD v24[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+78h] [rbp+17h]
  __int64 v26; // [rsp+80h] [rbp+1Fh]
  __int64 v27; // [rsp+88h] [rbp+27h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v4 = 0;
  v23 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v5 = 3764LL;
    WdLogSingleEntry1(2LL, 3764LL);
    v6 = L"The adapter is already closed by the guest";
LABEL_17:
    v20 = v5;
    goto LABEL_18;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v8 = v7;
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 32);
    if ( v9 == 6 )
    {
      v5 = 3769LL;
      WdLogSingleEntry1(2LL, 3769LL);
      v6 = L"D3DDDI_PERIODIC_MONITORED_FENCE is not supported";
      goto LABEL_17;
    }
    if ( v9 >= 7 )
    {
      WdLogSingleEntry1(2LL, *(int *)(v7 + 32));
      v6 = L"Improper synchronzation type detected: %lu";
      v20 = *(int *)(v8 + 32);
LABEL_18:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v20, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_19;
    }
    v10 = 0LL;
    if ( !*(_DWORD *)(v7 + 24) )
    {
      if ( v9 == 5 )
      {
        v5 = 3784LL;
        WdLogSingleEntry1(2LL, 3784LL);
        v6 = L"Device handle is zero for device sync objects";
        goto LABEL_17;
      }
      if ( (*(_DWORD *)(v7 + 36) & 1) == 0 )
      {
        v5 = 3789LL;
        WdLogSingleEntry1(2LL, 3789LL);
        v6 = L"Device handle is zero when a non-shared sync object is created";
        goto LABEL_17;
      }
      v10 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL);
    }
    Pool2 = 0LL;
    if ( v9 == 4 )
    {
      if ( !*(_QWORD *)(v7 + 40) )
      {
        v5 = 3799LL;
        WdLogSingleEntry1(2LL, 3799LL);
        v6 = L"Invalid CPU event pointer";
        goto LABEL_17;
      }
      Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
      if ( !Pool2 )
      {
        WdLogSingleEntry1(6LL, 3806LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          3806LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_19;
      }
      v13 = *((_QWORD *)a1 + 11);
      *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
      *(_WORD *)(Pool2 + 16) = 256;
      v14 = *(_DWORD *)(v13 + 424);
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(v8 + 40);
      *(_BYTE *)(Pool2 + 19) = (v14 & 0x10) != 0;
      *(_QWORD *)(v8 + 40) = Pool2;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    }
    SynchronizationObjectImpl = (int)DxgkCreateSynchronizationObjectImpl(
                                       v8 + 24,
                                       *(_DWORD *)(v8 + 120) | 0x80000000,
                                       0LL,
                                       v10,
                                       0LL);
    if ( Pool2 )
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    if ( (int)SynchronizationObjectImpl < 0 )
    {
      WdLogSingleEntry1(2LL, SynchronizationObjectImpl);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkCreateSynchronizationObjectInternal failed: 0x%I64x",
        SynchronizationObjectImpl,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_21;
    }
    v24[0] = *(_DWORD *)(v8 + 112);
    v16 = *(_DWORD *)(v8 + 32);
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    if ( v16 == 5 )
    {
      LODWORD(v27) = *(_DWORD *)(v8 + 48);
      v26 = *(_QWORD *)(v8 + 48);
      v17 = *(_QWORD *)(v8 + 56);
    }
    else
    {
      if ( v16 != 6 )
        goto LABEL_33;
      LODWORD(v27) = *(_DWORD *)(v8 + 56);
      v26 = *(_QWORD *)(v8 + 48);
      v17 = *(_QWORD *)(v8 + 64);
    }
    v25 = v17;
LABEL_33:
    v18 = *(_DWORD *)(v8 + 36);
    v19 = *(_DWORD *)(v8 + 104);
    v24[1] = v19;
    if ( (v18 & 1) != 0 && !v19 )
    {
      WdLogSingleEntry1(1LL, 3852LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Output.hGlobalSyncObject", 3852LL, 0LL, 0LL, 0LL, 0LL);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v24, 0x20u);
    goto LABEL_20;
  }
LABEL_19:
  v3 = 0;
LABEL_20:
  v4 = v3;
LABEL_21:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v4;
}
