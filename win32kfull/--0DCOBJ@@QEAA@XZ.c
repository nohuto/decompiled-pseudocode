DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  return this;
}
