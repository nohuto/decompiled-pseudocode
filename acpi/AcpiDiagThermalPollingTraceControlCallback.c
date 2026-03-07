void __fastcall AcpiDiagThermalPollingTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  void *v4; // rcx
  _QWORD *i; // rdx

  v4 = 0LL;
  if ( !ControlCode )
    goto LABEL_8;
  if ( ControlCode == 1 )
  {
    for ( i = &AcpiDiagThermalPollingIntervals; (MatchAnyKeyword & *i) == 0; i += 2 )
    {
      LODWORD(v4) = (_DWORD)v4 + 1;
      if ( (unsigned int)v4 >= 5 )
        return;
    }
    v4 = (void *)i[1];
    if ( WPP_MAIN_CB.Reserved != v4 )
    {
LABEL_8:
      WPP_MAIN_CB.Reserved = v4;
      AcpiDiagRequeueThermalPollingTimer();
    }
  }
}
