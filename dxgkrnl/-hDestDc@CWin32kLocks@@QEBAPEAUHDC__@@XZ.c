HDC __fastcall CWin32kLocks::hDestDc(CWin32kLocks *this)
{
  HDC result; // rax

  result = (HDC)*((_QWORD *)this + 1);
  if ( !result )
    return *(HDC *)this;
  return result;
}
