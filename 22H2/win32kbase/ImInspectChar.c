/*
 * XREFs of ImInspectChar @ 0x1C0235A00
 * Callers:
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1C012E190 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 * Callees:
 *     ImpQueueCharacter @ 0x1C0235DE8 (ImpQueueCharacter.c)
 */

__int64 __fastcall ImInspectChar(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  if ( ImpSessionId == (unsigned int)PsGetCurrentProcessSessionId() )
    return ImpQueueCharacter(a1, a2, a3, a4);
  else
    return 3221226021LL;
}
