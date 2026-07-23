/*
 * XREFs of PopShutdownSystem @ 0x1409B3554
 * Callers:
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x1404BE3E0 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404F176C (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x1404FCEE4 (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x140585840 (DbgUnLoadImageSymbols.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x1409B1DDC (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x1409B34F0 (PopNotifyShutdownListener.c)
 */

void __fastcall __noreturn PopShutdownSystem(int a1)
{
  int v2; // ebx
  int v3; // ebx

  PopNotifyShutdownListener();
  VslNotifyShutdown(0);
  HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  if ( (PopSimulate & 0x800) != 0 && ((a1 - 4) & 0xFFFFFFFD) == 0 )
    a1 = 5;
  v2 = a1 - 4;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      PopInvokeSystemStateHandler(5, 0LL);
      goto LABEL_12;
    }
    if ( v3 != 1 )
LABEL_12:
      HalReturnToFirmware(3);
  }
  else if ( PopShutdownPowerOffPolicy )
  {
    qword_140C231E8 = (__int64)PopShutdownHandler;
  }
  PopInvokeSystemStateHandler(4, 0LL);
  HalReturnToFirmware(1);
}
