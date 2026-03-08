/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037BB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0186BD8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // r14
  struct ADAPTER_RENDER **v5; // r12
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r13
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v14; // rdx
  char v15; // al
  int v16; // ecx
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v20[16]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v21[8]; // [rsp+80h] [rbp-88h] BYREF
  DXGPUSHLOCK *v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  _BYTE v24[144]; // [rsp+98h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v23 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v4 )
      goto LABEL_22;
    v5 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 10) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, (struct DXGADAPTER *const)v5, 0LL);
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
    if ( v18 < 0 )
    {
LABEL_21:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v18, 4u);
      v3 = 1;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
      goto LABEL_22;
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v20);
    v7 = *((_QWORD *)a1 + 11);
    v8 = *(_DWORD *)(v4 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 248));
    v9 = (v8 >> 6) & 0xFFFFFF;
    if ( v9 < *(_DWORD *)(v7 + 296) )
    {
      v10 = *(_QWORD *)(v7 + 280);
      if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
        && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
      {
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
        if ( v11 )
        {
          if ( v11 == 8 )
          {
            v12 = *(_QWORD *)(v10 + 16LL * v9);
            goto LABEL_12;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v12 = 0LL;
LABEL_12:
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 264));
    ExReleasePushLockSharedEx(v7 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v12 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v12, v5[366]);
      v15 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 872LL))(VidSchSyncObject);
      v16 = v18;
      if ( !v15 )
        v16 = -1071775484;
      v18 = v16;
      if ( v19[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    }
    else
    {
      WdLogSingleEntry2(2LL, v7, *(unsigned int *)(v4 + 24));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
        v7,
        *(unsigned int *)(v4 + 24),
        0LL,
        0LL,
        0LL);
      v18 = -1073741811;
    }
    if ( v20[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v20);
    goto LABEL_21;
  }
  WdLogSingleEntry1(2LL, 4293LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4293LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v3;
}
