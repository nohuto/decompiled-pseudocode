/*
 * XREFs of ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003000
 * Callers:
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0001914 (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C02D662C (DxgkWriteUserModeDiagEntry.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C032CE88 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 * Callees:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003060 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntry(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // edi

  DXGFASTMUTEX::Acquire((DXGDIAGNOSTICS *)((char *)this + 64));
  do
    v4 = DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(this, a2);
  while ( v4 == -1073741267 );
  DXGFASTMUTEX::Release((DXGDIAGNOSTICS *)((char *)this + 64));
  return v4;
}
