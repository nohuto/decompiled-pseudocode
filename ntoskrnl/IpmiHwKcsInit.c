/*
 * XREFs of IpmiHwKcsInit @ 0x1406752BC
 * Callers:
 *     IpmiHwInitializeContext @ 0x1406751C8 (IpmiHwInitializeContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 */

__int64 IpmiHwKcsInit()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (_QWORD)xmmword_140C2C7B0 )
  {
    xmmword_140C2C800 = 0LL;
    if ( BYTE8(xmmword_140C2C7B0) )
    {
      *(_QWORD *)&xmmword_140C2C800 = xmmword_140C2C7B0;
      DWORD2(xmmword_140C2C800) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_140C2C800 = MmMapIoSpaceEx(xmmword_140C2C7B0, 2LL * BYTE8(WheaIpmiContext), 0x204u);
      if ( (_QWORD)xmmword_140C2C800 )
        DWORD2(xmmword_140C2C800) = 2 * BYTE8(WheaIpmiContext);
      else
        return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v0;
}
