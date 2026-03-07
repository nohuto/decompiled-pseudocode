__int64 __fastcall NtDCompositionGetFrameStatistics(unsigned __int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  DirectComposition::CConnection *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v9; // rbx
  struct _ERESOURCE *v10; // rsi
  unsigned __int64 v11; // r12
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER PerformanceCounter; // r8
  __int64 v14; // rax
  unsigned __int64 v16; // r8
  __int128 v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+30h] [rbp-48h]
  __int128 v19; // [rsp+38h] [rbp-40h]
  __int128 v20; // [rsp+48h] [rbp-30h]
  unsigned __int64 v21; // [rsp+58h] [rbp-20h]

  v4 = 0;
  v19 = 0uLL;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  v18 = 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    v5 = 0LL;
    v6 = 0LL;
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      if ( !*CurrentProcessWin32Process )
        CurrentProcessWin32Process = 0LL;
      if ( CurrentProcessWin32Process )
        v6 = CurrentProcessWin32Process[32];
    }
    if ( v6 )
    {
      v9 = *(struct _ERESOURCE **)(v6 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v9, 1u);
      v5 = *(DirectComposition::CConnection **)(v6 + 24);
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)v5);
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    if ( v5 )
      goto LABEL_36;
    v10 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v10, 1u);
      v5 = DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
    if ( v5 )
    {
LABEL_36:
      do
      {
        v11 = *((_QWORD *)v5 + 21);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&v19 = v11;
        DWORD2(v19) = DirectComposition::CConnection::s_qpcFrequency.LowPart;
        HIDWORD(v19) = *((_DWORD *)v5 + 44);
        *(LARGE_INTEGER *)&v20 = PerformanceCounter;
        *((union _LARGE_INTEGER *)&v20 + 1) = DirectComposition::CConnection::s_qpcFrequency;
        v14 = -1LL;
        if ( PerformanceCounter.QuadPart >= v11 )
        {
          v16 = PerformanceCounter.QuadPart - v11;
          v14 = v16 / *((_QWORD *)v5 + 22);
          v12.QuadPart = v16 % *((_QWORD *)v5 + 22);
        }
        v21 = v11 + *((_QWORD *)v5 + 22) * (v14 + 2);
      }
      while ( v11 != *((_QWORD *)v5 + 21) );
      v17 = *((_OWORD *)v5 + 20);
      v18 = *((_DWORD *)v5 + 84);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v5, v12.LowPart);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
    if ( v4 >= 0 )
    {
      if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a1 = v19;
      *(_OWORD *)(a1 + 16) = v20;
      *(_QWORD *)(a1 + 32) = v21;
      if ( a2 )
      {
        if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a2 = v17;
        *(_DWORD *)(a2 + 16) = v18;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
