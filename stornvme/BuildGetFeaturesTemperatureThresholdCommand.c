/*
 * XREFs of BuildGetFeaturesTemperatureThresholdCommand @ 0x1C0010DDC
 * Callers:
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019910 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019AE0 (QueryTemperatureThresholdCompletion.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EE74 (NVMeGetTemperatureThreshold.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall BuildGetFeaturesTemperatureThresholdCommand(__int64 a1, unsigned __int8 a2, char a3)
{
  int v3; // eax
  int v4; // eax
  unsigned int result; // eax

  v3 = (*(_DWORD *)(a1 + 44) ^ (a2 << 16)) & 0xF0000;
  *(_BYTE *)a1 = 10;
  v4 = *(_DWORD *)(a1 + 44) ^ v3;
  *(_BYTE *)(a1 + 40) = 4;
  if ( a3 )
    result = v4 & 0xFFCFFFFF | 0x100000;
  else
    result = v4 & 0xFFCFFFFF;
  *(_DWORD *)(a1 + 44) = result;
  return result;
}
