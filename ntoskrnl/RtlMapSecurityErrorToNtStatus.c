__int64 __fastcall RtlMapSecurityErrorToNtStatus(int a1)
{
  unsigned int v1; // edx

  v1 = a1;
  if ( a1 <= -2146893034 )
  {
    if ( a1 == -2146893034 )
    {
      return (unsigned int)-1073741570;
    }
    else
    {
      switch ( a1 )
      {
        case -2146893056:
          v1 = -1073741670;
          break;
        case -2146893055:
          v1 = -1073741816;
          break;
        case -2146893054:
        case -2146893046:
          return (unsigned int)-1073741637;
        case -2146893053:
          v1 = -1073741634;
          break;
        case -2146893052:
          v1 = -1073741595;
          break;
        case -2146893051:
        case -2146893049:
          return (unsigned int)-1073741570;
        case -2146893050:
          v1 = -1073741727;
          break;
        case -2146893048:
        case -2146893047:
          return (unsigned int)-1073741811;
        case -2146893045:
          v1 = -1073741555;
          break;
        case -2146893044:
          v1 = -1073741715;
          break;
        case -2146893043:
        case -2146893042:
          v1 = -1073741729;
          break;
        case -2146893041:
        case -2146893040:
          v1 = -1073741790;
          break;
        case -2146893039:
          v1 = -1073741730;
          break;
        default:
          return v1;
      }
    }
  }
  else
  {
    switch ( a1 )
    {
      case -2146893020:
        return (unsigned int)-1073741517;
      case -2146893007:
        return (unsigned int)-1073741637;
      case -2146892963:
        return (unsigned int)-1073741811;
    }
  }
  return v1;
}
