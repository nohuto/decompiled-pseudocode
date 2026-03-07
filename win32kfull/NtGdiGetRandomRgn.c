__int64 __fastcall NtGdiGetRandomRgn(HDC a1, __int64 a2, int a3)
{
  unsigned int RandomRgn; // ebx

  if ( a3 == 5 )
    return 0LL;
  if ( a3 == 4 )
  {
    UserEnterUserCritSecShared();
    RandomRgn = GreGetRandomRgn(a1);
    UserLeaveUserCritSec();
  }
  else
  {
    return (unsigned int)GreGetRandomRgn(a1);
  }
  return RandomRgn;
}
