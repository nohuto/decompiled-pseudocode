/*
 * XREFs of DpiFdoGetVirtualGpuType @ 0x1C0396F0C
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C005E698 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C01D09D0 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C039951C (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C0399958 (DpiSriovAttach.c)
 *     DpiSriovNotification @ 0x1C0399DB8 (DpiSriovNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetVirtualGpuType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  v3 = *(_QWORD *)(v1 + 48);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  LOBYTE(v2) = 1;
  LOBYTE(v4) = RtlFindUnicodeSubstring(v3 + 88, &DestinationString, v2) != 0;
  return v4;
}
