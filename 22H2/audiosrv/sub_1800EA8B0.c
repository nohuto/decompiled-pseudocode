/*
 * XREFs of sub_1800EA8B0 @ 0x1800EA8B0
 * Callers:
 *     sub_18004DF90 @ 0x18004DF90 (sub_18004DF90.c)
 *     sub_180052E04 @ 0x180052E04 (sub_180052E04.c)
 *     sub_1800694B8 @ 0x1800694B8 (sub_1800694B8.c)
 *     sub_1800E9EC4 @ 0x1800E9EC4 (sub_1800E9EC4.c)
 *     sub_1800EA600 @ 0x1800EA600 (sub_1800EA600.c)
 *     sub_1800EE0B4 @ 0x1800EE0B4 (sub_1800EE0B4.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_1800EA8B0(__int64 a1)
{
  struct _TP_TIMER *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *(struct _TP_TIMER **)a1;
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)a1, 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)a1);
  }
  v3 = *(std::_Ref_count_base **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v3 )
    sub_180052600(v3);
  v4 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v4 )
    sub_180052600(v4);
  sub_18006A148((void *)a1);
  return a1;
}
