__int64 __fastcall GetEtwUserHandleType(unsigned __int8 a1)
{
  __int64 result; // rax

  result = 255LL;
  if ( a1 != 255 )
  {
    result = 12LL;
    if ( a1 <= 0xCu )
    {
      if ( a1 != 12 )
      {
        result = 6LL;
        if ( a1 > 6u )
        {
          result = 7LL;
          if ( a1 != 7 )
          {
            switch ( a1 )
            {
              case 8u:
                return 8LL;
              case 9u:
                return 9LL;
              case 0xAu:
                return 10LL;
              case 0xBu:
                return 11LL;
            }
            return 0xFFFFFFFFLL;
          }
        }
        else if ( a1 != 6 )
        {
          switch ( a1 )
          {
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
          }
          return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      result = 19LL;
      if ( a1 == 19 )
        return result;
      if ( a1 <= 0x13u )
      {
        result = 13LL;
        switch ( a1 )
        {
          case 0xDu:
            return result;
          case 0xEu:
            return 14LL;
          case 0xFu:
            return 15LL;
          case 0x10u:
            return 16LL;
          case 0x11u:
            return 17LL;
          case 0x12u:
            return 18LL;
        }
        return 0xFFFFFFFFLL;
      }
      result = 20LL;
      if ( a1 != 20 )
      {
        switch ( a1 )
        {
          case 0x15u:
            return 21LL;
          case 0x16u:
            return 22LL;
          case 0x17u:
            return 23LL;
          case 0x18u:
            return 24LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
  }
  return result;
}
