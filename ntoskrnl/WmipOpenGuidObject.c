/*
 * XREFs of WmipOpenGuidObject @ 0x14069B120
 * Callers:
 *     WmipOpenBlock @ 0x14069AF1C (WmipOpenBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WmipCreateGuidObject @ 0x14069AA20 (WmipCreateGuidObject.c)
 *     WmipUuidFromString @ 0x14069B1D8 (WmipUuidFromString.c)
 */

__int64 __fastcall WmipOpenGuidObject(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  v8 = *(_QWORD **)(v4 + 8);
  v12 = 0LL;
  v9 = *v8 - 0x69006D0057005CLL;
  if ( *v8 == 0x69006D0057005CLL )
    v9 = v8[1] - 0x64006900750047LL;
  if ( v9 )
    return 3221225485LL;
  result = WmipUuidFromString((char *)v8 + 18, &v12);
  if ( (int)result >= 0 )
  {
    result = WmipCreateGuidObject((__int128 *)a1, a3, &v12, &v11);
    if ( (int)result >= 0 )
    {
      *a4 = v11;
      return 0LL;
    }
  }
  return result;
}
