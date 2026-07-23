/*
 * XREFs of VslLoadEnclaveModule @ 0x140890018
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14039439C (VslpLockMdlForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall VslLoadEnclaveModule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 result; // rax
  NTSTATUS v12; // r14d
  __int64 *v14[10]; // [rsp+38h] [rbp-B9h] BYREF
  _QWORD v15[14]; // [rsp+88h] [rbp-69h] BYREF

  memset(v15, 0, 0x68uLL);
  memset(v14, 0, 0x48uLL);
  result = VslpLockMdlForTransfer((__int64)v14, a5, 0);
  if ( (int)result >= 0 )
  {
    v15[1] = a1;
    v15[6] = v14[7];
    v15[2] = a2;
    v15[3] = a4;
    v15[4] = a3;
    v15[5] = a5;
    v12 = VslpEnterIumSecureMode(2u, 47, 0, (__int64)v15);
    VslpUnlockPagesForTransfer(v14);
    if ( v12 >= 0 )
    {
      if ( a6 )
        *a6 = v15[2];
      if ( a7 )
        *a7 = v15[3];
      if ( a8 )
        *a8 = v15[4];
    }
    return (unsigned int)v12;
  }
  return result;
}
