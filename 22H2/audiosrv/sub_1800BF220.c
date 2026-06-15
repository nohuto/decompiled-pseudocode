/*
 * XREFs of sub_1800BF220 @ 0x1800BF220
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

__int64 __fastcall sub_1800BF220(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 124);
    *a2 = v3;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      v5 = v3;
      sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x13u, (__int64)&unk_18016DDC0, a1, v5);
    }
  }
  else
  {
    v2 = -2147467261;
    sub_18005E8F8((__int64)"CVolumeControlBase::GetChannelCount", 381, -2147467261);
  }
  return v2;
}
