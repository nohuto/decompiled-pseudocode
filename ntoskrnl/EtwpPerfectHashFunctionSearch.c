/*
 * XREFs of EtwpPerfectHashFunctionSearch @ 0x140233A30
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x140233900 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x140601EC8 (EtwpApplyStackWalkIdFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpPerfectHashFunctionSearch(__int16 a1, __int64 a2)
{
  __int64 v2; // r8

  LOWORD(v2) = *(_WORD *)(a2 + 2) & __ROR2__(a1, *(_BYTE *)(a2 + 1));
  if ( a1 == *(_WORD *)(a2 + 4LL * (unsigned __int16)v2 + 8) )
    return 1;
  while ( 1 )
  {
    v2 = *(unsigned __int8 *)(a2 + 4LL * (unsigned __int16)v2 + 6);
    if ( (_WORD)v2 == 255 )
      break;
    if ( a1 == *(_WORD *)(a2 + 4 * v2 + 8) )
      return 1;
  }
  return 0;
}
