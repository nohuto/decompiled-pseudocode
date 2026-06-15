/*
 * XREFs of sub_180072D4C @ 0x180072D4C
 * Callers:
 *     sub_18007296C @ 0x18007296C (sub_18007296C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010C780 @ 0x18010C780 (sub_18010C780.c)
 */

__int64 __fastcall sub_180072D4C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_18010C780();
  v4 = qword_18019E418;
  *(_QWORD *)a1 = off_1801562D8;
  *(_QWORD *)(a1 + 8) = off_180156300;
  *(_DWORD *)(a1 + 60) = 1;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 72) = a2[1];
  *(_QWORD *)a1 = off_18014B150;
  *(_QWORD *)(a1 + 8) = off_18014B308;
  return a1;
}
