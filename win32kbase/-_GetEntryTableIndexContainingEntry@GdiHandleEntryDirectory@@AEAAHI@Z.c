__int64 __fastcall GdiHandleEntryDirectory::_GetEntryTableIndexContainingEntry(
        GdiHandleEntryDirectory *this,
        unsigned int a2)
{
  unsigned int v2; // r8d

  v2 = *((_DWORD *)this + 514);
  if ( a2 >= v2 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0xFFFFFFFFLL;
  if ( a2 >= v2 )
    return ((a2 - v2) >> 16) + 1;
  return 0LL;
}
