__int64 VslBindNtIum()
{
  __int16 v0; // sp
  __int64 result; // rax
  _QWORD BaseAddress[19]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v3; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v4[14]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = 0x8000LL;
  memset(v4, 0, 0x68uLL);
  BaseAddress[2] = 0LL;
  BaseAddress[12] = 0LL;
  v4[1] = BaseAddress;
  BaseAddress[0] = 49280LL;
  BaseAddress[1] = 384LL;
  BaseAddress[3] = 48896LL;
  BaseAddress[4] = 7LL;
  BaseAddress[5] = 35944LL;
  BaseAddress[6] = 208LL;
  BaseAddress[7] = 209LL;
  BaseAddress[8] = 36LL;
  BaseAddress[9] = 68LL;
  BaseAddress[10] = 1752LL;
  BaseAddress[11] = 2320LL;
  BaseAddress[13] = 1152LL;
  BaseAddress[14] = 484LL;
  BaseAddress[15] = 486LL;
  BaseAddress[16] = 152LL;
  BaseAddress[17] = 796LL;
  BaseAddress[18] = 120LL;
  v4[2] = 160LL;
  v4[3] = (unsigned int)((unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12);
  if ( (unsigned __int64)((v0 + 48) & 0xFFF) + 160 > 0x1000 )
    v4[4] = (unsigned int)((unsigned __int64)MmGetPhysicalAddress((char *)&v3 + 7).QuadPart >> 12);
  result = VslpEnterIumSecureMode(2u, 254, 0, (__int64)v4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x6Fu, (int)result, 0xFFuLL, 0LL, 0LL);
  return result;
}
