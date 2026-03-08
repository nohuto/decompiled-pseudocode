/*
 * XREFs of VslTransferSecureImageVersionResource @ 0x14054BE60
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslTransferSecureImageVersionResource(__int64 a1, struct _MDL *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 *v10[10]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v11[14]; // [rsp+80h] [rbp-98h] BYREF

  memset(v11, 0, 0x68uLL);
  memset(v10, 0, 0x48uLL);
  if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v10, a2, a3, 0, 0);
  if ( (int)result >= 0 )
  {
    v11[2] = v10[0];
    v11[3] = v10[7];
    v11[1] = a1;
    v11[4] = a4;
    v9 = VslpEnterIumSecureMode(2u, 32, 0, (__int64)v11);
    VslpUnlockPagesForTransfer(v10);
    return v9;
  }
  return result;
}
