NTSTATUS __stdcall RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v8; // ebx
  int v9; // edx
  ULONG *v10; // r9
  _BYTE *v11; // r10
  ULONG v12; // r11d
  struct _LIST_ENTRY *Flink; // r13
  ULONG v14; // eax
  _BYTE *v15; // rbp
  PWCH v16; // rsi
  __int64 v17; // r14
  unsigned __int16 v18; // ax
  _BYTE *v19; // r10
  unsigned __int16 *DBCSOffsets; // r14
  int v21; // r15d
  _WORD *WideCharTable; // r12
  PWCH v23; // rbp
  __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int64 v26; // rcx
  unsigned __int16 v27; // dx
  __int16 v28; // dx
  unsigned int v29; // eax

  v8 = BytesInUnicodeString >> 1;
  Flink = PsGetCurrentServerSiloGlobals()[77].Flink;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v21 = v9;
    WideCharTable = CustomCP->WideCharTable;
    if ( v8 )
    {
      v23 = UnicodeString;
      do
      {
        if ( !v12 )
          break;
        v24 = *v23++;
        v25 = WideCharTable[v24];
        v26 = DBCSOffsets[(unsigned __int64)v25 >> 8];
        if ( (_WORD)v26 )
          v27 = DBCSOffsets[(unsigned __int8)v25 + v26];
        else
          v27 = CustomCP->MultiByteTable[(unsigned __int8)v25];
        v28 = WideCharTable[NLS_UPCASE((__int64)Flink, v27)];
        if ( HIBYTE(v28) )
        {
          v29 = v12--;
          if ( v29 < 2 )
            break;
          *v11++ = HIBYTE(v28);
        }
        *v11 = v28;
        --v12;
        LODWORD(v11) = (_DWORD)v11 + 1;
        --v8;
      }
      while ( v8 );
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)v11 - v21;
  }
  else
  {
    v14 = v12;
    if ( v8 < v12 )
      v14 = BytesInUnicodeString >> 1;
    if ( v10 )
      *v10 = v14;
    v15 = CustomCP->WideCharTable;
    if ( v14 )
    {
      v16 = UnicodeString;
      v17 = v14;
      do
      {
        v18 = NLS_UPCASE((__int64)Flink, CustomCP->MultiByteTable[(unsigned __int8)v15[*v16++]]);
        *v19 = v15[v18];
        --v17;
      }
      while ( v17 );
    }
  }
  return v12 < v8 ? 0x80000005 : 0;
}
