/*
 * XREFs of ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C005A92C (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??0CDriverStoreCopy@@QEAA@XZ @ 0x1C0305C28 (--0CDriverStoreCopy@@QEAA@XZ.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0307228 (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0307B34 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0308230 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1C039485C (DpiGetDriverStorePath.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  CDriverStoreCopy *v7; // rax
  CDriverStoreCopy *v8; // rax
  int v9; // eax
  CDriverStoreCopy *v10; // rcx
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+68h] [rbp-98h]
  _BYTE v16[8]; // [rsp+70h] [rbp-90h] BYREF
  DXGPUSHLOCK *v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+80h] [rbp-80h]
  _DWORD v19[148]; // [rsp+90h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v17);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v18 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v4 )
      goto LABEL_25;
    v5 = *((_QWORD *)a1 + 10);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(v5 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v14);
    v15 = 2;
    memset(v19, 0, 0x248uLL);
    if ( *(_BYTE *)(v5 + 153) )
    {
      WdLogSingleEntry1(3LL, 5691LL);
      v19[4] = -1073741790;
LABEL_24:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v19, 0x248u);
      v3 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      goto LABEL_25;
    }
    if ( *(_BYTE *)(v4 + 24) )
    {
LABEL_21:
      v10 = *(CDriverStoreCopy **)(v5 + 336);
      if ( v10 )
        CDriverStoreCopy::`scalar deleting destructor'(v10);
      *(_QWORD *)(v5 + 336) = 0LL;
      goto LABEL_24;
    }
    v6 = *(_QWORD *)(v5 + 16);
    v12 = 520;
    v19[4] = DpiGetDriverStorePath(*(_QWORD *)(v6 + 216), &v19[15], &v12);
    if ( v19[4] < 0 )
      goto LABEL_24;
    v19[4] = 0;
    if ( !*(_QWORD *)(v5 + 336) )
    {
      v7 = (CDriverStoreCopy *)operator new[](0x658uLL, 0x4B677844u, 256LL);
      if ( v7 )
      {
        v8 = CDriverStoreCopy::CDriverStoreCopy(v7);
        *(_QWORD *)(v5 + 336) = v8;
        if ( v8 )
        {
          HIWORD(v19[144]) = 0;
          CDriverStoreCopy::SetRootDirectory(
            *(CDriverStoreCopy **)(v5 + 336),
            *(struct DXGADAPTER **)(v5 + 16),
            (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v19);
          v9 = v19[4];
          LOWORD(v19[15]) = 0;
          if ( v19[4] < 0 )
            goto LABEL_20;
          goto LABEL_12;
        }
      }
      else
      {
        *(_QWORD *)(v5 + 336) = 0LL;
      }
      v19[4] = -1073741801;
      goto LABEL_24;
    }
LABEL_12:
    CDriverStoreCopy::EnumDirectory(
      *(CDriverStoreCopy **)(v5 + 336),
      (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v19);
    while ( 1 )
    {
      v9 = v19[4];
      if ( v19[4] != -2147483642 )
        break;
      if ( !CDriverStoreCopy::ProcessNextDirectory(
              *(CDriverStoreCopy **)(v5 + 336),
              (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v19) )
      {
        v9 = v19[4];
        break;
      }
    }
    if ( v9 >= 0 )
      goto LABEL_24;
LABEL_20:
    if ( v9 == -2147483642 )
      goto LABEL_24;
    goto LABEL_21;
  }
  WdLogSingleEntry1(2LL, 5679LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5679LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
