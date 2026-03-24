/*
 * XREFs of PsLeavePriorityRegion @ 0x1402F12F0
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402CDF90 (PsBoostThreadIoEx.c)
 */

void PsLeavePriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
}
