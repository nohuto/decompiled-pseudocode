__int64 __fastcall VrpHandleIoctlModifyFlags(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
{
  int JobSilo; // edi
  int v8; // eax
  PVOID v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // rsi
  unsigned __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  Object = 0LL;
  v18 = 0LL;
  a6 = 0LL;
  if ( a2 < 0x10 || (*(_DWORD *)(a1 + 12) & *(_DWORD *)(a1 + 8)) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
    v9 = Object;
    JobSilo = v8;
    if ( v8 >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        JobSilo = PsGetPermanentSiloContext(a6, VrpSiloContextSlot, &v18);
        if ( JobSilo >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v11 = (unsigned __int64 *)(v18 + 16);
          v12 = v18 + 16;
          --CurrentThread->KernelApcDisable;
          v13 = KeAbPreAcquire(v12, 0LL);
          v14 = v13;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
            ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
          if ( v14 )
            *(_BYTE *)(v14 + 18) = 1;
          v15 = v18;
          *(_DWORD *)(v18 + 80) = ~*(_DWORD *)(a1 + 12) & (*(_DWORD *)(a1 + 8) | *(_DWORD *)(v18 + 80));
          v16 = v15 + 16;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 16));
          KeAbPostRelease(v16);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v9 = Object;
        }
      }
    }
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
