/*
 * XREFs of VslQuerySecureKernelProfileInformation @ 0x1404FD030
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140265408 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall VslQuerySecureKernelProfileInformation(__int64 a1, struct _MDL *a2, ULONG a3, _DWORD *a4)
{
  int v8; // ecx
  __int64 result; // rax
  NTSTATUS v10; // edi
  unsigned int v11; // [rsp+20h] [rbp-108h]
  __int64 *v12[10]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-A8h] BYREF

  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( !a3 || (result = VslpLockPagesForTransfer((__int64)v12, a2, a3, 2, v8 & v11), (int)result >= 0) )
  {
    v13[2] = v12[0];
    v13[3] = v12[7];
    v13[1] = a1;
    v10 = VslpEnterIumSecureMode(2u, 61, 0, (__int64)v13);
    if ( v10 >= 0 )
      *a4 = v13[2];
    if ( a3 )
      VslpUnlockPagesForTransfer(v12);
    return (unsigned int)v10;
  }
  return result;
}
