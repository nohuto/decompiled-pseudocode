/*
 * XREFs of ?_Tidy@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAXXZ @ 0x180144DD0
 * Callers:
 *     ??1?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x180135ECC (--1-$vector@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono.c)
 *     ??1PinHistory@@QEAA@XZ @ 0x18013610C (--1PinHistory@@QEAA@XZ.c)
 *     ??1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18013619C (--1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Tidy(
        char **a1)
{
  char *v1; // rdi
  char *v3; // rbp
  char *v4; // rbx
  std::_Ref_count_base *v5; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v1 != v3 )
    {
      do
      {
        v5 = (std::_Ref_count_base *)*((_QWORD *)v4 + 1);
        if ( v5 )
          std::_Ref_count_base::_Decref(v5);
        v4 += 24;
      }
      while ( v4 != v3 );
    }
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(24 * ((a1[2] - v1) / 24)));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
