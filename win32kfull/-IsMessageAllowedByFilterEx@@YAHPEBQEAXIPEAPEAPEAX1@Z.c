__int64 __fastcall IsMessageAllowedByFilterEx(void *const *a1, unsigned __int16 a2, void ***a3, void ***a4)
{
  unsigned int v6; // r8d
  void **v8; // r11
  void **v9; // r9

  if ( a1
    && (v8 = (void **)a1[(unsigned __int64)a2 >> 13]) != 0LL
    && (v9 = (void **)v8[((unsigned __int64)a2 >> 9) & 0xF]) != 0LL
    && (v6 = 1, ((unsigned __int8)(1 << (a2 & 7)) & *((_BYTE *)v9 + (((unsigned __int64)a2 >> 3) & 0x3F))) != 0) )
  {
    if ( a3 )
      *a3 = v8;
    if ( a4 )
      *a4 = v9;
  }
  else
  {
    return 0;
  }
  return v6;
}
