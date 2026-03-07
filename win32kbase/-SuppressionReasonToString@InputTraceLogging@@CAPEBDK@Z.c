const char *__fastcall InputTraceLogging::SuppressionReasonToString(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx

  if ( a1 <= 0x20 )
  {
    if ( a1 == 32 )
      return "LegacyPalmProtocol";
    if ( !a1 )
      return "NotSuppressed";
    v1 = a1 - 1;
    if ( !v1 )
      return "DeviceArbitration";
    v2 = v1 - 1;
    if ( !v2 )
      return "BadData";
    v3 = v2 - 2;
    if ( !v3 )
      return "InvalidTransition";
    v4 = v3 - 4;
    if ( !v4 )
      return "OutOfBounds";
    if ( v4 == 8 )
      return "NotConfident";
    return "UNKNOWN";
  }
  v6 = a1 - 64;
  if ( !v6 )
    return "ActiveNotInRange";
  v7 = v6 - 64;
  if ( !v7 )
    return "DisplayOff";
  v8 = v7 - 128;
  if ( !v8 )
    return "LidClosed";
  v9 = v8 - 256;
  if ( !v9 )
    return "ResetDisplayState";
  v10 = v9 - 512;
  if ( !v10 )
    return "PowerPolicy";
  if ( v10 != 1024 )
    return "UNKNOWN";
  return "ResetPointerDevices";
}
