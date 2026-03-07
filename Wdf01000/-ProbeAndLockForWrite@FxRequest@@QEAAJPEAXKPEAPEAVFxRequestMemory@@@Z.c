int __fastcall FxRequest::ProbeAndLockForWrite(
        FxRequest *this,
        void *Buffer,
        unsigned int Length,
        FxRequestMemory **MemoryObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 _a2; // r12
  int v9; // ebx
  int result; // eax
  const void *_a1; // rax
  _MDL *Debug; // rax
  char v13; // dl
  _MDL *v14; // rbx
  int v15; // esi
  signed int _a3; // eax
  _WDF_OBJECT_ATTRIBUTES *v17; // rdx
  bool v18; // zf
  PVOID MappedSystemVa; // r15
  int v20; // eax
  FxRequestMemory *v21; // r14
  unsigned __int8 traceGuid; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxRequestMemory *pMemory; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  _a2 = Length;
  pMemory = 0LL;
  if ( !Length )
  {
    v9 = -1073741592;
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x20u, WPP_FxRequestKm_cpp_Traceguids, 0xC00000E8);
    return v9;
  }
  if ( !this->m_Irp.m_Irp )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v9 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequestKm_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v9;
  }
  if ( !m_Globals->FxVerifierOn )
    goto LABEL_10;
  result = FxRequest::Vf_VerifyProbeAndLock(this, m_Globals);
  if ( result < 0 )
    return result;
  if ( m_Globals->FxVerifierOn )
    Debug = FxMdlAllocateDebug(m_Globals, this, Buffer, _a2, traceGuid, 1u, retaddr);
  else
LABEL_10:
    Debug = IoAllocateMdl(Buffer, _a2, 0, 1u, 0LL);
  v14 = Debug;
  if ( Debug )
  {
    _a3 = FxProbeAndLockForWrite(Debug, v13);
    v15 = _a3;
    if ( _a3 >= 0 )
    {
      if ( (v14->MdlFlags & 5) != 0 )
        MappedSystemVa = v14->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v14, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
      if ( MappedSystemVa )
      {
        v20 = FxRequestMemory::Create(m_Globals, v17, &pMemory);
        v21 = pMemory;
        v15 = v20;
        if ( v20 >= 0 )
        {
          v15 = FxObject::Commit(pMemory, 0LL, 0LL, (_FX_DRIVER_GLOBALS *)this, 1u);
          if ( v15 >= 0 )
          {
            FxRequestMemory::SetMdl(v21, this, v14, MappedSystemVa, _a2, 0);
            *MemoryObject = v21;
            return v15;
          }
        }
        if ( v21 )
        {
          FxObject::ClearEvtCallbacks(v21);
          ((void (*)(void))v21->DeleteObject)();
        }
      }
      else
      {
        v15 = -1073741670;
      }
      MmUnlockPages(v14);
      v18 = m_Globals->FxVerifierOn == 0;
    }
    else
    {
      WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x23u, WPP_FxRequestKm_cpp_Traceguids, Buffer, _a2, _a3);
      v18 = m_Globals->FxVerifierOn == 0;
    }
    if ( v18 )
      IoFreeMdl(v14);
    else
      FxMdlFreeDebug(m_Globals, v14);
    return v15;
  }
  v15 = -1073741670;
  WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x22u, WPP_FxRequestKm_cpp_Traceguids, 0xC000009A);
  return v15;
}
