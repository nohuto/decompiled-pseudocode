/*
 * XREFs of CmpInitCallbacks @ 0x1407D3A90
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 */

_SLIST_HEADER *CmpInitCallbacks()
{
  _SLIST_HEADER *result; // rax

  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_140C48538 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  result = &CmpCallbackContextSList;
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  CmpCallbackContextSList = 0LL;
  return result;
}
