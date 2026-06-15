/*
 * XREFs of sub_1800E0290 @ 0x1800E0290
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800DCCD0 @ 0x1800DCCD0 (sub_1800DCCD0.c)
 */

__int64 __fastcall sub_1800E0290(_QWORD **a1)
{
  __int64 result; // rax

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x39u, (__int64)&unk_18015E3E8, a1);
  }
  result = 2147942487LL;
  if ( a1 )
  {
    result = sub_1800DCCD0(*a1);
    *a1 = 0LL;
  }
  return result;
}
