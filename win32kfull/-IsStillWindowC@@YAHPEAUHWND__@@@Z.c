/*
 * XREFs of ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0015B14
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall IsStillWindowC(HWND a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned __int64)a1 < 2 || a1 == (HWND)-2LL || a1 == (HWND)-1LL )
    return 1LL;
  LOBYTE(a2) = 1;
  LOBYTE(v2) = HMValidateHandleNoSecure(a1, a2) != 0;
  return v2;
}
