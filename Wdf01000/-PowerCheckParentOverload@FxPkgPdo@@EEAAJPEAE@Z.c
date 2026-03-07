int __fastcall FxPkgPdo::PowerCheckParentOverload(FxPkgPdo *this, bool *WaitForParentOn)
{
  FxDeviceBase *m_DeviceBase; // rax
  int result; // eax
  unsigned __int8 parentOn; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_HasPowerDependencyOnParent )
  {
    m_DeviceBase = this->m_DeviceBase;
    parentOn = 0;
    result = FxPkgPnp::PowerPolicyCanChildPowerUp(
               *(FxPkgPnp **)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 648LL),
               &parentOn);
    if ( result >= 0 )
      *WaitForParentOn = parentOn == 0;
  }
  else
  {
    *WaitForParentOn = 0;
    return 0;
  }
  return result;
}
