__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C65750 )
    return MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  else
    return 0LL;
}
