struct OBJECT *__fastcall HANDLELOCK::pObj(HANDLELOCK *this)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // r9d
  __int64 v6; // r8

  v2 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8008LL);
  v3 = **(_DWORD **)this & 0xFFFFFF;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)v2 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v2 + 16),
                                  (unsigned __int16)v3,
                                  1)
           + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v3;
    }
  }
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    return 0LL;
  if ( v3 >= v5 )
  {
    v6 = *(_QWORD *)(v4 + 8LL * (((v3 - v5) >> 16) + 1) + 8);
    v3 += -65536 * ((v3 - v5) >> 16) - v5;
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 8);
  }
  if ( v3 >= *(_DWORD *)(v6 + 20) )
    return 0LL;
  else
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v6 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                             + 16LL * (unsigned __int8)v3
                             + 8);
}
