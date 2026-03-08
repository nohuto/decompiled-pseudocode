/*
 * XREFs of CmGetBoundTransaction @ 0x140796530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall CmGetBoundTransaction(PLARGE_INTEGER Cookie, PVOID Object)
{
  __int64 v2; // rax

  if ( !Cookie )
    return 0LL;
  v2 = *((_QWORD *)Object + 7);
  if ( (v2 & 1) != 0 )
    return 0LL;
  else
    return (PVOID)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
}
