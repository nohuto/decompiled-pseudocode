__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C65750 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
