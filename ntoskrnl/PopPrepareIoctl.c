/*
 * XREFs of PopPrepareIoctl @ 0x140846A50
 * Callers:
 *     PopThermalWorker @ 0x140846460 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140846840 (PopFanWorker.c)
 *     PopBatteryInitialize @ 0x140992318 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1409924A8 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x140992530 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1409926B4 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x140992B14 (PopBatteryWaitTag.c)
 * Callees:
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 */

__int64 __fastcall PopPrepareIoctl(IRP *a1, ULONG a2, char a3, struct _IRP *a4, ULONG a5, ULONG a6)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 result; // rax

  IoReuseIrp(a1, -1073741637);
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = (a3 != 0) + 14;
  CurrentStackLocation[-1].Parameters.Create.Options = a5;
  result = a6;
  CurrentStackLocation[-1].Parameters.Read.Length = a6;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  a1->AssociatedIrp.MasterIrp = a4;
  return result;
}
