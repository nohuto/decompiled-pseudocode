/*
 * XREFs of HvpAllocateMap @ 0x1407977B4
 * Callers:
 *     HvpExpandMap @ 0x14073024C (HvpExpandMap.c)
 *     HvpInitMap @ 0x1407309B8 (HvpInitMap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall HvpAllocateMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  void *v8; // rax
  void *v9; // rsi
  __int64 v10; // rcx

  if ( a4 >= 0x400 )
    return 0;
  while ( a3 <= a4 )
  {
    v8 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(12288LL, 0LL, 959597891LL);
    v9 = v8;
    if ( !v8 )
      return 0;
    memset(v8, 0, 0x3000uLL);
    v10 = a3++;
    *(_QWORD *)(a2 + 8 * v10) = v9;
  }
  return 1;
}
