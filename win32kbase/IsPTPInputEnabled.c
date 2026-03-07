__int64 __fastcall IsPTPInputEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx

  v8 = 0;
  if ( *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 520) )
    return *(_DWORD *)(SGDGetUserSessionState(v5, v4, v6, v7) + 544) != 0;
  return v8;
}
