unsigned __int64 __fastcall FxRequestSystemBuffer::GetBufferSize(FxRequestSystemBuffer *this)
{
  unsigned __int8 *v1; // rdx

  v1 = (unsigned __int8 *)*((_QWORD *)this[-7].m_Buffer + 23);
  if ( *v1 == 3 || *v1 == 4 )
    return *((unsigned int *)v1 + 2);
  if ( (unsigned int)*v1 - 14 < 2 )
    return *((unsigned int *)v1 + 4);
  return 0LL;
}
