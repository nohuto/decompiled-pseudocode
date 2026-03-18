/*
 * XREFs of ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C0166160
 * Callers:
 *     DestroyBaseWindow @ 0x1C01662F0 (DestroyBaseWindow.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1C0086F10 (-LockExclusive@tagObjLock@@QEBAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DeleteBaseWindowProperties(struct tagBWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdx
  struct _KTHREAD ***v5; // rbx
  __int64 v6; // rdi
  __int64 *v7; // rax
  int v9; // r14d
  struct _KTHREAD **v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 *v16; // rbx
  __int64 v17; // rax
  char *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int128 v21; // [rsp+48h] [rbp-28h] BYREF
  char v22; // [rsp+58h] [rbp-18h]

  v4 = (__int64 *)*((_QWORD *)a1 + 10);
  v5 = (struct _KTHREAD ***)&v21;
  v6 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v22 = 0;
  if ( v4 != &gObjDummyLock )
    v7 = v4;
  v9 = 0;
  *(_QWORD *)&v21 = v7;
  do
  {
    if ( *v5 )
      tagObjLock::LockExclusive(*v5, (__int64)v4, a3);
    ++v9;
    ++v5;
  }
  while ( !v9 );
  v10 = (struct _KTHREAD **)*((_QWORD *)a1 + 10);
  v22 = 1;
  LockRefactorStagingAssertOwned(v10, (__int64)v4, a3, a4);
  v13 = *((_QWORD *)a1 + 10);
  v14 = *(_QWORD *)(v13 + 24);
  if ( v14 )
  {
    v15 = *(unsigned int *)(v14 + 4);
    v16 = (__int64 *)(v14 + 8);
    if ( *(_DWORD *)(v14 + 4) )
    {
      do
      {
        if ( (*((_WORD *)v16 + 5) & 0x8001) == 0x8001 )
        {
          v17 = *v16;
          if ( v6 )
            *(_QWORD *)(v17 + 8) = v6;
          v6 = v17;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v12);
        }
        v16 += 2;
        --v15;
      }
      while ( v15 );
      v13 = *((_QWORD *)a1 + 10);
    }
    v18 = *(char **)(v13 + 24);
    if ( v18 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v18);
      v13 = *((_QWORD *)a1 + 10);
    }
    *(_QWORD *)(v13 + 24) = 0LL;
  }
  if ( v22 )
  {
    v19 = v21;
    if ( (_QWORD)v21 )
    {
      *(_QWORD *)(v21 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
      KeLeaveCriticalRegion();
    }
    v22 = 0;
  }
  if ( v6 )
  {
    do
    {
      v20 = *(_QWORD *)(v6 + 8);
      (**(void (__fastcall ***)(__int64))v6)(v6);
      v6 = v20;
    }
    while ( v20 );
  }
}
