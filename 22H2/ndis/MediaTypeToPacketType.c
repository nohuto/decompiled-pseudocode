/*
 * XREFs of MediaTypeToPacketType @ 0x1C0026C78
 * Callers:
 *     PktMonClientComponentRegister @ 0x1C0026AB0 (PktMonClientComponentRegister.c)
 *     PktMonClientAddEdge @ 0x1C00C7284 (PktMonClientAddEdge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MediaTypeToPacketType(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
      return 1LL;
    case 9:
      return 3LL;
    case 16:
      return 2LL;
  }
  result = 3LL;
  if ( a1 != 19 )
    return 0LL;
  return result;
}
