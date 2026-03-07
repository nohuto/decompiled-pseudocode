__int64 __fastcall FxDmaPacketTransaction::GetNumberOfAvailableMapRegisters(FxDmaPacketTransaction *this)
{
  __int64 result; // rax

  result = this->m_MapRegistersReserved;
  if ( !(_DWORD)result )
    return this->m_AdapterInfo->NumberOfMapRegisters;
  return result;
}
