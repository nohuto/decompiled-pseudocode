/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140A6CE38
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopInitializeOfflineCrashDump @ 0x1403C97B8 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x1403C9880 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     __report_rangecheckfailure @ 0x1404B63BC (__report_rangecheckfailure.c)
 *     RtlQueryRegistryValuesEx @ 0x14069EF80 (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x1407B7F14 (IoInitializeCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x140A39AE0 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-C8h]
  _QWORD v9[14]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v10[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v11; // [rsp+E6h] [rbp-22h]
  char v12; // [rsp+E8h] [rbp-20h]
  char v13; // [rsp+EDh] [rbp-1Bh]

  v2 = 0;
  v7 = 0;
  IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
  if ( !ForceDumpDisabled )
    ForceDumpDisabled = (int)SecureDump_Init(a1, a2) < 0;
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( v5 >= 0x29 )
      _report_rangecheckfailure();
    v10[v5] = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 0x29 );
  v11 = 257;
  v10[6] = 1;
  v12 = 1;
  v13 = 1;
  SpecialMemoryRanges = (__int64)MmInitializeMemoryLimits(a1, (__int64)v10);
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[1]) = 4;
  v9[0] = IopInitCrashDumpRegCallback;
  LODWORD(v9[4]) = 0;
  v9[2] = L"ExistingPageFiles";
  v9[3] = &v7;
  RtlQueryRegistryValuesEx(2LL, (__int64)L"Session Manager\\Memory Management", (__int64)v9, a1);
  if ( !v7 )
  {
    *(_OWORD *)&v8[1] = 0LL;
    v2 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  }
  IopInitializeOfflineCrashDump(*(_QWORD *)(a1 + 240));
  return v2;
}
