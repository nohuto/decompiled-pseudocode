/*
 * XREFs of sub_180052A80 @ 0x180052A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052A80(__int64 a1)
{
  __int64 result; // rax

  result = IsHHostEdappManagerContextRundownSupported();
  if ( (_DWORD)result )
    return HHOSTEDAPPMANAGERCONTEXTRundown(a1);
  return result;
}
