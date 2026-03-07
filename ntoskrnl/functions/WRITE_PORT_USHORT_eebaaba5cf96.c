void __stdcall WRITE_PORT_USHORT(PUSHORT Port, USHORT Value)
{
  __outword((unsigned __int16)Port, Value);
}
