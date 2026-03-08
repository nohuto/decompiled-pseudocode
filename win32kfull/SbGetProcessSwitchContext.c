/*
 * XREFs of SbGetProcessSwitchContext @ 0x1C00CC1C8
 * Callers:
 *     SetManifestWinVer @ 0x1C00CC090 (SetManifestWinVer.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SbGetProcessSwitchContext(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 4544 > MmUserProbeAddress || a1 + 4544 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    result = a1 + 2016;
    if ( a1 == -2016LL || !*(_DWORD *)(a1 + 2064) )
      return 0LL;
  }
  return result;
}
