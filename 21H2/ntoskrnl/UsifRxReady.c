/*
 * XREFs of UsifRxReady @ 0x1405CB9C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

bool __fastcall UsifRxReady(__int64 *a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *a1;
    if ( v1 )
    {
      if ( (unsigned __int8)((__int64 (__fastcall *)(__int64))off_140C053F0)(v1 + 68) )
        return 1;
    }
  }
  return result;
}
