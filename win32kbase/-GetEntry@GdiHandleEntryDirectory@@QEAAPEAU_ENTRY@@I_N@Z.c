struct _ENTRY *__fastcall GdiHandleEntryDirectory::GetEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v11; // rdx

  v4 = *((_DWORD *)this + 514);
  v5 = a2;
  if ( a2 < v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
  {
    if ( a2 >= v4 )
    {
      v11 = ((a2 - v4) >> 16) + 1;
      v7 = *((_QWORD *)this + v11 + 1);
      v5 += ((1 - (_DWORD)v11) << 16) - v4;
      v6 = v7;
    }
    else
    {
      v6 = *((_QWORD *)this + 1);
      v7 = v6;
    }
    v8 = 0LL;
    if ( a3 )
    {
      if ( v5 >= *(_DWORD *)(v7 + 20) )
        return (struct _ENTRY *)v8;
      v9 = v5;
    }
    else
    {
      if ( v5 >= *(_DWORD *)(v6 + 20) )
        return (struct _ENTRY *)v8;
      v9 = v5;
      if ( !*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                      + 16LL * (unsigned __int8)v5
                      + 8) )
        return (struct _ENTRY *)v8;
    }
    return (struct _ENTRY *)(*(_QWORD *)v7 + 24 * v9);
  }
  return 0LL;
}
