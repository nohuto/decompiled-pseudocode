/*
 * XREFs of sub_1800C293C @ 0x1800C293C
 * Callers:
 *     sub_18007CD0B @ 0x18007CD0B (sub_18007CD0B.c)
 * Callees:
 *     sub_18005289C @ 0x18005289C (sub_18005289C.c)
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 */

void __fastcall sub_1800C293C(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    sub_18005289C((__int64 *)&lpCriticalSection[1], 0LL);
  LeaveCriticalSection(lpCriticalSection);
  sub_1800C28E0((__int64 *)&lpCriticalSection[1].SpinCount);
  sub_1800C28E0((__int64 *)&lpCriticalSection[1]);
  DeleteCriticalSection(lpCriticalSection);
}
