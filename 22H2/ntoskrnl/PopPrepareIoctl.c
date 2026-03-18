/*
 * XREFs of PopPrepareIoctl @ 0x140802380
 * Callers:
 *     PopThermalWorker @ 0x140801D90 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140802170 (PopFanWorker.c)
 *     PopBatteryInitialize @ 0x1409953C8 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140995558 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1409955E0 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x140995764 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x140995BC4 (PopBatteryWaitTag.c)
 * Callees:
 *     IoReuseIrp @ 0x1402902B0 (IoReuseIrp.c)
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
