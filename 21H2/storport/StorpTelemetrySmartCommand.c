/*
 * XREFs of StorpTelemetrySmartCommand @ 0x1C0001F30
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00019CC (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     memset @ 0x1C0020540 (memset.c)
 */

NTSTATUS __fastcall StorpTelemetrySmartCommand(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v6; // rcx
  char *v7; // rcx
  PIRP v8; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
    return -1073741496;
  if ( !a3 )
    return -1073741811;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  memset(a3, 0, 0x22CuLL);
  *a3 = 28;
  *(_QWORD *)(a3 + 1) = 0x4B53494449534353LL;
  v6 = (unsigned int)*a3;
  a3[6] = 528;
  v7 = (char *)a3 + v6;
  a3[4] = 1770763;
  *(_DWORD *)v7 = 33;
  v7[4] = a2;
  *(_DWORD *)(v7 + 5) = -1035010047;
  v7[10] = -80;
  v7[12] = *(_BYTE *)(a1 + 97);
  v8 = IoBuildDeviceIoControlRequest(
         0x4D008u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         a3,
         0x3Cu,
         a3,
         0x22Cu,
         0,
         &Object,
         &IoStatusBlock);
  if ( !v8 )
    return -1073741670;
  v8->IoStatus.Status = -1073741637;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v8);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 && (IoStatusBlock.Information < 0x2C || *a3 != 28 || a3[6] < 0x10u) )
    return -1073741637;
  return result;
}
