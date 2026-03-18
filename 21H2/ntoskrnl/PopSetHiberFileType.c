/*
 * XREFs of PopSetHiberFileType @ 0x14098FA74
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopSetHiberFileSize @ 0x14098F9D0 (PopSetHiberFileSize.c)
 * Callees:
 *     PopValidateHiberFileSize @ 0x1408018EC (PopValidateHiberFileSize.c)
 *     PopCalculateHiberFileSize @ 0x140801C0C (PopCalculateHiberFileSize.c)
 *     PopSetHiberPersistedRegValue @ 0x1408082AC (PopSetHiberPersistedRegValue.c)
 */

__int64 __fastcall PopSetHiberFileType(int a1, __int64 *a2)
{
  int v3; // edi
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( ((unsigned int)PopHiberFileSizePercent < 0x28 || a1 == 2) && (unsigned int)(a1 - 1) <= 1 )
  {
    v3 = PopHiberFileType;
    PopHiberFileType = a1;
    PopCalculateHiberFileSize(&v7, 0LL);
    v4 = v7;
    v5 = PopValidateHiberFileSize(v7, 0LL, 0LL);
    if ( v5 < 0 || (v5 = PopSetHiberPersistedRegValue(2, PopHiberFileType), v5 < 0) )
    {
      PopHiberFileType = v3;
    }
    else
    {
      PopHiberFileTypeReg = PopHiberFileType;
      if ( a2 )
        *a2 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
