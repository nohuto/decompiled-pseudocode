/*
 * XREFs of HalpHvRetargetDeviceMsiInterrupt @ 0x140509AEC
 * Callers:
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405025EC (HalpInterruptSetRemappedDestinationHv.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvRetargetDeviceMsiInterrupt(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  _DWORD v7[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v7[1] = 0;
  v7[2] = v2;
  v3 = *(_DWORD *)(a1 + 4);
  v8 = 0LL;
  LODWORD(v8) = v3;
  v4 = *(_DWORD *)(a1 + 52);
  v5 = *(_QWORD *)(a1 + 64);
  v7[3] = v4;
  v7[0] = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, __int128 *, __int64, _QWORD))qword_140C62158)(v5, v7, &v8, a2, 0LL);
}
