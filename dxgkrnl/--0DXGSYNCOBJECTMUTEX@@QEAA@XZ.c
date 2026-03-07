DXGSYNCOBJECTMUTEX *__fastcall DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX(DXGSYNCOBJECTMUTEX *this)
{
  DXGSYNCOBJECTMUTEX *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_BYTE *)this + 8) = 0;
  return result;
}
