/*
 * XREFs of PopFxRequestCommon @ 0x14056C830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxRequestCommon(int a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+24h] [rbp-24h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  if ( a1 != 1 )
    return 3221225659LL;
  v6 = 1LL;
  v4 = 0LL;
  v5 = 0;
  v3 = 1;
  v7 = a2;
  return ((__int64 (__fastcall *)(int *))PopFxPlatformInterface)(&v3);
}
