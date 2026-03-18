/*
 * XREFs of NtGdiGetBoundsRect @ 0x1C008B320
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBoundsRect @ 0x1C008B388 (GreGetBoundsRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetBoundsRect(HDC a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  result = GreGetBoundsRect(a1, (struct _POINTL *)&v4);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v4;
  }
  return result;
}
