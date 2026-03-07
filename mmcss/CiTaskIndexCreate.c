__int64 __fastcall CiTaskIndexCreate(__int64 a1, __int64 *a2)
{
  __int64 Memory; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  HANDLE CurrentThreadId; // rax
  struct _DEVICE_OBJECT **DeferredContext; // rax
  PKDEFERRED_ROUTINE **v10; // rbx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  Memory = CiAllocateMemory(192LL);
  v5 = Memory;
  if ( Memory )
  {
    *(_DWORD *)Memory = 2;
    *(_QWORD *)(Memory + 48) = 1LL;
    *(_QWORD *)(Memory + 136) = a1;
    v6 = 0;
    *(_QWORD *)(Memory + 8) = 0LL;
    v7 = (_QWORD *)(Memory + 32);
    v7[1] = v7;
    *v7 = v7;
    *(_QWORD *)(v5 + 152) = PsGetCurrentProcessId();
    CurrentThreadId = PsGetCurrentThreadId();
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_QWORD *)(v5 + 160) = CurrentThreadId;
    *(_DWORD *)(v5 + 88) = 1;
    *(_BYTE *)(v5 + 92) = 0;
    *(_QWORD *)(v5 + 120) = 0LL;
    *(_DWORD *)(v5 + 128) = 1;
    *(_BYTE *)(v5 + 132) = 0;
    *(_DWORD *)(v5 + 184) = 0;
    *(_DWORD *)(v5 + 188) = 3;
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
    WPP_MAIN_CB.Dpc.ProcessorHistory = (KAFFINITY)KeGetCurrentThread();
    if ( (unsigned int)CiTaskIndicesCount >= 0x80 )
    {
      WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_8af022b3843c3d7d366520be64f7950a_Traceguids);
      CiFreeMemory((void *)v5);
      return (unsigned int)-1073741527;
    }
    else
    {
      v12 = 0LL;
      do
        ++CiTaskIndex;
      while ( (int)CiTaskIndexLocate((unsigned int)CiTaskIndex, 0LL, &v12) >= 0 );
      ++CiTaskIndicesCount;
      *(_DWORD *)(v5 + 144) = CiTaskIndex;
      DeferredContext = (struct _DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.DeferredContext;
      *a2 = v5;
      v10 = (PKDEFERRED_ROUTINE **)(v5 + 168);
      if ( *DeferredContext != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
        __fastfail(3u);
      *v10 = &WPP_MAIN_CB.Dpc.DeferredRoutine;
      v10[1] = (PKDEFERRED_ROUTINE *)DeferredContext;
      *DeferredContext = (struct _DEVICE_OBJECT *)v10;
      WPP_MAIN_CB.Dpc.DeferredContext = v10;
      WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
    }
    return v6;
  }
  else
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_8af022b3843c3d7d366520be64f7950a_Traceguids,
        -1073741801);
    return 3221225495LL;
  }
}
