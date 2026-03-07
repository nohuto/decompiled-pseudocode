__int64 __fastcall RtlpDeleteRangeListEntry(_QWORD *Entry)
{
  char *v3; // rsi
  char *v4; // rax
  char *v5; // rcx
  __int64 v6; // rbx

  if ( (*((_BYTE *)Entry + 34) & 1) != 0 )
  {
    v3 = (char *)(Entry + 2);
    v4 = (char *)Entry[2];
    v5 = v4 - 40;
    while ( 1 )
    {
      v6 = *(_QWORD *)v4 - 40LL;
      if ( v3 == v4 )
        break;
      RtlpFreeRangeListEntry(v5);
      v5 = (char *)v6;
      v4 = (char *)(v6 + 40);
    }
  }
  return RtlpFreeRangeListEntry(Entry);
}
