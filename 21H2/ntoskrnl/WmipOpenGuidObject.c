/*
 * XREFs of WmipOpenGuidObject @ 0x1406344F0
 * Callers:
 *     WmipOpenBlock @ 0x1406340C8 (WmipOpenBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WmipUuidFromString @ 0x1406342CC (WmipUuidFromString.c)
 *     WmipCreateGuidObject @ 0x1406345A8 (WmipCreateGuidObject.c)
 */

__int64 __fastcall WmipOpenGuidObject(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
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
  result = WmipUuidFromString((__int64)v8 + 18, (__int64)&v12);
  if ( (int)result >= 0 )
  {
    result = WmipCreateGuidObject(a1, a3, &v12, &v11);
    if ( (int)result >= 0 )
    {
      *a4 = v11;
      return 0LL;
    }
  }
  return result;
}
