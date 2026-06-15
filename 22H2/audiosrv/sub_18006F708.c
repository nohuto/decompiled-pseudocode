/*
 * XREFs of sub_18006F708 @ 0x18006F708
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 * Callees:
 *     sub_18000FFC0 @ 0x18000FFC0 (sub_18000FFC0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CD9A8 @ 0x1800CD9A8 (sub_1800CD9A8.c)
 */

__int64 __fastcall sub_18006F708(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *i; // rdi
  int v8; // eax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)qword_18019EE48 + 32LL))(
           qword_18019EE48,
           *i,
           *a4,
           0LL,
           0LL);
    if ( v8 < 0
      && off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 26LL, &unk_18015E5F0, (unsigned int)v8);
    }
  }
  sub_1800CD9A8(a1, a4);
  sub_18000FFC0(a4);
  return a1;
}
