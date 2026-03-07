// write access to const memory has been detected, the output may be wrong!
__int64 EditionDeferWinEventNotify()
{
  __int64 result; // rax

  result = gdwDeferWinEvent;
  ++gdwDeferWinEvent;
  return result;
}
