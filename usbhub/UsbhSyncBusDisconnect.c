__int64 __fastcall UsbhSyncBusDisconnect(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt(a1);
  Log(a1, 2048, 1111774014, 0LL, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, v4 + 11);
  Log(a1, 2048, 1111774012, 0LL, v5);
  return v6;
}
