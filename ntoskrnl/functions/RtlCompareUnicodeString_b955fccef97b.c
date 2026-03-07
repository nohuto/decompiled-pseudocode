LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  char v6; // r8
  unsigned __int16 *v7; // r9
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rbx
  __int64 v11; // r11
  int v13; // r8d
  unsigned __int64 v14; // r10
  int v15; // ecx
  int v16; // eax

  v3 = (unsigned __int64)String2->Length >> 1;
  v4 = (unsigned __int64)String1->Length >> 1;
  Flink = PsGetCurrentServerSiloGlobals()[77].Flink;
  v9 = v4;
  if ( v4 > v3 )
    v9 = v3;
  v10 = &v7[v9];
  if ( v7 >= v10 )
    return v4 - v3;
  v11 = v8 - (_QWORD)v7;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( *v7 != *(unsigned __int16 *)((char *)v7 + v11) )
      {
        v13 = NLS_UPCASE((__int64)Flink, *v7);
        if ( (unsigned int)v14 >= 0x61 )
        {
          if ( (unsigned int)v14 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *((_WORD *)&Flink->Flink
                              + (v14 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v14 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v14 >> 8))))
                            + v14;
            }
          }
          else
          {
            LOWORD(v14) = v14 - 32;
          }
        }
        if ( (_WORD)v13 != (_WORD)v14 )
          break;
      }
      if ( ++v7 >= v10 )
        return v4 - v3;
    }
    v15 = (unsigned __int16)v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      v16 = *v7;
      v15 = *(unsigned __int16 *)((char *)v7 + v11);
      if ( (_WORD)v16 != (_WORD)v15 )
        break;
      if ( ++v7 >= v10 )
        return v4 - v3;
    }
  }
  return v16 - v15;
}
