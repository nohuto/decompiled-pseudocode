/*
 * XREFs of VslSecurePoolAllocate @ 0x14054A218
 * Callers:
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslSecurePoolAllocate(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        struct _MDL *a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  int v11; // ebx
  __int64 *v13[10]; // [rsp+30h] [rbp-B1h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-61h] BYREF

  memset(v14, 0, 0x68uLL);
  memset(v13, 0, 0x48uLL);
  v14[5] = a5;
  v14[1] = a1;
  v14[2] = a3;
  v14[6] = __PAIR64__(a6, a2);
  v11 = VslpLockPagesForTransfer((__int64)v13, a4, a3, 0, 0);
  if ( v11 >= 0 )
  {
    v14[3] = v13[0];
    v14[4] = v13[7];
    v11 = VslpEnterIumSecureMode(2u, 81, 0, (__int64)v14);
    if ( v11 >= 0 )
      *a7 = v14[2];
  }
  if ( v13[0] )
    VslpUnlockPagesForTransfer(v13);
  return (unsigned int)v11;
}
