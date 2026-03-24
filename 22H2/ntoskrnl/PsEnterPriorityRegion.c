/*
 * XREFs of PsEnterPriorityRegion @ 0x1402F2A60
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402CDF90 (PsBoostThreadIoEx.c)
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}
