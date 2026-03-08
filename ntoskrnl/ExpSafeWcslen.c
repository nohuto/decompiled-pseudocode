/*
 * XREFs of ExpSafeWcslen @ 0x14083EB44
 * Callers:
 *     NtEnumerateBootEntries @ 0x14083E4F0 (NtEnumerateBootEntries.c)
 *     ExpVerifyFilePath @ 0x14083EE50 (ExpVerifyFilePath.c)
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FAB20 (ExpSetDriverEntry.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409FB97C (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateDriverEntries @ 0x1409FBD70 (NtEnumerateDriverEntries.c)
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
