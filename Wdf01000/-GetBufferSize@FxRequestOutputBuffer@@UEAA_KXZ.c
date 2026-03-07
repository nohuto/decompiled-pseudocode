unsigned __int64 __fastcall FxRequestOutputBuffer::GetBufferSize(FxRequestOutputBuffer *this)
{
  return *(unsigned int *)(*((_QWORD *)this[-8].m_Buffer + 23) + 8LL);
}
