/*
 * XREFs of PspSyscallProviderServiceDispatchGeneric @ 0x1409B20D8
 * Callers:
 *     PsSyscallProviderDispatch @ 0x1409B1700 (PsSyscallProviderDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PspCaptureSystemServiceInMemoryArgs @ 0x1409B19D0 (PspCaptureSystemServiceInMemoryArgs.c)
 */

__int64 __fastcall PspSyscallProviderServiceDispatchGeneric(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, _QWORD *, _QWORD *),
        unsigned __int8 a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned __int64 v6; // rbx
  int v7; // eax
  int v9; // ecx
  __int128 *v10; // rdx
  _QWORD v11[4]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v12[128]; // [rsp+50h] [rbp-A8h] BYREF

  v11[0] = a1[7];
  v11[1] = a1[8];
  v11[2] = a1[9];
  v11[3] = a1[10];
  v6 = a4;
  if ( a3 && (v7 = PspCaptureSystemServiceInMemoryArgs((char *)(a1[48] + 40LL), v12, a3), v7 < 0) )
  {
    *a5 = (unsigned int)v7;
    return 0LL;
  }
  else
  {
    v9 = *((_DWORD *)&KeGetCurrentThread()->0 + 1) & 0x200000;
    if ( (v6 & 0x7000) != 0x1000 || (v10 = KeServiceDescriptorTableFilter, !v9) )
      v10 = KeServiceDescriptorTableShadow;
    return a2(
             *(_QWORD *)&v10[2 * ((v6 >> 12) & 7)]
           + ((__int64)*(int *)(*(_QWORD *)&v10[2 * ((v6 >> 12) & 7)] + 4 * (v6 & 0xFFF)) >> 4),
             (unsigned int)v6,
             v11,
             a5);
  }
}
