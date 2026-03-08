/*
 * XREFs of ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C004FF84
 * Callers:
 *     imp_WdfWaitLockCreate @ 0x1C004BFF0 (imp_WdfWaitLockCreate.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F298 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0001DB4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C004FF48 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

__int64 __fastcall FxWaitLock::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _FX_DRIVER_GLOBALS *ParentObject,
        unsigned __int8 AssignDriverAsDefaultParent,
        WDFWAITLOCK__ **LockHandle)
{
  FxObject *v9; // rax
  FxObject *v10; // rdi
  int v11; // ebx
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v13.UsePoolType = 0LL;
  v13.u.PoolFlags = 64LL;
  *LockHandle = 0LL;
  v9 = (FxObject *)FxObjectHandleAllocCommon(FxDriverGlobals, &v13, 0x90uLL, 0, Attributes, 0, FxObjectTypeExternal);
  v10 = v9;
  if ( v9 )
  {
    FxObject::FxObject(v9, 0x1023u, 0x90u, FxDriverGlobals);
    FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)&v10[1]);
    v10->__vftable = (FxObject_vtbl *)FxResourceCm::`vftable';
    KeInitializeEvent((PRKEVENT)&v10[1], SynchronizationEvent, 1u);
    LOBYTE(v10[1].m_ObjectFlags) = 1;
    v11 = FxObject::Commit(v10, Attributes, (void **)LockHandle, ParentObject, AssignDriverAsDefaultParent);
    if ( v11 < 0 )
    {
      FxObject::ClearEvtCallbacks(v10);
      v10->DeleteObject(v10);
    }
    return (unsigned int)v11;
  }
  else
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xDu, 0xAu, WPP_FxWaitLock_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
