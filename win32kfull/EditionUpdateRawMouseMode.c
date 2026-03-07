__int64 __fastcall EditionUpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v3 = ((__int64 (*)(void))PtiMouseFromQ)();
    if ( !(unsigned int)HasHidTable(v3)
      || (v6 = PtiMouseFromQ(a1),
          v5 = 1,
          v4 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 824LL) + 100LL),
          (v4 & 1) == 0) )
    {
      v5 = 0;
    }
    result = SGDGetUserSessionState(v4);
    *(_DWORD *)(result + 15956) = v5;
  }
  return result;
}
