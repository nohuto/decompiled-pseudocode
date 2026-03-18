/*
 * XREFs of ??1FxObject@@UEAA@XZ @ 0x1C00079A0
 * Callers:
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0004FE0 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00058E4 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0005A80 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0005BF0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0007860 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0014230 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??_EFxObject@@UEAAPEAXI@Z @ 0x1C0052F70 (--_EFxObject@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C0053490 (--_EFxUsbUrb@@MEAAPEAXI@Z.c)
 *     ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x1C0054580 (--_EFxNPagedLookasideList@@MEAAPEAXI@Z.c)
 *     ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C0054600 (--_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 *     ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C0054A60 (--_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z.c)
 *     ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C0054AC0 (--_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C0055720 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1C0055C40 (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C0056120 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 *     ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x1C0056220 (--_GFxLookasideList@@MEAAPEAXI@Z.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C005F6B4 (--1FxPagedObject@@UEAA@XZ.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C0061A70 (--_GFxString@@UEAAPEAXI@Z.c)
 *     ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1C0062430 (--_GFxSpinLock@@UEAAPEAXI@Z.c)
 *     ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1C00915B0 (--_EFxRelatedDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C0059B9C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C005A484 (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxObject::~FxObject(FxObject *this, unsigned int a2, unsigned int a3)
{
  unsigned __int16 m_ObjectFlags; // ax
  FxTagTracker *m_Lock; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  unsigned __int16 m_Type; // r9
  __int64 v9; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  unsigned __int64 v12; // rdi
  const void *v13; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxObject_vtbl *)FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::`scalar deleting destructor'(m_Lock, a2);
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    m_Type = this->m_Type;
    v9 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_22;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( m_Type != *p_ObjectType )
    {
      if ( m_Type > *p_ObjectType )
      {
        v9 = (unsigned int)(v9 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v9 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_22;
    }
    HandleName = FxObjectsInfo[v9].HandleName;
    if ( !HandleName )
LABEL_22:
      HandleName = "WDFOBJECT";
    v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, (unsigned __int8)HandleName, a3, m_Type, traceGuid, HandleName, v13, this);
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v12, (unsigned __int64)this);
  }
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 12;
  }
  this->m_ObjectState = 12;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
