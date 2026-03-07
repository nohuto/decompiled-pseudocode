__int64 __fastcall GdiHandleManager::GetNextEntryIndex(GdiHandleManager *this, unsigned int a2, struct _ENTRY **a3)
{
  __int64 v4; // r8
  unsigned int v5; // r11d
  __int64 v6; // rbx
  unsigned int v7; // eax
  struct _ENTRY *v8; // r11

  *a3 = 0LL;
  while ( ++a2 < *(_DWORD *)this )
  {
    v4 = *((_QWORD *)this + 2);
    v5 = *(_DWORD *)(v4 + 2056);
    if ( a2 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    {
      *a3 = 0LL;
    }
    else
    {
      if ( a2 >= v5 )
      {
        v6 = *(_QWORD *)(v4 + 8LL * (((a2 - v5) >> 16) + 1) + 8);
        v7 = a2 + -65536 * ((a2 - v5) >> 16) - v5;
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 8);
        v7 = a2;
      }
      v8 = 0LL;
      if ( v7 < *(_DWORD *)(v6 + 20) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v6 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                       + 16LL * (unsigned __int8)v7
                       + 8) )
          v8 = (struct _ENTRY *)(*(_QWORD *)v6 + 24LL * v7);
      }
      *a3 = v8;
      if ( v8 )
        return a2;
    }
  }
  return 0LL;
}
