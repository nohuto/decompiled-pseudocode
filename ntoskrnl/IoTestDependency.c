__int64 __fastcall IoTestDependency(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx

  v4 = 0;
  if ( a1 && a2 && a1 != a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) && v5 )
    {
      PipFindDependencyNodePath();
    }
    else
    {
      *a3 = 0;
      *a4 = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
