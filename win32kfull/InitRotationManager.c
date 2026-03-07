__int64 InitRotationManager()
{
  _QWORD *Pool2; // rcx
  __int64 result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 1836347989LL);
  result = 0LL;
  if ( Pool2 )
  {
    Pool2[1] = 0LL;
    *Pool2 = &CLegacyRotationMgr::`vftable';
    P = Pool2;
  }
  else
  {
    P = 0LL;
    return 3221225495LL;
  }
  return result;
}
