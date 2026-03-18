/*
 * XREFs of GreLockRegion @ 0x1C000CC60
 * Callers:
 *     <none>
 * Callees:
 *     HmgLockEx @ 0x1C0043B50 (HmgLockEx.c)
 */

_BOOL8 __fastcall GreLockRegion(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 4;
  return HmgLockEx(a1, a2, 0LL) != 0;
}
