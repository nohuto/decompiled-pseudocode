__int64 __fastcall PopPowerRequestStatsDatabaseCompare(
        struct _RTL_AVL_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned __int8 v6; // si
  unsigned __int8 v7; // al
  LONG v8; // ecx
  unsigned int v10; // esi

  v3 = FirstStruct[1];
  v4 = 0;
  v5 = SecondStruct[1];
  v6 = *(_BYTE *)v3 & 1;
  v7 = *(_BYTE *)v5 & 1;
  if ( v6 != v7 )
  {
    v8 = v6 - v7;
    goto LABEL_3;
  }
  v8 = RtlCompareUnicodeString((PCUNICODE_STRING)(v3 + 8), (PCUNICODE_STRING)(v5 + 8), 1u);
  if ( !v8 )
  {
    if ( !v6 )
      return 2;
    v8 = RtlCompareUnicodeString((PCUNICODE_STRING)(v3 + 24), (PCUNICODE_STRING)(v5 + 24), 1u);
    if ( v8 )
      goto LABEL_3;
    v8 = *(unsigned __int16 *)(v3 + 40) - *(unsigned __int16 *)(v5 + 40);
    if ( v8 )
      goto LABEL_3;
    v8 = *(_DWORD *)(v3 + 44) - *(_DWORD *)(v5 + 44);
    if ( v8 )
      goto LABEL_3;
    v10 = 0;
    if ( !*(_DWORD *)(v3 + 44) )
      return 2;
    do
    {
      v8 = RtlCompareUnicodeString(
             (PCUNICODE_STRING)(v3 + 16 * (v10 + 3LL)),
             (PCUNICODE_STRING)(v5 + 16 * (v10 + 3LL)),
             1u);
      if ( v8 )
        break;
      ++v10;
    }
    while ( v10 < *(_DWORD *)(v3 + 44) );
  }
LABEL_3:
  if ( v8 >= 0 )
  {
    v4 = 1;
    if ( v8 <= 0 )
      return 2;
  }
  return v4;
}
