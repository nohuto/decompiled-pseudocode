/*
 * XREFs of ZwIsSystemResumeAutomatic @ 0x140414430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwIsSystemResumeAutomatic(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
