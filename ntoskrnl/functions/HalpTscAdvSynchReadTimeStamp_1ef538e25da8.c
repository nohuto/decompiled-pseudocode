unsigned __int64 __fastcall HalpTscAdvSynchReadTimeStamp(unsigned int a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // r8
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a1 == KeGetCurrentPrcb()->Number )
  {
    v1 = __readcr2();
    __writecr2(v1);
    return __rdtsc();
  }
  else
  {
    v3 = (unsigned __int64)a1 << 7;
    _InterlockedExchange((volatile __int32 *)(v3 + TscRequest), 6);
    while ( *(_DWORD *)(v3 + TscRequest) == 6 )
      _mm_pause();
    while ( *(_DWORD *)(v3 + TscRequest) )
      _mm_pause();
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    return *(_QWORD *)(v3 + TscRequest + 8);
  }
}
