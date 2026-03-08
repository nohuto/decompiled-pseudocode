/*
 * XREFs of SepDetermineGlobalTableCheckNeededForQuery @ 0x14024753C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140247394 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1402478D0 (AuthzBasepFindSecurityAttribute.c)
 *     SepPotentialGlobalTableAttribute @ 0x14024799C (SepPotentialGlobalTableAttribute.c)
 */

char __fastcall SepDetermineGlobalTableCheckNeededForQuery(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  unsigned int v7; // edi

  v3 = 1;
  if ( (SepSingletonGlobal[4] & 1) == 0 || !a2 )
    return 0;
  v7 = 0;
  if ( a3 )
  {
    while ( (unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a2 + 16LL * v7))
         && !AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), a2 + 16LL * v7) )
    {
      if ( ++v7 >= a3 )
        return v3;
    }
    return 0;
  }
  return v3;
}
