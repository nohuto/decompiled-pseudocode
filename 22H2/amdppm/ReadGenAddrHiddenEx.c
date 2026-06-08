/*
 * XREFs of ReadGenAddrHiddenEx @ 0x1C0002E18
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0002E48 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0002D5C (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x1C0002DB0 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 10 )
    return ReadGenAddrEx(a2);
  return ReadGenAddrHidden(a1, a2);
}
