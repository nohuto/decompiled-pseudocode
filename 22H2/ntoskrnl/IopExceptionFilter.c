/*
 * XREFs of IopExceptionFilter @ 0x140555588
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D50 (IopValidateAndGetWriteParameters.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopProcessBufferedIoCompletion @ 0x1402AC270 (IopProcessBufferedIoCompletion.c)
 *     NtSubmitIoRing @ 0x140559A70 (NtSubmitIoRing.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtCopyFileChunk @ 0x140749DA0 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     NtReadFileScatter @ 0x1407E75F0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E8870 (NtWriteFileGather.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140949640 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140949A60 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingGetBuffer @ 0x140949EBC (IopIoRingGetBuffer.c)
 *     NtCreateIoRing @ 0x14094A160 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x14094A940 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x14094A9D0 (NtSetInformationIoRing.c)
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
