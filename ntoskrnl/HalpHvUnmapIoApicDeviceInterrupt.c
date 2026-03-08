/*
 * XREFs of HalpHvUnmapIoApicDeviceInterrupt @ 0x140A843E8
 * Callers:
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvUnmapIoApicDeviceInterrupt(char a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+20h] [rbp-28h]
  _DWORD v4[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4[1] = 0;
  v3 = 0x8000000000000000uLL;
  LOBYTE(v3) = a1;
  v5 = *(_QWORD *)(a2 + 40);
  v4[0] = 2;
  return ((__int64 (__fastcall *)(unsigned __int64, _DWORD *))qword_140C62150)(v3, v4);
}
