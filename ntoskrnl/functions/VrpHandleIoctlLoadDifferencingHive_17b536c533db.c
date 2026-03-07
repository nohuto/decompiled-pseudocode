__int64 __fastcall VrpHandleIoctlLoadDifferencingHive(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        unsigned __int64 a5,
        PVOID Object)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // r10d
  ULONG_PTR v13; // rcx
  int JobSilo; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // r15
  __int64 Pool2; // rdi
  char v22; // bl
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int128 v26; // [rsp+60h] [rbp-10h] BYREF

  Object = 0LL;
  a5 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
    return (unsigned int)-1073741727;
  if ( a2 < 0x30 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned __int16 *)(a1 + 20);
  if ( (v9 & 1) != 0 )
    return (unsigned int)-1073741811;
  v10 = *(unsigned __int16 *)(a1 + 22);
  if ( (v10 & 1) != 0 )
    return (unsigned int)-1073741811;
  v11 = *(unsigned __int16 *)(a1 + 24);
  if ( (v11 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v9 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v10 )
    return (unsigned int)-1073741811;
  v12 = v9 + 40 + v10;
  if ( (int)v9 + 40 > v12 || v12 > v12 + v11 || a2 < v12 + v11 || (*(_DWORD *)(a1 + 12) & 1) != 0 && !(_WORD)v11 )
    return (unsigned int)-1073741811;
  WORD1(Src[0]) = *(_WORD *)(a1 + 20);
  LOWORD(Src[0]) = v9;
  Src[1] = (void *)(a1 + 40);
  WORD1(v26) = v10;
  v13 = *(_QWORD *)a1;
  *((_QWORD *)&v26 + 1) = a1 + 40 + 2 * (v9 >> 1);
  LOWORD(v26) = v10;
  WORD1(v25) = v11;
  *((_QWORD *)&v25 + 1) = *((_QWORD *)&v26 + 1) + 2 * (v10 >> 1);
  LOWORD(v25) = v11;
  JobSilo = ObpReferenceObjectByHandleWithTag(v13, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
      }
      else
      {
        JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, &a5);
        if ( JobSilo >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v16 = (unsigned __int64 *)(a5 + 16);
          v17 = a5 + 16;
          --CurrentThread->KernelApcDisable;
          v18 = KeAbPreAcquire(v17, 0LL);
          v19 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
            ExfAcquirePushLockExclusiveEx(v16, v18, (__int64)v16);
          if ( v19 )
            *(_BYTE *)(v19 + 18) = 1;
          v20 = a5;
          if ( *(_DWORD *)(a5 + 84) )
          {
            JobSilo = -1073741738;
          }
          else
          {
            JobSilo = VrpLoadDifferencingHive(
                        (unsigned int)Src,
                        (unsigned int)&v26,
                        (unsigned int)&v25,
                        *(_DWORD *)(a1 + 16),
                        *(_DWORD *)(a1 + 12) & 1,
                        (*(_DWORD *)(a1 + 12) >> 1) & 1,
                        (*(_DWORD *)(a1 + 12) >> 2) & 1,
                        *(_QWORD *)(a1 + 32));
            if ( JobSilo >= 0 )
            {
              Pool2 = ExAllocatePool2(256LL, (unsigned int)LOWORD(Src[0]) + 10, 1734693462LL);
              if ( Pool2 )
              {
                *(_WORD *)(Pool2 + 8) = Src[0];
                memmove((void *)(Pool2 + 10), Src[1], LOWORD(Src[0]));
                *(_QWORD *)Pool2 = *(_QWORD *)(v20 + 24);
                *(_QWORD *)(v20 + 24) = Pool2;
                v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL);
                if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
                  ExfTryToWakePushLock((volatile signed __int64 *)v16);
                KeAbPostRelease((ULONG_PTR)v16);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                JobSilo = 0;
                goto LABEL_26;
              }
              JobSilo = -1073741670;
              VrpUnloadDifferencingHive(Src);
            }
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v16);
          KeAbPostRelease((ULONG_PTR)v16);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
  }
LABEL_26:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
