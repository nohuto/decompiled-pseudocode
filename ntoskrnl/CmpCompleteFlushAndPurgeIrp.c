/*
 * XREFs of CmpCompleteFlushAndPurgeIrp @ 0x1402ECC90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

__int64 __fastcall CmpCompleteFlushAndPurgeIrp(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
