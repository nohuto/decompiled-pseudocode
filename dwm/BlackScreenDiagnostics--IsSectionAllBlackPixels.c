__int64 __fastcall BlackScreenDiagnostics::IsSectionAllBlackPixels(void *a1)
{
  int v1; // edi
  unsigned int v2; // ebx
  char *v3; // rax
  const void *v4; // rcx
  DWORD LastError; // eax
  __int64 v6; // rcx
  _BYTE *v8; // rax
  __int64 v9; // rcx

  v1 = 120000;
  v2 = 2;
  v3 = (char *)MapViewOfFile(a1, 2u, 0, 0, 0x75300uLL);
  v4 = v3;
  if ( v3 )
  {
    v8 = v3 + 2;
    while ( !*(v8 - 2) && !*(v8 - 1) && !*v8 )
    {
      v8 += 4;
      if ( !--v1 )
      {
        v2 = 1;
        break;
      }
    }
    if ( !UnmapViewOfFile(v4) )
      MicrosoftTelemetryAssertTriggeredArgs(v9, 0LL, 0LL);
    return v2;
  }
  else
  {
    LastError = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v6, LastError, 0LL);
    return 5LL;
  }
}
