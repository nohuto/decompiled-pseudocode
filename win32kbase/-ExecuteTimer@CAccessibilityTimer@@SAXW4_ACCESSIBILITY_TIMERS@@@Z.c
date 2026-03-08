/*
 * XREFs of ?ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1C020FDD0
 * Callers:
 *     NtMITAccessibilityTimerNotification @ 0x1C0169B30 (NtMITAccessibilityTimerNotification.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int16 __fastcall CAccessibilityTimer::ExecuteTimer(int a1)
{
  __int64 v1; // rdi
  __int16 result; // ax
  void (__fastcall *v3)(struct tagWND *, __int64, __int64); // rbx

  v1 = a1;
  result = 1 << a1;
  if ( ((unsigned __int16)(1 << a1) & CAccessibilityTimer::_timersState) != 0 )
  {
    v3 = 0LL;
    switch ( a1 )
    {
      case 1:
        v3 = FKActivationTimer;
        break;
      case 2:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxFKRepeatRateTimer)(0LL, 0LL, 2LL, 0LL);
      case 3:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))FKBounceKeyTimer)(0LL, 0LL, 3LL, 0LL);
      case 4:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxFKAcceptanceDelayTimer)(0LL, 0LL, 4LL, 0LL);
      case 5:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxMKMoveAccelCursorTimer)(0LL, 0LL, 5LL, 0LL);
      case 6:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxMKMoveConstCursorTimer)(0LL, 0LL, 6LL, 0LL);
      case 7:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxToggleKeysTimer)(0LL, 0LL, 7LL, 0LL);
      case 8:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxAccessTimeOutTimer)(0LL, 0LL, 8LL, 0LL);
      default:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 213);
        break;
    }
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v3)(0LL, 0LL, v1, 0LL);
  }
  return result;
}
