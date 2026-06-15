/*
 * XREFs of sub_18004568C @ 0x18004568C
 * Callers:
 *     sub_1800455C0 @ 0x1800455C0 (sub_1800455C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_18004568C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(_QWORD *)(a1 + 600);
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 600);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 72LL, &unk_18015DEF0, a1);
      v3 = *(_QWORD *)(a1 + 600);
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)qword_18019E640 + 24LL))(
      qword_18019E640,
      v3,
      0LL,
      0LL,
      0);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019E640 + 32LL))(
             qword_18019E640,
             *(_QWORD *)(a1 + 600),
             1LL);
  }
  return result;
}
