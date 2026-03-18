/*
 * XREFs of UsbhGetHubCount @ 0x1C002BA50
 * Callers:
 *     UsbhInitialize @ 0x1C002C450 (UsbhInitialize.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C0002F60 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 */

__int64 __fastcall UsbhGetHubCount(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rax
  NTSTATUS v5; // r10d
  unsigned int v6; // r10d

  v4 = FdoExt(a1);
  *a2 = 1;
  if ( (v4[640] & 1) != 0 )
    Log(a1, 8, 1214475858, 0LL, 0LL);
  else
    v5 = UsbhSyncSendInternalIoctl(a1, 0x22001Bu, (unsigned __int64)a2, 0LL);
  Log(a1, 8, 1214475892, v5, (unsigned int)*a2);
  return v6;
}
