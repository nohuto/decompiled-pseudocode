/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x140375248
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x1407F6F10 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int i; // r15d
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rdi
  __int64 v8; // rbp
  void *v9; // rbp
  struct _KTHREAD *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rbx
  unsigned int v13; // edx
  int v14; // r9d
  struct _KTHREAD *v16; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v19; // edx
  int v20; // r8d

  v2 = 0;
  for ( i = 0; i < a2; ++i )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = a1 + 16LL * i;
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    v8 = *(_QWORD *)(v7 + 8);
    if ( (v8 & 1) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
      v16 = KeGetCurrentThread();
      if ( v7 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      else
        SessionId = -1;
      _disable();
      p_Process = (__int64)&v16[1].Process;
      v19 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v7 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v19;
        p_Process += 96LL;
        if ( v19 >= 6 )
          goto LABEL_41;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( p_Process )
      {
        if ( *(__int64 *)p_Process < 0 )
        {
          *(_BYTE *)p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v20 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        v16->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
        _enable();
        if ( v20 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v16, v7, v20);
        goto LABEL_39;
      }
LABEL_41:
      if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, v7, SessionId, 0LL);
      _enable();
LABEL_39:
      KeLeaveCriticalRegion();
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 1LL;
      v9 = (void *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
      v10 = KeGetCurrentThread();
      if ( v7 - qword_140C50630 < 0x8000000000LL )
        v11 = MmGetSessionIdEx((__int64)v10->ApcState.Process);
      else
        v11 = -1;
      _disable();
      v12 = (__int64)&v10[1].Process;
      v13 = 0;
      while ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) != (v7 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v12 + 18)
           || (*(_DWORD *)v12 & 1) != 0
           || *(_DWORD *)(v12 + 8) != v11 )
      {
        ++v13;
        v12 += 96LL;
        if ( v13 >= 6 )
          goto LABEL_22;
      }
      *(_BYTE *)(v12 + 18) = 0;
      if ( v12 )
      {
        if ( *(__int64 *)v12 < 0 )
        {
          *(_BYTE *)v12 |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(v12);
          _disable();
        }
        v14 = *(_DWORD *)(v12 + 88);
        *(_DWORD *)(v12 + 88) = 0;
        *(_BYTE *)(v12 + 17) = 0;
        *(_QWORD *)v12 = 0LL;
        v10->AbEntrySummary |= 1 << *(_BYTE *)(v12 + 16);
        _enable();
        if ( v14 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v10, v7, v14);
        goto LABEL_17;
      }
LABEL_22:
      if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, v7, v11, 0LL);
      _enable();
LABEL_17:
      KeLeaveCriticalRegion();
      if ( v9 )
      {
        ObfDereferenceObject(v9);
        ++v2;
      }
    }
  }
  return v2;
}
