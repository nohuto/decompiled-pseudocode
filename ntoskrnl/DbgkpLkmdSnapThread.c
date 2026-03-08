/*
 * XREFs of DbgkpLkmdSnapThread @ 0x140539BD4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1409378F8 (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeEnumerateQueueApc @ 0x140570A50 (KeEnumerateQueueApc.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140937F04 (DbgkpLkmdLaunchSnapApc.c)
 */

__int64 __fastcall DbgkpLkmdSnapThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KeEnumerateQueueApc(a3, DbgkpLkmdEnumApcOrDpcDataCallback, a1, 0LL);
  return DbgkpLkmdLaunchSnapApc(a1, a2, a3, a4);
}
