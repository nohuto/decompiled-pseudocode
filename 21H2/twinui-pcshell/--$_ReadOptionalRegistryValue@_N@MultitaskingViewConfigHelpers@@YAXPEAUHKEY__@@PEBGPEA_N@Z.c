/*
 * XREFs of ??$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z @ 0x180406C84
 * Callers:
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1804077DC (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 * Callees:
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180407CC4 (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

char __fastcall MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<bool>(
        MultitaskingViewConfigHelpers *a1,
        HKEY a2,
        bool *a3,
        unsigned int *a4)
{
  int RegistryValue; // eax
  int v7; // [rsp+48h] [rbp+20h] BYREF

  RegistryValue = MultitaskingViewConfigHelpers::_ReadRegistryValue(a1, a2, (const unsigned __int16 *)&v7, a4);
  if ( RegistryValue >= 0 )
  {
    LOBYTE(RegistryValue) = v7 != 0;
    *a3 = v7 != 0;
  }
  return RegistryValue;
}
