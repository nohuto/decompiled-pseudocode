struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleEntryDirectory **this, struct OBJECT *a2)
{
  unsigned int v4; // ebx
  GdiHandleEntryDirectory *v5; // r14
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  struct OBJECT *v12; // rdx

  v4 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)*(_DWORD *)a2, 1) + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v5 = this[2];
  v6 = *((_DWORD *)v5 + 514);
  v7 = v6 + ((*((unsigned __int16 *)v5 + 1) + 0xFFFF) << 16);
  if ( v4 >= v7 )
  {
    v10 = 0LL;
  }
  else
  {
    if ( v4 >= v6 )
    {
      v8 = *((_QWORD *)v5 + ((v4 - v6) >> 16) + 2);
      v9 = v4 + -65536 * ((v4 - v6) >> 16) - v6;
    }
    else
    {
      v8 = *((_QWORD *)v5 + 1);
      v9 = v4;
    }
    v10 = 0LL;
    if ( v9 < *(_DWORD *)(v8 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                   + 16LL * (unsigned __int8)v9
                   + 8) )
    {
      v10 = *(_QWORD *)v8 + 24LL * v9;
    }
  }
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v5, (unsigned __int16)v4, 1) + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  if ( v4 >= v7
    || (v4 >= v6
      ? (v11 = *((_QWORD *)v5 + ((v4 - v6) >> 16) + 2), v4 += -65536 * ((v4 - v6) >> 16) - v6)
      : (v11 = *((_QWORD *)v5 + 1)),
        v4 >= *(_DWORD *)(v11 + 20)) )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                            + 16LL * (unsigned __int8)v4
                            + 8);
  }
  if ( v12 != a2 )
    return 0LL;
  return (struct _ENTRY *)v10;
}
