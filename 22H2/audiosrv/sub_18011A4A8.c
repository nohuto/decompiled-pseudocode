/*
 * XREFs of sub_18011A4A8 @ 0x18011A4A8
 * Callers:
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011BD94 @ 0x18011BD94 (sub_18011BD94.c)
 */

HRESULT __fastcall sub_18011A4A8(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  HRESULT result; // eax
  __int128 pvar; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+38h] [rbp-30h] BYREF
  int v8; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  v2 = 200 * *a2;
  pvar = 0LL;
  v8 = v2 + 2;
  LOWORD(pvar) = 65;
  v7 = xmmword_180172BF8;
  result = sub_18011BD94(a2, &v6, (char *)&pvar + 8);
  if ( result >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
      *(_QWORD *)(a1 + 40),
      &v7,
      &pvar);
    return PropVariantClear((PROPVARIANT *)&pvar);
  }
  return result;
}
