void __fastcall UsbhResetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  __int64 PortData; // rax
  _DWORD *v7; // rax

  Log(a1, 256, 1919968372, a2, a3);
  v5 = PdoExt(a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v5 + 714));
  if ( PortData )
  {
    *(_QWORD *)(PortData + 392) = 0LL;
    _InterlockedExchange((volatile __int32 *)(PortData + 428), 0);
    v7 = PdoExt(a2);
    v7[356] &= ~8u;
    UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741810);
    UsbhDerefPdo(a1, a2, 0LL, 0x4C415443u);
  }
}
