/*
 * XREFs of PopSetHiberFileType @ 0x140986128
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopSetHiberFileSize @ 0x140986084 (PopSetHiberFileSize.c)
 * Callees:
 *     PopCalculateHiberFileSize @ 0x1407FC9FC (PopCalculateHiberFileSize.c)
 *     PopSetHiberPersistedRegValue @ 0x1409861D8 (PopSetHiberPersistedRegValue.c)
 *     PopValidateHiberFileSize @ 0x140986270 (PopValidateHiberFileSize.c)
 */

__int64 __fastcall PopSetHiberFileType(int a1, _QWORD *a2)
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
    v5 = PopValidateHiberFileSize(v7, 0LL);
    if ( v5 < 0 || (v5 = PopSetHiberPersistedRegValue(2LL), v5 < 0) )
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
