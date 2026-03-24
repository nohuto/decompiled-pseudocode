/*
 * XREFs of PsEnterPriorityRegion @ 0x14029BD30
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
