/*
 * XREFs of ZwOpenSession @ 0x1403FBFC0
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x14069C4B4 (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenSession(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
