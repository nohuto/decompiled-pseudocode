const struct tagBASEWNDCONTAINERINFO *__fastcall CInputDest::GetContainerInfo(CInputDest *this)
{
  const struct tagBASEWNDCONTAINERINFO *result; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 23) == 1 )
  {
    v2 = *((_QWORD *)this + 10);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 136);
      if ( v3 )
        return (const struct tagBASEWNDCONTAINERINFO *)v3;
    }
  }
  return result;
}
