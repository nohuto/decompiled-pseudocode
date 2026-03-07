__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(
        DXGDIAGNOSTICS *this,
        unsigned __int8 *a2,
        unsigned int *a3,
        unsigned int CurrentProcessSessionId)
{
  unsigned int v9; // esi
  unsigned int DiagnosticsInternal; // ebx

  if ( !a3 )
    return 3221225485LL;
  if ( a2 )
  {
    v9 = *a3;
    if ( *a3 )
      memset(a2, 0, v9);
  }
  else
  {
    v9 = 0;
  }
  if ( CurrentProcessSessionId == -1 )
  {
    if ( IsCurrentProcessAdmin() )
      CurrentProcessSessionId = -1;
    else
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  DXGFASTMUTEX::Acquire((DXGDIAGNOSTICS *)((char *)this + 64));
  DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, CurrentProcessSessionId, v9, a2, a3);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 8);
  if ( *a3 > v9 )
    return (unsigned int)-2147483643;
  return DiagnosticsInternal;
}
