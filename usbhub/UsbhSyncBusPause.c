__int64 __fastcall UsbhSyncBusPause(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // r10d

  v3 = a3;
  FdoExt(a1);
  Log(a1, 2048, 1346458174, v3, a2);
  *(_DWORD *)(a2 + 128) = v3;
  v6 = UsbhDispatch_BusEvent(a1, a2, 7);
  Log(a1, 2048, 1346458172, 0LL, v6);
  return v7;
}
