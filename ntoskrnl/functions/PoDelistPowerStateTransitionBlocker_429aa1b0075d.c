__int64 PoDelistPowerStateTransitionBlocker()
{
  unsigned int v0; // edi
  __int64 v1; // rbx

  v0 = 0;
  if ( (unsigned int)(dword_140C3CF04 - 1) <= 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E2C8);
    if ( (unsigned int)dword_140C3E2C0 >= 0x40 )
    {
      v0 = -1073741801;
    }
    else
    {
      v1 = 5LL * (unsigned int)dword_140C3E2C0;
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E2C0 + 1]);
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[v1]);
      *(_OWORD *)&PopStateTransitonBlameStack[v1] = 0LL;
      *(_OWORD *)&PopStateTransitonBlameStack[v1 + 2] = 0LL;
      PopStateTransitonBlameStack[v1 + 4] = 0LL;
      --dword_140C3E2C0;
    }
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C3E2C8);
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v0;
}
