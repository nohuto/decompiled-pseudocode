/*
 * XREFs of ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C003CDFC
 * Callers:
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x1C010CF84 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsFilterVerified(struct _NDIS_FILTER_BLOCK *a1)
{
  char result; // al

  result = 0;
  if ( ndisVerifierNdisDispatch && a1->Header.Type == 5 )
  {
    if ( a1->VerifierContext )
      return 1;
  }
  return result;
}
