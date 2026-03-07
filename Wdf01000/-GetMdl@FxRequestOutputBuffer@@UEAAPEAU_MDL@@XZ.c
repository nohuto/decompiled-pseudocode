_MDL *__fastcall FxRequestOutputBuffer::GetMdl(FxRequestOutputBuffer *this)
{
  if ( (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3) == 1
    || (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3) == 2 )
  {
    return this->m_Mdl;
  }
  else
  {
    return 0LL;
  }
}
