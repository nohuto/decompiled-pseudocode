/*
 * XREFs of PopShutdownSystem @ 0x140AA5DA4
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053D15C (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x140549918 (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x1405A5410 (DbgUnLoadImageSymbols.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140A9D8B4 (PopSetMemoryOverwriteRequestAction.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     PopNotifyShutdownListener @ 0x140AA5D2C (PopNotifyShutdownListener.c)
 */

void __fastcall __noreturn PopShutdownSystem(int a1)
{
  int v2; // ebx
  int v3; // ebx

  PopNotifyShutdownListener();
  VslNotifyShutdown(0);
  if ( HvlHypervisorConnected )
    HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols();
  if ( (PopSimulate & 0x800) == 0 || ((a1 - 4) & 0xFFFFFFFD) != 0 )
  {
    v2 = a1 - 4;
    if ( !v2 )
    {
      if ( PopShutdownPowerOffPolicy )
        qword_140C3D688 = (__int64)PopShutdownHandler;
      goto LABEL_12;
    }
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
LABEL_13:
        HalReturnToFirmware(3);
LABEL_12:
      PopInvokeSystemStateHandler(4, 0LL);
      HalReturnToFirmware(1);
    }
  }
  PopInvokeSystemStateHandler(5, 0LL);
  goto LABEL_13;
}
