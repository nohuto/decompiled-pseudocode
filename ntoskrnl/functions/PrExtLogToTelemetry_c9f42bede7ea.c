__int64 PrExtLogToTelemetry()
{
  unsigned int v0; // ebx

  v0 = -1073741637;
  if ( IsTraceloggingEnabled
    || (IsTraceloggingEnabled = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C06798) >= 0) != 0 )
  {
    PrpWriteTraceLoggingEvent();
    return 0;
  }
  return v0;
}
