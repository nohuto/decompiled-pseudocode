__int64 __fastcall PiPnpRtlGetDeviceInterfaceEnabled(__int64 a1, __int128 *a2, _BYTE *a3, unsigned int a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = *a2;
  v7 = a4;
  result = ZwPlugPlayControl(23LL, (__int64)&v6);
  *a3 = BYTE4(v7);
  return result;
}
