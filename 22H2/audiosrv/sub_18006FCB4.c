/*
 * XREFs of sub_18006FCB4 @ 0x18006FCB4
 * Callers:
 *     sub_18006F4E4 @ 0x18006F4E4 (sub_18006F4E4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_18006FCB4(_QWORD *a1, _QWORD *a2)
{
  char v4; // al
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 208LL))(*a2);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)qword_18019EE48 + 32LL))(
             qword_18019EE48,
             *a2,
             *a1,
             v4 == 0,
             0LL);
  if ( (int)result < 0
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    return sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 40LL, &unk_18015E5F0, (unsigned int)result);
  }
  return result;
}
