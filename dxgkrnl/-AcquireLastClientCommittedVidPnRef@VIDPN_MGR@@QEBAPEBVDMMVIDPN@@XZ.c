const struct DMMVIDPN *__fastcall VIDPN_MGR::AcquireLastClientCommittedVidPnRef(VIDPN_MGR *this)
{
  const struct DMMVIDPN *result; // rax

  result = (const struct DMMVIDPN *)*((_QWORD *)this + 16);
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)result + 8);
    return (const struct DMMVIDPN *)*((_QWORD *)this + 16);
  }
  return result;
}
