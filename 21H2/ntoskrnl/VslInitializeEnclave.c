/*
 * XREFs of VslInitializeEnclave @ 0x14088FCFC
 * Callers:
 *     PsInitializeVsmEnclave @ 0x14090E0B0 (PsInitializeVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall VslInitializeEnclave(
        __int64 a1,
        __int64 a2,
        struct _MDL *a3,
        ULONG a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 result; // rax
  NTSTATUS v12; // ebx
  __int64 *v13[10]; // [rsp+30h] [rbp-B1h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-61h] BYREF

  memset(v14, 0, 0x68uLL);
  memset(v13, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v13, a3, a4, 0, 0);
  if ( (int)result >= 0 )
  {
    v14[3] = v13[0];
    v14[4] = v13[7];
    v14[5] = a5;
    v14[6] = a6;
    v14[1] = a1;
    v14[2] = a2;
    v12 = VslpEnterIumSecureMode(2u, 48, 0, (__int64)v14);
    if ( v12 >= 0 )
      *a7 = v14[2];
    VslpUnlockPagesForTransfer(v13);
    return (unsigned int)v12;
  }
  return result;
}
