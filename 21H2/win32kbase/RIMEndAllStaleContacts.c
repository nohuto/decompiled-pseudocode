/*
 * XREFs of RIMEndAllStaleContacts @ 0x1C0178238
 * Callers:
 *     RIMOnTimerNotification @ 0x1C0157890 (RIMOnTimerNotification.c)
 * Callees:
 *     rimEndPointerDeviceStaleContacts @ 0x1C0179BD0 (rimEndPointerDeviceStaleContacts.c)
 */

__int64 __fastcall RIMEndAllStaleContacts(__int64 a1)
{
  _QWORD **v2; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 result; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax

  v2 = (_QWORD **)(a1 + 448);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  result = MEMORY[0xFFFFF78000000320];
  v5 = *v2;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  while ( v5 != v2 )
  {
    v7 = *(v5 - 1);
    v5 = (_QWORD *)*v5;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))rimEndPointerDeviceStaleContacts)(
               a1,
               *(_QWORD *)(v7 + 16),
               (LARGE_INTEGER)PerformanceCounter.QuadPart,
               (unsigned int)v6);
  }
  return result;
}
