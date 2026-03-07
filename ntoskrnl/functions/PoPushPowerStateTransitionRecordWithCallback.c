__int64 __fastcall PoPushPowerStateTransitionRecordWithCallback(PVOID Object, PVOID a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v9; // rbx
  __int64 v10; // rbx
  LARGE_INTEGER v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  if ( (unsigned int)(dword_140C3CF04 - 1) <= 1 )
  {
    if ( Object && a2 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E2C8);
      v9 = (unsigned int)(dword_140C3E2C0 + 1);
      if ( (unsigned int)v9 >= 0x40 )
      {
        v4 = -1073741801;
      }
      else
      {
        ++dword_140C3E2C0;
        ObReferenceObjectByPointerWithTag(Object, 0x10000000u, 0LL, 0, 0x746C6644u);
        ObReferenceObjectByPointerWithTag(a2, 0x10000000u, 0LL, 0, 0x746C6644u);
        v10 = 5 * v9;
        PopStateTransitonBlameStack[v10 + 1] = Object;
        PopStateTransitonBlameStack[v10] = a2;
        PopStateTransitonBlameStack[v10 + 3] = a3;
        PopStateTransitonBlameStack[v10 + 4] = a4;
        PopStateTransitonBlameStack[v10 + 2] = RtlGetInterruptTimePrecise(v12);
      }
      PopReleaseRwLock((ULONG_PTR)&xmmword_140C3E2C8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v4;
}
