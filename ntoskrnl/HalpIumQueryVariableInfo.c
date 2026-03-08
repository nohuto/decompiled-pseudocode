/*
 * XREFs of HalpIumQueryVariableInfo @ 0x14051E140
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIumQueryVariableInfo(unsigned int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( !qword_140C621F0 )
    return 0x8000000000000003uLL;
  v8[0] = a1;
  result = qword_140C621F0(8LL, 0LL, 0LL, v8);
  *a2 = v8[1];
  *a3 = v8[2];
  *a4 = v8[3];
  return result;
}
