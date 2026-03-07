__int64 __fastcall InteractiveControlParser::GetComponentType(__int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  switch ( a1 )
  {
    case 1:
      if ( a2 > 0x35u )
      {
        switch ( a2 )
        {
          case '6':
            return 2;
          case '7':
            return 3;
          case '8':
            return 4;
          case '9':
            return 6;
        }
      }
      else if ( a2 == 53 || a2 == 48 || a2 == 49 || a2 == 50 || (unsigned int)a2 - 51 <= 1 )
      {
        return 1;
      }
      break;
    case 9:
      return 5;
    case 13:
      if ( a2 == 51 )
      {
        return 7;
      }
      else if ( (unsigned int)a2 - 72 <= 1 )
      {
        return 8;
      }
      break;
  }
  return v2;
}
