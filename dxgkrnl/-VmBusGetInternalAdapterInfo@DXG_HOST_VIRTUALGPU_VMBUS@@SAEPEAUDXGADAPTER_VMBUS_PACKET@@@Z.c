/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_AsyncVmBusMessages__private_ReportDeviceUsage @ 0x1C0026610 (Feature_AsyncVmBusMessages__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C0340BF4 (-IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C0371108 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  bool IsVailEnabled; // dl
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // r8d
  DXGPUSHLOCK *v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v16; // [rsp+68h] [rbp-A0h]
  _QWORD v17[89]; // [rsp+70h] [rbp-98h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v15[1]);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v16 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    memset(v17, 0, sizeof(v17));
    DXGADAPTER::FillInternalAdapterInfo(
      *(DXGADAPTER **)(v2 + 16),
      (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v17);
    HIDWORD(v17[1]) ^= (BYTE4(v17[1]) ^ *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL)) & 1;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL);
    v5 = *(_BYTE *)(v4 + 338);
    *(_BYTE *)(v4 + 338) = 0;
    HIDWORD(v17[1]) ^= (BYTE4(v17[1]) ^ (unsigned __int8)(2 * v5)) & 2;
    v6 = *((_QWORD *)a1 + 12);
    HIDWORD(v17[0]) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 2884LL);
    IsVailEnabled = DXGVIRTUALMACHINE::IsVailEnabled(*(DXGVIRTUALMACHINE **)(v6 + 608));
    v8 = *((_QWORD *)a1 + 12);
    v9 = HIDWORD(v17[1]) ^ (BYTE4(v17[1]) ^ (unsigned __int8)(4 * IsVailEnabled)) & 4;
    HIDWORD(v17[1]) = v9;
    v10 = *(_QWORD *)(v8 + 608);
    v11 = *(_DWORD *)(v10 + 392);
    if ( v11 >= 0x21 )
      HIDWORD(v17[1]) = v9 & 0xFFFFFFDF | (*(_QWORD *)(v10 + 272) != 0LL ? 0x20 : 0);
    if ( v11 >= 0x28 )
    {
      Feature_AsyncVmBusMessages__private_ReportDeviceUsage();
      v12 = *((_QWORD *)a1 + 13);
      HIDWORD(v17[1]) |= 0x40u;
      *(_BYTE *)(v12 + 339) = 1;
    }
    v17[88] = *(_QWORD *)(*((_QWORD *)a1 + 10) + 28LL);
    if ( v11 > 0x10 )
      v13 = v11 < 0x22 ? 704 : 712;
    else
      v13 = 24;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v17, v13);
    v3 = 1;
  }
  else
  {
    WdLogSingleEntry1(2LL, 5134LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5134LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v3;
}
