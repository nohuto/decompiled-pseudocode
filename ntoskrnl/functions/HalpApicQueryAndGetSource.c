__int64 __fastcall HalpApicQueryAndGetSource(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // ebx
  int v7; // ebp
  int v8; // esi
  int v9; // r14d
  unsigned int v10; // eax
  unsigned int v12; // ebx
  int v13; // eax

  v4 = 0;
  if ( a4 )
    *a4 = 1;
  v7 = 224;
  v8 = 624;
  v9 = 7;
  while ( 1 )
  {
    v10 = ((unsigned __int16)-(v9 != 0) - 0x10000) & ((__int64 (__fastcall *)(_QWORD))HalpApicRead)((unsigned int)v8);
    if ( v10 )
    {
      if ( v4 )
        break;
      _BitScanReverse(&v12, v10);
      v13 = v10 & ~(1 << v12);
      v4 = v7 + v12;
      if ( !a4 )
        goto LABEL_6;
      if ( v13 )
        break;
    }
    --v9;
    v8 -= 16;
    v7 -= 32;
    if ( v8 < 512 )
      goto LABEL_6;
  }
  *a4 = 0;
LABEL_6:
  if ( !v4 )
    return 4LL;
  *a3 = v4;
  return 3LL;
}
