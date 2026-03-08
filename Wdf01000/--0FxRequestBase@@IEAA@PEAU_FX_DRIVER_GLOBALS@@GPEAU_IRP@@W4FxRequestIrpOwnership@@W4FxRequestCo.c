/*
 * XREFs of ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0002D68
 * Callers:
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0002C40 (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0089A70 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 * Callees:
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0001E04 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0001E58 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001B150 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

void __fastcall FxRequestBase::FxRequestBase(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        _IRP *Irp,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller,
        FxObjectType ObjectType)
{
  _FX_DRIVER_GLOBALS *v7; // rsi
  bool v8; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int v12; // r8d
  FxVerifierLock *VerifierLock; // [rsp+30h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxRequestBase_vtbl *)FxObject::`vftable';
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Type = 4104;
  this->m_SpinLock.m_Lock = 0LL;
  v7 = FxDriverGlobals;
  v8 = ObjectType == FxObjectTypeEmbedded;
  this->m_ObjectSize = (ObjectSize + 15) & 0xFFF0;
  LOBYTE(FxDriverGlobals) = v8;
  FxObject::Construct(this, FxDriverGlobals);
  this->__vftable = (FxRequestBase_vtbl *)FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, m_Globals, this);
      *(_QWORD *)&this[-1].m_IrpCompletionReferenceCount = VerifierLock;
    }
  }
  v8 = Caller == FxRequestConstructorCallerIsDriver;
  this->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
  this->m_Irp.m_Irp = Irp;
  this->m_CancelRoutine.m_Cancel = 0LL;
  this->m_CompletionRoutine.m_Completion = 0LL;
  this->m_CanComplete = 0;
  if ( v8 )
  {
    this->m_IrpAllocation = (Ownership != FxRequestOwnsIrp) + 1;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v7, (unsigned int)m_Globals, 0xBu) )
    {
      FxObject::MarkDisposeOverride(this, (FxObjectLockState)(v12 - 10));
      Irp = this->m_Irp.m_Irp;
    }
  }
  else if ( Ownership == FxRequestOwnsIrp )
  {
    this->m_IrpAllocation = 1;
  }
  else
  {
    this->m_IrpAllocation = 0;
    this->m_CanComplete = 1;
  }
  this->m_Target = 0LL;
  this->m_TargetFlags = 0;
  this->m_TargetCompletionContext = 0LL;
  this->m_Completed = Irp == 0LL;
  this->m_Canceled = 0;
  *(_WORD *)&this->m_RequestBaseStaticFlags = 0;
  this->m_RequestContext = 0LL;
  this->m_Timer = 0LL;
  this->m_DrainSingleEntry.Next = 0LL;
  *(_QWORD *)&this->m_SystemBufferOffset = 0LL;
  this->m_IrpQueue = 0LL;
  this->m_OutputBufferOffset = 0;
  this->m_IrpCompletionReferenceCount = 0;
  this->m_AllocatedMdl = 0LL;
  this->m_RequestBaseFlags = 0;
  this->m_CompletionState = 0;
  this->m_CsqContext.Irp = (_IRP *)&this->120;
  this->m_ListEntry.Flink = (_LIST_ENTRY *)&this->120;
}
