/*
 * XREFs of wcsnlen @ 0x1C00D63CC
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Src )
  {
    if ( !*Src )
      break;
    ++result;
  }
  return result;
}
