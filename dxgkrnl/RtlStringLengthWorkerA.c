/*
 * XREFs of RtlStringLengthWorkerA @ 0x1C00295D6
 * Callers:
 *     ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x1C004C0F8 (-RtlStringCbCatA@@YAJPEAD_KPEBD@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C0302814 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  for ( i = cchMax; cchMax; --cchMax )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = cchMax == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( cchMax )
      *pcchLength = i - cchMax;
    else
      *pcchLength = 0LL;
  }
  return result;
}
