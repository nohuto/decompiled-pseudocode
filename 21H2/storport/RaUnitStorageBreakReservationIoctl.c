/*
 * XREFs of RaUnitStorageBreakReservationIoctl @ 0x1C007B380
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B1E8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C002A438 (McTemplateK0pd_EtwWriteTransfer.c)
 *     PortAllowIrpFromPdoToFdo @ 0x1C007D1EC (PortAllowIrpFromPdoToFdo.c)
 */

__int64 __fastcall RaUnitStorageBreakReservationIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi
  int Status; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( (int)PortAllowIrpFromPdoToFdo(*(_QWORD *)(v2 + 8)) < 0 )
  {
    v5 = -1073741808;
    RaidCompleteRequestEx(a2, 0, 0xC0000010);
  }
  else
  {
    if ( StorEtwLoggingEnabled )
    {
      v8 = 0LL;
      IoGetActivityIdIrp(a2, &v8);
      if ( (byte_1C0069842 & 0x10) != 0 )
      {
        Status = a2->IoStatus.Status;
        McTemplateK0pd_EtwWriteTransfer(v4, &EventNonReadWriteRequestComplete, &v8, a2, Status);
      }
    }
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), a2);
  }
  return v5;
}
