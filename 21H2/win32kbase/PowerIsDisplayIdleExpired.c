/*
 * XREFs of PowerIsDisplayIdleExpired @ 0x1C007D130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C007D190 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z @ 0x1C0097B60 (-IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z.c)
 *     PowerIsDisplayBurstActive @ 0x1C0147EC0 (PowerIsDisplayBurstActive.c)
 *     PowerIsDisplayRequired @ 0x1C0147F60 (PowerIsDisplayRequired.c)
 */

__int64 __fastcall PowerIsDisplayIdleExpired(int a1, int *a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( CInputGlobals::GetGlobalTickCount(gpInputGlobals, 0LL) >= (unsigned __int64)qword_1C0296F48 )
  {
    if ( giPowerOffTimeOutMs > a1
      && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giPowerOffTimeOutMs - a1)
      && !(unsigned int)PowerIsDisplayRequired()
      && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
    {
      v5 = 12;
      goto LABEL_13;
    }
LABEL_3:
    result = 0LL;
    v5 = 0;
    goto LABEL_4;
  }
  if ( (unsigned int)PowerIsDisplayBurstActive(&v6) )
    goto LABEL_3;
  v5 = v6;
LABEL_13:
  result = 1LL;
LABEL_4:
  if ( a2 )
    *a2 = v5;
  return result;
}
