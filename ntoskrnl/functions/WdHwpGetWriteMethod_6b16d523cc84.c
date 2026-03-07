__int64 (__fastcall *__fastcall WdHwpGetWriteMethod(char a1, char a2))(unsigned __int16 a1, unsigned int a2)
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
          return WdHwpWritePortUChar;
        case 2:
          return WdHwpWritePortUShort;
        case 4:
          return (__int64 (__fastcall *)(unsigned __int16, unsigned int))WRITE_PORT_ULONG;
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        return (__int64 (__fastcall *)(unsigned __int16, unsigned int))WdHwpWriteRegisterUChar;
      case 2:
        return (__int64 (__fastcall *)(unsigned __int16, unsigned int))WdHwpWriteRegisterUShort;
      case 4:
        return (__int64 (__fastcall *)(unsigned __int16, unsigned int))WdHwpWriteRegisterULong;
    }
  }
  return (__int64 (__fastcall *)(unsigned __int16, unsigned int))v2;
}
