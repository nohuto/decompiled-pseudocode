__int64 __fastcall ConvertVideoStandardType(int a1, _DWORD *a2)
{
  if ( a1 > 14 )
  {
    if ( a1 <= 21 )
    {
      switch ( a1 )
      {
        case 21:
          *a2 = 21;
          break;
        case 15:
          *a2 = 15;
          break;
        case 16:
          *a2 = 16;
          break;
        case 17:
          *a2 = 17;
          break;
        case 18:
          *a2 = 18;
          break;
        case 19:
          *a2 = 19;
          break;
        default:
          *a2 = 20;
          break;
      }
      return 0LL;
    }
    switch ( a1 )
    {
      case 22:
        *a2 = 22;
        return 0LL;
      case 23:
        *a2 = 23;
        return 0LL;
      case 24:
        *a2 = 24;
        return 0LL;
      case 25:
        *a2 = 25;
        return 0LL;
      case 26:
        *a2 = 26;
        return 0LL;
      case 27:
        *a2 = 27;
        return 0LL;
    }
  }
  else
  {
    if ( a1 == 14 )
    {
      *a2 = 14;
      return 0LL;
    }
    if ( a1 > 7 )
    {
      switch ( a1 )
      {
        case 8:
          *a2 = 8;
          break;
        case 9:
          *a2 = 9;
          break;
        case 10:
          *a2 = 10;
          break;
        case 11:
          *a2 = 11;
          break;
        case 12:
          *a2 = 12;
          break;
        default:
          *a2 = 13;
          break;
      }
      return 0LL;
    }
    switch ( a1 )
    {
      case 7:
        *a2 = 7;
        return 0LL;
      case 0:
        *a2 = 255;
        return 0LL;
      case 1:
        *a2 = 1;
        return 0LL;
      case 2:
        *a2 = 2;
        return 0LL;
      case 3:
        *a2 = 3;
        return 0LL;
      case 4:
        *a2 = 4;
        return 0LL;
      case 5:
        *a2 = 5;
        return 0LL;
      case 6:
        *a2 = 6;
        return 0LL;
    }
  }
  WdLogSingleEntry1(2LL, a1);
  *a2 = 0;
  return 3223192354LL;
}
