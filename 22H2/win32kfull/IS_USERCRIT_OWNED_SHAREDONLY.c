/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C005227C
 * Callers:
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     SfnNCDESTROY @ 0x1C0051AB0 (SfnNCDESTROY.c)
 *     SfnINLPWINDOWPOS @ 0x1C0051F60 (SfnINLPWINDOWPOS.c)
 * Callees:
 *     <none>
 */

__int64 IS_USERCRIT_OWNED_SHAREDONLY()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return ExIsResourceAcquiredSharedLite(gpresUser) != 0;
  return v0;
}
