/*
 * XREFs of VslGetOnDemandDebugChallenge @ 0x14093F40C
 * Callers:
 *     PsIumGetOnDemandDebugChallenge @ 0x1409B3380 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslGetOnDemandDebugChallenge(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v9; // ebx
  unsigned int v10; // eax
  __int64 *v11[10]; // [rsp+40h] [rbp-10E8h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-1098h] BYREF
  struct _MDL Src[85]; // [rsp+100h] [rbp-1028h] BYREF

  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v11, Src, 0x1000u, 1, 0);
  if ( (int)result >= 0 )
  {
    v12[1] = *(_QWORD *)(a1 + 992);
    v12[2] = v11[0];
    v12[3] = v11[7];
    v9 = VslpEnterIumSecureMode(2u, 18, 0, (__int64)v12);
    VslpUnlockPagesForTransfer(v11);
    if ( v9 >= 0 )
    {
      v10 = v12[2];
      *a4 = v12[2];
      if ( v10 <= a3 )
      {
        if ( a2 )
          memmove(a2, Src, v10);
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
