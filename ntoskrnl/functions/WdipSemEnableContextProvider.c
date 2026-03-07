__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  int v4; // r8d
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  int v8; // edx
  __int64 v9; // r15
  int v10; // r14d

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C34AA8, 0LL);
  if ( !a1 )
  {
    v3 = -1073741811;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(_BYTE *)(a1 + 18);
    v7 = *(_BYTE *)(v5 + 48);
    v8 = *(_DWORD *)(v5 + 64);
    if ( v6 <= v7 )
      v6 = *(_BYTE *)(v5 + 48);
    v9 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(v5 + 56);
    v10 = *(_DWORD *)(a1 + 36) | v8;
    if ( *(_BYTE *)(v5 + 69) && v9 == *(_QWORD *)(v5 + 56) && v6 == v7 && v10 == v8 )
      goto LABEL_8;
    LOBYTE(v4) = v6;
    v3 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           a1,
           v4,
           *(_DWORD *)(a1 + 24) | *(_DWORD *)(v5 + 56),
           v10,
           1);
    if ( v3 >= 0 )
    {
      *(_BYTE *)(v5 + 69) = 1;
      *(_QWORD *)(v5 + 56) = v9;
      *(_BYTE *)(v5 + 48) = v6;
      *(_DWORD *)(v5 + 64) = v10;
LABEL_8:
      ++*(_DWORD *)(v5 + 72);
    }
  }
LABEL_9:
  ExReleasePushLockEx((__int64 *)&qword_140C34AA8, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
