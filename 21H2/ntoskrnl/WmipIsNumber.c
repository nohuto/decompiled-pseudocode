/*
 * XREFs of WmipIsNumber @ 0x1406EB7E8
 * Callers:
 *     WmipFindISinGEbyName @ 0x14075F09C (WmipFindISinGEbyName.c)
 *     WmipPrepareWnodeSI @ 0x140783DB8 (WmipPrepareWnodeSI.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipIsNumber(_WORD *a1)
{
  while ( 1 )
  {
    if ( !*a1 )
      return 1;
    if ( (unsigned __int16)(*a1 - 48) > 9u )
      break;
    ++a1;
  }
  return 0;
}
