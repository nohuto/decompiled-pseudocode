__int64 __fastcall IcUpdateInterruptProperties(unsigned int a1, int a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // eax
  __int64 v7; // rcx

  v3 = IcListHead;
  if ( &IcListHead == (__int64 *)IcListHead )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      if ( *(int *)(v3 + 28) >= 0 )
      {
        v5 = *(_DWORD *)(v3 + 16);
        if ( a1 >= v5 && a1 <= *(_DWORD *)(v3 + 20) )
          break;
      }
      v3 = *(_QWORD *)v3;
      if ( &IcListHead == (__int64 *)v3 )
        return (unsigned int)-1073741275;
    }
    v7 = 200LL * (a1 - v5);
    *(_DWORD *)(v7 + v3 + 64) = a2;
    *(_DWORD *)(v7 + v3 + 60) = a3;
  }
  return v4;
}
