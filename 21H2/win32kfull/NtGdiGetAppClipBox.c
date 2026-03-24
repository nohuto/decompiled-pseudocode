/*
 * XREFs of NtGdiGetAppClipBox @ 0x1C00B6E30
 * Callers:
 *     <none>
 * Callees:
 *     GreGetAppClipBox @ 0x1C00B6A6C (GreGetAppClipBox.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetAppClipBox(HDC a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  result = GreGetAppClipBox(a1, (LONG *)&v4);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v4;
  }
  return result;
}
