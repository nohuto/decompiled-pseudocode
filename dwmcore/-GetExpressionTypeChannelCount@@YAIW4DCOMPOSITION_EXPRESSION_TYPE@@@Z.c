__int64 __fastcall GetExpressionTypeChannelCount(int a1)
{
  __int64 result; // rax

  if ( a1 == 35 )
    return (unsigned int)(a1 >> 4);
  switch ( a1 )
  {
    case 17:
    case 18:
    case 42:
    case 52:
    case 69:
    case 70:
    case 71:
    case 104:
    case 265:
      return (unsigned int)(a1 >> 4);
    default:
      result = 0LL;
      break;
  }
  return result;
}
