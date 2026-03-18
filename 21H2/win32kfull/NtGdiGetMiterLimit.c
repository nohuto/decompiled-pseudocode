/*
 * XREFs of NtGdiGetMiterLimit @ 0x1C014D840
 * Callers:
 *     <none>
 * Callees:
 *     GreGetMiterLimit @ 0x1C014D89C (GreGetMiterLimit.c)
 */

__int64 __fastcall NtGdiGetMiterLimit(HDC a1, unsigned __int64 a2)
{
  unsigned int MiterLimit; // edx

  MiterLimit = GreGetMiterLimit(a1);
  if ( MiterLimit )
  {
    if ( a2 + 4 > MmUserProbeAddress || a2 + 4 <= a2 || (a2 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_DWORD *)a2 = 0;
  }
  return MiterLimit;
}
