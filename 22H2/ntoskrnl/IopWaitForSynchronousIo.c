/*
 * XREFs of IopWaitForSynchronousIo @ 0x14026E980
 * Callers:
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 * Callees:
 *     IopWaitForSynchronousIoEvent @ 0x1403F08E4 (IopWaitForSynchronousIoEvent.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(IRP *a1, __int64 a2)
{
  IopWaitForSynchronousIoEvent(a1);
  return *(unsigned int *)(a2 + 56);
}
