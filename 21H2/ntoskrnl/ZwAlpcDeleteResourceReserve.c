/*
 * XREFs of ZwAlpcDeleteResourceReserve @ 0x14041C780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDeleteResourceReserve(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
