/*
 * XREFs of PopShutdownSystem @ 0x140AA8FD4
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140506A70 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053F5FC (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14054BDB8 (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x1405A78A0 (DbgUnLoadImageSymbols.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140AA0A6C (PopSetMemoryOverwriteRequestAction.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     PopNotifyShutdownListener @ 0x140AA8F5C (PopNotifyShutdownListener.c)
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
        qword_140C3DA68 = (__int64)PopShutdownHandler;
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
