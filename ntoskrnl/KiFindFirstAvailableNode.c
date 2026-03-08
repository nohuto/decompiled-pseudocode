/*
 * XREFs of KiFindFirstAvailableNode @ 0x1403725D0
 * Callers:
 *     KiQueryProcessorNode @ 0x140372500 (KiQueryProcessorNode.c)
 * Callees:
 *     KiIsNodeFull @ 0x1403742D8 (KiIsNodeFull.c)
 */

__int64 __fastcall KiFindFirstAvailableNode(unsigned __int16 *a1)
{
  unsigned __int16 v1; // di
  unsigned __int16 v3; // bx
  __int64 v4; // rcx

  v1 = KeNumberNodes;
  v3 = 0;
  if ( !KeNumberNodes )
    return 3221226021LL;
  while ( 1 )
  {
    v4 = KeNodeBlock[v3];
    if ( (*(_BYTE *)(v4 + 10) & 2) != 0 && !(unsigned __int8)KiIsNodeFull(v4) )
      break;
    if ( ++v3 >= v1 )
      return 3221226021LL;
  }
  *a1 = v3;
  return 0LL;
}
