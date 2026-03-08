/*
 * XREFs of DrvGetLogPixels @ 0x1C00D4130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetLogPixels(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1248LL);
}
