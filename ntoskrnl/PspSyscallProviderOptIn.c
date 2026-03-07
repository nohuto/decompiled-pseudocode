__int64 __fastcall PspSyscallProviderOptIn(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // r14
  __int64 (__fastcall *Count)(__int64, __int64 *); // rax
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *i; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+2Ch] [rbp-1Ch]
  struct _EX_RUNDOWN_REF *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v4 = PspLookupSyscallProviderById(a2, (__int64)&v15);
    if ( v4 >= 0 )
    {
      v5 = *(unsigned __int8 *)(a2 + 16);
      if ( (_BYTE)v5 || HIDWORD(v15[v5 + 11].Ptr) == -1 )
      {
        v4 = -1073741811;
      }
      else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 2172), 0x19u) )
      {
        v4 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 2896) )
        {
          v4 = -1073741790;
        }
        else
        {
          v6 = v15;
          v7 = v15 + 7;
          if ( ExAcquireRundownProtection_0(v15 + 7) )
          {
            v14 = 0;
            Count = (__int64 (__fastcall *)(__int64, __int64 *))v6[5].Count;
            if ( !Count
              || (v12 = *(_QWORD *)(a1 + 1344), v13 = *(unsigned __int8 *)(a2 + 16), v4 = Count(a1, &v12), v4 >= 0) )
            {
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
              PspAttachProcessToSyscallProvider((_QWORD *)a1, (__int64)v15, *(unsigned __int8 *)(a2 + 16));
              for ( i = *(volatile signed __int32 **)(a1 + 1504);
                    i != (volatile signed __int32 *)(a1 + 1504);
                    i = *(volatile signed __int32 **)i )
              {
                _interlockedbittestandset(i - 334, 0x1Du);
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
              KeAbPostRelease(a1 + 1080);
              KeLeaveCriticalRegionThread((__int64)CurrentThread);
              v4 = 0;
            }
            ExReleaseRundownProtection_0(v7);
          }
          else
          {
            v4 = -1073741738;
          }
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 2172), 0x19u);
      }
    }
    if ( v15 )
      PspDereferenceSyscallProvider((volatile signed __int64 *)v15);
  }
  return (unsigned int)v4;
}
