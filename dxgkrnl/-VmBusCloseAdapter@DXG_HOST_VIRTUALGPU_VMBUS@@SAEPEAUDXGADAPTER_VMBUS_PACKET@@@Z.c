/*
 * XREFs of ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0375310
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01B7C70 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCloseAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edx
  _BYTE v7[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 24) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
      DXGPUSHLOCK::AcquireExclusive(v8);
      v4 = *((_QWORD *)a1 + 10);
      v5 = *(_DWORD *)(v3 + 24);
      v9 = 2;
      DXGADAPTER::DestroyHandle(*(struct DXGPROCESS **)(v4 + 96), v5);
      *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) = 0;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
    }
    else
    {
      WdLogSingleEntry1(2LL, 5621LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid adapter handle", 5621LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
