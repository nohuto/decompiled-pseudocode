__int64 __fastcall DpiFdoInitializeDisplayDiagnostics(__int64 a1)
{
  __int64 v1; // rdi
  int MiniportInterface; // eax
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  if ( !*(_WORD *)(v1 + 5600) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE, 48, 1);
    if ( MiniportInterface >= 0 && (*(_WORD *)(v1 + 5600) != 48 || !*(_QWORD *)(v1 + 5632) || !*(_QWORD *)(v1 + 5640)) )
    {
      v3 = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      goto LABEL_4;
    }
  }
  v3 = MiniportInterface;
  if ( MiniportInterface < 0 )
LABEL_4:
    DpiFdoCleanupDisplayDiagnostics(v1);
  return v3;
}
