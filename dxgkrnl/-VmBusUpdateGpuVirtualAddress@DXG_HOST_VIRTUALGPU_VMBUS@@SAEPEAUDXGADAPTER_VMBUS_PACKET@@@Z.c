/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390500
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AE54 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGP.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C02D7690 (DxgkUpdateGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  int updated; // eax
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  _BYTE v11[8]; // [rsp+58h] [rbp+7h] BYREF
  DXGPUSHLOCK *v12; // [rsp+60h] [rbp+Fh]
  int v13; // [rsp+68h] [rbp+17h]
  _DWORD v14[4]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  __int128 v16; // [rsp+88h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+47h]
  int v18; // [rsp+A0h] [rbp+4Fh]
  int v19; // [rsp+A4h] [rbp+53h]
  int v20; // [rsp+B8h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v12);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v13 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS>((__int64)a1);
    v5 = v4;
    if ( v4 )
    {
      v19 = 0;
      v16 = 0LL;
      v17 = *(_QWORD *)(v4 + 24);
      v18 = *(_DWORD *)(v4 + 48);
      v14[1] = *(_DWORD *)(v4 + 36);
      v14[0] = *(_DWORD *)(v4 + 32);
      v14[2] = *(_DWORD *)(v4 + 40);
      v14[3] = *(_DWORD *)(v4 + 44);
      v15 = v4 + 56;
      v6 = *(unsigned int *)(v4 + 44);
      if ( (_DWORD)v6 && (v7 = ((unsigned __int64)*((unsigned int *)a1 + 36) - 120) >> 6, v7 >= (unsigned int)(v6 - 1)) )
      {
        updated = DxgkUpdateGpuVirtualAddress((__int64)v14, v7, v6);
      }
      else
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 44));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid NumOperations: 0x%I64x",
          *(unsigned int *)(v5 + 44),
          0LL,
          0LL,
          0LL,
          0LL);
        updated = -1073741811;
      }
      v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v20 = updated;
      VmBusCompletePacket(v9, &v20, 4u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 5437LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5437LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v3;
}
