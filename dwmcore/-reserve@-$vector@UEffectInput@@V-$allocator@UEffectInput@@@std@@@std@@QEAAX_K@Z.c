unsigned __int64 __fastcall std::vector<EffectInput>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[2] - *a1) >> 3);
  if ( a2 > result )
  {
    if ( a2 > 0x276276276276276LL )
      std::_Xlength_error("vector too long");
    return std::vector<EffectInput>::_Reallocate_exactly();
  }
  return result;
}
