/*
 * XREFs of ZwOpenSession @ 0x1403FC940
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x1406C4D64 (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenSession(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
