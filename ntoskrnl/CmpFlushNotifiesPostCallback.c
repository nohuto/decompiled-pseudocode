/*
 * XREFs of CmpFlushNotifiesPostCallback @ 0x140A1CFF0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpFlushNotifiesPostCallback(__int64 a1, __int64 a2, unsigned int *a3)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *a3, a2, *((_BYTE *)a3 + 5));
  return 0LL;
}
