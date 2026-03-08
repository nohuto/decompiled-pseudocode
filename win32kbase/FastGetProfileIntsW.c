/*
 * XREFs of FastGetProfileIntsW @ 0x1C0017DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0018EE0 (RtlLoadStringOrError.c)
 *     FastGetProfileIntW @ 0x1C0018FA0 (FastGetProfileIntW.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntsW(int a1, __int64 a2, unsigned int a3, int a4)
{
  PULONG *v6; // rbx
  __int64 v7; // rdi
  int v9[20]; // [rsp+30h] [rbp-78h] BYREF

  if ( a3 )
  {
    v6 = (PULONG *)(a2 + 24);
    v7 = a3;
    do
    {
      RtlLoadStringOrError(*((unsigned __int16 *)v6 - 8), v9);
      FastGetProfileIntW(a1, *((_DWORD *)v6 - 6), (int)v9, *((_DWORD *)v6 - 2), *v6, a4);
      v6 += 4;
      --v7;
    }
    while ( v7 );
  }
  return 1LL;
}
