UCHAR __stdcall READ_PORT_UCHAR(PUCHAR Port)
{
  return __inbyte((unsigned __int16)Port);
}
