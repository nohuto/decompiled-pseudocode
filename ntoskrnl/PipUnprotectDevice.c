/*
 * XREFs of PipUnprotectDevice @ 0x14096C668
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14096C598 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 */

__int64 __fastcall PipUnprotectDevice(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rbx
  __int128 v4; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v5; // [rsp+40h] [rbp-A8h]
  __int64 (__fastcall *v6)(_QWORD); // [rsp+50h] [rbp-98h]
  _QWORD v7[14]; // [rsp+60h] [rbp-88h] BYREF

  v1 = *(_QWORD **)(a1 + 32);
  v6 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  result = PnpQueryInterface(v1, (ULONG_PTR)&GUID_SDEV_IDENTIFIER_INTERFACE, 1u, 0x28u, 0LL, (USHORT *)&v4);
  if ( (int)result >= 0 )
  {
    v3 = v6(*((_QWORD *)&v4 + 1));
    (*((void (__fastcall **)(_QWORD))&v5 + 1))(*((_QWORD *)&v4 + 1));
    memset(v7, 0, 0x68uLL);
    v7[1] = v3;
    return VslpEnterIumSecureMode(2u, 68, 0, (__int64)v7);
  }
  return result;
}
