/*
 * XREFs of RaidpLinkUp @ 0x1C0038088
 * Callers:
 *     StorPortNotification @ 0x1C000E7B0 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003722C (McTemplateK0pq_EtwWriteTransfer.c)
 *     StorPortResume @ 0x1C003A080 (StorPortResume.c)
 */

char __fastcall RaidpLinkUp(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // di
  int v6; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 56);
    McTemplateK0pq_EtwWriteTransfer(a1, &EventLinkUp, a3, *(_QWORD *)(a1 + 560) + 16LL, v6);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 2220), 1);
  v4 = StorPortResume(*(_QWORD *)(a1 + 560) + 16LL);
  if ( v4 )
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
  return v4;
}
