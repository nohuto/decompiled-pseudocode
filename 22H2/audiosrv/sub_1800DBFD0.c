/*
 * XREFs of sub_1800DBFD0 @ 0x1800DBFD0
 * Callers:
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 * Callees:
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800D725C @ 0x1800D725C (sub_1800D725C.c)
 */

__int64 __fastcall sub_1800DBFD0(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v1 = 0;
  v2 = sub_1800D725C(a1, 0, (__int64)&unk_18015BE80, (__int64)pvar);
  if ( v2 >= 0 )
  {
    if ( LOWORD(pvar[0]) )
      LOBYTE(v1) = LOWORD(pvar[1]) == 0;
  }
  else if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
         && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
         && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x2Eu, (__int64)&unk_18015E3E8, v2);
  }
  PropVariantClear(pvar);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x2Fu, (__int64)&unk_18015E3E8, v1);
  }
  return v1;
}
