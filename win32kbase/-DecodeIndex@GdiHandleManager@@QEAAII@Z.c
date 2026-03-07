__int64 __fastcall GdiHandleManager::DecodeIndex(GdiHandleEntryDirectory **this, unsigned int a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( a2 < 0x10000 )
    return a2;
  if ( *(_DWORD *)this <= 0x10000u )
    return (unsigned __int16)a2;
  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)a2, 1) + 13) == HIWORD(a2) )
    return (unsigned __int16)v2;
  return v2;
}
