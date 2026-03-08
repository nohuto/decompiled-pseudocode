/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140B6E3C0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     SecureDump_Init @ 0x1403AB908 (SecureDump_Init.c)
 *     IopInitializeOfflineCrashDump @ 0x1403AB95C (IopInitializeOfflineCrashDump.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 *     IoConfigureCrashDump @ 0x14054D564 (IoConfigureCrashDump.c)
 *     RtlQueryRegistryValuesEx @ 0x14069DF10 (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x14083643C (IoInitializeCrashDump.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140940E2C (IopDumpTraceForceDumpDisabled.c)
 *     MmInitializeMemoryLimits @ 0x140B3647C (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 a1, char a2)
{
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  char v8; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v9[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v10[14]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v11[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v12; // [rsp+E6h] [rbp-22h]
  char v13; // [rsp+E8h] [rbp-20h]
  char v14; // [rsp+EDh] [rbp-1Bh]

  v8 = 0;
  if ( !ForceDumpDisabled && (int)SecureDump_Init(a1, a2) < 0 && !SecureDmpCertProvisionFailedDuringBoot )
  {
    ForceDumpDisabled = 1;
    IopDumpTraceForceDumpDisabled();
  }
  if ( a1 && !SpecialMemoryRanges )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      if ( v5 >= 0x2C )
        _report_rangecheckfailure();
      v11[v5] = 0;
      ++v4;
      ++v5;
    }
    while ( v4 < 0x2C );
    v12 = 257;
    v11[6] = 1;
    v13 = 1;
    v14 = 1;
    SpecialMemoryRanges = (__int64)MmInitializeMemoryLimits(a1, (__int64)v11);
  }
  if ( !a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x100000) != 0 )
      IoConfigureCrashDump(0LL, 1);
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[4]) = 0;
    v10[0] = IopInitCrashDumpRegCallback;
    LODWORD(v10[1]) = 4;
    v10[2] = L"ExistingPageFiles";
    v10[3] = &v8;
    RtlQueryRegistryValuesEx(2LL, L"Session Manager\\Memory Management", v10, a1);
  }
  if ( v8 )
  {
    v6 = 0;
  }
  else
  {
    *(_OWORD *)&v9[1] = 0LL;
    v6 = IoInitializeCrashDump(0LL, (__int128 *)&v9[1]) == 0 ? 0xC0000001 : 0;
  }
  if ( !a2 )
    IopInitializeOfflineCrashDump(*(_QWORD *)(a1 + 240));
  return v6;
}
