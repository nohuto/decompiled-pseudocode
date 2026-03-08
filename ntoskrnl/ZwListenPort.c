/*
 * XREFs of ZwListenPort @ 0x140414470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwListenPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
