/*
 * XREFs of sub_1800DAA74 @ 0x1800DAA74
 * Callers:
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_1 @ 0x180076A80 (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_180076A80.c)
 * Callees:
 *     sub_180001FB0 @ 0x180001FB0 (sub_180001FB0.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800DAA74(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *(_QWORD *)(a1 + 496);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(void **)(a1 + 480);
  if ( v3 )
    sub_18006A148(v3);
  sub_18000F708((__int64 *)(a1 + 472));
  v4 = *(std::_Ref_count_base **)(a1 + 464);
  if ( v4 )
    sub_180052600(v4);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 216) - 24LL));
  sub_180006A30((volatile signed __int32 *)(*(_QWORD *)(a1 + 208) - 24LL));
  CoTaskMemFree(*(LPVOID *)(a1 + 176));
  *(_QWORD *)(a1 + 176) = 0LL;
  sub_180001FB0((_QWORD *)(a1 + 72));
  if ( *(_BYTE *)(a1 + 56) )
  {
    *(_BYTE *)(a1 + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  }
}
