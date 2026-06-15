/*
 * XREFs of sub_180071BBC @ 0x180071BBC
 * Callers:
 *     sub_180071ABC @ 0x180071ABC (sub_180071ABC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180071BBC(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_18014AC08;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = off_18014AC98;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return a1;
}
