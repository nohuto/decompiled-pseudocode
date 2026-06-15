/*
 * XREFs of sub_1800C64F8 @ 0x1800C64F8
 * Callers:
 *     sub_1800C7F30 @ 0x1800C7F30 (sub_1800C7F30.c)
 *     sub_1800C7F80 @ 0x1800C7F80 (sub_1800C7F80.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800C67C0 @ 0x1800C67C0 (sub_1800C67C0.c)
 */

__int64 __fastcall sub_1800C64F8(__int64 a1, const FILETIME *a2)
{
  int v3; // ebx
  struct _FILETIME LocalFileTime; // [rsp+20h] [rbp-28h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

  v3 = 0;
  if ( !FileTimeToLocalFileTime(a2, &LocalFileTime)
    || !FileTimeToSystemTime(&LocalFileTime, &SystemTime)
    || !(unsigned int)sub_1800C67C0(&SystemTime, a1) )
  {
    v3 = 1;
  }
  *(_DWORD *)(a1 + 8) = v3;
  return a1;
}
