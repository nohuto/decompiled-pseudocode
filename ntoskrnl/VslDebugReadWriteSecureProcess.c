/*
 * XREFs of VslDebugReadWriteSecureProcess @ 0x14093EF40
 * Callers:
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslDebugReadWriteSecureProcess(
        __int64 a1,
        __int64 a2,
        struct _MDL *a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  __int64 v8; // r14
  BOOL v10; // edx
  unsigned int v11; // r15d
  __int64 result; // rax
  __int64 v13; // rax
  int v14; // r14d
  __int64 *v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[14]; // [rsp+90h] [rbp-70h] BYREF

  v8 = a1;
  memset(v17, 0, 0x68uLL);
  memset(v16, 0, 0x48uLL);
  *a6 = 0LL;
  v10 = a5 != 0;
  if ( !a4 )
    return 0LL;
  while ( 1 )
  {
    v11 = a4;
    if ( 2072576 - ((unsigned __int16)a3 & 0xFFFu) <= a4 )
      v11 = 2072576 - ((unsigned __int16)a3 & 0xFFF);
    result = VslpLockPagesForTransfer((__int64)v16, a3, v11, v10, 0);
    if ( (int)result < 0 )
      break;
    v13 = *(_QWORD *)(v8 + 992);
    v17[6] = 0LL;
    v17[1] = v13;
    v17[3] = a5;
    v17[4] = v16[0];
    v17[5] = v16[7];
    v17[2] = a2;
    v14 = VslpEnterIumSecureMode(2u, 40, 0, (__int64)v17);
    VslpUnlockPagesForTransfer(v16);
    *a6 += v17[6];
    if ( v14 < 0 )
      return (unsigned int)v14;
    v10 = a5 != 0;
    v8 = a1;
    a2 += v11;
    a3 = (struct _MDL *)((char *)a3 + v11);
    a4 -= v11;
    if ( !a4 )
      return 0LL;
  }
  return result;
}
