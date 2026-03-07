BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r10
  unsigned __int64 v7; // r9
  struct _LIST_ENTRY *Flink; // rdi
  char *v10; // rax
  _QWORD *v11; // r10
  char *v12; // rbx
  signed __int64 v13; // r10
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v6;
  Flink = CurrentServerSiloGlobals[77].Flink;
  if ( (_DWORD)v7 != *v4 )
    return 0;
  v10 = (char *)*((_QWORD *)v6 + 1);
  v11 = (_QWORD *)*((_QWORD *)v4 + 1);
  v12 = &v10[v7];
  if ( v7 >= 8 )
  {
    do
    {
      if ( *(_QWORD *)v10 != *v11 )
        break;
      LODWORD(v7) = v7 - 8;
      if ( !(_DWORD)v7 )
        return 1;
      v10 += 8;
      ++v11;
    }
    while ( (unsigned int)v7 >= 8 );
  }
  if ( v10 < v12 )
  {
    if ( v5 )
    {
      v13 = (char *)v11 - v10;
      while ( 1 )
      {
        v14 = *(unsigned __int16 *)v10;
        v15 = *(unsigned __int16 *)&v10[v13];
        if ( (_WORD)v14 != (_WORD)v15 )
        {
          if ( (unsigned int)v14 >= 0x61 )
          {
            if ( (unsigned int)v14 > 0x7A )
            {
              if ( Flink && (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *((_WORD *)&Flink->Flink
                              + (v14 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v14 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v14 >> 8))))
                            + v14;
            }
            else
            {
              LOWORD(v14) = v14 - 32;
            }
          }
          if ( (unsigned int)v15 >= 0x61 )
          {
            if ( (unsigned int)v15 > 0x7A )
            {
              if ( Flink )
              {
                if ( (unsigned __int16)v15 >= 0xC0u )
                  LOWORD(v15) = *((_WORD *)&Flink->Flink
                                + (v15 & 0xF)
                                + *((unsigned __int16 *)&Flink->Flink
                                  + ((unsigned __int8)v15 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v15 >> 8))))
                              + v15;
              }
            }
            else
            {
              LOWORD(v15) = v15 - 32;
            }
          }
          if ( (_WORD)v14 != (_WORD)v15 )
            break;
        }
        v10 += 2;
        if ( v10 >= v12 )
          return 1;
      }
    }
    else
    {
      while ( *(_WORD *)v10 == *(_WORD *)v11 )
      {
        v10 += 2;
        v11 = (_QWORD *)((char *)v11 + 2);
        if ( v10 >= v12 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
