/*
 * XREFs of VslGetSetSecureContext @ 0x14093F65C
 * Callers:
 *     PspGetSetContextInternal @ 0x1406EA840 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslGetSetSecureContext(__int64 a1, struct _MDL *a2, unsigned int a3)
{
  __int16 v6; // ax
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 *v9[10]; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v10[14]; // [rsp+80h] [rbp-39h] BYREF

  memset(v10, 0, 0x68uLL);
  memset(v9, 0, 0x48uLL);
  v6 = 15;
  if ( !a1 )
    v6 = 14;
  WORD1(v10[0]) = v6;
  result = VslpLockPagesForTransfer((__int64)v9, a2, a3, a1 != 0, 0);
  if ( (int)result >= 0 )
  {
    v10[1] = v9[0];
    v10[2] = v9[7];
    v8 = VslpEnterIumSecureMode(2u, SWORD1(v10[0]), 0, (__int64)v10);
    VslpUnlockPagesForTransfer(v9);
    return v8;
  }
  return result;
}
