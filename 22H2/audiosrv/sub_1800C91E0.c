/*
 * XREFs of sub_1800C91E0 @ 0x1800C91E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E0E0 @ 0x18002E0E0 (sub_18002E0E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800C6B60 @ 0x1800C6B60 (sub_1800C6B60.c)
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 */

__int64 __fastcall sub_1800C91E0(__int64 a1, int a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(a1 + 408);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  sub_18002E0E0(a1, a2);
  if ( v2 == 2 )
  {
    if ( a2 != 2 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x3Eu, (__int64)&unk_18015DEF0, *(const wchar_t **)(a1 + 728));
      }
      sub_1800C85C8(a1, 0LL);
      goto LABEL_14;
    }
  }
  else if ( a2 != 2 )
  {
    goto LABEL_14;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x3Fu, (__int64)&unk_18015DEF0, *(const wchar_t **)(a1 + 728));
  }
  sub_1800C6B60(a1);
LABEL_14:
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x40u, (__int64)&unk_18015DEF0, a1);
  }
  return sub_180067A50((volatile signed __int32 *)(a1 + 32));
}
