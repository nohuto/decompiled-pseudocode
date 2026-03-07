_LIST_ENTRY **__fastcall FxWmiProvider::GetInstanceReferencedLocked(FxWmiProvider *this, unsigned int Index, void *Tag)
{
  unsigned int m_NumInstances; // r10d
  _LIST_ENTRY **p_Blink; // rbx
  _LIST_ENTRY *Flink; // r9
  int v6; // eax

  m_NumInstances = this->m_NumInstances;
  p_Blink = 0LL;
  Flink = this->m_InstanceListHead.Flink;
  v6 = 0;
  if ( m_NumInstances )
  {
    while ( v6 != Index )
    {
      Flink = Flink->Flink;
      if ( ++v6 >= m_NumInstances )
        return p_Blink;
    }
    p_Blink = &Flink[-8].Blink;
    FxObject::AddRef(
      (FxObject *)&Flink[-8].Blink,
      Tag,
      498,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiprovider.cpp");
  }
  return p_Blink;
}
