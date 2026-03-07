unsigned __int64 __fastcall FxMemoryObject::GetBufferSize(FxMemoryObject *this)
{
  return *(_QWORD *)&this->m_Type;
}
