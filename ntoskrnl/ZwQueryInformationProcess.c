/*
 * XREFs of ZwQueryInformationProcess @ 0x140412630
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405AF650 (RtlCheckXfgFailureInformation.c)
 *     DifZwQueryInformationProcessWrapper @ 0x1405F23B0 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14066EEB0 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
