/*
 * XREFs of sub_18012C764 @ 0x18012C764
 * Callers:
 *     sub_18012C850 @ 0x18012C850 (sub_18012C850.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18012C764(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = &off_180156258;
  *(_QWORD *)(a1 + 8) = off_180156220;
  *(_QWORD *)(a1 + 16) = off_1801561D8;
  sub_180033A70(*(void **)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  *(_DWORD *)(a1 + 52) = -1073741823;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
