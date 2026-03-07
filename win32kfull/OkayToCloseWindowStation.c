__int64 __fastcall OkayToCloseWindowStation(PRKPROCESS *a1)
{
  if ( !*((_BYTE *)a1 + 24) )
    return 0LL;
  if ( (unsigned int)PsGetProcessSessionIdEx(*a1) == -1 )
    return 3221225506LL;
  if ( (unsigned int)CheckHandleFlag(*a1) )
    return 2147483665LL;
  return (unsigned int)CheckHandleFlag(*a1) != 0 ? 0x80000011 : 0;
}
