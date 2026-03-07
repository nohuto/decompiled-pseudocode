__int16 __fastcall READ_PORT_USHORT_PAIR(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int8 v3; // al
  __int16 v4; // di
  unsigned __int8 v5; // al

  v3 = __inbyte(a1);
  v4 = v3;
  HalpIoDelay();
  v5 = __inbyte(a2);
  return v4 | (v5 << 8);
}
