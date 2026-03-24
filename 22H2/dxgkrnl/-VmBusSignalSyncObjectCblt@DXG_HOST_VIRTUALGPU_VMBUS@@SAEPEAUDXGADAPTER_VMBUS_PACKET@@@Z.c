/*
 * XREFs of ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAF90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0005074 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0005324 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008DD8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B634 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_2505606457__private_IsEnabledDeviceUsage @ 0x1C0026740 (Feature_2505606457__private_IsEnabledDeviceUsage.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C003AC04 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D7ED0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D7EF4 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D80A0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0105B50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026F85C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C02927EC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObjectCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rax
  unsigned int *v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r13
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r12d
  unsigned int v18; // r14d
  __int64 Pool2; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  const unsigned int *v25; // r15
  const UINT64 *v26; // r14
  char v27; // r12
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // r9d
  unsigned int v34; // r11d
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // r15
  UINT v45; // eax
  struct _KTHREAD **v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct DXGDEVICE *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *Global; // rax
  __int64 v55; // rdx
  __int64 v57; // [rsp+68h] [rbp-A0h] BYREF
  struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *v58; // [rsp+70h] [rbp-98h] BYREF
  __int64 v59; // [rsp+78h] [rbp-90h] BYREF
  struct DXGDEVICE *v60[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v61[24]; // [rsp+90h] [rbp-78h] BYREF
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v62; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v63[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v64[160]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v63,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v57 = 3221225485LL;
    v6 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((v1 + 40) & -(__int64)(v1 != 0));
    v8 = v6;
    if ( !v6 )
      goto LABEL_67;
    v58 = 0LL;
    v9 = v6[6];
    if ( !(_DWORD)v9 && (v6[7] & 2) == 0 || (unsigned int)v9 > 0xFFFF )
    {
      v10 = WdLogNewEntry5_WdError(v9, v7);
      v11 = v8[6];
LABEL_61:
      *(_QWORD *)(v10 + 24) = v11;
      goto LABEL_62;
    }
    v12 = v6[12];
    if ( !(_DWORD)v12 || (v6[7] & 2) != 0 )
    {
      v15 = v6[8];
      v13 = 0;
      if ( !v15 || v15 > 0xFFFF )
      {
        v10 = WdLogNewEntry5_WdError(v9, v12);
        v11 = v8[8];
        goto LABEL_61;
      }
    }
    else
    {
      v13 = 1;
      if ( v6[8] )
      {
        v14 = WdLogNewEntry5_WdError(v9, v12);
        *(_QWORD *)(v14 + 24) = 1082LL;
LABEL_12:
        v10 = v14;
LABEL_62:
        WdLogEvent5_WdError(v10);
        goto LABEL_63;
      }
      HIDWORD(v57) = v6[12];
      v15 = 0;
    }
    v16 = *(unsigned int *)(v1 + 128);
    v17 = 8 * v9;
    v18 = 4 * (v9 + v15) + 56;
    if ( (unsigned int)v16 < v18 )
      goto LABEL_63;
    if ( (v8[7] & 2) != 0 )
    {
      if ( !*((_QWORD *)v8 + 6) )
      {
        v14 = WdLogNewEntry5_WdError(v9, v16);
        *(_QWORD *)(v14 + 24) = 1108LL;
        goto LABEL_12;
      }
      Pool2 = ExAllocatePool2(64LL, 56LL, 1265072196LL);
      v58 = (struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)Pool2;
      if ( !Pool2 )
      {
        v23 = WdLogNewEntry5_WdLowResource(v20, 0LL, v21, v22);
        *(_QWORD *)(v23 + 24) = 1114LL;
        WdLogEvent5_WdLowResource(v23);
        LODWORD(v57) = -1073741801;
        goto LABEL_64;
      }
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 104LL) + 128LL;
      *((_BYTE *)v58 + 16) = 1;
      *((_BYTE *)v58 + 19) = 1;
      *((_QWORD *)v58 + 1) = *((_QWORD *)v8 + 6);
      DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::AcquireReference(v58);
      v9 = v8[6];
      LODWORD(v16) = *(_DWORD *)(v1 + 128);
    }
    v24 = (unsigned int)v16 - v18;
    v25 = &v8[(unsigned int)v9 + 14];
    if ( (unsigned int)v24 >= v17 )
      v26 = (const UINT64 *)&v25[v8[8]];
    else
      v26 = 0LL;
    v27 = 0;
    if ( v13 )
    {
      v44 = v8[12];
      v62.ObjectCount = v8[6];
      v45 = v8[7];
      v62.ObjectHandleArray = v8 + 14;
      v46 = *(struct _KTHREAD ***)(v1 + 88);
      v62.Flags.Value = v45;
      *((_DWORD *)&v62.Flags + 1) = 0;
      v62.hDevice = v44;
      v62.FenceValueArray = v26;
      v60[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, (unsigned int)v44, v46, v60);
      v49 = v60[0];
      if ( v60[0] )
      {
        DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v60, v60[0]);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v49, 0, v51, 0);
        LODWORD(v57) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v64, 0LL);
        if ( (int)v57 >= 0 )
        {
          Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v53, v52);
          DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v61, Global, 0);
          if ( (unsigned int)Feature_2505606457__private_IsEnabledDeviceUsage() )
            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v61, v55);
          LODWORD(v57) = SignalSynchronizationObjectFromCpu(&v62, *(struct DXGPROCESS **)(v1 + 88), v49);
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v61);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v60);
      }
      else
      {
        v50 = WdLogNewEntry5_WdError(v48, v47);
        *(_QWORD *)(v50 + 24) = v44;
        *(_QWORD *)(v50 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v50);
      }
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59);
LABEL_63:
      if ( (int)v57 >= 0 )
      {
LABEL_66:
        VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v57, 4u);
        v4 = 1;
        goto LABEL_67;
      }
LABEL_64:
      HandleAsyncCommandError((_QWORD *)v1, (unsigned int)v57, HIDWORD(v57), 0);
      if ( v58 )
        DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::ReleaseReference(v58);
      goto LABEL_66;
    }
    v28 = *(_QWORD *)(v1 + 88);
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdError(v9, v24);
      *(_QWORD *)(v29 + 24) = PsGetCurrentProcess();
      v30 = v29;
LABEL_29:
      WdLogEvent5_WdError(v30);
      goto LABEL_64;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v61, *(struct _KTHREAD ***)(v1 + 88));
    v33 = *v25;
    v34 = *(_DWORD *)(v28 + 256);
    v35 = (*v25 >> 6) & 0xFFFFFF;
    if ( v35 < v34 )
    {
      v60[0] = *(struct DXGDEVICE **)(v28 + 240);
      v31 = *((unsigned int *)v60[0] + 4 * v35 + 2);
      v32 = (v33 >> 25) & 0x60;
      if ( ((v33 >> 25) & 0x60) == (*((_BYTE *)v60[0] + 16 * v35 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        v31 &= 0x1Fu;
        if ( (_BYTE)v31 == 7 )
        {
          v36 = *((_QWORD *)v60[0] + 2 * v35);
          if ( v36 )
          {
            HIDWORD(v57) = *(_DWORD *)(*(_QWORD *)(v36 + 16) + 436LL);
            goto LABEL_46;
          }
        }
      }
      if ( v35 < v34 )
      {
        v31 = v35;
        v37 = *(_QWORD *)(v28 + 240);
        v32 = *(unsigned int *)(v37 + 16LL * (unsigned int)v31 + 8);
        if ( ((v33 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16LL * (unsigned int)v31 + 8) & 0x60)
          && (v32 & 0x2000) == 0
          && (v32 & 0x1F) != 0 )
        {
          v31 *= 2LL;
          v32 &= 0x1Fu;
          if ( (_BYTE)v32 == 15 )
          {
            v40 = *(_QWORD *)(v37 + 8 * v31);
            if ( v40 )
            {
              v27 = 1;
              HIDWORD(v57) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 16) + 16LL) + 436LL);
LABEL_46:
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
              if ( v27 )
              {
                if ( !v26 )
                {
                  v30 = WdLogNewEntry5_WdError(v42, v41);
                  *(_QWORD *)(v30 + 24) = 1209LL;
                  goto LABEL_29;
                }
                v43 = SubmitSignalSyncObjectsToHwQueue(
                        v8[6],
                        v8 + 14,
                        (struct _D3DDDICB_SIGNALFLAGS)v8[7],
                        v8[8],
                        v25,
                        v26,
                        *(struct DXGPROCESS **)(v1 + 88),
                        0,
                        0);
              }
              else
              {
                v43 = SignalSynchronizationObjectInternal(
                        v8[6],
                        v8 + 14,
                        (struct _D3DDDICB_SIGNALFLAGS)v8[7],
                        v8[8],
                        v25,
                        v26,
                        *((_QWORD *)v8 + 5),
                        (void *const *)&v58,
                        *(struct DXGPROCESS **)(v1 + 88),
                        0,
                        0);
              }
              LODWORD(v57) = v43;
              goto LABEL_63;
            }
          }
          else
          {
            v38 = WdLogNewEntry5_WdError(v32, v31);
            *(_QWORD *)(v38 + 24) = 316LL;
            WdLogEvent5_WdError(v38);
          }
        }
      }
    }
    v39 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v39 + 24) = *v25;
    WdLogEvent5_WdError(v39);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
    goto LABEL_63;
  }
  v5 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v5 + 24) = 1065LL;
  WdLogEvent5_WdError(v5);
LABEL_67:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
  return v4;
}
