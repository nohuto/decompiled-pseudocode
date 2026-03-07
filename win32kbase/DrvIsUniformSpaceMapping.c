__int64 __fastcall DrvIsUniformSpaceMapping(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r8d

  v2 = SGDGetSessionState();
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 1320LL) && a1 )
    return (*(_DWORD *)(a1 + 16) & 2) != 0;
  return v3;
}
