/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C00334E0
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C007D8B0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007DF08 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
