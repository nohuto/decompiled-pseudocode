__int64 __fastcall bFntCacheDisabled(Gre::Base *a1)
{
  unsigned int v1; // ebx
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = 0;
  v2 = Gre::Base::Globals(a1);
  v4 = SGDGetSessionState(v3);
  bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(v4 + 32) + 19408LL));
  if ( !*((_DWORD *)v2 + 752) )
  {
    v6 = SGDGetSessionState(v5);
    return (unsigned int)bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(v6 + 32) + 19408LL)) == 0;
  }
  return v1;
}
