/*
 * XREFs of ?bAllClosed@EPATHOBJ@@QEAAHXZ @ 0x1C0180BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bAllClosed(EPATHOBJ *this)
{
  __int64 **i; // rcx

  for ( i = *(__int64 ***)(*((_QWORD *)this + 1) + 32LL); ; i = (__int64 **)*i )
  {
    if ( !i )
      return 1LL;
    if ( ((_DWORD)i[2] & 0xA) == 2 )
      break;
  }
  return 0LL;
}
