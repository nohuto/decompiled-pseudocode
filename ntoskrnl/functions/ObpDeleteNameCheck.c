void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v5; // rbp
  struct _KTHREAD *v6; // rax
  ULONG_PTR v7; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // rbx
  struct _KTHREAD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    v2 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
    v3 = a1 - v2;
    if ( a1 != v2 )
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v5 = *(volatile signed __int32 **)v3;
        if ( !*(_QWORD *)v3 || (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
        {
          ExReleasePushLockEx((__int64 *)(a1 + 16), 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        v12 = 0x10000000000LL;
        v6 = KeGetCurrentThread();
        v11 = (unsigned __int64)v5;
        --v6->KernelApcDisable;
        v7 = KeAbPreAcquire((__int64)(v5 + 74), 0LL);
        if ( !_interlockedbittestandset64(v5 + 74, 0LL) )
          break;
        if ( v7 )
          KeAbPostReleaseEx((ULONG_PTR)(v5 + 74), v7);
        KeLeaveCriticalRegion();
        *(_QWORD *)&v11 = 0LL;
        BYTE5(v12) = 0;
        ObfReferenceObject((PVOID)v5);
        ExReleasePushLockEx((__int64 *)(a1 + 16), 0LL);
        KeLeaveCriticalRegion();
        ObpLockDirectoryExclusive((__int64)&v11, (__int64)v5);
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        if ( *(volatile signed __int32 **)v3 == v5 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
        {
          PsDereferenceSiloContext((void *)v5);
          goto LABEL_11;
        }
        if ( (_QWORD)v11 )
          ObpUnlockDirectory((__int64)&v11);
        ExReleasePushLockEx((__int64 *)(a1 + 16), 0LL);
        KeLeaveCriticalRegion();
        PsDereferenceSiloContext((void *)v5);
      }
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
LABEL_11:
      if ( *(_DWORD *)(v3 + 24) )
      {
        ExReleasePushLockEx((__int64 *)(a1 + 16), 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a1 + 48);
        ObpLookupDirectoryEntry((unsigned __int16 *)(v3 + 8), 0, (__int64 *)&v11);
        v8 = (_QWORD *)*((_QWORD *)&v11 + 1);
        v9 = (_QWORD *)**((_QWORD **)&v11 + 1);
        *(_QWORD *)(*(_QWORD *)(**((_QWORD **)&v11 + 1) + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(**((_QWORD **)&v11 + 1) + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v8 = *v9;
        *v9 = 0LL;
        ExReleasePushLockEx((__int64 *)(a1 + 16), 0LL);
        KeLeaveCriticalRegion();
        if ( v9 )
          ObpDeleteDirectoryEntry(v9, (void **)&v11);
      }
      if ( (_QWORD)v11 )
        ObpUnlockDirectory((__int64)&v11);
    }
  }
}
