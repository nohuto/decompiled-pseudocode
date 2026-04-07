/*
 * XREFs of ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x180049508
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180048C5C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall GetThemePercentage(void *a1, int a2, int a3, int a4, float *a5)
{
  HRESULT ThemeInt; // eax
  unsigned int v6; // ebx
  int piVal[6]; // [rsp+30h] [rbp-18h] BYREF

  piVal[0] = 0;
  ThemeInt = GetThemeInt(a1, a2, a3, a4, piVal);
  v6 = ThemeInt;
  if ( ThemeInt < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeInt, 0xF7u);
  else
    *a5 = (float)piVal[0] / 100.0;
  return v6;
}
