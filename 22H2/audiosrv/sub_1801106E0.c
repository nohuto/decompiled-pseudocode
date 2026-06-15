/*
 * XREFs of sub_1801106E0 @ 0x1801106E0
 * Callers:
 *     sub_18010EAA0 @ 0x18010EAA0 (sub_18010EAA0.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 */

void __fastcall sub_1801106E0(__int64 a1)
{
  void *v2; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    DeleteTimerQueueTimer(0LL, v2, 0LL);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
