/*
 * XREFs of VslRegisterSyscallProviderServiceTableMetadata @ 0x14093FDB8
 * Callers:
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x14083A484 (PsRegisterSyscallProviderServiceTableMetadata.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslRegisterSyscallProviderServiceTableMetadata(unsigned int a1, unsigned int a2, struct _MDL *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 *v8[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[14]; // [rsp+80h] [rbp-88h] BYREF

  v4 = a1;
  memset(v9, 0, 0x68uLL);
  memset(v8, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v8, a3, a2, 0, 0);
  if ( (int)result >= 0 )
  {
    v9[2] = v8[0];
    v9[3] = v8[7];
    v9[1] = v4;
    v7 = VslpEnterIumSecureMode(2u, 230, 0, (__int64)v9);
    VslpUnlockPagesForTransfer(v8);
    return v7;
  }
  return result;
}
