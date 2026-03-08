/*
 * XREFs of ZwQueryIoRingCapabilities @ 0x140414EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryIoRingCapabilities(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
