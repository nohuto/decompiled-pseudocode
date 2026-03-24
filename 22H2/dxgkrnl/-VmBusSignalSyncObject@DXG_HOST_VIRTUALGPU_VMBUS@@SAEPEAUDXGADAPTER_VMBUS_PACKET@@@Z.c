/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0005074 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008DD8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     Feature_2505606457__private_IsEnabledDeviceUsage @ 0x1C0026740 (Feature_2505606457__private_IsEnabledDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0105B50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026F85C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C02927EC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // r13
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r14d
  _QWORD *PoolWithTag; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // r15
  unsigned __int64 *v26; // r14
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r9d
  unsigned int v37; // r11d
  unsigned int v38; // r8d
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // r15
  UINT v47; // eax
  struct _KTHREAD **v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct DXGDEVICE *v51; // rbx
  __int64 v52; // rax
  struct DXGDEVICE *v53; // rax
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  PERESOURCE *Global; // rax
  __int64 v58; // rdx
  char v60; // [rsp+68h] [rbp-A0h]
  int v61; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct DXGDEVICE *v62; // [rsp+70h] [rbp-98h] BYREF
  struct DXGDEVICE *v63; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-80h] BYREF
  char v66; // [rsp+90h] [rbp-78h]
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v67; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v68[16]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v69[8]; // [rsp+C8h] [rbp-40h] BYREF
  DXGPUSHLOCK *v70; // [rsp+D0h] [rbp-38h]
  int v71; // [rsp+D8h] [rbp-30h]
  _BYTE v72[24]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v73[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v74[64]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v75[88]; // [rsp+140h] [rbp+38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v69, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v70);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v71 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v61 = -1073741811;
    v7 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_76;
    P = 0LL;
    v10 = v7[6];
    if ( !(_DWORD)v10 && (v7[7] & 2) == 0 || (v8 = 0xFFFFLL, (unsigned int)v10 > 0xFFFF) )
    {
      v11 = WdLogNewEntry5_WdError(v10, v8);
      v12 = v9[6];
LABEL_70:
      *(_QWORD *)(v11 + 24) = v12;
      goto LABEL_71;
    }
    if ( !v7[12] || (v7[7] & 2) != 0 )
    {
      v15 = v7[8];
      v13 = 0;
      if ( !v15 || v15 > 0xFFFF )
      {
        v11 = WdLogNewEntry5_WdError(v10, 0xFFFFLL);
        v12 = v9[8];
        goto LABEL_70;
      }
    }
    else
    {
      v13 = 1;
      if ( v7[8] )
      {
        v14 = WdLogNewEntry5_WdError(v10, 0xFFFFLL);
        *(_QWORD *)(v14 + 24) = 3449LL;
LABEL_12:
        v11 = v14;
LABEL_71:
        WdLogEvent5_WdError(v11);
        goto LABEL_72;
      }
      v15 = 0;
    }
    LODWORD(v62) = 8 * v10;
    v16 = *((unsigned int *)a1 + 22);
    v17 = 4 * (v10 + v15) + 56;
    if ( (unsigned int)v16 < v17 )
      goto LABEL_72;
    if ( (v9[7] & 2) != 0 )
    {
      if ( !*((_QWORD *)v9 + 6) )
      {
        v14 = WdLogNewEntry5_WdError(v10, v16);
        *(_QWORD *)(v14 + 24) = 3474LL;
        goto LABEL_12;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
        *(_QWORD *)(v23 + 24) = 3480LL;
        WdLogEvent5_WdLowResource(v23);
        v61 = -1073741801;
        goto LABEL_73;
      }
      *(_OWORD *)PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      *((_BYTE *)P + 16) = 1;
      *(_QWORD *)P = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 104LL) + 128LL);
      *((_QWORD *)P + 1) = *((_QWORD *)v9 + 6);
      v10 = v9[6];
      LODWORD(v16) = *((_DWORD *)a1 + 22);
    }
    v24 = (unsigned int)v16 - v17;
    v25 = &v9[(unsigned int)v10 + 14];
    if ( (unsigned int)v24 >= (unsigned int)v62 )
      v26 = (unsigned __int64 *)&v25[v9[8]];
    else
      v26 = 0LL;
    v60 = 0;
    if ( !v13 )
    {
      v27 = *((_QWORD *)a1 + 6);
      if ( !v27 )
      {
        v28 = WdLogNewEntry5_WdError(v10, v24);
        *(_QWORD *)(v28 + 24) = PsGetCurrentProcess(v30, v29, v31, v32);
        v33 = v28;
LABEL_29:
        WdLogEvent5_WdError(v33);
        goto LABEL_73;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v72,
        *((struct _KTHREAD ***)a1 + 6));
      v36 = *v25;
      v37 = *(_DWORD *)(v27 + 256);
      v38 = (*v25 >> 6) & 0xFFFFFF;
      if ( v38 >= v37 )
      {
LABEL_42:
        v41 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v41 + 24) = *v25;
        WdLogEvent5_WdError(v41);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v72);
        goto LABEL_72;
      }
      v63 = *(struct DXGDEVICE **)(v27 + 240);
      v34 = *((unsigned int *)v63 + 4 * v38 + 2);
      v35 = (v36 >> 25) & 0x60;
      if ( ((v36 >> 25) & 0x60) != (*((_BYTE *)v63 + 16 * v38 + 8) & 0x60)
        || (v34 & 0x2000) != 0
        || (v34 & 0x1F) == 0
        || (v34 &= 0x1Fu, (_BYTE)v34 != 7)
        || !*((_QWORD *)v63 + 2 * v38) )
      {
        if ( v38 >= v37 )
          goto LABEL_42;
        v34 = v38;
        v39 = *(_QWORD *)(v27 + 240);
        v35 = *(unsigned int *)(v39 + 16LL * (unsigned int)v34 + 8);
        if ( ((v36 >> 25) & 0x60) != (*(_BYTE *)(v39 + 16LL * (unsigned int)v34 + 8) & 0x60)
          || (v35 & 0x2000) != 0
          || (v35 & 0x1F) == 0 )
        {
          goto LABEL_42;
        }
        v34 *= 2LL;
        v35 &= 0x1Fu;
        if ( (_BYTE)v35 != 15 )
        {
          v40 = WdLogNewEntry5_WdError(v35, v34);
          *(_QWORD *)(v40 + 24) = 316LL;
          WdLogEvent5_WdError(v40);
          goto LABEL_42;
        }
        if ( !*(_QWORD *)(v39 + 8 * v34) )
          goto LABEL_42;
        v60 = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v72);
      if ( v60 )
      {
        if ( !v26 )
        {
          v44 = WdLogNewEntry5_WdError(v43, v42);
          *(_QWORD *)(v44 + 24) = 3579LL;
LABEL_53:
          v33 = v44;
          goto LABEL_29;
        }
        v45 = SubmitSignalSyncObjectsToHwQueue(
                v9[6],
                v9 + 14,
                (struct _D3DDDICB_SIGNALFLAGS)v9[7],
                v9[8],
                v25,
                v26,
                *((struct DXGPROCESS **)a1 + 6),
                0,
                0);
      }
      else
      {
        v45 = SignalSynchronizationObjectInternal(
                v9[6],
                v9 + 14,
                (struct _D3DDDICB_SIGNALFLAGS)v9[7],
                v9[8],
                v25,
                v26,
                *((_QWORD *)v9 + 5),
                &P,
                *((struct DXGPROCESS **)a1 + 6),
                0,
                0);
      }
      v61 = v45;
      goto LABEL_72;
    }
    if ( !v26 )
    {
      v44 = WdLogNewEntry5_WdError(v10, v24);
      *(_QWORD *)(v44 + 24) = 3531LL;
      goto LABEL_53;
    }
    v46 = v9[12];
    v47 = v9[6];
    v67.hDevice = v9[12];
    *(_QWORD *)&v67.Flags.0 = 0LL;
    v67.ObjectCount = v47;
    v67.ObjectHandleArray = v9 + 14;
    v67.FenceValueArray = v26;
    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
      v67.Flags.Value = v9[7];
    v48 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    v63 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, (unsigned int)v46, v48, &v63);
    v51 = v63;
    if ( v63 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v65, v63);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, (__int64)v51, 0, v54, 0);
      v61 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v73, 0LL);
      if ( v61 >= 0 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v56, v55);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v68, Global, 0);
        if ( (unsigned int)Feature_2505606457__private_IsEnabledDeviceUsage() )
          DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v68, v58);
        v61 = SignalSynchronizationObjectFromCpu(&v67, *((struct DXGPROCESS **)a1 + 6), v51);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v68);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v75);
      COREACCESS::~COREACCESS((COREACCESS *)v74);
      if ( v65 && v66 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v65 + 136));
        KeLeaveCriticalRegion();
      }
      v53 = v62;
      if ( !v62 )
      {
LABEL_72:
        if ( v61 >= 0 )
        {
LABEL_75:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v61, 4u);
          v5 = 1;
          goto LABEL_76;
        }
LABEL_73:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_75;
      }
    }
    else
    {
      v52 = WdLogNewEntry5_WdError(v50, v49);
      *(_QWORD *)(v52 + 24) = v46;
      *(_QWORD *)(v52 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v52);
      v53 = v62;
      if ( !v62 )
        goto LABEL_73;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    goto LABEL_72;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3434LL;
  WdLogEvent5_WdError(v6);
LABEL_76:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v69);
  return v5;
}
