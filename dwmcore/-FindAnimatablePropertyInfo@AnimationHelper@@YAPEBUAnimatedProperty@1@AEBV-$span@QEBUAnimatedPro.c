_DWORD *__fastcall AnimationHelper::FindAnimatablePropertyInfo(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx

  v3 = a1[1];
  v4 = 0LL;
  v5 = v3 + 8LL * *a1;
  while ( v3 != v5 )
  {
    if ( a2 == **(_DWORD **)v3 && (a3 == *(_DWORD *)(*(_QWORD *)v3 + 4LL) || !a3) )
      return *(_DWORD **)v3;
    v3 += 8LL;
  }
  return (_DWORD *)v4;
}
