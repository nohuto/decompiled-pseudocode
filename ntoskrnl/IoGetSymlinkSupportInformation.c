/*
 * XREFs of IoGetSymlinkSupportInformation @ 0x1409455C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSymlinkSupportInformation(_BYTE *a1, unsigned int a2)
{
  char v2; // r8
  __int64 result; // rax

  v2 = IopSymlinkEnabledTypes;
  if ( a2 < 4 )
    return 3221225485LL;
  *a1 = IopSymlinkEnabledTypes & 1;
  a1[1] = (v2 & 2) != 0;
  a1[2] = (v2 & 4) != 0;
  result = 0LL;
  a1[3] = (v2 & 8) != 0;
  return result;
}
