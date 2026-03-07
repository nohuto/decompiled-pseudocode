BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r10
  _WORD *v7; // r9
  __int64 Flink; // rsi
  __int64 v9; // rax
  char *v10; // rbx
  __int64 v11; // rdi
  unsigned __int16 v12; // dx
  unsigned __int16 v14; // r11
  unsigned __int16 v15; // ax
  __int16 v16; // r10
  __int64 v17; // rcx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (_WORD *)*((_QWORD *)v6 + 1);
  Flink = (__int64)CurrentServerSiloGlobals[77].Flink;
  v9 = *v6;
  if ( *(_WORD *)v4 >= (unsigned __int16)v9 )
  {
    v10 = (char *)v7 + v9;
    if ( v7 >= (_WORD *)((char *)v7 + v9) )
      return 1;
    if ( v5 )
    {
      v11 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( 1 )
      {
        v12 = *(_WORD *)((char *)v7 + v11);
        if ( *v7 != v12 )
        {
          NLS_UPCASE(Flink, v12);
          v15 = NLS_UPCASE(Flink, v14);
          if ( v15 != v16 )
            break;
        }
        if ( ++v7 >= (_WORD *)v10 )
          return 1;
      }
    }
    else
    {
      v17 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( *v7 == *(_WORD *)((char *)v7 + v17) )
      {
        if ( ++v7 >= (_WORD *)v10 )
          return 1;
      }
    }
  }
  return 0;
}
