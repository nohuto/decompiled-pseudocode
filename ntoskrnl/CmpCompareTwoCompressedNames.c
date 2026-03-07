__int64 __fastcall CmpCompareTwoCompressedNames(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int16 a4)
{
  unsigned __int16 v6; // r11
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v12; // r9
  struct _LIST_ENTRY *v13; // rax
  unsigned __int16 v14; // r10

  v6 = a2;
  if ( a2 )
  {
    while ( a4 )
    {
      v8 = *a1++;
      v9 = *a3++;
      if ( (_WORD)v8 != (_WORD)v9 )
      {
        if ( v8 >= 0x61 )
        {
          if ( v8 > 0x7A )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            LOWORD(v8) = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v12);
          }
          else
          {
            LOWORD(v8) = v8 - 32;
          }
        }
        if ( v9 >= 0x61 )
        {
          if ( v9 > 0x7A )
          {
            v13 = PsGetCurrentServerSiloGlobals();
            LOWORD(v9) = NLS_UPCASE((__int64)v13[77].Flink, v14);
          }
          else
          {
            LOWORD(v9) = v9 - 32;
          }
        }
        if ( (unsigned __int16)v8 != (unsigned __int16)v9 )
          return (unsigned __int16)v8 - (unsigned int)(unsigned __int16)v9;
      }
      --a4;
      if ( !--v6 )
        return v6 - (unsigned int)a4;
    }
  }
  return v6 - (unsigned int)a4;
}
