/*
 * XREFs of NtGdiDeleteColorTransform @ 0x1C02D1310
 * Callers:
 *     <none>
 * Callees:
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02D06C4 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDeleteColorTransform(HDC a1, void *a2)
{
  return GreDeleteColorTransform(a1, a2);
}
