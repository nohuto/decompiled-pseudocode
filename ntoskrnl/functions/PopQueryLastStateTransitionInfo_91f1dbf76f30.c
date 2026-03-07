__int64 __fastcall PopQueryLastStateTransitionInfo(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8

  v1 = 0;
  if ( a1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E2C8);
    if ( dword_140C3E2C0 == -1 )
    {
      v1 = -1073741823;
    }
    else
    {
      v3 = 5LL * (unsigned int)dword_140C3E2C0;
      v4 = *(_OWORD *)&PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E2C0 + 2];
      *(_OWORD *)a1 = *(_OWORD *)&PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E2C0];
      v5 = PopStateTransitonBlameStack[v3 + 4];
      *(_OWORD *)(a1 + 16) = v4;
      *(_QWORD *)(a1 + 32) = v5;
    }
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C3E2C8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
