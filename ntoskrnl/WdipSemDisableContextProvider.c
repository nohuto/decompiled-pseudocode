__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // esi
  int v6; // r8d
  __int64 v7; // rbx
  __int32 v8; // ecx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C34AA8, 0LL);
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v7 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v7 + 40) )
        {
          LOBYTE(v6) = *(_BYTE *)(v7 + 16);
          v5 = WdipSemEnableDisableTrace(v8, a1, v6, *(_QWORD *)(v7 + 24), *(_DWORD *)(v7 + 32), 1);
          if ( v5 >= 0 )
          {
            *(_BYTE *)(v7 + 48) = *(_BYTE *)(v7 + 16);
            *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 24);
            *(_DWORD *)(v7 + 64) = *(_DWORD *)(v7 + 32);
          }
        }
        else
        {
          v5 = WdipSemEnableDisableTrace(v8, a1, 0, 0, 0, 0);
          if ( v5 >= 0 )
          {
            *(_OWORD *)(v7 + 48) = 0LL;
            *(_OWORD *)(v7 + 64) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  ExReleasePushLockEx((__int64 *)&qword_140C34AA8, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
