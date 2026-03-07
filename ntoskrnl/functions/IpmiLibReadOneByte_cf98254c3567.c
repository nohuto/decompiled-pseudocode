unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140C2C7B0) )
    return __inbyte(xmmword_140C2C800 + a2 * BYTE8(WheaIpmiContext));
  else
    return *(_BYTE *)(xmmword_140C2C800 + BYTE8(WheaIpmiContext) * (unsigned int)a2);
}
