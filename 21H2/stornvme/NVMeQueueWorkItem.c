/*
 * XREFs of NVMeQueueWorkItem @ 0x1C001DF70
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 *     FirmwareDownload @ 0x1C001AA58 (FirmwareDownload.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C001CB60 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSanitizeCommandCompletion @ 0x1C001F040 (NVMeSanitizeCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C001F4D0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001F6BC (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0023918 (NVMeReenumerateNameSpaceIdentify.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C0024FDC (ProcessNvmeSanitizeStatus.c)
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
