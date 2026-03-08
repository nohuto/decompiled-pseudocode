/*
 * XREFs of PsEnterPriorityRegion @ 0x1402D3110
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}
