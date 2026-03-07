PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this)
{
  PATHSTACKOBJ *result; // rax

  *((_DWORD *)this + 114) = 256;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 1) = (char *)this + 120;
  *((_QWORD *)this + 18) = (char *)this + 440;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 56) = (char *)this + 464;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 50) = 1;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 51) = 1;
  *(_QWORD *)this = 0LL;
  return result;
}
