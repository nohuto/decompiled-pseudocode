/*
 * XREFs of sub_18010C820 @ 0x18010C820
 * Callers:
 *     sub_180105CE0 @ 0x180105CE0 (sub_180105CE0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_180109B18 @ 0x180109B18 (sub_180109B18.c)
 *     sub_18010DFFC @ 0x18010DFFC (sub_18010DFFC.c)
 */

__int64 __fastcall sub_18010C820(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  *(_QWORD *)a1 = &off_1801559E0;
  *(_QWORD *)(a1 + 8) = off_1801559C0;
  *(_QWORD *)(a1 + 16) = off_180155910;
  sub_18010DFFC();
  sub_180109B18((_QWORD *)(a1 + 184));
  sub_1801055A0(a1 + 160, a1 + 160, *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL));
  sub_1800472E0(*(_QWORD *)(a1 + 160), 0x48uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_18000F708((__int64 *)(a1 + 64));
  result = sub_18000F708((__int64 *)(a1 + 56));
  *(_DWORD *)(a1 + 52) = -1073741823;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
