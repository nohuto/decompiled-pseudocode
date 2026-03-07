__int64 __fastcall FxWmiInstanceInternal::SetInstance(
        FxWmiInstanceInternal *this,
        unsigned int InBufferSize,
        void *InBuffer)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, void *))this->m_SetInstance)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           InBufferSize,
           InBuffer);
}
