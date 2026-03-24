/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C490
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00050D8 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0005324 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_611095865__private_IsEnabledDeviceUsage @ 0x1C0026794 (Feature_611095865__private_IsEnabledDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00269D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027F70C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct _KTHREAD **Current; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGPROCESS *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct DXGCONTEXT *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r9
  char *v31; // rcx
  unsigned int v32; // r8d
  struct tagRECT v33; // xmm1
  unsigned int v34; // edx
  int v35; // eax
  char *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v41; // [rsp+40h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGDEVICE *v45[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v46[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v47; // [rsp+88h] [rbp-80h]
  char v48; // [rsp+90h] [rbp-78h]
  _BYTE v49[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v50[8]; // [rsp+A8h] [rbp-60h] BYREF
  DXGPUSHLOCK *v51; // [rsp+B0h] [rbp-58h]
  int v52; // [rsp+B8h] [rbp-50h]
  struct tagRECT v53; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v54; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v55[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v56[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v57[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v51);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v52 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v10 = v7;
    if ( !v7 )
      goto LABEL_26;
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
    v12 = 16LL * *(unsigned int *)(v7 + 72);
    if ( v12 > 0xFFFFFFFF
      || (v13 = (unsigned int)(v12 + 80), (unsigned int)v12 >= 0xFFFFFFB0)
      || (v14 = (unsigned int)(v13 + *(_DWORD *)(v10 + 76)), (unsigned int)v14 < (unsigned int)v13)
      || (unsigned int)v14 > *((_DWORD *)a1 + 22) )
    {
      LODWORD(v42) = -1073741811;
      goto LABEL_25;
    }
    v45[0] = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v13, v14, v8, v9);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, *(unsigned int *)(v10 + 24), Current, v45);
    v18 = v45[0];
    if ( !v45[0] )
    {
      v19 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v19 + 24) = *(unsigned int *)(v10 + 24);
      WdLogEvent5_WdError(v19);
      LODWORD(v42) = -1073741811;
LABEL_10:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44);
LABEL_25:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v42, 4u);
      v5 = 1;
      goto LABEL_26;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49, v45[0]);
    v43 = 0LL;
    v24 = DXGPROCESS::GetCurrent(v21, v20, v22, v23);
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, *(_DWORD *)(v10 + 28), v24, &v43, 0);
    if ( v43 )
    {
      if ( !(unsigned int)Feature_611095865__private_IsEnabledDeviceUsage() || *((struct DXGDEVICE **)v43 + 2) == v18 )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v43 + 464));
        v47 = v11;
        v48 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v18, 0, v30, 0);
        LODWORD(v42) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
        if ( (int)v42 >= 0 )
        {
          v32 = *(_DWORD *)(v10 + 36);
          v33 = *(struct tagRECT *)(v10 + 40);
          v34 = *(_DWORD *)(v10 + 32);
          v41 = *(_DWORD *)(v10 + 72);
          v53 = *(struct tagRECT *)(v10 + 56);
          v54 = v33;
          v35 = DXGCONTEXT::BltFromVm(
                  v43,
                  v34,
                  v32,
                  0,
                  &v43,
                  &v54,
                  &v53,
                  v41,
                  (const struct tagRECT *)(v10 + 80),
                  (struct COREDEVICEACCESS *)v55);
          v36 = (char *)v43 + 464;
          LODWORD(v42) = v35;
          *((_QWORD *)v43 + 59) = 0LL;
          ExReleasePushLockExclusiveEx(v36, 0LL);
          KeLeaveCriticalRegion();
          if ( (int)v42 < 0 )
          {
            v39 = WdLogNewEntry5_WdError(v38, v37);
            *(_QWORD *)(v39 + 24) = (int)v42;
            WdLogEvent5_WdError(v39);
          }
        }
        else
        {
          v31 = (char *)v43 + 464;
          *((_QWORD *)v43 + 59) = 0LL;
          ExReleasePushLockExclusiveEx(v31, 0LL);
          KeLeaveCriticalRegion();
        }
        COREACCESS::~COREACCESS((COREACCESS *)v57);
        COREACCESS::~COREACCESS((COREACCESS *)v56);
        if ( v48 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
        goto LABEL_14;
      }
      v27 = WdLogNewEntry5_WdError(v43, v29);
      v28 = v43;
      *(_QWORD *)(v27 + 32) = v18;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v26, v25);
      v28 = (struct DXGCONTEXT *)*(unsigned int *)(v10 + 24);
    }
    *(_QWORD *)(v27 + 24) = v28;
    WdLogEvent5_WdError(v27);
    LODWORD(v42) = -1073741811;
LABEL_14:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    goto LABEL_10;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 1686LL;
  WdLogEvent5_WdError(v6);
LABEL_26:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
  return v5;
}
