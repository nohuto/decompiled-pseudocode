/*
 * XREFs of PsLeavePriorityRegion @ 0x140339930
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 */

void PsLeavePriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
}
