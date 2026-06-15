/*
 * XREFs of sub_18002C970 @ 0x18002C970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C40C0 @ 0x1800C40C0 (sub_1800C40C0.c)
 */

__int64 __fastcall sub_18002C970(__int64 a1, _QWORD *a2)
{
  _OWORD *v2; // rsi
  __int64 v5; // rax
  void (__fastcall *v6)(__int64); // rax

  v2 = (_OWORD *)(a1 + 284);
  v5 = *(_QWORD *)(a1 + 284) - *a2;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 292) - a2[1];
  if ( v5 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800C40C0(*((_QWORD *)off_18019C348 + 2), 14LL, &unk_18015DEF0, a2);
    }
    v6 = *(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL);
    *v2 = *(_OWORD *)a2;
    v6(a1);
    sub_18002E440((LPCRITICAL_SECTION)(a1 + 496));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return 0LL;
}
