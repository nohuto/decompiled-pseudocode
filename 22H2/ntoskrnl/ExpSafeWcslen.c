/*
 * XREFs of ExpSafeWcslen @ 0x140951120
 * Callers:
 *     ExpSetBootEntry @ 0x140951150 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951944 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x140952E18 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x140952F74 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x140953360 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409539B0 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
  }
  while ( (unsigned __int64)v2 < a2 );
  if ( (unsigned __int64)v2 >= a2 )
    return 0xFFFFFFFFLL;
  else
    return v2 - a1;
}
