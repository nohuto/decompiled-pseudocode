/*
 * XREFs of ZwQueryInformationJobObject @ 0x140414D90
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x1405F2250 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
