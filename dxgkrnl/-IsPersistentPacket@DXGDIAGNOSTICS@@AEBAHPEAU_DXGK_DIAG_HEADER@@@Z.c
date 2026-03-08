/*
 * XREFs of ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C004FF08
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A3BC (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDIAGNOSTICS::IsPersistentPacket(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  int v2; // eax
  struct _DXGK_DIAG_HEADER **i; // rcx

  v2 = 0;
  for ( i = (struct _DXGK_DIAG_HEADER **)((char *)this + 8); a2 != *i; i += 2 )
  {
    if ( ++v2 )
      return 0LL;
  }
  return 1LL;
}
