__int64 __fastcall CmpPopulateKeyBasicInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _WORD *v12; // r11
  int v13; // eax
  unsigned int v14; // edx

  v8 = 2 * *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
    v8 = *(_WORD *)(a2 + 72);
  v9 = v8;
  v10 = v8 + 16;
  *a5 = v10;
  if ( a4 < 0x10 )
    return 3221225507LL;
  v12 = (_WORD *)(a3 + 16);
  *(_QWORD *)a3 = *(_QWORD *)a1;
  v13 = *(_DWORD *)(a1 + 8);
  v14 = a4 - 16;
  *(_DWORD *)(a3 + 8) = v13;
  *(_DWORD *)(a3 + 12) = v9;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    CmpCopyCompressedName(v12, v14, (unsigned __int8 *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
  }
  else
  {
    if ( v14 <= v9 )
      v9 = a4 - 16;
    memmove(v12, (const void *)(a2 + 76), v9);
  }
  return a4 < v10 ? 0x80000005 : 0;
}
