signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  signed __int64 result; // rax
  bool v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned int)(unsigned __int8)v21 + 3;
  while ( (v6 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v9 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = v7;
    Object[5] = 0LL;
    if ( (v6 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (unsigned __int64)Object | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v10 = 11LL;
      Object[4] = Object;
      LODWORD(Object[6]) = v6 >> 4;
      if ( SLODWORD(Object[6]) <= 1 )
        v10 = v7;
      v11 = (unsigned __int64)Object | v10;
      if ( !(unsigned int)(v6 >> 4) )
        LODWORD(Object[6]) = -2;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_13;
    if ( v9 )
      ExpOptimizePushLockList(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v16 = __rdtsc();
        v17 = v16 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v16;
          v19 = __rdtsc();
          v16 = v19;
          if ( v19 <= v18 || v19 >= v17 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0;
              (Object[6] & 0x200000000LL) != 0 && i != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
              ++i )
        {
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2, 0LL);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_13:
    RtlBackoff(&v21);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
