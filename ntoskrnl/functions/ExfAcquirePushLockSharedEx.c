signed __int64 __fastcall ExfAcquirePushLockSharedEx(signed __int64 *a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // r15d
  signed __int64 v9; // rdi
  signed __int64 v10; // rcx
  signed __int64 result; // rax
  bool v12; // cl
  char *v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  int i; // ecx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF

  memset(Object, 0, sizeof(Object));
  v23 = 0;
  v8 = a2 & 4;
  _m_prefetchw(a1);
  v9 = *a1;
  while ( (v9 & 3) != 0 && ((v9 & 1) != 0 || v8) && ((v9 & 3) != 1 || (v9 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( a3 )
      KeAbPreWait(a3);
    v12 = 0;
    Object[7] = a3;
    HIDWORD(Object[6]) = 2;
    Object[5] = 0LL;
    if ( (v9 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v13 = (char *)((unsigned __int64)Object | v9 & 9 | 6);
      v12 = (v9 & 4) == 0;
    }
    else
    {
      LODWORD(Object[6]) = -2;
      Object[4] = Object;
      v13 = (char *)Object + 3;
    }
    v15 = _InterlockedCompareExchange64(a1, (signed __int64)v13, v9);
    v14 = v9 == v15;
    v9 = v15;
    if ( !v14 )
      goto LABEL_15;
    if ( v12 )
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
        v18 = __rdtsc();
        v19 = v18 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v20 = v18;
          v21 = __rdtsc();
          v18 = v21;
          if ( v21 <= v20 || v21 >= v19 )
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
LABEL_16:
    if ( a3 )
      a3 = KeAbPreAcquire(a4, a3, 0LL);
  }
  v10 = (v9 | 1) + 16;
  if ( (v9 & 2) != 0 )
    v10 = v9 | 1;
  result = _InterlockedCompareExchange64(a1, v10, v9);
  if ( v9 != result )
  {
    if ( a3 )
      KeAbPreWait(a3);
LABEL_15:
    RtlBackoff(&v23);
    v9 = *a1;
    _m_prefetchw(a1);
    goto LABEL_16;
  }
  return result;
}
