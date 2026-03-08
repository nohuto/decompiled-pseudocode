/*
 * XREFs of LdrInitSecurityCookie @ 0x140784A8C
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140784998 (MiProcessLoadConfigForDriver.c)
 * Callees:
 *     LdrpFetchAddressOfSecurityCookie @ 0x140784B40 (LdrpFetchAddressOfSecurityCookie.c)
 */

__int64 __fastcall LdrInitSecurityCookie(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  __int64 AddressOfSecurityCookie; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v10; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+44h] [rbp+1Ch]

  v11 = HIDWORD(a3);
  v10 = 0;
  a5 = 0LL;
  AddressOfSecurityCookie = LdrpFetchAddressOfSecurityCookie(a1, a2, &v10, &a5);
  if ( a5 && *a5 >= 0x94u && (a5[36] & 0x800) != 0 )
    return 1LL;
  if ( AddressOfSecurityCookie && *(_QWORD *)AddressOfSecurityCookie == 0x2B992DDFA232LL )
  {
    v7 = __rdtsc();
    v8 = (AddressOfSecurityCookie ^ (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) ^ HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16)) & 0xFFFFFFFFFFFFLL;
    if ( v8 == 0x2B992DDFA232LL || !v8 )
      v8 = 0x2B992DDFA233LL;
    *(_QWORD *)AddressOfSecurityCookie = v8;
    return 1LL;
  }
  return 0LL;
}
