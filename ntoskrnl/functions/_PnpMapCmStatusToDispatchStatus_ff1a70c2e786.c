__int64 __fastcall PnpMapCmStatusToDispatchStatus(unsigned int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0xC000000E:
      return 3221225524LL;
    case 0xC0000039:
      return 3221225523LL;
    case 0xC000003A:
      return 3221225524LL;
    case 0xC00000BB:
      return 3221226021LL;
    case 0xC00000C0:
      return 3221225524LL;
  }
  result = 3221225524LL;
  if ( a1 != -1073741127 )
    return a1;
  return result;
}
