unsigned __int8 __fastcall MIRACAST_CHUNK_LIST::AllocateNewChunks(MIRACAST_CHUNK_LIST *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // edi
  __int64 v6; // rbp
  MIRACAST_CHUNK_LIST *Pool2; // rax
  MIRACAST_CHUNK_LIST **v8; // rcx

  v2 = *((_DWORD *)this + 5);
  if ( v2 + 44 >= v2 )
  {
    v5 = 0;
    if ( !a2 )
      return 1;
    v6 = v2 + 44;
    while ( 1 )
    {
      Pool2 = (MIRACAST_CHUNK_LIST *)ExAllocatePool2(64LL, v6, 1265072196LL);
      if ( !Pool2 )
        break;
      v8 = (MIRACAST_CHUNK_LIST **)*((_QWORD *)this + 1);
      if ( *v8 != this )
        __fastfail(3u);
      *(_QWORD *)Pool2 = this;
      ++v5;
      *((_QWORD *)Pool2 + 1) = v8;
      *v8 = Pool2;
      *((_QWORD *)this + 1) = Pool2;
      ++*((_DWORD *)this + 4);
      if ( v5 >= a2 )
        return 1;
    }
  }
  return 0;
}
