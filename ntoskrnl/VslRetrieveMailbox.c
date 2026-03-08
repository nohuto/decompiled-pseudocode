/*
 * XREFs of VslRetrieveMailbox @ 0x14054A040
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslRetrieveMailbox(__int64 a1, _QWORD *a2, unsigned __int8 a3, struct _MDL *a4, unsigned int *a5)
{
  int v6; // r14d
  __int64 result; // rax
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  __int64 *v12[10]; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v13[14]; // [rsp+88h] [rbp-41h] BYREF

  v6 = a3;
  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( !*a2 && !a2[1] || (unsigned __int64)(*(_QWORD *)a5 - 1LL) > 0x1F9FFF )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v12, a4, *a5, 2, 0);
  if ( (int)result >= 0 )
  {
    v10 = *(_OWORD *)a2;
    v13[1] = v12[0];
    v13[2] = v12[7];
    *(_OWORD *)&v13[3] = v10;
    v13[5] = a1;
    LODWORD(v13[6]) = v6;
    v11 = VslpEnterIumSecureMode(2u, 20, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
      *(_QWORD *)a5 = v13[8];
    return v11;
  }
  return result;
}
