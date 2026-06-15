/*
 * XREFs of sub_180043E38 @ 0x180043E38
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 * Callees:
 *     sub_180043EC0 @ 0x180043EC0 (sub_180043EC0.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_180043E38(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v1 = 0;
  v2 = sub_180043EC0(a1, 0LL, &xmmword_18015BE98, pvar);
  if ( v2 < 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 50LL, &unk_18015E3E8, (unsigned int)v2);
    }
  }
  else if ( LOWORD(pvar[0]) )
  {
    LOBYTE(v1) = LOWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 51LL, &unk_18015E3E8, v1);
  }
  return v1;
}
