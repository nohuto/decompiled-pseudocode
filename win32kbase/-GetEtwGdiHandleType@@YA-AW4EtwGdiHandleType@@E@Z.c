__int64 __fastcall GetEtwGdiHandleType(unsigned __int8 a1)
{
  __int64 result; // rax

  result = 15LL;
  if ( a1 > 0xFu )
  {
    result = 23LL;
    if ( a1 > 0x17u )
    {
      result = 24LL;
      if ( a1 != 24 )
      {
        switch ( a1 )
        {
          case 0x19u:
            return 25LL;
          case 0x1Au:
            return 26LL;
          case 0x1Bu:
            return 27LL;
          case 0x1Cu:
            return 28LL;
          case 0x1Du:
            return 29LL;
          case 0x1Eu:
            return 30LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
    else if ( a1 != 23 )
    {
      result = 16LL;
      if ( a1 != 16 )
      {
        switch ( a1 )
        {
          case 0x11u:
            return 17LL;
          case 0x12u:
            return 18LL;
          case 0x13u:
            return 19LL;
          case 0x14u:
            return 20LL;
          case 0x15u:
            return 21LL;
          case 0x16u:
            return 22LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    if ( a1 == 15 )
      return result;
    result = 7LL;
    if ( a1 <= 7u )
    {
      switch ( a1 )
      {
        case 7u:
          return result;
        case 0u:
          return 0LL;
        case 1u:
          return 1LL;
        case 2u:
          return 2LL;
        case 3u:
          return 3LL;
        case 4u:
          return 4LL;
        case 5u:
          return 5LL;
        case 6u:
          return 6LL;
      }
      return 0xFFFFFFFFLL;
    }
    result = 8LL;
    if ( a1 != 8 )
    {
      switch ( a1 )
      {
        case 9u:
          return 9LL;
        case 0xAu:
          return 10LL;
        case 0xBu:
          return 11LL;
        case 0xCu:
          return 12LL;
        case 0xDu:
          return 13LL;
        case 0xEu:
          return 14LL;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
