/*
 * XREFs of ZwQueryInformationJobObject @ 0x14041D120
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x1405F4700 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
