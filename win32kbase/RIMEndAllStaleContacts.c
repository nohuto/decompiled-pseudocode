/*
 * XREFs of RIMEndAllStaleContacts @ 0x1C00F1142
 * Callers:
 *     RIMOnTimerNotification @ 0x1C01A7180 (RIMOnTimerNotification.c)
 * Callees:
 *     rimEndPointerDeviceStaleContacts @ 0x1C01D6A24 (rimEndPointerDeviceStaleContacts.c)
 */

LARGE_INTEGER __fastcall RIMEndAllStaleContacts(struct RawInputManagerObject *a1)
{
  LARGE_INTEGER result; // rax
  struct RawInputManagerObject *v3; // rdi
  __int64 v4; // rax

  result = KeQueryPerformanceCounter(0LL);
  v3 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 56);
  while ( v3 != (struct RawInputManagerObject *)((char *)a1 + 448) )
  {
    v4 = *((_QWORD *)v3 - 1);
    v3 = *(struct RawInputManagerObject **)v3;
    result.QuadPart = rimEndPointerDeviceStaleContacts(a1, *(struct RIMDEV **)(v4 + 16));
  }
  return result;
}
