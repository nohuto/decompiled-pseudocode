/*
 * XREFs of sub_180085BC4 @ 0x180085BC4
 * Callers:
 *     sub_180084BD0 @ 0x180084BD0 (sub_180084BD0.c)
 *     sub_180084C3C @ 0x180084C3C (sub_180084C3C.c)
 *     sub_180085270 @ 0x180085270 (sub_180085270.c)
 *     sub_180089AA8 @ 0x180089AA8 (sub_180089AA8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180085BC4(__int64 *a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)a1[5];
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return unknown_libname_101(a1);
}
