/*
 * XREFs of _Init_thread_footer @ 0x18006A3D0
 * Callers:
 *     sub_1800047A4 @ 0x1800047A4 (sub_1800047A4.c)
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_18011CA64 @ 0x18011CA64 (sub_18011CA64.c)
 *     sub_18012E018 @ 0x18012E018 (sub_18012E018.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_18019E198);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_18019D1F0;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = dword_18019D1F0;
  LeaveCriticalSection(&stru_18019E198);
  return Init_thread_notify();
}
