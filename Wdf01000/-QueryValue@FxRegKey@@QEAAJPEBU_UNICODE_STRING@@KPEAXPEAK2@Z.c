int __fastcall FxRegKey::QueryValue(
        FxRegKey *this,
        const _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  return FxRegKey::_QueryValue(
           this->m_Globals,
           this->m_Key,
           ValueName,
           ValueLength,
           Value,
           ValueLengthQueried,
           ValueType);
}
