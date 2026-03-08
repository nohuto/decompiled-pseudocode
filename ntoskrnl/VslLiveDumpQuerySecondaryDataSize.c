/*
 * XREFs of VslLiveDumpQuerySecondaryDataSize @ 0x140549744
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x140545350 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslLiveDumpQuerySecondaryDataSize(char a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  result = VslpEnterIumSecureMode(2u, 55, 0, (__int64)v7);
  if ( (int)result >= 0 )
  {
    *a2 = v7[2];
    *a3 = v7[3];
  }
  return result;
}
