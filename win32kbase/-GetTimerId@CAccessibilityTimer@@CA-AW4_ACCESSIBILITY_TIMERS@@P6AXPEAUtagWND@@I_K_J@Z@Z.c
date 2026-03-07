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
