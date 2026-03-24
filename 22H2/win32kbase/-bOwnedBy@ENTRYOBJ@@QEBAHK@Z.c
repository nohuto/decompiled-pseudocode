/*
 * XREFs of ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C007B1A0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C000BF70 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgNextOwned @ 0x1C001D6E0 (HmgNextOwned.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C007B148 (HmgIsObjectOwnedByW32Pid.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ENTRYOBJ::bOwnedBy(ENTRYOBJ *this, int a2)
{
  return *((_BYTE *)this + 14) && ((*((_DWORD *)this + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0;
}
