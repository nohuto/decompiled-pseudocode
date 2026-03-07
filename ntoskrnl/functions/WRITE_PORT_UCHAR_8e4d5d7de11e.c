void __stdcall WRITE_PORT_UCHAR(PUCHAR Port, UCHAR Value)
{
  __outbyte((unsigned __int16)Port, Value);
}
