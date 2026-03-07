__int64 __fastcall RFONTOBJ::AddressMap::Compare(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 == *a2 )
    return 0LL;
  else
    return *a1 < *a2 ? -1 : 1;
}
