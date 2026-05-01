/*
 * XREFs of ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x1800121C4
 * Callers:
 *     HampUsageInfoRegistryQuery @ 0x180011990 (HampUsageInfoRegistryQuery.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemQueryValue(HKEY a1, const unsigned __int16 *a2, BYTE *lpData, unsigned int *lpcbData)
{
  LSTATUS result; // eax

  result = RegQueryValueExW(a1, a2, 0LL, 0LL, lpData, lpcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
