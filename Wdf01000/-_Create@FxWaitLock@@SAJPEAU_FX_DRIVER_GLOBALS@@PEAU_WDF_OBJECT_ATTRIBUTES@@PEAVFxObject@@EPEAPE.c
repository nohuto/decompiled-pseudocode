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
