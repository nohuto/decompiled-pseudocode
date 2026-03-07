__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  unsigned int v5; // r10d

  v3 = a1;
  v4 = UsbhSyncSendInternalIoctl(a1, 2228243LL, a2, 0LL);
  Log(v3, 8, 1970303827, *a2, v4);
  return v5;
}
