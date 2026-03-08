/*
 * XREFs of ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C003A144
 * Callers:
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x1C0035620 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0042450 (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z @ 0x1C004250C (-SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C0048028 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C0048258 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     FxProbeAndLockForWrite @ 0x1C0089878 (FxProbeAndLockForWrite.c)
 *     ?Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA5D4 (-Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

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
