/*
 * XREFs of DeleteProperties @ 0x1C0072500
 * Callers:
 *     <none>
 * Callees:
 *     UserGlobalAtomTableCallout @ 0x1C0072268 (UserGlobalAtomTableCallout.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00724BC (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0072AEC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C008ECA0 (UserDeleteAtomFromAtomTable.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeleteProperties(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // ebp
  __int64 i; // rbx
  __int16 v9; // cx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rdx
  _QWORD *v15; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  char v23; // [rsp+40h] [rbp-38h]
  char v24; // [rsp+48h] [rbp-30h]

  v2 = 0LL;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    &v21,
    *(_QWORD *)(a1 + 144));
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v3, v4, v5);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    for ( i = v6 + 8; v7; --v7 )
    {
      v9 = *(_WORD *)(i + 10);
      if ( (v9 & 1) != 0 )
      {
        if ( (v9 & 0x8001) == 0x8001 )
        {
          v10 = *(_QWORD **)i;
          if ( v2 )
            v10[1] = v2;
          v2 = v10;
        }
        else if ( (v9 & 8) != 0 )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)i);
        }
        else if ( (v9 & 4) == 0 && *(_QWORD *)i )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)i);
        }
      }
      v11 = UserGlobalAtomTableCallout();
      v12 = *(unsigned __int16 *)(i + 10);
      v13 = v11;
      if ( (v12 & 2) != 0 && v11 && (v12 & 0x10) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
        if ( CurrentProcessWin32Process )
        {
          v17 = -*(_QWORD *)CurrentProcessWin32Process;
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        }
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x4000000) == 0 )
        {
          v18 = PsGetCurrentProcessWin32Process(v17);
          if ( v18 )
            v18 &= -(__int64)(*(_QWORD *)v18 != 0LL);
          if ( *(_DWORD *)(i + 12) == *(_DWORD *)(v18 + 868) )
            UserDeleteAtomFromAtomTable(v13, *(unsigned __int16 *)(i + 8));
        }
      }
      i += 16LL;
    }
    v14 = *(void **)(*(_QWORD *)(a1 + 144) + 24LL);
    if ( v14 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) = 0LL;
    if ( v24 && v23 )
    {
      v20 = v22;
      if ( v22 )
      {
        *(_QWORD *)(v22 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v20, 0LL);
        KeLeaveCriticalRegion();
      }
      v23 = 0;
    }
    if ( v2 )
    {
      do
      {
        v15 = (_QWORD *)v2[1];
        (*(void (__fastcall **)(_QWORD *))*v2)(v2);
        v2 = v15;
      }
      while ( v15 );
    }
  }
  else if ( v24 && v23 )
  {
    v19 = v22;
    if ( v22 )
    {
      *(_QWORD *)(v22 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
