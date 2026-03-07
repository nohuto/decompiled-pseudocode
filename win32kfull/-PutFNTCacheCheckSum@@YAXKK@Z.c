void __fastcall PutFNTCacheCheckSum(Gre::Base *a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = (unsigned int)a1;
  v8 = *((_QWORD *)Gre::Base::Globals(a1) + 8);
  GreAcquireSemaphore(v8);
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  v6 = *(_QWORD *)(v5 + 19392);
  if ( v6 && v3 )
  {
    if ( (*(_DWORD *)(v5 + 19384) & 2) != 0 )
    {
      v7 = SearchFntCacheNewLink(v3);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 4) )
          *(_DWORD *)(v7 + 24) |= 1u;
        else
          *(_DWORD *)(v7 + 4) = a2;
        *(_DWORD *)(*(_QWORD *)(v5 + 19392) + 20LL) = 1;
      }
    }
    else
    {
      *(_DWORD *)(v6 + 16) |= 2u;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
