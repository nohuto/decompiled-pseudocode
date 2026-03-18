/*
 * XREFs of UsifGetByte @ 0x140656650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsifGetByte(__int64 *a1, _BYTE *a2)
{
  __int64 v4; // rcx

  if ( !a1 )
    return 3LL;
  v4 = *a1;
  if ( !v4 )
    return 3LL;
  if ( !((unsigned __int8 (__fastcall *)(__int64))off_140C06A50[0])(v4 + 68) )
    return 1LL;
  *a2 = ((__int64 (__fastcall *)(__int64))off_140C06A50[0])(*a1 + 0x80000);
  return 0LL;
}
