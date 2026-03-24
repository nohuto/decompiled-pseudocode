/*
 * XREFs of AssociateKernelIocpWcp @ 0x1C0044660
 * Callers:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00445D4 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall AssociateKernelIocpWcp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  int v7; // edx
  int v8; // ebx

  v8 = ZwAssociateWaitCompletionPacket(a1, a2, a3, a4, a5, a6, 0LL, a7);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      17,
      14,
      (__int64)&WPP_eb65e8752d313ccdb5208ac13de848c5_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
