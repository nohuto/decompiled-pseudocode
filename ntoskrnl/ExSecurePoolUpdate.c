/*
 * XREFs of ExSecurePoolUpdate @ 0x14060AB00
 * Callers:
 *     <none>
 * Callees:
 *     VslSecurePoolUpdate @ 0x14054A3B0 (VslSecurePoolUpdate.c)
 */

__int64 __fastcall ExSecurePoolUpdate(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7)
{
  if ( a6 && a7 && a1 )
    return VslSecurePoolUpdate(a1, a2, a3, a4, a5, a6, a7);
  else
    return 3221225485LL;
}
