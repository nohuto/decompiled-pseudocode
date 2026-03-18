/*
 * XREFs of IommupGetDeviceCreationConfigEntry @ 0x140526CAC
 * Callers:
 *     IommupDeviceGetPasidSettings @ 0x14082AFE4 (IommupDeviceGetPasidSettings.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall IommupGetDeviceCreationConfigEntry(__int64 *a1)
{
  __int64 *result; // rax

  result = a1;
  while ( *((_DWORD *)result + 4) != 3 )
  {
    result = (__int64 *)*result;
    if ( result == a1 )
      return 0LL;
  }
  return result;
}
