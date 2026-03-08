/*
 * XREFs of NtGdiSetBoundsRect @ 0x1C00092A0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBoundsRect @ 0x1C0009304 (GreSetBoundsRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiSetBoundsRect(HDC a1, struct _POINTL *a2)
{
  __int128 v3; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (struct _POINTL *)MmUserProbeAddress;
    v3 = *(_OWORD *)&a2->x;
    a2 = (struct _POINTL *)&v3;
  }
  return GreSetBoundsRect(a1, a2);
}
