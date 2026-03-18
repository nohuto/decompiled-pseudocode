/*
 * XREFs of EngDeleteDriverObj @ 0x1C01781D0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     HmgLock @ 0x1C0021050 (HmgLock.c)
 *     FreeObject @ 0x1C0027670 (FreeObject.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002E950 (GreReleaseSemaphoreInternal.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DB828 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00DB880 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  HSEMAPHORE *v8; // rbx
  int v9; // edi
  int v10; // r8d
  struct _SLIST_ENTRY *v11; // rdi
  int v12; // r8d
  __int64 v14; // rax
  __int64 v15; // rsi
  HSEMAPHORE *v16; // rbx
  int v17; // edi
  int v18; // r8d
  struct _SLIST_ENTRY *v19; // rdi
  int v20; // r8d
  _QWORD v21[6]; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE *v22; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
  {
    v6 = HmgLock((unsigned int)hdo, 28);
    HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v21, v6);
    v7 = v21[0];
    if ( v21[0] )
    {
      v8 = *(HSEMAPHORE **)(v21[0] + 40LL);
      v22 = v8;
      if ( !bCallBack
        || (EngAcquireSemaphore(v8[6]),
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v8[6], 11),
            v9 = (*(__int64 (__fastcall **)(__int64))(v21[0] + 32LL))((v7 + 24) & -(__int64)(v7 != 0)),
            EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)v8[6], v10),
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)v8[6]),
            v9) )
      {
        v11 = (struct _SLIST_ENTRY *)HmgRemoveObject((__int64)hdo, bLocked + 1, 0, 1, 28, 0LL);
        if ( v11 )
        {
          v21[0] = 0LL;
          PDEVOBJ::vUnreferencePdev((struct PDEV **)&v22, 0, v12);
          FreeObject(v11, 28);
          HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v21);
          return 1;
        }
      }
    }
    HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v21);
  }
  else
  {
    v14 = HmgLock((unsigned int)hdo, 28);
    v15 = v14;
    if ( v14 )
    {
      v16 = *(HSEMAPHORE **)(v14 + 40);
      v22 = v16;
      if ( !bCallBack
        || (EngAcquireSemaphore(v16[6]),
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v16[6], 11),
            v17 = (*(__int64 (__fastcall **)(__int64))(v15 + 32))(v15 + 24),
            EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)v16[6], v18),
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)v16[6]),
            v17) )
      {
        v19 = (struct _SLIST_ENTRY *)HmgRemoveObject((__int64)hdo, bLocked + 1, 0, 1, 28, 0LL);
        if ( v19 )
        {
          PDEVOBJ::vUnreferencePdev((struct PDEV **)&v22, 0, v20);
          FreeObject(v19, 28);
          return 1;
        }
      }
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
    }
  }
  return 0;
}
