/*
 * XREFs of PopFxRequestCommon @ 0x1405892E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PpmIdleAllocateVetoReasons @ 0x14097EB64 (PpmIdleAllocateVetoReasons.c)
 */

__int64 __fastcall PopFxRequestCommon(int a1, __int64 a2)
{
  int v2; // ecx
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+24h] [rbp-24h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = a1 - 1;
  if ( v2 )
  {
    if ( v2 == 0x10000000 )
      return PpmIdleAllocateVetoReasons(a2);
    else
      return 3221225659LL;
  }
  else
  {
    v7 = 1LL;
    v5 = 0LL;
    v6 = 0;
    v4 = 1;
    v8 = a2;
    return ((__int64 (__fastcall *)(int *))PopFxPlatformInterface)(&v4);
  }
}
