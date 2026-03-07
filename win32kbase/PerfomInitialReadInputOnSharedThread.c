CBaseInput **__fastcall PerfomInitialReadInputOnSharedThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  CBaseInput **v5; // rdi
  CBaseInput **v6; // rbx
  CBaseInput **result; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4) + 3280;
  v5 = (CBaseInput **)(v4 + 144);
  v6 = (CBaseInput **)(v4 + 24);
  do
  {
    if ( *((_DWORD *)v6 - 2) == 2 )
      CBaseInput::Read(*v6);
    v6 += 6;
    result = v6 - 3;
  }
  while ( v6 - 3 != v5 );
  return result;
}
