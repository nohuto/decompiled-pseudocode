/*
 * XREFs of ExpSafeWcslen @ 0x14083FE94
 * Callers:
 *     NtEnumerateBootEntries @ 0x14083F840 (NtEnumerateBootEntries.c)
 *     ExpVerifyFilePath @ 0x1408401A0 (ExpVerifyFilePath.c)
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FD9B0 (ExpSetDriverEntry.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409FE880 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateDriverEntries @ 0x1409FEC70 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  while ( *v2 )
  {
    if ( (unsigned __int64)++v2 >= a2 )
      return 0xFFFFFFFFLL;
  }
  return v2 - a1;
}
