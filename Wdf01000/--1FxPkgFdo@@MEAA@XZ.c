void __fastcall FxPkgFdo::~FxPkgFdo(FxPkgFdo *this)
{
  FxChildList *m_DefaultDeviceList; // rcx
  FxChildList *m_StaticDeviceList; // rcx
  FxIoTargetSelf *m_SelfTarget; // rcx
  FxIoTarget *m_DefaultTarget; // rcx

  this->__vftable = (FxPkgFdo_vtbl *)FxPkgFdo::`vftable';
  m_DefaultDeviceList = this->m_DefaultDeviceList;
  if ( m_DefaultDeviceList )
    m_DefaultDeviceList->Release(
      m_DefaultDeviceList,
      this,
      177,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
  m_StaticDeviceList = this->m_StaticDeviceList;
  if ( m_StaticDeviceList )
    m_StaticDeviceList->Release(
      m_StaticDeviceList,
      this,
      180,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
  m_SelfTarget = this->m_SelfTarget;
  if ( m_SelfTarget )
    m_SelfTarget->Release(m_SelfTarget, this, 183, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
  m_DefaultTarget = this->m_DefaultTarget;
  if ( m_DefaultTarget )
    m_DefaultTarget->Release(
      m_DefaultTarget,
      this,
      186,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
  FxPkgPnp::~FxPkgPnp(this);
}
