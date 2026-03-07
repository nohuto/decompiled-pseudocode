__int64 __fastcall DrvIsDisplayStateCurrent(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = a1;
  v4 = SGDGetSessionState(a1);
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 24);
  if ( !v3 || *a2 == *(_DWORD *)(*(_QWORD *)(v6 + 1928) + 1573008LL) )
  {
    v7 = *(_QWORD *)(v6 + 1928);
    if ( a2[1] == *(_DWORD *)(v7 + 1573032) && a2[2] == *(_DWORD *)(v7 + 1573024) )
      return 1;
  }
  return v5;
}
