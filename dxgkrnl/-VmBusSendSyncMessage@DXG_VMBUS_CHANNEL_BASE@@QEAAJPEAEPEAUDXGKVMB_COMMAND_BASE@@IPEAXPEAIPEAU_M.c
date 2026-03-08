/*
 * XREFs of ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8
 * Callers:
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0380414 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C038262C (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 *     ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0382990 (-VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0383844 (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C038391C (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0383ABC (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0383B88 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0386C24 (-VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0386CF0 (-VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C0387414 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C038787C (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1C0387AD4 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C038860C (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x1C038C0EC (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C038C228 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0053D58 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005778C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C005A2B0 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        struct _KTHREAD **this,
        unsigned __int8 *a2,
        struct DXGKVMB_COMMAND_BASE *a3,
        unsigned int a4,
        char *a5,
        unsigned int *a6)
{
  char v6; // r13
  char *v8; // r14
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdi
  unsigned int v14; // eax
  signed __int64 v15; // rcx
  bool v16; // zf
  const EVENT_DESCRIPTOR *v17; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  const EVENT_DESCRIPTOR *v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // [rsp+28h] [rbp-89h]
  __int64 v28; // [rsp+28h] [rbp-89h]
  __int64 v29; // [rsp+30h] [rbp-81h]
  unsigned int v30; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-5Dh]
  int v32; // [rsp+58h] [rbp-59h] BYREF
  __int64 v33; // [rsp+60h] [rbp-51h]
  char v34; // [rsp+68h] [rbp-49h]
  unsigned __int8 *v35; // [rsp+70h] [rbp-41h]
  void *v36; // [rsp+78h] [rbp-39h]
  _BYTE v37[8]; // [rsp+80h] [rbp-31h] BYREF
  DXGPUSHLOCK *v38; // [rsp+88h] [rbp-29h]
  int v39; // [rsp+90h] [rbp-21h]
  char v40; // [rsp+98h] [rbp-19h] BYREF

  v32 = -1;
  v6 = 0;
  v8 = a5;
  v31 = a4;
  v35 = a2;
  v36 = a5;
  v33 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 2136);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2136);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v38);
  v39 = 1;
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry1(1LL, 15009LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"CommandSize >= sizeof(DXGKVMB_COMMAND_VGPU_TO_HOST)",
      15009LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a6 )
    v12 = *a6;
  else
    v12 = 0;
  LODWORD(v13) = -1073741823;
  v30 = v12;
  if ( !this[1] )
  {
    LODWORD(v13) = -1073741130;
    goto LABEL_48;
  }
  if ( v31 - 24 <= 0x1FFE7 && v12 < 0x20000 )
  {
    if ( (v12 & 7) != 0 )
    {
      v14 = (v12 + 7) & 0xFFFFFFF8;
      v30 = v14;
      if ( v14 < v12 )
      {
        LODWORD(v13) = -1073741811;
        goto LABEL_42;
      }
      v8 = (char *)operator new[](v14, 0x4B677844u, 64LL);
      if ( !v8 )
      {
        LODWORD(v13) = -1073741801;
        goto LABEL_42;
      }
      v6 = 1;
    }
    else if ( !v12 )
    {
      v8 = &v40;
      v30 = 8;
    }
    v15 = _InterlockedIncrement64(&qword_1C013D3A0);
    v16 = bTracingEnabled == 0;
    *(_QWORD *)a3 = v15;
    if ( !v16 )
    {
      if ( *((_BYTE *)a3 + 12) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
          goto LABEL_29;
        v17 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
          goto LABEL_29;
        v17 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
      }
      LODWORD(v27) = *((_DWORD *)a3 + 4);
      McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v17, v11, this[1], v15, v27);
    }
LABEL_29:
    v13 = (int)((__int64 (__fastcall *)(struct _KTHREAD *, unsigned __int8 *, _QWORD, _QWORD, int, char *, unsigned int *, _QWORD))qword_1C013CEC0)(
                 this[1],
                 v35,
                 v31,
                 0LL,
                 1,
                 v8,
                 &v30,
                 0LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( !bTracingEnabled )
      goto LABEL_36;
    if ( *((_BYTE *)a3 + 12) == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_36;
      v21 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_36;
      v21 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
    }
    LODWORD(v29) = v13;
    LODWORD(v28) = *((_DWORD *)a3 + 4);
    McTemplateK0pxqt_EtwWriteTransfer(v19, v21, v20, this[1], *(_QWORD *)a3, v28, v29);
LABEL_36:
    if ( (int)v13 >= 0 )
    {
      if ( v6 )
      {
        v22 = v30;
        if ( v12 < v30 )
          v22 = v12;
        memmove(v36, v8, v22);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmbChannelSendSynchronousRequest failed: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
LABEL_42:
  if ( a6 )
  {
    v23 = 0;
    if ( (int)v13 >= 0 )
      v23 = v30;
    *a6 = v23;
  }
  if ( v6 )
    operator delete(v8);
LABEL_48:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 )
  {
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v32);
  }
  return (unsigned int)v13;
}
