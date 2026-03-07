__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // r11
  unsigned __int16 *v7; // rdi
  unsigned __int16 v9; // r9
  unsigned int v10; // r10d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v13; // r9
  struct _LIST_ENTRY *v14; // rax
  unsigned __int16 v15; // r10

  v5 = *(_WORD *)a1 >> 1;
  v7 = *(unsigned __int16 **)(a1 + 8);
  if ( v5 )
  {
    while ( a3 )
    {
      v9 = *v7++;
      v10 = *a2++;
      if ( v9 != (_WORD)v10 )
      {
        if ( (a4 & 1) == 0 && v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            v9 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v13);
          }
          else
          {
            v9 -= 32;
          }
        }
        if ( (a4 & 2) == 0 && v10 >= 0x61 )
        {
          if ( v10 > 0x7A )
          {
            v14 = PsGetCurrentServerSiloGlobals();
            LOWORD(v10) = NLS_UPCASE((__int64)v14[77].Flink, v15);
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
        }
        if ( v9 != (unsigned __int16)v10 )
          return v9 - (unsigned int)(unsigned __int16)v10;
      }
      --a3;
      if ( !--v5 )
        return v5 - (unsigned int)a3;
    }
  }
  return v5 - (unsigned int)a3;
}
