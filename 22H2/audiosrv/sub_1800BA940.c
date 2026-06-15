/*
 * XREFs of sub_1800BA940 @ 0x1800BA940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 *     sub_1800B817C @ 0x1800B817C (sub_1800B817C.c)
 *     sub_1800BB014 @ 0x1800BB014 (sub_1800BB014.c)
 *     sub_1800F7758 @ 0x1800F7758 (sub_1800F7758.c)
 *     sub_180105034 @ 0x180105034 (sub_180105034.c)
 *     sub_180126864 @ 0x180126864 (sub_180126864.c)
 *     sub_18012D91C @ 0x18012D91C (sub_18012D91C.c)
 *     sub_18012DBE0 @ 0x18012DBE0 (sub_18012DBE0.c)
 *     sub_180137110 @ 0x180137110 (sub_180137110.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800BA940(__int64 a1)
{
  void *v2; // rbx
  int result; // eax
  PVOID v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  EnterCriticalSection(&stru_18019F7F0);
  sub_180126864(&v4);
  LeaveCriticalSection(&stru_18019F7F0);
  if ( v4 )
    sub_180137110(v4);
  sub_180047278((__int64 *)&v4);
  if ( lpCriticalSection )
    sub_18012D91C(lpCriticalSection);
  sub_1800BB014(a1);
  v2 = (void *)qword_18019EF88;
  qword_18019EF88 = 0LL;
  if ( v2 )
  {
    sub_1800B7E08((__int64)v2);
    sub_18006A148(v2);
  }
  sub_1800F7758();
  if ( lpCriticalSection )
  {
    sub_18012DBE0();
    if ( lpCriticalSection )
      sub_1800B817C((char *)lpCriticalSection);
    lpCriticalSection = 0LL;
  }
  sub_180105034();
  result = (_DWORD)hEvent - 1;
  if ( (char *)hEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    result = CloseHandle(hEvent);
    hEvent = 0LL;
  }
  return result;
}
