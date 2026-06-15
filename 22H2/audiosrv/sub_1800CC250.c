/*
 * XREFs of sub_1800CC250 @ 0x1800CC250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CBFC0 @ 0x1800CBFC0 (sub_1800CBFC0.c)
 */

__int64 __fastcall sub_1800CC250(volatile signed __int32 *a1)
{
  __int64 result; // rax

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x29u, (__int64)&unk_18015DF00, a1);
  }
  result = sub_1800CBFC0(a1);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    return sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x2Au, (__int64)&unk_18015DF00, result);
  }
  return result;
}
