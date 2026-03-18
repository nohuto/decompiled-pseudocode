/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00094F0
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0006C90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0009830 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00150E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A978 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005AC78 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _QWORD *p_Type; // rbp
  unsigned __int64 v3; // rsi
  char v4; // r13
  _FILE_OBJECT *v7; // r8
  int FileObjectFromWdm; // eax
  unsigned __int8 v9; // r8
  unsigned int v10; // r15d
  _LIST_ENTRY *m_PkgContext; // rbx
  FxPkgGeneral *i; // rbx
  _LIST_ENTRY *Flink; // rax
  FxObject *m_ParentObject; // rcx
  FxObject *v15; // rcx
  _IRP *m_Irp; // rax
  FxDeviceBase *m_DeviceBase; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  int v20; // eax
  _FILE_OBJECT *_a1; // rbp
  int v22; // eax
  FxFileObject *FsContext; // rsi
  char m_ObjectFlags; // al
  unsigned __int8 v25; // r9
  _LIST_ENTRY *v26; // rdx
  _LIST_ENTRY *Blink; // r8
  char v28; // bl
  FxDeviceBase *v29; // rax
  _IRP *v30; // rax
  _DEVICE_OBJECT *v32; // rcx
  NTSTATUS _a2; // eax
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v35; // rcx
  _FX_DRIVER_GLOBALS *v36; // rbx
  unsigned int v37; // edx
  _FX_DRIVER_GLOBALS *v38; // rcx
  FxDeviceBase *v39; // rcx
  FxFileObject *ppFxFileObject; // [rsp+40h] [rbp-58h] BYREF
  PVOID Tag; // [rsp+48h] [rbp-50h]
  FxFileObject *pFxFO; // [rsp+50h] [rbp-48h] BYREF
  char v43; // [rsp+A8h] [rbp+10h]
  unsigned __int8 PreviousIrql; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int8 v45; // [rsp+B8h] [rbp+20h] BYREF

  p_Type = &FxIrp->m_Irp->Type;
  v3 = 0LL;
  v4 = 0;
  pFxFO = 0LL;
  v43 = 0;
  Tag = p_Type;
  v7 = *(_FILE_OBJECT **)(p_Type[23] + 48LL);
  if ( !v7 || (v7->Flags & 0x100) == 0 )
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
                          v7,
                          &pFxFO);
    v10 = FileObjectFromWdm;
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 && pFxFO->m_ObjectSize )
        v3 = (unsigned __int64)pFxFO ^ 0xFFFFFFFFFFFFFFF8uLL;
      m_PkgContext = (_LIST_ENTRY *)pFxFO->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
      if ( m_PkgContext != &this->m_FileObjectInfoHeadList )
      {
        while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          if ( m_PkgContext == &this->m_FileObjectInfoHeadList )
            goto LABEL_9;
        }
        m_PkgContext = m_PkgContext->Blink;
      }
    }
LABEL_9:
    for ( i = (FxPkgGeneral *)m_PkgContext->Flink;
          i != (FxPkgGeneral *)&this->m_FileObjectInfoHeadList;
          i = (FxPkgGeneral *)i->__vftable )
    {
      Flink = i->m_ChildEntry.Flink;
      if ( Flink )
      {
        m_ParentObject = i->m_ParentObject;
        v45 = 0;
        if ( m_ParentObject )
        {
          ((void (__fastcall *)(FxObject *, unsigned __int8 *))m_ParentObject->Release)(m_ParentObject, &v45);
          ((void (__fastcall *)(unsigned __int64))i->m_ChildEntry.Flink)(v3);
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64))Flink)(v3);
        }
        v15 = i->m_ParentObject;
        if ( v15 )
          ((void (__fastcall *)(FxObject *, _QWORD))v15->AddRefOverride)(v15, v45);
      }
    }
    m_Irp = FxIrp->m_Irp;
    m_DeviceBase = this->m_DeviceBase;
    ppFxFileObject = 0LL;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    m_Globals = m_DeviceBase->m_Globals;
    v20 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
    _a1 = CurrentStackLocation->FileObject;
    if ( v20 == 1 )
      goto LABEL_29;
    if ( !_a1 && v20 != 4 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
        m_Globals = m_DeviceBase->m_Globals;
      }
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_29;
    }
    if ( v20 == 2 )
    {
      FsContext = (FxFileObject *)_a1->FsContext;
      ppFxFileObject = FsContext;
      _a1->FsContext = 0LL;
    }
    else if ( v20 == 3 )
    {
      FsContext = (FxFileObject *)_a1->FsContext2;
      ppFxFileObject = FsContext;
      _a1->FsContext2 = 0LL;
    }
    else
    {
      v22 = FxFileObject::_GetFileObjectFromWdm(
              (FxDevice *)m_DeviceBase,
              WdfFileObjectWdfCannotUseFsContexts,
              CurrentStackLocation->FileObject,
              &ppFxFileObject);
      FsContext = ppFxFileObject;
      if ( v22 >= 0 && ppFxFileObject )
        goto LABEL_22;
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, _a1);
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
    }
    if ( !FsContext )
    {
LABEL_29:
      p_Type = Tag;
      v28 = 0;
      goto $Passthru;
    }
LABEL_22:
    m_ObjectFlags = m_DeviceBase->m_ObjectFlags;
    PreviousIrql = 0;
    if ( m_ObjectFlags < 0
      && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v9);
      v25 = PreviousIrql;
    }
    else
    {
      v25 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
      PreviousIrql = v25;
    }
    v26 = FsContext->m_Link.Flink;
    if ( v26->Blink != &FsContext->m_Link || (Blink = FsContext->m_Link.Blink, Blink->Flink != &FsContext->m_Link) )
      __fastfail(3u);
    Blink->Flink = v26;
    v26->Blink = Blink;
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (v35 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Unlock(v35, v25, (unsigned __int8)Blink);
    }
    else
    {
      KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v25);
    }
    FsContext->DeleteObject(FsContext);
    goto LABEL_29;
  }
  v28 = 1;
  v10 = 0;
  v43 = 1;
$Passthru:
  v29 = this->m_DeviceBase;
  if ( BYTE1(v29[1].m_ChildEntry.Blink) )
  {
    v30 = FxIrp->m_Irp;
    ++v30->CurrentLocation;
    ++v30->Tail.Overlay.CurrentStackLocation;
    v10 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v32 = v29->m_DeviceObject.m_DeviceObject;
    if ( *(_QWORD *)&v29[3].m_SpinLock.m_DbgFlagIsInitialized && ((__int64)v32[1].CurrentIrp & 1) == 0 )
    {
      _a2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v32[1], FxIrp->m_Irp, a5, 1u, 0x20u);
      if ( _a2 < 0 )
      {
        v36 = this->m_Globals;
        WPP_IFR_SF_qL(v36, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, _a2);
        if ( v36->FxVerifierOn
          && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v36, v37, 9u) || v36->FxVerifyDownlevel) )
        {
          FxVerifierDbgBreakPoint(v38);
        }
        v28 = v43;
      }
      else
      {
        v4 = 1;
      }
    }
    FxIrp->m_Irp->IoStatus.Status = v10;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v28 && _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    v39 = this->m_DeviceBase;
    if ( BYTE5(v39[1].m_Globals) )
      FxObject::DeleteObject(v39);
  }
  if ( v4 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], p_Type, 0x20u);
  return v10;
}
