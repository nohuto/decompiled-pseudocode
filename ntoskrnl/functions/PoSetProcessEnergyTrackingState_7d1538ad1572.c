__int64 __fastcall PoSetProcessEnergyTrackingState(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  int v5; // ecx
  _WORD *i; // rax
  int v7; // ebx

  v2 = *(_QWORD *)(a1 + 2280);
  if ( v2 )
  {
    if ( a2[2] || (*a2 & 0xFFFFFFEF) != 0 || (~*a2 & a2[1]) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      if ( (a2[3] & 1) != 0 )
      {
        v5 = 0;
        for ( i = a2 + 4; *i; ++i )
        {
          if ( (unsigned int)++v5 >= 0x40 )
            return (unsigned int)-1073741811;
        }
      }
      PopAcquireRwLockExclusive(v2 + 432);
      v7 = PopEtEnergyContextSetState(a1, a2);
      if ( v7 >= 0 )
        v7 = 0;
      PopReleaseRwLock(v2 + 432);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
