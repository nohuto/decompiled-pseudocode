/*
 * XREFs of sub_18012A7B8 @ 0x18012A7B8
 * Callers:
 *     sub_18012A850 @ 0x18012A850 (sub_18012A850.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18012A7B8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)a1 = &off_180156030;
  *(_QWORD *)(a1 + 8) = off_180155FA0;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    o__aligned_free(v2);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  sub_1800461B8((__int64 *)(a1 + 536));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  *(_DWORD *)(a1 + 44) = -1073741823;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
