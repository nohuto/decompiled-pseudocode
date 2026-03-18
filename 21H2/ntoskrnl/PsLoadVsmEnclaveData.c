/*
 * XREFs of PsLoadVsmEnclaveData @ 0x1405E33F8
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x14097A358 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PspFindVsmEnclaveThread @ 0x1408826B4 (PspFindVsmEnclaveThread.c)
 *     VslLoadEnclaveData @ 0x14093267C (VslLoadEnclaveData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsLoadVsmEnclaveData(__int64 a1, __int64 a2, int a3, int a4, ULONG_PTR a5)
{
  _QWORD *PoolWithTag; // rdi
  int EnclaveData; // eax
  unsigned int v12; // r12d
  int v13; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v15; // rsi
  _QWORD *v16; // r14
  _BOOL8 v17; // r8
  _QWORD *v18; // rax
  struct _KTHREAD *v19; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v22; // edx
  int v23; // r9d
  int v24; // [rsp+70h] [rbp+18h] BYREF

  v24 = 0;
  if ( a3 == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  EnclaveData = VslLoadEnclaveData(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, (__int64)&v24);
  v12 = EnclaveData;
  if ( PoolWithTag )
  {
    if ( EnclaveData < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v13 = v24;
      *((_DWORD *)PoolWithTag + 9) = 0;
      *((_DWORD *)PoolWithTag + 8) = v13;
      PoolWithTag[3] = a2;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (volatile signed __int64 *)(a1 + 112);
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      v16 = *(_QWORD **)(a1 + 104);
      LOBYTE(v17) = 0;
      if ( v16 )
      {
        while ( 1 )
        {
          if ( (int)PspFindVsmEnclaveThread(a2, v16, v17) < 0 )
          {
            v18 = (_QWORD *)*v16;
            if ( !*v16 )
            {
              LOBYTE(v17) = 0;
              break;
            }
          }
          else
          {
            v18 = (_QWORD *)v16[1];
            if ( !v18 )
            {
              LOBYTE(v17) = 1;
              break;
            }
          }
          v16 = v18;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v16, v17, PoolWithTag);
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 112);
      v19 = KeGetCurrentThread();
      if ( (unsigned __int64)v15 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v19->ApcState.Process);
      _disable();
      p_Process = (__int64)&v19[1].Process;
      v22 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v15 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v22;
        p_Process += 96LL;
        if ( v22 >= 6 )
          goto LABEL_25;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( !p_Process )
      {
LABEL_25:
        if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v19, a1 + 112, SessionId, 0LL);
        _enable();
        goto LABEL_33;
      }
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v23 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v19->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v23 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v19, a1 + 112, v23);
LABEL_33:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v12;
}
