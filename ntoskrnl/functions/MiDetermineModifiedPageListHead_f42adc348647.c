__int64 __fastcall MiDetermineModifiedPageListHead(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  v5 = *(_QWORD *)(a1 + 16);
  if ( (v5 & 2) != 0 )
    return a2 + 88LL * ((unsigned __int16)v5 >> 12) + 3904;
  v7 = *(unsigned int *)(a2 + 1188);
  if ( (unsigned __int16)v5 >> 12 != (_DWORD)v7 )
    goto LABEL_15;
  v8 = v5;
  if ( qword_140C657C0 && (v5 & 0x10) == 0 )
    v8 = v5 & ~qword_140C657C0;
  v9 = HIDWORD(v8);
  if ( v9 - 2 > 2 || !(_DWORD)v9 )
  {
LABEL_15:
    if ( (a3 & 1) != 0 && *(_DWORD *)(a2 + 1192) && (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      *(_QWORD *)(a1 + 16) = MiTransferSoftwarePte(
                               *(_QWORD *)(a1 + 16),
                               *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 1188) + 17056),
                               3LL,
                               0LL);
      return a2 + 3776;
    }
    return a2 + 3648;
  }
  if ( (_DWORD)v9 == 4 )
  {
    if ( (a3 & 2) != 0 )
      *(_QWORD *)(a1 + 16) = MiTransferSoftwarePte(v5, *(_QWORD *)(a2 + 8 * v7 + 17056), 3LL, 0LL);
    return a2 + 3648;
  }
  if ( (_DWORD)v9 == 3 )
    return a2 + 3776;
  if ( (_DWORD)v9 != 2 )
    return a2 + 3648;
  return 88 * v7 + a2 + 3904;
}
