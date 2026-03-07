const char *__fastcall InputTraceLogging::Cursor::CursorApiToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Unknown";
  v1 = a1 - 1;
  if ( !v1 )
    return "Dwm";
  if ( v1 == 1 )
    return "Gre";
  return "UNKNOWN VALUE";
}
