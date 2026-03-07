unsigned __int64 __fastcall CComposition::GetEffectiveCompositionFrameId(CComposition *this)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx

  result = *((_QWORD *)this + 62);
  if ( result == *((_QWORD *)this + 63) )
  {
    v2 = result + 1;
    result = 1LL;
    if ( v2 )
      return v2;
  }
  return result;
}
