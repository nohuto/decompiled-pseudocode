/*
 * XREFs of PsEnterPriorityRegion @ 0x140223390
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
