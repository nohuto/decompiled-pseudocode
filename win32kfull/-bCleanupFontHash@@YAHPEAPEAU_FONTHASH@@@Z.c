/*
 * XREFs of ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C00B6F7C
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00B6EE0 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C00B6FC0 (-vFree@FHOBJ@@QEAAXXZ.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C0117D28 (-bValid@FHOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall bCleanupFontHash(struct _FONTHASH **a1)
{
  __int64 v1; // rax
  unsigned int v2; // r8d
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)*a1;
  v4[0] = a1;
  v4[1] = v1;
  if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v4) )
  {
    FHOBJ::vFree((FHOBJ *)v4);
    return 1;
  }
  return v2;
}
