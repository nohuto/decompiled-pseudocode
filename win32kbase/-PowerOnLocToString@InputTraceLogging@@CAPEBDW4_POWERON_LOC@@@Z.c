const char *__fastcall InputTraceLogging::PowerOnLocToString(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case -1:
      return "Undefined";
    case 0:
      return "PsW32MonitorOn";
    case 1:
      return "PsW32PostMonitorOn";
    case 2:
      return "PowerStateEndPartitionReplace";
    case 3:
      return "WaitForVideoPortCalloutReady";
    case 4:
      return "RemoteDisconnect";
  }
  result = "PowerStateResumeApps";
  if ( a1 != 5 )
    return "UNKNOWN";
  return result;
}
