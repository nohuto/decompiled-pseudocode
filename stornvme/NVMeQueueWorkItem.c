/*
 * XREFs of NVMeQueueWorkItem @ 0x1C0016B88
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 *     FirmwareDownload @ 0x1C0011914 (FirmwareDownload.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0015020 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSanitizeCommandCompletion @ 0x1C0017D20 (NVMeSanitizeCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C00181D0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00183BC (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA00 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0021AB8 (NVMeReenumerateNameSpaceIdentify.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C0024F88 (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeQueueWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  result = StorPortExtendedFunction(29LL, a1, &v7, a4);
  if ( !(_DWORD)result )
    return StorPortExtendedFunction(30LL, a1, a2, v7);
  return result;
}
