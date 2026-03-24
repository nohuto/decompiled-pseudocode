/*
 * XREFs of VslGetSetSecureContext @ 0x14088FAC4
 * Callers:
 *     PspGetSetContextInternal @ 0x1406498B0 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x140394074 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x1403940C8 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall VslGetSetSecureContext(__int64 a1, struct _MDL *a2, ULONG a3)
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
