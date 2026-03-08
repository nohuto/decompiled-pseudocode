/*
 * XREFs of ZwAcquireProcessActivityReference @ 0x140413010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAcquireProcessActivityReference(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
