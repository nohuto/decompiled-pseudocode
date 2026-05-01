/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V12@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@_J1$$QEAV10@P6A_NAEAV10@3@Z@Z @ 0x18028E738
 * Callers:
 *     ??$_Make_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV10@1@Z@Z @ 0x18028E33C (--$_Make_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@.c)
 *     ??$_Sort_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV10@1@Z@Z @ 0x18028E854 (--$_Sort_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18028649C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::_Pop_heap_hole_by_index<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v5; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 i; // rdi
  __int64 v13; // rdi

  v5 = a3 - 1;
  v8 = (a3 - 1) >> 1;
  v9 = a2;
  for ( i = a2; i < v8; v9 = i )
  {
    i = 2 * i + 2;
    if ( a5(a1 + 16 * i, a1 + 16 * i - 16) )
      --i;
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a1 + 16 * v9), (__int64 *)(a1 + 16 * i));
  }
  if ( i == v8 && (a3 & 1) == 0 )
  {
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a1 + 16 * v9), (__int64 *)(16 * a3 + a1 - 16));
    v9 = v5;
  }
  if ( a2 < v9 )
  {
    do
    {
      v13 = (v9 - 1) >> 1;
      if ( !a5(a1 + 16 * v13, (__int64)a4) )
        break;
      std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a1 + 16 * v9), (__int64 *)(a1 + 16 * ((v9 - 1) >> 1)));
      v9 = (v9 - 1) >> 1;
    }
    while ( a2 < v13 );
  }
  return std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a1 + 16 * v9), a4);
}
