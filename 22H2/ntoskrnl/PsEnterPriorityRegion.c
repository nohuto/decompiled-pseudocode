/*
 * XREFs of PsEnterPriorityRegion @ 0x14033BF50
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}
