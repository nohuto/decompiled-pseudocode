/*
 * XREFs of hdevEnumerateAll @ 0x1C00D4830
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D874 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 */

__int64 __fastcall hdevEnumerateAll(PDEV *a1)
{
  return hdevEnumerate<0>(a1);
}
