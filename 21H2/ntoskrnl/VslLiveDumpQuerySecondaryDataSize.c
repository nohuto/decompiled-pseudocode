/*
 * XREFs of VslLiveDumpQuerySecondaryDataSize @ 0x1404FCD30
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x1404F8AE0 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslLiveDumpQuerySecondaryDataSize(_QWORD *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(2u, 53, 0, (__int64)v5);
  if ( result >= 0 )
  {
    *a1 = v5[2];
    *a2 = v5[3];
  }
  return result;
}
