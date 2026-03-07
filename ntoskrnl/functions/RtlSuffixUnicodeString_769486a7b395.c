BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v4; // r8
  __int64 v5; // r9
  unsigned __int16 *v6; // r10
  unsigned __int16 *v7; // rdx
  unsigned int v8; // ebx
  __int64 Flink; // rdi
  unsigned __int64 v10; // rax
  _WORD *v11; // r10
  __int64 v12; // rdx
  _WORD *v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int16 *v17; // r10
  unsigned __int16 v18; // ax
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int16 v21; // r9
  unsigned __int64 v22; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v8 = *v7;
  Flink = (__int64)CurrentServerSiloGlobals[77].Flink;
  v10 = *v6;
  if ( (unsigned __int16)v8 >= (unsigned __int16)v10 )
  {
    v11 = (_WORD *)*((_QWORD *)v6 + 1);
    v12 = (unsigned int)v10;
    v13 = &v11[v10 >> 1];
    if ( v11 >= v13 )
      return 1;
    v14 = *(_QWORD *)(v5 + 8);
    v15 = ((unsigned __int64)v8 - v12) >> 1;
    if ( v4 )
    {
      v16 = v14 + 2 * v15 - (_QWORD)v11;
      while ( 1 )
      {
        NLS_UPCASE(Flink, *(_WORD *)((char *)v11 + v16));
        v18 = NLS_UPCASE(Flink, *v17);
        if ( v18 != v21 )
          break;
        v11 = (_WORD *)(v19 + 2);
        if ( (unsigned __int64)v11 >= v20 )
          return 1;
      }
    }
    else
    {
      v22 = v14 + 2 * v15 - (_QWORD)v11;
      while ( *v11 == *(_WORD *)((char *)v11 + v22) )
      {
        if ( ++v11 >= v13 )
          return 1;
      }
    }
  }
  return 0;
}
