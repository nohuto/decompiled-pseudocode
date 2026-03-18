/*
 * XREFs of ZwQueryInformationJobObject @ 0x14041E180
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x140624920 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
