/*
 * XREFs of VidSchiCancelDelayTimerDevice @ 0x1C0106024
 * Callers:
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0012824 (VidSchiCancelDelayTimerContext.c)
 */

void __fastcall VidSchiCancelDelayTimerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  struct _KTIMER *v4; // rdx

  v2 = (_QWORD *)(a2 + 72);
  v3 = *(_QWORD **)(a2 + 72);
  while ( v3 != v2 )
  {
    v4 = (struct _KTIMER *)(v3 - 3);
    v3 = (_QWORD *)*v3;
    VidSchiCancelDelayTimerContext(0LL, v4);
  }
}
