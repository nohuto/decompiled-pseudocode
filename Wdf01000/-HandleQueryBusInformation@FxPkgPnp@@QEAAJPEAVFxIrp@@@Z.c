__int64 __fastcall FxPkgPnp::HandleQueryBusInformation(FxPkgPnp *this, FxIrp *Irp)
{
  unsigned int v2; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 Pool2; // rax
  __int64 v7; // xmm1_8
  const void *_a1; // rax
  int _a2; // edx

  v2 = 0;
  if ( this->m_BusInformation.BusTypeGuid.Data1 )
  {
    m_Globals = this->m_Globals;
    Pool2 = ExAllocatePool2(256LL, 24LL, m_Globals->Tag);
    if ( Pool2 )
    {
      v7 = *(_QWORD *)&this->m_BusInformation.LegacyBusType;
      *(_GUID *)Pool2 = this->m_BusInformation.BusTypeGuid;
      *(_QWORD *)(Pool2 + 16) = v7;
      Irp->m_Irp->IoStatus.Information = Pool2;
    }
    else
    {
      Irp->m_Irp->IoStatus.Information = 0LL;
      v2 = -1073741670;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x1Du, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
    }
  }
  else
  {
    return (unsigned int)Irp->m_Irp->IoStatus.Status;
  }
  return v2;
}
