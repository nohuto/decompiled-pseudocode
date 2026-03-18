/*
 * XREFs of PoCreatePowerRequest @ 0x1403C6280
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 */

NTSTATUS __stdcall PoCreatePowerRequest(
        PVOID *PowerRequest,
        PDEVICE_OBJECT DeviceObject,
        PCOUNTED_REASON_CONTEXT Context)
{
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  P = 0LL;
  *PowerRequest = 0LL;
  if ( !DeviceObject )
    return -1073741811;
  v5 = PoCaptureReasonContext((unsigned __int64)Context, 0, (__int64)DeviceObject, 1, 0LL, (__int64 *)&P);
  if ( v5 < 0 || (v5 = PopPowerRequestCreateCommon(P, 0, &v10), v5 < 0) )
  {
    if ( P )
      PoDestroyReasonContext(P, v4, v6, v7);
  }
  else
  {
    *PowerRequest = v10;
  }
  return v5;
}
