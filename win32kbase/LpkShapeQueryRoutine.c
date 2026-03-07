__int64 __fastcall LpkShapeQueryRoutine(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v5; // rax

  v5 = SGDGetSessionState(a1);
  if ( a2 == 4 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 1928LL) + 1573012LL) |= 1 << *a3;
  return 0LL;
}
