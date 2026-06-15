/*
 * XREFs of sub_180052C74 @ 0x180052C74
 * Callers:
 *     sub_180052BFC @ 0x180052BFC (sub_180052BFC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180052C74(__int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  *(_QWORD *)a1 = off_1801471B8;
  *(_QWORD *)(a1 + 8) = off_180147170;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = off_180147188;
  *(_QWORD *)(a1 + 8) = off_180147170;
  return a1;
}
