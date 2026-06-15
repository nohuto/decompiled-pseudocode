/*
 * XREFs of sub_18012F558 @ 0x18012F558
 * Callers:
 *     sub_18012F620 @ 0x18012F620 (sub_18012F620.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18012F558(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = off_1801B1168;
  *(_QWORD *)(a1 + 8) = off_1801B1118;
  *(_QWORD *)(a1 + 16) = off_1801B1030;
  *(_QWORD *)(a1 + 24) = off_1801B1000;
  *(_QWORD *)(a1 + 32) = off_1801B1188;
  *(_QWORD *)(a1 + 40) = off_1801B10E8;
  *(_QWORD *)(a1 + 48) = off_1801B1090;
  *(_QWORD *)(a1 + 56) = off_1801B1078;
  *(_QWORD *)(a1 + 64) = off_1801B10B0;
  *(_QWORD *)(a1 + 72) = off_1801B11A8;
  *(_QWORD *)(a1 + 80) = off_1801B1058;
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  CoTaskMemFree(*(LPVOID *)(a1 + 120));
  *(_QWORD *)(a1 + 120) = 0LL;
}
