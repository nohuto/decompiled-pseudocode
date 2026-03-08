/*
 * XREFs of CmpInitCallbacks @ 0x140813390
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 */

union _SLIST_HEADER *CmpInitCallbacks()
{
  union _SLIST_HEADER *result; // rax

  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_140C143F8 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  result = &CmpCallbackContextSList;
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  CmpCallbackContextSList = 0LL;
  return result;
}
