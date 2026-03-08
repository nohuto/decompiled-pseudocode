/*
 * XREFs of WdInstrExecuteAction @ 0x14052805C
 * Callers:
 *     HalpWdatArmTimer @ 0x14051C830 (HalpWdatArmTimer.c)
 *     HalpWdatStop @ 0x14051CDE0 (HalpWdatStop.c)
 * Callees:
 *     WdInstrExecuteInstruction @ 0x1405280DC (WdInstrExecuteInstruction.c)
 */

__int64 __fastcall WdInstrExecuteAction(unsigned __int8 *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v9; // ecx

  v4 = 0;
  v9 = -1073741822;
  if ( !a2 )
    return v9;
  while ( 1 )
  {
    if ( *a1 == a3 )
    {
      v9 = WdInstrExecuteInstruction(a1, a4, 0LL);
      if ( v9 == -1073741823 )
        break;
    }
    ++v4;
    a1 += 64;
    if ( v4 >= a2 )
      return v9;
  }
  return 0LL;
}
