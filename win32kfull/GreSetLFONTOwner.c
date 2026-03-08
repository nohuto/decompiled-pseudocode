/*
 * XREFs of GreSetLFONTOwner @ 0x1C010E86C
 * Callers:
 *     FinishStockFontReinit @ 0x1C00B9210 (FinishStockFontReinit.c)
 *     CreateFontFromUserProfile @ 0x1C010E764 (CreateFontFromUserProfile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetLFONTOwner(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax

  v3 = a2;
  if ( a2 == -2147483646 )
    v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LOBYTE(a3) = 10;
  return HmgSetOwner(a1, v3, a3);
}
