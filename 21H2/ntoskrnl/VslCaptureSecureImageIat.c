/*
 * XREFs of VslCaptureSecureImageIat @ 0x140890BF8
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CB78 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x140394074 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x1403940C8 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall VslCaptureSecureImageIat(__int64 a1, struct _MDL *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 *v8[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v9, 0, 0x68uLL);
  memset(v8, 0, 0x48uLL);
  if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v8, a2, a3, 0, 0);
  if ( (int)result >= 0 )
  {
    v9[2] = v8[0];
    v9[3] = v8[7];
    v9[1] = a1;
    v7 = VslpEnterIumSecureMode(2u, 41, 0, (__int64)v9);
    VslpUnlockPagesForTransfer(v8);
    return v7;
  }
  return result;
}
