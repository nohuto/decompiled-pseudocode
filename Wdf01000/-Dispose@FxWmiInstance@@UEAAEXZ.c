unsigned __int8 __fastcall FxWmiInstance::Dispose(FxWmiInstance *this, __int64 a2, unsigned __int8 a3)
{
  FxWmiProvider::RemoveInstance(this->m_Provider, this, a3);
  this->m_Provider->Release(
    this->m_Provider,
    this,
    52,
    "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp");
  return 1;
}
