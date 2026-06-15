/*
 * XREFs of sub_18010274C @ 0x18010274C
 * Callers:
 *     sub_1800FE268 @ 0x1800FE268 (sub_1800FE268.c)
 * Callees:
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 */

__int64 __fastcall sub_18010274C(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  result = (__int64)&off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    result = sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 0x30u, (__int64)&unk_1801726D0, a2);
  }
  if ( *(_BYTE *)(a1 + 61) )
  {
    if ( (a2 & 0xFD) != 0 )
    {
      result = (unsigned int)(*(_DWORD *)(a1 + 56) - 2);
      if ( (result & 0xFFFFFFFD) == 0 )
        return sub_18010393C(a1);
    }
    else if ( *(_DWORD *)(a1 + 56) == 3 )
    {
      return sub_180104244(a1);
    }
  }
  return result;
}
