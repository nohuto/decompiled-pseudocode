/*
 * XREFs of ZwQueryInformationProcess @ 0x14041A9C0
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405B1B00 (RtlCheckXfgFailureInformation.c)
 *     DifZwQueryInformationProcessWrapper @ 0x1405F4860 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671500 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
