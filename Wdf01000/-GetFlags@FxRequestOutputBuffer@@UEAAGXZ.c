_BOOL8 __fastcall FxRequestOutputBuffer::GetFlags(FxRequestOutputBuffer *this)
{
  return (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3) == 1;
}
