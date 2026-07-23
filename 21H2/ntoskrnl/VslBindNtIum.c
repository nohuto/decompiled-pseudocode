/*
 * XREFs of VslBindNtIum @ 0x140A90470
 * Callers:
 *     HvlEnableVsmCalls @ 0x140A75220 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS VslBindNtIum()
{
  __int16 v0; // sp
  NTSTATUS result; // eax
  _QWORD BaseAddress[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v3; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v4[14]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v4, 0, 0x68uLL);
  BaseAddress[2] = 0LL;
  BaseAddress[11] = 0LL;
  v4[1] = BaseAddress;
  BaseAddress[0] = 45184LL;
  BaseAddress[1] = 384LL;
  BaseAddress[3] = 44800LL;
  BaseAddress[4] = 7LL;
  BaseAddress[5] = 34920LL;
  BaseAddress[6] = 208LL;
  BaseAddress[7] = 209LL;
  BaseAddress[8] = 36LL;
  BaseAddress[9] = 68LL;
  BaseAddress[10] = 2200LL;
  BaseAddress[12] = 1072LL;
  BaseAddress[13] = 484LL;
  BaseAddress[14] = 486LL;
  BaseAddress[15] = 152LL;
  v3 = 796LL;
  v4[2] = 136LL;
  v4[3] = (unsigned int)((unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12);
  if ( (unsigned __int64)((v0 + 48) & 0xFFF) + 136 > 0x1000 )
    v4[4] = (unsigned int)((unsigned __int64)MmGetPhysicalAddress((char *)&v3 + 7).QuadPart >> 12);
  result = VslpEnterIumSecureMode(2u, 254, 0, (__int64)v4);
  if ( result < 0 )
    KeBugCheckEx(0x6Fu, result, 0xFFuLL, 0LL, 0LL);
  return result;
}
