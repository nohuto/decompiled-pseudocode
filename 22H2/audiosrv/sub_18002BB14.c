/*
 * XREFs of sub_18002BB14 @ 0x18002BB14
 * Callers:
 *     sub_18002B0A0 @ 0x18002B0A0 (sub_18002B0A0.c)
 *     sub_18002B988 @ 0x18002B988 (sub_18002B988.c)
 *     sub_180043EC0 @ 0x180043EC0 (sub_180043EC0.c)
 *     sub_180057830 @ 0x180057830 (sub_180057830.c)
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 *     sub_18005E354 @ 0x18005E354 (sub_18005E354.c)
 *     sub_18005E548 @ 0x18005E548 (sub_18005E548.c)
 *     sub_18005E734 @ 0x18005E734 (sub_18005E734.c)
 *     sub_18005ED10 @ 0x18005ED10 (sub_18005ED10.c)
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 *     sub_1800D8B70 @ 0x1800D8B70 (sub_1800D8B70.c)
 *     sub_1800DB2B4 @ 0x1800DB2B4 (sub_1800DB2B4.c)
 *     sub_1800E0C50 @ 0x1800E0C50 (sub_1800E0C50.c)
 *     sub_1800E0DC0 @ 0x1800E0DC0 (sub_1800E0DC0.c)
 *     sub_180104DB8 @ 0x180104DB8 (sub_180104DB8.c)
 *     sub_180113DA4 @ 0x180113DA4 (sub_180113DA4.c)
 *     sub_180113F9C @ 0x180113F9C (sub_180113F9C.c)
 *     sub_180114590 @ 0x180114590 (sub_180114590.c)
 *     sub_18012EC00 @ 0x18012EC00 (sub_18012EC00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002BB14(__int64 *a1, void (__fastcall ***a2)(_QWORD, __int64, __int64 *), __int64 a3)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // r9
  __int64 v5; // rdi

  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
  if ( !a1 )
    return 0LL;
  v5 = *a1;
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, a3, a1);
  if ( v5 )
    (*(void (__fastcall **)(__int64, void (__fastcall ***)(_QWORD, __int64, __int64 *), __int64, void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v5 + 16LL))(
      v5,
      a2,
      a3,
      v3);
  return *a1;
}
