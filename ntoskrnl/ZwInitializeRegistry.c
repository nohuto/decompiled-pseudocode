/*
 * XREFs of ZwInitializeRegistry @ 0x1404143F0
 * Callers:
 *     NtInitializeRegistry @ 0x140799FB0 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitializeRegistry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
