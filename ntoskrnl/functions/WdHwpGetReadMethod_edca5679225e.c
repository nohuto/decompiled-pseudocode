__int64 (__fastcall *__fastcall WdHwpGetReadMethod(char a1, char a2))(unsigned __int16 a1)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      switch ( a2 )
      {
        case 1:
          return WdHwpReadPortUChar;
        case 2:
          return WdHwpReadPortUShort;
        case 4:
          return (__int64 (__fastcall *)(unsigned __int16))WdHwpReadPortULong;
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        return (__int64 (__fastcall *)(unsigned __int16))WdHwpReadRegisterUChar;
      case 2:
        return (__int64 (__fastcall *)(unsigned __int16))READ_REGISTER_USHORT;
      case 4:
        return (__int64 (__fastcall *)(unsigned __int16))READ_REGISTER_ULONG;
    }
  }
  return (__int64 (__fastcall *)(unsigned __int16))v2;
}
