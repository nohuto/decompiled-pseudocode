/*
 * XREFs of ProcgrpQueryGroupAffinity @ 0x1C008A550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY __fastcall ProcgrpQueryGroupAffinity(unsigned __int16 GroupNumber)
{
  if ( GroupNumber )
    return 0LL;
  else
    return KeQueryActiveProcessors();
}
