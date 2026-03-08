/*
 * XREFs of ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01C921C
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00F0DE8 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00F0E4C (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01C8AB0 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01C92D0 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     UpdateWinIniInt @ 0x1C01C9800 (UpdateWinIniInt.c)
 */

__int64 __fastcall SetWindowMetricInt(struct _UNICODE_STRING *a1, unsigned __int16 a2, unsigned int a3)
{
  unsigned int v3; // r10d

  v3 = a3;
  if ( a2 <= 0x8Fu )
  {
    if ( a2 != 143 && a2 != 64 && a2 != 65 && a2 != 136 && a2 != 137 && a2 != 138 && (unsigned int)a2 - 140 >= 2 )
      return UpdateWinIniInt(a1, 23LL, a2, v3);
LABEL_17:
    v3 = -((int)(1440 * a3 + (*(unsigned __int16 *)(gpsi + 6998LL) >> 1)) / *(unsigned __int16 *)(gpsi + 6998LL));
    return UpdateWinIniInt(a1, 23LL, a2, v3);
  }
  if ( a2 == 144 || a2 == 146 || a2 == 147 || a2 == 148 || a2 == 152 || a2 == 153 || a2 == 158 )
    goto LABEL_17;
  return UpdateWinIniInt(a1, 23LL, a2, v3);
}
