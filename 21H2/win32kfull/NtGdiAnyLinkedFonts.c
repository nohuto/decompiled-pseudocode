/*
 * XREFs of NtGdiAnyLinkedFonts @ 0x1C010AC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiAnyLinkedFonts()
{
  __int64 result; // rax

  result = 0LL;
  if ( gbAnyLinkedFonts || *(_OWORD *)&gappfeSysEUDC != 0LL )
    return 1LL;
  return result;
}
