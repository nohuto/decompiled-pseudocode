/*
 * XREFs of NtGdiDeleteColorSpace @ 0x1C019A230
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DEF60 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall NtGdiDeleteColorSpace(struct HOBJ__ *a1)
{
  return bDeleteColorSpace(a1, 0);
}
