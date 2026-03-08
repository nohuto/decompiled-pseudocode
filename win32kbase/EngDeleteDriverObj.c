/*
 * XREFs of EngDeleteDriverObj @ 0x1C0197F40
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     HmgLockEx @ 0x1C004AED0 (HmgLockEx.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     FreeObject @ 0x1C00597F0 (FreeObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  HSEMAPHORE *v8; // rdi
  int v9; // r14d
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdi
  HSEMAPHORE *v15; // [rsp+68h] [rbp+20h] BYREF

  v6 = HmgLockEx((unsigned int)hdo, 28, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(HSEMAPHORE **)(v6 + 40);
    v15 = v8;
    if ( !bCallBack )
      goto LABEL_12;
    EngAcquireSemaphore(v8[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v8[6], 11);
    v9 = (*(__int64 (__fastcall **)(__int64))(v7 + 32))(v7 + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)v8[6]);
    v10 = (struct _ERESOURCE *)v8[6];
    if ( v10 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion(v12, v11);
    }
    if ( v9 )
    {
LABEL_12:
      v13 = (void *)HmgRemoveObjectImpl((struct HOBJ__ *)hdo, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
      if ( v13 )
      {
        PDEVOBJ::vUnreferencePdev((struct PDEV **)&v15);
        FreeObject(v13, 0x1Cu);
        return 1;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
  }
  return 0;
}
