/*
 * XREFs of HalpIumGetTime @ 0x14051DF20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIumGetTime(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]

  if ( !qword_140C621F0 )
    return 0x8000000000000003uLL;
  result = qword_140C621F0(0LL, 0LL, 0LL, &v6);
  *a1 = v6;
  if ( a2 )
  {
    v5 = v8;
    *(_QWORD *)a2 = v7;
    *(_DWORD *)(a2 + 8) = v5;
  }
  return result;
}
