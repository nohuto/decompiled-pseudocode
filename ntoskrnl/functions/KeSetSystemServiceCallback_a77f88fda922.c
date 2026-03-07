__int64 __fastcall KeSetSystemServiceCallback(_BYTE *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 SystemServiceTraceTable; // r8
  unsigned int v10; // ecx
  __int64 v11; // rax
  _DWORD *i; // rdx
  __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // rcx
  char v16; // r14
  char v17; // dl
  signed __int32 v19[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = 0;
  if ( !a3 || a3 == *(__int64 *)((char *)&KiDynamicTraceCallouts[3] + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL)) )
  {
    SystemServiceTraceTable = KiGetSystemServiceTraceTable();
    if ( SystemServiceTraceTable )
    {
      v10 = 0;
      while ( *a1 )
      {
        v10 = ((1025 * (v10 + (char)*a1)) >> 6) ^ (1025 * (v10 + (char)*a1));
        ++a1;
      }
      v11 = 0LL;
      for ( i = (_DWORD *)(SystemServiceTraceTable + 52); v10 != *i; i += 16 )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= 0x1E6 )
          return (unsigned int)-1073741275;
      }
      v13 = (v11 << 6) + SystemServiceTraceTable + 16;
      if ( !v13 )
        return (unsigned int)-1073741275;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiSystemServiceTraceCallbackLock, 0LL);
      v15 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL;
      v16 = -a2;
      v17 = *(_BYTE *)(v13 - (v16 != 0) + 41);
      if ( a3 )
      {
        if ( v17 )
        {
          v4 = -1073740008;
        }
        else
        {
          *(_QWORD *)(v15 + v13 + 56) = a4;
          _InterlockedOr(v19, 0);
          *(_BYTE *)(v13 - (v16 != 0) + 41) = 1;
          if ( ++KiSystemServiceTraceCallbackCount == 1 )
            _InterlockedOr(&KiDynamicTraceMask, 1u);
        }
      }
      else if ( v17 )
      {
        if ( !--KiSystemServiceTraceCallbackCount )
          _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFE);
        *(_BYTE *)(v13 - (v16 != 0) + 41) = 0;
        _InterlockedOr(v19, 0);
        while ( KiSystemServiceTraceCallbacksActive )
          _mm_pause();
        *(_QWORD *)(v15 + v13 + 56) = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock);
      KeAbPostRelease((ULONG_PTR)&KiSystemServiceTraceCallbackLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
