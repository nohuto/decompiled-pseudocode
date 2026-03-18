/*
 * XREFs of NVMeQueueWorkItem @ 0x1C0016BF8
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00028F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerInitPart3 @ 0x1C000DD8C (NVMeControllerInitPart3.c)
 *     FirmwareDownload @ 0x1C0011984 (FirmwareDownload.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0015090 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSanitizeCommandCompletion @ 0x1C0017D90 (NVMeSanitizeCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0018240 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001842C (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA70 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0021B28 (NVMeReenumerateNameSpaceIdentify.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C0024F48 (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeQueueWorkItem(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  result = StorPortExtendedFunction(29LL, a1, &v5);
  if ( !(_DWORD)result )
    return StorPortExtendedFunction(30LL, a1, a2);
  return result;
}
