LONG __fastcall UsbhSshPortsBusy(__int64 a1, int a2, int a3)
{
  __int64 v6; // rsi
  signed __int64 v7; // rax
  LONG result; // eax
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // r11d
  __int64 v12; // rdx
  _QWORD *v13; // r10

  v6 = FdoExt(a1);
  v7 = UsbhIncHubBusy(a1, a2, a1, 1649439603, a3);
  result = Log(
             a1,
             0x10000,
             1213419563,
             _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 3312), v7, 0LL),
             v7);
  if ( v9 )
  {
    Log(a1, v11, 1213419570, v9, v10);
    return UsbhDecHubBusy(a1, v12, v13);
  }
  return result;
}
