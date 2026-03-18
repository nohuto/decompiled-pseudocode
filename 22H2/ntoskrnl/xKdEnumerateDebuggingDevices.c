/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1403B6620
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     NtQueryInformationThread @ 0x14079FBE0 (NtQueryInformationThread.c)
 *     HaliQuerySystemInformation @ 0x140A88510 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
