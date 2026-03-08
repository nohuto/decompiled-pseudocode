/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C000770C
 * Callers:
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0007620 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0008280 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1C000D6E0 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C000D7D0 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C003A3DC (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C003B200 (WPP_IFR_SF_Dqq.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        FxRequestSystemBuffer **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  unsigned __int8 v4; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // esi
  unsigned int Options; // edi
  bool v9; // bp
  unsigned __int64 *v10; // r15
  unsigned int MajorFunction; // r14d
  _IRP *v13; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _MDL *m_Mdl; // rcx
  unsigned int v17; // r15d
  FxObject *v18; // r8
  const void *_a1; // rax
  __int64 _a2; // rdx
  const _GUID *v21; // r10
  const void *ObjectHandleUnchecked; // rax
  const void *v23; // rdx
  unsigned int v24; // r8d
  unsigned __int16 v25; // r9
  const void *v26; // rax
  int v27; // r10d
  const void *v28; // rax
  const void *v29; // rdx
  unsigned int v30; // r8d
  _IRP *m_Irp; // rcx
  const void *v32; // rax
  int v33; // r10d
  __int64 MdlAddress; // rdi
  const void *v35; // rax
  int v36; // r10d
  PVOID v37; // rax
  const void *v38; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  int v40; // [rsp+40h] [rbp-58h]
  unsigned __int8 irql; // [rsp+A0h] [rbp+8h] BYREF
  void **v42; // [rsp+B0h] [rbp+18h]
  unsigned __int64 *v43; // [rsp+B8h] [rbp+20h]

  v43 = Length;
  v42 = Buffer;
  v4 = 0;
  m_Globals = this->m_Globals;
  IsNotCompleted = 0;
  irql = 0;
  Options = 0;
  v9 = 0;
  v10 = Length;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      if ( IsNotCompleted < 0 )
        goto $Done_2;
    }
    if ( this->m_Irp.m_Irp->RequestorMode == 1 && (unsigned __int8)(MajorFunction - 3) <= 1u )
    {
      Buffer = (void **)&this->m_DeviceBase->FxRequestBase::FxNonPagedObject::FxObject::$2577F5D74A6AFCBEE1DF62E423AAEAA5::__vftable;
      if ( *((_DWORD *)Buffer + 53) == 1 )
      {
        IsNotCompleted = -1073741808;
        FxObject::GetObjectHandleUnchecked(this);
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v18);
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x19u, v21, _a1, _a2, -1073741808);
        WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Buffer);
    v4 = irql;
  }
  if ( MajorFunction == 3 )
  {
    m_Irp = this->m_Irp.m_Irp;
    Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    if ( this->m_DeviceBase[1].m_Refcnt == 3 )
      v9 = 1;
  }
  else
  {
    if ( MajorFunction != 4 )
    {
      if ( MajorFunction - 14 > 1 )
      {
        FxObject::GetObjectHandleUnchecked(this);
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_Dqq(
          this->m_Globals,
          (unsigned __int8)v23,
          v24,
          v25,
          traceGuid,
          MajorFunction,
          ObjectHandleUnchecked,
          v23);
        FxVerifierDbgBreakPoint(this->m_Globals);
        IsNotCompleted = -1073741808;
      }
      else
      {
        v13 = this->m_Irp.m_Irp;
        CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
        Options = CurrentStackLocation->Parameters.Create.Options;
        if ( Options )
        {
          LODWORD(Buffer) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
          if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3
            && v13->RequestorMode
            && (_BYTE)MajorFunction != 15 )
          {
            IsNotCompleted = -1073741808;
            FxObject::GetObjectHandleUnchecked(this);
            v28 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
            WPP_IFR_SF_Dqqd(
              this->m_Globals,
              (unsigned __int8)v29,
              v30,
              0x1Cu,
              WPP_FxRequest_cpp_Traceguids,
              v30,
              v28,
              v29,
              v40);
            WPP_IFR_SF_D(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, 0xC0000010);
          }
        }
        else
        {
          IsNotCompleted = -1073741789;
          v26 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequest_cpp_Traceguids, v26, v27);
        }
      }
      goto $Done_2;
    }
    m_Irp = this->m_Irp.m_Irp;
    Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    v9 = this->m_DeviceBase[1].m_Refcnt == 3;
  }
  v17 = Options;
  if ( Options )
  {
    if ( v9 && (this->m_RequestBaseFlags & 1) == 0 )
    {
      MdlAddress = (__int64)m_Irp->MdlAddress;
      if ( MdlAddress )
      {
        if ( (*(_BYTE *)(MdlAddress + 10) & 5) != 0 )
          v37 = *(PVOID *)(MdlAddress + 24);
        else
          v37 = MmMapLockedPagesSpecifyCache((PMDL)MdlAddress, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
        if ( v37 )
        {
          this->m_SystemBuffer.m_Buffer = this->m_Irp.m_Irp->MdlAddress;
          this->m_RequestBaseFlags |= 1u;
        }
        else
        {
          IsNotCompleted = -1073741670;
          v38 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequest_cpp_Traceguids, v38, MdlAddress, -1073741670);
        }
      }
      else
      {
        IsNotCompleted = -1073741789;
        v35 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x20u, WPP_FxRequest_cpp_Traceguids, v35, v36);
      }
      Options = v17;
    }
  }
  else
  {
    IsNotCompleted = -1073741789;
    v32 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Fu, WPP_FxRequest_cpp_Traceguids, v32, v33);
  }
  v10 = v43;
$Done_2:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
    FxNonPagedObject::Unlock(this, v4, (unsigned __int8)Buffer);
  if ( IsNotCompleted >= 0 )
  {
    m_Mdl = this->m_SystemBuffer.m_Mdl;
    *MemoryObject = &this->m_SystemBuffer;
    if ( v9 )
    {
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        m_Mdl = (_MDL *)m_Mdl->MappedSystemVa;
      else
        m_Mdl = (_MDL *)MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
    }
    *v42 = m_Mdl;
    *v10 = Options;
  }
  return (unsigned int)IsNotCompleted;
}
