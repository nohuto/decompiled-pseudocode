/*
 * XREFs of RaidAdapterQueryStopDeviceIrp @ 0x1C0078D74
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0016854 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C001595C (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C002A418 (McTemplateK0pd_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall RaidAdapterQueryStopDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  a2->IoStatus.Status = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 88), 3);
  if ( StorEtwLoggingEnabled )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1C0069842 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v4, &EventPnpRequestComplete, &v7, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
