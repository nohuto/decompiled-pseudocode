__int64 __fastcall HalpHvUnmapIoApicDeviceInterrupt(char a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+20h] [rbp-28h]
  _DWORD v4[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4[1] = 0;
  v3 = 0x8000000000000000uLL;
  LOBYTE(v3) = a1;
  v5 = *(_QWORD *)(a2 + 40);
  v4[0] = 2;
  return ((__int64 (__fastcall *)(unsigned __int64, _DWORD *))qword_140C62150)(v3, v4);
}
