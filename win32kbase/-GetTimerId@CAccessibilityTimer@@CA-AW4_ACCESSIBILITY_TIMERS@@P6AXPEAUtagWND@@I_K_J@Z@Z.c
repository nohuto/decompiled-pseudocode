/*
 * XREFs of ?GetTimerId@CAccessibilityTimer@@CA?AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z @ 0x1C020FEF8
 * Callers:
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x1C0210020 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CAccessibilityTimer::GetTimerId(void (__fastcall *a1)(struct tagWND *a1))
{
  unsigned int v1; // ebx

  v1 = 1;
  if ( (char *)a1 != (char *)FKActivationTimer )
  {
    if ( (char *)a1 == (char *)xxxFKRepeatRateTimer )
    {
      return 2;
    }
    else if ( a1 == FKBounceKeyTimer )
    {
      return 3;
    }
    else if ( (char *)a1 == (char *)xxxFKAcceptanceDelayTimer )
    {
      return 4;
    }
    else if ( (char *)a1 == (char *)xxxMKMoveAccelCursorTimer )
    {
      return 5;
    }
    else if ( (char *)a1 == (char *)xxxMKMoveConstCursorTimer )
    {
      return 6;
    }
    else if ( (char *)a1 == (char *)xxxToggleKeysTimer )
    {
      return 7;
    }
    else if ( a1 == xxxAccessTimeOutTimer )
    {
      return 8;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 99);
    }
  }
  return v1;
}
