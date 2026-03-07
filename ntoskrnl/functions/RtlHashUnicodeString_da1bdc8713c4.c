NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v5; // ebx
  char v6; // dl
  struct _LIST_ENTRY *Flink; // rbp
  unsigned int v8; // r8d
  unsigned __int16 *v9; // r9
  ULONG v10; // r10d
  unsigned __int16 *v11; // rdi
  int v12; // r11d
  unsigned __int16 v13; // dx
  int v14; // r11d
  int v16; // eax

  v5 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[77].Flink;
  if ( !v9 )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  v11 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
  *HashValue = v10;
  v12 = *v9 >> 1;
  if ( v8 > 1 )
    return -1073741811;
  if ( v12 )
  {
    if ( v6 )
    {
      do
      {
        v13 = *v11++;
        v5 = NLS_UPCASE((__int64)Flink, v13) + 65599 * v5;
      }
      while ( v14 != 1 );
    }
    else
    {
      do
      {
        v16 = *v11++;
        v5 = v16 + 65599 * v5;
        --v12;
      }
      while ( v12 );
    }
  }
  *HashValue = v5;
  return v10;
}
