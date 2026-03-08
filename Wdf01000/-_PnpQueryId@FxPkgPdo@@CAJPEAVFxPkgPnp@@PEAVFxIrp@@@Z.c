/*
 * XREFs of ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0069A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     ?FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z @ 0x1C004F364 (-FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryId(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  signed int Status; // ebx
  unsigned int _a3; // ebp
  const void *_a2; // rax
  unsigned __int8 v8; // dl
  const wchar_t *m_Lock; // rbx
  size_t v10; // rsi
  void *v11; // rax
  unsigned __int64 v12; // r14
  FxDeviceBase *m_DeviceBase; // rsi
  __int64 v14; // rax
  size_t v15; // r14
  void *Pool2; // rax
  unsigned __int64 v17; // rbx

  m_Globals = This->m_Globals;
  Status = Irp->m_Irp->IoStatus.Status;
  _a3 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( !_a3 )
  {
    m_DeviceBase = This[1].m_DeviceBase;
    goto LABEL_26;
  }
  if ( _a3 != 1 && _a3 != 2 )
  {
    if ( _a3 != 3 && _a3 != 5 )
    {
LABEL_6:
      if ( Status >= 0 )
        return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
      goto LABEL_7;
    }
    if ( _a3 == 3 )
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_NPLock.m_DbgFlagIsInitialized;
    else
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_PnpCapsAddress;
LABEL_26:
    if ( !m_DeviceBase )
      goto LABEL_6;
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)&m_DeviceBase->FxNonPagedObject::FxObject::__vftable + v14) );
    v15 = 2 * v14 + 2;
    Pool2 = (void *)ExAllocatePool2(256LL, v15, m_Globals->Tag);
    v17 = (unsigned __int64)Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, m_DeviceBase, v15);
      Irp->m_Irp->IoStatus.Information = v17;
LABEL_19:
      Status = 0;
      return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
    }
    goto LABEL_20;
  }
  if ( _a3 == 1 )
    m_Lock = (const wchar_t *)This[1].m_NPLock.m_Lock;
  else
    m_Lock = *(const wchar_t **)&This[1].m_PnpState.ByEnum;
  if ( m_Lock )
    v10 = FxCalculateTotalMultiSzStringSize(m_Lock);
  else
    v10 = 4LL;
  v11 = (void *)ExAllocatePool2(256LL, v10, m_Globals->Tag);
  v12 = (unsigned __int64)v11;
  if ( v11 )
  {
    if ( m_Lock )
      memmove(v11, m_Lock, v10);
    Irp->m_Irp->IoStatus.Information = v12;
    goto LABEL_19;
  }
LABEL_20:
  Status = -1073741670;
LABEL_7:
  Irp->m_Irp->IoStatus.Information = 0LL;
  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  if ( Status == -1073741637 )
    WPP_IFR_SF_qDd(m_Globals, v8, 0xCu, 0x14u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, _a2, _a3, 0xC00000BB);
  else
    WPP_IFR_SF_qDd(m_Globals, v8, 0xCu, 0x15u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, _a2, _a3, Status);
  return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
}
