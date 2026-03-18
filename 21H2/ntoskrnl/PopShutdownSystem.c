/*
 * XREFs of PopShutdownSystem @ 0x140A6BE04
 * Callers:
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405430DC (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14054ED18 (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x1405E4210 (DbgUnLoadImageSymbols.c)
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140A6AE00 (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x140A6BDA0 (PopNotifyShutdownListener.c)
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
      if ( (_BYTE)PopShutdownPowerOffPolicy )
        qword_140C233A8 = (__int64)PopShutdownHandler;
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
