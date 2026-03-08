/*
 * XREFs of ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AF50
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
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??0CDriverStoreCopy@@QEAA@XZ @ 0x1C0305C28 (--0CDriverStoreCopy@@QEAA@XZ.c)
 *     ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1C0307860 (-GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03078F8 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetNextHardLink(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdi
  char v3; // bl
  CDriverStoreCopy *v4; // rax
  CDriverStoreCopy *v5; // rax
  DXGPUSHLOCK *v7[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v8; // [rsp+68h] [rbp-A0h]
  DXGPUSHLOCK *v9[2]; // [rsp+70h] [rbp-98h] BYREF
  int v10; // [rsp+80h] [rbp-88h]
  _DWORD v11[264]; // [rsp+88h] [rbp-80h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v9[1]);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v10 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)(v2 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v7[1]);
    v8 = 2;
    memset(v11, 0, 0x41CuLL);
    if ( *(_BYTE *)(v2 + 153) )
    {
      v11[0] = -1073741811;
LABEL_10:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v11, 0x41Cu);
      v3 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
      goto LABEL_11;
    }
    if ( !*(_QWORD *)(v2 + 336) )
    {
      v4 = (CDriverStoreCopy *)operator new[](0x658uLL, 0x4B677844u, 256LL);
      if ( v4 )
      {
        v5 = CDriverStoreCopy::CDriverStoreCopy(v4);
        *(_QWORD *)(v2 + 336) = v5;
        if ( v5 )
        {
          CDriverStoreCopy::InitializeSystem32Links(v5, *(struct DXGADAPTER **)(v2 + 16));
          goto LABEL_9;
        }
      }
      else
      {
        *(_QWORD *)(v2 + 336) = 0LL;
      }
      v11[0] = -1073741801;
      goto LABEL_10;
    }
LABEL_9:
    CDriverStoreCopy::GetNextHardLink(
      *(CDriverStoreCopy **)(v2 + 336),
      (struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *)v11);
    goto LABEL_10;
  }
  WdLogSingleEntry1(2LL, 5752LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5752LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v3;
}
