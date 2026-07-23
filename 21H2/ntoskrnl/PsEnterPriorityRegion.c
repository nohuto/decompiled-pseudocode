/*
 * XREFs of PsEnterPriorityRegion @ 0x140213700
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
