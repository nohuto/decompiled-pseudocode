/*
 * XREFs of VslInitFunctionOverrideCapabilities @ 0x14054BA60
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslInitFunctionOverrideCapabilities(struct _MDL *a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 *v4[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v5[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  memset(v4, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v4, a1, 0x50u, 1, 6u);
  if ( (int)result >= 0 )
  {
    v5[1] = v4[0];
    v5[2] = v4[7];
    v3 = VslpEnterIumSecureMode(2u, 225, 0, (__int64)v5);
    VslpUnlockPagesForTransfer(v4);
    return v3;
  }
  return result;
}
