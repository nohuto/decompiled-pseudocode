/*
 * XREFs of IopExceptionFilter @ 0x1405530E8
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x1402400A0 (IopValidateAndGetWriteParameters.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IopProcessBufferedIoCompletion @ 0x140313AA0 (IopProcessBufferedIoCompletion.c)
 *     NtSubmitIoRing @ 0x1405575D0 (NtSubmitIoRing.c)
 *     IopFlushBuffersFile @ 0x14076DF74 (IopFlushBuffersFile.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     NtCopyFileChunk @ 0x1407DEE00 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140946620 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140946A40 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingGetBuffer @ 0x140946E9C (IopIoRingGetBuffer.c)
 *     NtCreateIoRing @ 0x140947140 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x140947920 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x1409479B0 (NtSetInformationIoRing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopExceptionFilter(int **a1, int *a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 )
  {
    if ( (unsigned int)(*a1)[6] < 3 )
      return 1LL;
    v2 = (*a1)[12];
    *a2 = v2;
  }
  v3 = *a2;
  if ( v2 == -2147483646 )
    v3 = -1073741115;
  *a2 = v3;
  return 1LL;
}
