/*
 * XREFs of ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C006ADA8
 * Callers:
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C01C1B9C (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C03BAD88 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDS_JOURNAL::_IsUnextend(const struct CDS_JOURNAL::_ENTRY *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x180000) == 0x180000 && !*((_DWORD *)a1 + 17) )
    return *((_DWORD *)a1 + 18) == 0;
  return v1;
}
