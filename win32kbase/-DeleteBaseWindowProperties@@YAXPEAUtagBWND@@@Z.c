/*
 * XREFs of ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C017BC2C
 * Callers:
 *     DestroyBaseWindow @ 0x1C017BDE0 (DestroyBaseWindow.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00724BC (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1C009B720 (-LockExclusive@tagObjLock@@QEBAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeleteBaseWindowProperties(struct tagBWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdx
  struct _KTHREAD ***v5; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  int v9; // r14d
  struct _KTHREAD **v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 *v13; // rbx
  __int64 v14; // rax
  char *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  char v19; // [rsp+60h] [rbp-10h]

  v4 = (__int64 *)*((_QWORD *)a1 + 10);
  v18 = 0LL;
  v19 = 0;
  v5 = (struct _KTHREAD ***)&v18;
  v7 = 0LL;
  if ( v4 != &gObjDummyLock )
    v7 = v4;
  v8 = 0LL;
  *(_QWORD *)&v18 = v7;
  v9 = 0;
  do
  {
    if ( *v5 )
      tagObjLock::LockExclusive(*v5);
    ++v9;
    ++v5;
  }
  while ( !v9 );
  v10 = (struct _KTHREAD **)*((_QWORD *)a1 + 10);
  v19 = 1;
  LockRefactorStagingAssertOwned(v10, (__int64)v4, a3, a4);
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 + 4);
    v13 = (__int64 *)(v11 + 8);
    if ( *(_DWORD *)(v11 + 4) )
    {
      do
      {
        if ( (*((_WORD *)v13 + 5) & 0x8001) == 0x8001 )
        {
          v14 = *v13;
          if ( v8 )
            *(_QWORD *)(v14 + 8) = v8;
          v8 = v14;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 188);
        }
        v13 += 2;
        --v12;
      }
      while ( v12 );
    }
    v15 = *(char **)(*((_QWORD *)a1 + 10) + 24LL);
    if ( v15 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
    *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL) = 0LL;
  }
  if ( v19 )
  {
    v16 = v18;
    if ( (_QWORD)v18 )
    {
      *(_QWORD *)(v18 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
    v19 = 0;
  }
  if ( v8 )
  {
    do
    {
      v17 = *(_QWORD *)(v8 + 8);
      (**(void (__fastcall ***)(__int64))v8)(v8);
      v8 = v17;
    }
    while ( v17 );
  }
}
