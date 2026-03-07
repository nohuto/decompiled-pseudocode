void __fastcall FxPkgPdo::PowerParentPowerDereference(FxPkgPdo *this)
{
  if ( this->m_HasPowerDependencyOnParent )
    FxPkgPnp::PowerPolicyChildPoweredDown(*(FxPkgPnp **)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL));
}
