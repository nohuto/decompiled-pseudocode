const char *__fastcall InputTraceLogging::PTPDownlevelActionToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Wheel";
  v1 = a1 - 1;
  if ( !v1 )
    return "HWheel";
  if ( v1 == 1 )
    return "CtrlKey";
  return "UNKNOWN";
}
