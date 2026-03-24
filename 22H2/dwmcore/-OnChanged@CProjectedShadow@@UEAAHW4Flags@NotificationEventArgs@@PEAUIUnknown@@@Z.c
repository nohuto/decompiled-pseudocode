/*
 * XREFs of ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001B960
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800A1128 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::OnChanged(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v7; // rcx

  if ( a3 && ((unsigned int)(a2 - 5) <= 1 || !a2) )
  {
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(a1 + 248);
    if ( a3 == a1 || a3 == *(_QWORD *)(a1 + 72) )
    {
      v5 = *(_QWORD *)(a1 + 360);
      *(_QWORD *)(a1 + 360) = 0LL;
      if ( v5 )
      {
        v7 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  return 0LL;
}
