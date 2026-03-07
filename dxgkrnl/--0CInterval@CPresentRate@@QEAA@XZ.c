CPresentRate::CInterval *__fastcall CPresentRate::CInterval::CInterval(CPresentRate::CInterval *this)
{
  CPresentRate::CInterval *result; // rax

  *(_DWORD *)this = 0;
  result = this;
  *((_DWORD *)this + 1) = 0;
  return result;
}
