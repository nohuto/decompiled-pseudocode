/*
 * XREFs of sub_18006D910 @ 0x18006D910
 * Callers:
 *     sub_180032F30 @ 0x180032F30 (sub_180032F30.c)
 * Callees:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

char __fastcall sub_18006D910(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbx

  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*a2 + 248LL))(*a2) )
    return 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 39LL, &unk_18015DEF0, v4);
  }
  v5 = *a1;
  if ( *(_QWORD *)(v5 + 16) == *(_QWORD *)(v5 + 8) )
  {
    sub_180008C14((__int64 *)v5, *(__int64 **)(v5 + 8), a2);
  }
  else
  {
    sub_180048790(*(_QWORD **)(v5 + 8), *a2);
    *(_QWORD *)(v5 + 8) += 8LL;
  }
  return 1;
}
