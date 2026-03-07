__int64 __fastcall rimObsIsObserverTarget(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 == a1[27] && (a2 != 2 || a3 == a1[28] && a4 == a1[29]) )
    return 1LL;
  return result;
}
