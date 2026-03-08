/*
 * XREFs of ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03906B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC44 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _lambda_c820ae13d6b077cc6710fe5fbb8b13a3_::operator() @ 0x1C036D794 (_lambda_c820ae13d6b077cc6710fe5fbb8b13a3_--operator().c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusUpdateMonitorMapping(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  v6 = v1;
  if ( v1 )
  {
    v3[0] = (__int64 *)&v4;
    v3[1] = &v6;
    v5 = lambda_c820ae13d6b077cc6710fe5fbb8b13a3_::operator()(v3);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v4 + 16), &v5, 4u);
    LOBYTE(v1) = 1;
  }
  return v1;
}
