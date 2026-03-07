FxDpc *__fastcall FxDpc::`scalar deleting destructor'(FxDpc *this, unsigned int a2)
{
  char v2; // bl
  FX_POOL_TRACKER *p_DpcData; // rcx

  v2 = a2;
  FxDpc::~FxDpc(this, a2);
  if ( (v2 & 1) != 0 )
  {
    p_DpcData = (FX_POOL_TRACKER *)&this[-1].m_Dpc.DpcData;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_DpcData = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_DpcData);
  }
  return this;
}
