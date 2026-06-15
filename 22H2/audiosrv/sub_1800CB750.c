/*
 * XREFs of sub_1800CB750 @ 0x1800CB750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 */

__int64 __fastcall sub_1800CB750(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BEA04(*((_QWORD *)off_18019C348 + 2), 0x21u, (__int64)&unk_18015DF00, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 72) + 400LL))(
           *(_QWORD *)(a1 + 72),
           a2,
           a3);
}
