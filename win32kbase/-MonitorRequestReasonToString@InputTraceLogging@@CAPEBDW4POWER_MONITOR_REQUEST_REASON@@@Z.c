const char *__fastcall InputTraceLogging::MonitorRequestReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx

  if ( a1 <= 27 )
  {
    if ( a1 == 27 )
      return "PdcSignal";
    if ( a1 > 13 )
    {
      if ( a1 > 20 )
      {
        v16 = a1 - 21;
        if ( !v16 )
          return "SystemIdle";
        v17 = v16 - 1;
        if ( !v17 )
          return "NearProximity";
        v18 = v17 - 1;
        if ( !v18 )
          return "ThermalStandby";
        v19 = v18 - 1;
        if ( !v19 )
          return "ResumePdc";
        v20 = v19 - 1;
        if ( !v20 )
          return "ResumeS4";
        if ( v20 == 1 )
          return "Terminal";
      }
      else
      {
        if ( a1 == 20 )
          return "SxTransition";
        v11 = a1 - 14;
        if ( !v11 )
          return "SleepButton";
        v12 = v11 - 1;
        if ( !v12 )
          return "Lid";
        v13 = v12 - 1;
        if ( !v13 )
          return "BatteryCountChange";
        v14 = v13 - 1;
        if ( !v14 )
          return "GracePeriod";
        v15 = v14 - 1;
        if ( !v15 )
          return "PnP";
        if ( v15 == 1 )
          return "DP";
      }
    }
    else
    {
      if ( a1 == 13 )
        return "PolicyChange";
      if ( a1 > 6 )
      {
        v6 = a1 - 7;
        if ( !v6 )
          return "PoSetSystemState";
        v7 = v6 - 1;
        if ( !v7 )
          return "SetThreadExecutionState";
        v8 = v7 - 1;
        if ( !v8 )
          return "FullWake";
        v9 = v8 - 1;
        if ( !v9 )
          return "SessionUnlock";
        v10 = v9 - 1;
        if ( !v10 )
          return "ScreenOffRequest";
        if ( v10 == 1 )
          return "IdleTimeout";
      }
      else
      {
        if ( a1 == 6 )
          return "UserDisplayBurst";
        if ( !a1 )
          return "Unknown";
        v1 = a1 - 1;
        if ( !v1 )
          return "PowerButton";
        v2 = v1 - 1;
        if ( !v2 )
          return "RemoteConnection";
        v3 = v2 - 1;
        if ( !v3 )
          return "ScMonitorpower";
        v4 = v3 - 1;
        if ( !v4 )
          return "UserInput";
        if ( v4 == 1 )
          return "AcDcDisplayBurst";
      }
    }
    return "UNKNOWN";
  }
  if ( a1 <= 41 )
  {
    if ( a1 == 41 )
      return "PdcSignalWindowsMobileShell";
    if ( a1 > 34 )
    {
      v26 = a1 - 35;
      if ( !v26 )
        return "UserInputAccelerometer";
      v27 = v26 - 1;
      if ( !v27 )
        return "UserInputHid";
      v28 = v27 - 1;
      if ( !v28 )
        return "UserInputPoUserPresent";
      v29 = v28 - 1;
      if ( !v29 )
        return "UserInputSessionSwitch";
      v30 = v29 - 1;
      if ( !v30 )
        return "UserInputInitialization";
      if ( v30 == 1 )
        return "PdcSignalWindowsMobilePwrNotif";
    }
    else
    {
      if ( a1 == 34 )
        return "UserInputPen";
      v21 = a1 - 28;
      if ( !v21 )
        return "AcDcDisplayBurstSuppressed";
      v22 = v21 - 1;
      if ( !v22 )
        return "SystemStateEntered";
      v23 = v22 - 1;
      if ( !v23 )
        return "Winrt";
      v24 = v23 - 1;
      if ( !v24 )
        return "UserInputKeyboard";
      v25 = v24 - 1;
      if ( !v25 )
        return "UserInputMouse";
      if ( v25 == 1 )
        return "UserInputTouchpad";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 48 )
  {
    if ( a1 == 48 )
      return "DisplayRequiredUnDim";
    v31 = a1 - 42;
    if ( !v31 )
      return "PdcSignalHeyCortana";
    v32 = v31 - 1;
    if ( !v32 )
      return "PdcSignalHolographicShell";
    v33 = v32 - 1;
    if ( !v33 )
      return "PdcSignalFingerprint";
    v34 = v33 - 1;
    if ( !v34 )
      return "DirectedDrips";
    v35 = v34 - 1;
    if ( !v35 )
      return "Dim";
    if ( v35 == 1 )
      return "BuiltinPanel";
    return "UNKNOWN";
  }
  v36 = a1 - 49;
  if ( !v36 )
    return "BatteryCountChangeSuppressed";
  v37 = v36 - 1;
  if ( !v37 )
    return "ResumeModernStandby";
  v38 = v37 - 1;
  if ( !v38 )
    return "TerminalInit";
  v39 = v38 - 1;
  if ( !v39 )
    return "PdcSignalSensorsHumanPresence";
  v40 = v39 - 1;
  if ( !v40 )
    return "BatteryPreCritical";
  if ( v40 != 1 )
    return "UNKNOWN";
  return "UserInputTouch";
}
