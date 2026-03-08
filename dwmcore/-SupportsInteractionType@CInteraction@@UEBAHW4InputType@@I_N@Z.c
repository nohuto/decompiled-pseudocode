/*
 * XREFs of ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z @ 0x1800EEA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::SupportsInteractionType(__int64 a1, int a2)
{
  if ( a2 == 7 )
    return 0LL;
  else
    return CInteractionProcessor::SupportsInteractionType(a1 + 288);
}
