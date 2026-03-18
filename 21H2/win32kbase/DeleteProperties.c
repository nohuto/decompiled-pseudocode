/*
 * XREFs of DeleteProperties @ 0x1C0149E10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00337E0 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserGlobalAtomTableCallout @ 0x1C0089494 (UserGlobalAtomTableCallout.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C009A8B0 (UserDeleteAtomFromAtomTable.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00AE618 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeleteProperties(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // rbx
  __int16 v10; // cx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  struct _RTL_ATOM_TABLE *v13; // rbp
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  _BYTE v16[48]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0LL;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v16,
    *(__int64 **)(a1 + 144));
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v3, v4, v5);
  v6 = *(_QWORD *)(a1 + 144);
  v7 = *(_QWORD *)(v6 + 24);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4);
    v9 = v7 + 8;
    if ( v8 )
    {
      do
      {
        v10 = *(_WORD *)(v9 + 10);
        if ( (v10 & 1) != 0 )
        {
          if ( (v10 & 0x8001) == 0x8001 )
          {
            v11 = *(_QWORD **)v9;
            if ( v2 )
              v11[1] = v2;
            v2 = v11;
          }
          else if ( (v10 & 8) != 0 )
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)v9);
          }
          else if ( (v10 & 4) == 0 )
          {
            Win32FreePool(*(char **)v9);
          }
        }
        v13 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
        if ( (*(_BYTE *)(v9 + 10) & 2) != 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 820) & 0x4000000) == 0
          && v13
          && *(_DWORD *)(v9 + 12) == *(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 884) )
        {
          UserDeleteAtomFromAtomTable(v13, *(_WORD *)(v9 + 8));
        }
        v9 += 16LL;
        --v8;
      }
      while ( v8 );
      v6 = *(_QWORD *)(a1 + 144);
    }
    Win32FreePool(*(char **)(v6 + 24));
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) = 0LL;
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)v16);
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
  else
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)v16);
  }
}
