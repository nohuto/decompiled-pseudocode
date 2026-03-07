__int64 __fastcall EPATHOBJ::bPreComputedFill(EPATHOBJ *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 2) || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) )
    return 1LL;
  return result;
}
