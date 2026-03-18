/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0393580
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0007C20 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000A8D0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0015A34 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0019220 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     Feature_1834517816__private_IsEnabledDeviceUsage @ 0x1C0026A04 (Feature_1834517816__private_IsEnabledDeviceUsage.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0042A0C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C0048EF0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C0048FC0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B804 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01CA320 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C031B6B8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0351710 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C0375A78 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  unsigned int *v4; // rax
  unsigned int *v5; // rdi
  struct _D3DDDICB_SIGNALFLAGS *v6; // r15
  __int64 v7; // rcx
  char v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  const wchar_t *v11; // r9
  unsigned int v12; // r12d
  __int64 Pool2; // rax
  __int64 v14; // rcx
  unsigned int *v15; // r13
  unsigned __int64 *v16; // r12
  struct DXGDEVICE *v17; // rax
  __int64 CurrentProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r8d
  struct DXGDEVICE *v22; // r10
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // r13
  UINT Value; // eax
  struct _KTHREAD **v34; // r8
  struct DXGDEVICE *v35; // rdi
  struct DXGDEVICE *v36; // rax
  __int64 v37; // r9
  struct DXGGLOBAL *Global; // rax
  char v40; // [rsp+58h] [rbp-B0h]
  int v41; // [rsp+5Ch] [rbp-ACh] BYREF
  struct DXGDEVICE *v42; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h]
  struct DXGDEVICE *v44; // [rsp+70h] [rbp-98h] BYREF
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v45; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v46[24]; // [rsp+80h] [rbp-88h] BYREF
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v47; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v48[16]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v49[8]; // [rsp+C8h] [rbp-40h] BYREF
  DXGPUSHLOCK *v50; // [rsp+D0h] [rbp-38h]
  int v51; // [rsp+D8h] [rbp-30h]
  _BYTE v52[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v53[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v54[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v50);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v51 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v41 = -1073741811;
    LODWORD(v43) = 0;
    v4 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v5 = v4;
    if ( !v4 )
      goto LABEL_68;
    v45 = 0LL;
    v6 = (struct _D3DDDICB_SIGNALFLAGS *)(v4 + 7);
    v7 = v4[6];
    if ( (_DWORD)v7 )
    {
      if ( (unsigned int)v7 <= 0xFFFF )
      {
LABEL_6:
        if ( !v4[12] || (v8 = 1, (v6->Value & 2) != 0) )
          v8 = 0;
        v9 = v4[8];
        v40 = v8;
        if ( v8 )
        {
          if ( (_DWORD)v9 )
          {
            WdLogSingleEntry1(2LL, 3924LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid context count for signal from CPU",
              3924LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_64;
          }
          LODWORD(v43) = v4[12];
LABEL_16:
          LODWORD(v42) = 8 * v7;
          v12 = 4 * (v7 + v9) + 56;
          if ( *((_DWORD *)a1 + 36) < v12 )
            goto LABEL_64;
          if ( (v6->Value & 2) != 0 )
          {
            if ( !*((_QWORD *)v4 + 6) )
            {
              WdLogSingleEntry1(2LL, 3950LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid CPU event pointer",
                3950LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_64;
            }
            Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
            v45 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2;
            if ( !Pool2 )
            {
              WdLogSingleEntry1(6LL, 3956LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
                3956LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v41 = -1073741801;
              goto LABEL_65;
            }
            *(_BYTE *)(Pool2 + 16) = 1;
            *(_QWORD *)v45 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
            *((_QWORD *)v45 + 1) = *((_QWORD *)v5 + 6);
            *((_BYTE *)v45 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 424LL) & 0x10) != 0;
            DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v45);
            v8 = v40;
          }
          v14 = v5[6];
          v15 = &v5[v14 + 14];
          if ( *((_DWORD *)a1 + 36) - v12 >= (unsigned int)v42 )
            v16 = (unsigned __int64 *)&v15[v5[8]];
          else
            v16 = 0LL;
          v40 = 0;
          if ( !v8 )
          {
            v17 = (struct DXGDEVICE *)*((_QWORD *)a1 + 11);
            v44 = v17;
            if ( !v17 )
            {
              CurrentProcess = PsGetCurrentProcess(v14);
              WdLogSingleEntry1(2LL, CurrentProcess);
              v20 = PsGetCurrentProcess(v19);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Unexpected Process: 0x%I64x",
                v20,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_65;
            }
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, v17);
            v21 = *v15;
            v22 = v44;
            v23 = (*v15 >> 6) & 0xFFFFFF;
            LODWORD(v42) = *((_DWORD *)v44 + 74);
            if ( v23 >= (unsigned int)v42 )
              goto LABEL_40;
            v44 = (struct DXGDEVICE *)*((_QWORD *)v44 + 35);
            if ( ((v21 >> 25) & 0x60) == (*((_BYTE *)v44 + 16 * v23 + 8) & 0x60)
              && (*((_DWORD *)v44 + 4 * v23 + 2) & 0x2000) == 0
              && (*((_DWORD *)v44 + 4 * v23 + 2) & 0x1F) == 7 )
            {
              v24 = *((_QWORD *)v44 + 2 * v23);
              if ( v24 )
              {
                v30 = *(_DWORD *)(*(_QWORD *)(v24 + 16) + 468LL);
                goto LABEL_44;
              }
              if ( v23 >= (unsigned int)v42 )
              {
LABEL_40:
                WdLogSingleEntry1(2LL, *v15);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Invalid context handle: 0x%I64x",
                  *v15,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
                goto LABEL_64;
              }
            }
            v25 = v23;
            v26 = *((_QWORD *)v22 + 35);
            v27 = 2 * v25;
            if ( ((v21 >> 25) & 0x60) != (*(_BYTE *)(v26 + 8 * v27 + 8) & 0x60) )
              goto LABEL_40;
            if ( (*(_DWORD *)(v26 + 8 * v27 + 8) & 0x2000) != 0 )
              goto LABEL_40;
            v28 = *(_DWORD *)(v26 + 8 * v27 + 8) & 0x1F;
            if ( !v28 )
              goto LABEL_40;
            if ( v28 != 15 )
            {
              WdLogSingleEntry1(2LL, 316LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_40;
            }
            v29 = *(_QWORD *)(v26 + 8 * v27);
            if ( !v29 )
              goto LABEL_40;
            v40 = 1;
            v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 468LL);
LABEL_44:
            LODWORD(v43) = v30;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
            if ( v40 )
            {
              if ( !v16 )
              {
                WdLogSingleEntry1(2LL, 4058LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Fence value array is NULL for submit signal to HwQueue",
                  4058LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_65;
              }
              v31 = SubmitSignalSyncObjectsToHwQueue(
                      v5[6],
                      v5 + 14,
                      (struct _D3DDDICB_SIGNALFLAGS)v6->0,
                      v5[8],
                      v15,
                      v16,
                      *((struct DXGPROCESS **)a1 + 11),
                      0,
                      0);
            }
            else
            {
              v31 = SignalSynchronizationObjectInternal(
                      v5[6],
                      v5 + 14,
                      v6->Value,
                      v5[8],
                      v15,
                      v16,
                      *((_QWORD *)v5 + 5),
                      (void **)&v45,
                      *((struct DXGPROCESS **)a1 + 11),
                      0);
            }
            v41 = v31;
            goto LABEL_64;
          }
          if ( !v16 )
          {
            WdLogSingleEntry1(2LL, 4013LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fence value array is NULL for signal from CPU",
              4013LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_65;
          }
          v32 = v5[12];
          Value = v6->Value;
          v34 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
          v47.ObjectCount = v14;
          v47.ObjectHandleArray = v5 + 14;
          *((_DWORD *)&v47.Flags + 1) = 0;
          v47.hDevice = v32;
          v47.FenceValueArray = v16;
          v47.Flags.Value = Value;
          v44 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v32, v34, &v44);
          v35 = v44;
          if ( v44 )
          {
            DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v46, v44);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, (__int64)v35, 0, v37, 0);
            v41 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v52, 0LL);
            if ( v41 >= 0 )
            {
              Global = DXGGLOBAL::GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48, Global, 0);
              if ( (unsigned int)Feature_1834517816__private_IsEnabledDeviceUsage() )
                DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v48);
              v41 = SignalSynchronizationObjectFromCpu(&v47, *((struct DXGPROCESS **)a1 + 11), v35);
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48);
            }
            COREACCESS::~COREACCESS((COREACCESS *)v54);
            COREACCESS::~COREACCESS((COREACCESS *)v53);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v46);
            v36 = v42;
            if ( !v42 )
            {
LABEL_64:
              if ( v41 >= 0 )
              {
LABEL_67:
                VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v41, 4u);
                v3 = 1;
                goto LABEL_68;
              }
LABEL_65:
              HandleAsyncCommandError((__int64 *)a1, v41, v43, 0);
              if ( v45 )
                DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(v45);
              goto LABEL_67;
            }
          }
          else
          {
            WdLogSingleEntry2(2LL, (unsigned int)v32, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
              v32,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v36 = v42;
            if ( !v42 )
              goto LABEL_65;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
          goto LABEL_64;
        }
        if ( (unsigned int)(v9 - 1) <= 0xFFFE )
          goto LABEL_16;
        WdLogSingleEntry1(2LL, v9);
        v10 = v5[8];
        v11 = L"Invalid context count: 0x%I64x";
LABEL_63:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_64;
      }
    }
    else if ( (v6->Value & 2) != 0 )
    {
      goto LABEL_6;
    }
    WdLogSingleEntry1(2LL, v7);
    v10 = v5[6];
    v11 = L"Invalid sync object count: 0x%I64x";
    goto LABEL_63;
  }
  WdLogSingleEntry1(2LL, 3907LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    3907LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_68:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v49);
  return v3;
}
