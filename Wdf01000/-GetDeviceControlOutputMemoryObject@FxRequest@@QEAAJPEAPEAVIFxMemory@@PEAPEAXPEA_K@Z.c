int __fastcall FxRequest::GetDeviceControlOutputMemoryObject(
        FxRequest *this,
        FxRequestOutputBuffer **MemoryObject,
        _MDL **Buffer,
        unsigned __int64 *Length)
{
  KIRQL v4; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int v8; // esi
  char v9; // r14
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 v14; // rbp
  unsigned int LowPart; // r8d
  __int64 _a2; // r10
  PVOID v17; // rax
  _MDL *m_Mdl; // rcx
  int result; // eax
  _LIST_ENTRY *Flink; // rcx
  const void *v21; // rcx
  unsigned __int16 v22; // r9
  FxDeviceBase *m_DeviceBase; // rdx
  const void *level; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v26; // rdx
  const void *v27; // rcx
  _LIST_ENTRY *v28; // rcx
  int v29; // [rsp+40h] [rbp-38h]
  __int64 irql; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  m_Globals = this->m_Globals;
  LOBYTE(irql) = 0;
  v8 = 0;
  v9 = 0;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      result = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      v8 = result;
      if ( result < 0 )
        return result;
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 2) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&irql, (unsigned __int8)Buffer);
      v4 = irql;
    }
    else
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v14 = CurrentStackLocation->Parameters.Read.Length;
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    v8 = -1073741789;
    v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    v22 = 34;
LABEL_37:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, v22, WPP_FxRequest_cpp_Traceguids, v21, -1073741789);
    goto $Done_3;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (LowPart & 3) != 2 && (LowPart & 3) != 1 )
  {
    if ( (LowPart & 3) == 3 && m_Irp->RequestorMode && CurrentStackLocation->MajorFunction != 15 )
    {
      v8 = -1073741808;
      m_DeviceBase = this->m_DeviceBase;
      level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      if ( !this->m_ObjectSize )
        level = 0LL;
      v26 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v26 = 0LL;
      WPP_IFR_SF_Dqqd(
        this->m_Globals,
        (unsigned __int8)v26,
        LowPart,
        0x23u,
        WPP_FxRequest_cpp_Traceguids,
        LowPart,
        v26,
        level,
        v29);
      WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequest_cpp_Traceguids);
    }
    goto $Done_3;
  }
  v9 = 1;
  if ( (this->m_RequestBaseFlags & 2) == 0 )
  {
    _a2 = (__int64)m_Irp->MdlAddress;
    irql = _a2;
    if ( _a2 )
    {
      if ( (*(_BYTE *)(_a2 + 10) & 5) != 0 )
      {
        v17 = *(PVOID *)(_a2 + 24);
      }
      else
      {
        v17 = MmMapLockedPagesSpecifyCache((PMDL)_a2, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
        _a2 = irql;
      }
      if ( v17 )
      {
        this->m_OutputBuffer.m_Buffer = (void *)_a2;
        this->m_RequestBaseFlags |= 2u;
        v8 = 0;
      }
      else
      {
        v8 = -1073741670;
        v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v27 = 0LL;
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x26u, WPP_FxRequest_cpp_Traceguids, v27, _a2, -1073741670);
      }
      goto $Done_3;
    }
    v8 = -1073741789;
    v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    v22 = 37;
    goto LABEL_37;
  }
$Done_3:
  if ( (this->m_RequestBaseStaticFlags & 2) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v28 = this[-1].m_ForwardProgressList.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v28, v4, LowPart);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v4);
  }
  if ( v8 >= 0 )
  {
    m_Mdl = this->m_OutputBuffer.m_Mdl;
    *MemoryObject = &this->m_OutputBuffer;
    if ( v9 )
    {
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        m_Mdl = (_MDL *)m_Mdl->MappedSystemVa;
      else
        m_Mdl = (_MDL *)MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
    }
    *Buffer = m_Mdl;
    *Length = v14;
  }
  return v8;
}
