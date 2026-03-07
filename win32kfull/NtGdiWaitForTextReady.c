__int64 NtGdiWaitForTextReady()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  ULONG v3; // eax

  v0 = UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization();
  v1 = 0;
  if ( v0 < 0 )
  {
    v3 = RtlNtStatusToDosError(v0);
    EngSetLastError(v3);
  }
  else
  {
    return 1;
  }
  return v1;
}
