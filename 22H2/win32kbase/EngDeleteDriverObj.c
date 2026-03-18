/*
 * XREFs of EngDeleteDriverObj @ 0x1C016B1A0
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HmgLock @ 0x1C0042980 (HmgLock.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0044440 (GreReleaseSemaphoreInternal.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     FreeObject @ 0x1C0088C60 (FreeObject.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00D2DC0 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00D2E04 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  HSEMAPHORE *v8; // rdi
  int v9; // ebx
  BOOL v10; // ebx
  void *v11; // rdi
  _QWORD v13[6]; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE *v14; // [rsp+98h] [rbp+20h] BYREF

  v6 = HmgLock((unsigned int)hdo, 28);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v13, v6);
  v7 = v13[0];
  if ( !v13[0] )
    goto LABEL_6;
  v8 = *(HSEMAPHORE **)(v13[0] + 40LL);
  v14 = v8;
  if ( bCallBack )
  {
    EngAcquireSemaphore(v8[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v8[6], 11);
    v9 = (*(__int64 (__fastcall **)(__int64))(v13[0] + 32LL))((v7 + 24) & -(__int64)(v7 != 0));
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)v8[6]);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)v8[6]);
    if ( !v9 )
      goto LABEL_6;
  }
  v10 = 1;
  v11 = (void *)HmgRemoveObject((__int64)hdo, bLocked + 1, 0, 1, 28, 0LL);
  if ( v11 )
  {
    v13[0] = 0LL;
    PDEVOBJ::vUnreferencePdev((struct PDEV **)&v14);
    FreeObject(v11, 0x1Cu);
  }
  else
  {
LABEL_6:
    v10 = 0;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v13);
  return v10;
}
