/*
 * XREFs of sub_1800D0EAC @ 0x1800D0EAC
 * Callers:
 *     sub_1800BB014 @ 0x1800BB014 (sub_1800BB014.c)
 * Callees:
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 */

void sub_1800D0EAC()
{
  __int64 v0; // rcx

  EnterCriticalSection(&CriticalSection);
  v0 = qword_18019EF58;
  qword_18019EF58 = 0LL;
  if ( v0 )
    sub_18002AD80(v0);
  LeaveCriticalSection(&CriticalSection);
}
