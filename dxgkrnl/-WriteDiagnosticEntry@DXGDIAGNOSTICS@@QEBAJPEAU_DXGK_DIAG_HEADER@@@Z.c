__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntry(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // edi

  DXGFASTMUTEX::Acquire((DXGDIAGNOSTICS *)((char *)this + 64));
  do
    v4 = DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(this, a2);
  while ( v4 == -1073741267 );
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 8);
  return v4;
}
