/*
 * XREFs of ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x18028EA40
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x18028DD8C (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1802CCD48 (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1802CCE9C (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VAltTabWindowHookData@@@std@@@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VAltTabWindowHookData@@@1@QEAV21@AEAV21@@Z @ 0x18038EAF0 (--$_Emplace_reallocate@AEAV-$shared_ptr@VAltTabWindowHookData@@@std@@@-$vector@V-$shared_ptr@VAl.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18028DBD8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *v3 = *(_QWORD *)((char *)v3 + v4);
      v3[1] = *(_QWORD *)((char *)v3 + v4 + 8);
      *(_QWORD *)((char *)v3 + v4) = 0LL;
      *(_QWORD *)((char *)v3 + v4 + 8) = 0LL;
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>((__int64)v3, (__int64)v3);
  return v3;
}
