/*
 * XREFs of GreIsProcessSystemCritical @ 0x1C009373C
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0093274 (xxxQueryInformationThread.c)
 * Callees:
 *     ?IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ @ 0x1C009376C (-IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ.c)
 *     ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z @ 0x1C0093790 (-IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z.c)
 */

_BOOL8 __fastcall GreIsProcessSystemCritical(struct _EPROCESS *a1)
{
  return Gre::Umfd::IsSessionGlobalsAreaAllocated(a1) && UmfdHostLifeTimeManager::IsProcessUmfdHost(a1);
}
