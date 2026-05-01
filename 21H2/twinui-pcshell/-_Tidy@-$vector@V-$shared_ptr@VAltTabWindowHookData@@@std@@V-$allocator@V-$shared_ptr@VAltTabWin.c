/*
 * XREFs of ?_Tidy@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@AEAAXXZ @ 0x18008F42C
 * Callers:
 *     _dynamic_atexit_destructor_for__AltTabWindowHook::s_altTabHooks__ @ 0x180177610 (_dynamic_atexit_destructor_for__AltTabWindowHook--s_altTabHooks__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18028DBD8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 */

void std::vector<std::shared_ptr<AltTabWindowHookData>>::_Tidy()
{
  void *v0; // rbx

  v0 = (void *)AltTabWindowHook::s_altTabHooks;
  if ( (_QWORD)AltTabWindowHook::s_altTabHooks )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(
      AltTabWindowHook::s_altTabHooks,
      *((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1));
    std::_Deallocate<16,0>(v0, (const struct std::nothrow_t *)((qword_180651358 - (_QWORD)v0) & 0xFFFFFFFFFFFFFFF0uLL));
    qword_180651358 = 0LL;
    AltTabWindowHook::s_altTabHooks = 0LL;
  }
}
