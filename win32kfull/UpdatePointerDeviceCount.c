__int64 __fastcall UpdatePointerDeviceCount(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v1 )
  {
    if ( (_DWORD)v1 == 1 )
    {
      v2 = SGDGetUserSessionState(v1);
      --*(_DWORD *)(v2 + 16328);
    }
  }
  else
  {
    v3 = SGDGetUserSessionState(v1);
    ++*(_DWORD *)(v3 + 16328);
  }
  return *(unsigned int *)(SGDGetUserSessionState(v1) + 16328);
}
