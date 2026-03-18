/*
 * XREFs of GreSetFontEnumeration @ 0x1C00B9324
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreSetFontEnumeration(char a1)
{
  int v1; // eax
  int v2; // edx

  if ( (a1 & 4) != 0 )
  {
    v1 = gulFontInformation & 0x11;
    v2 = a1 & 2;
  }
  else
  {
    if ( (a1 & 0x20) == 0 )
    {
      gulFontInformation = a1 & 1 | gulFontInformation & 0x12;
      return gulFontInformation;
    }
    v1 = gulFontInformation & 3;
    v2 = a1 & 0x10;
  }
  gulFontInformation = v2 | v1;
  return gulFontInformation;
}
