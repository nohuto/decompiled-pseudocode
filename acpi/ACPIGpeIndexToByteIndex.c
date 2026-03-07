__int64 ACPIGpeIndexToByteIndex()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx

  if ( !(unsigned __int8)ACPIGpeValidIndex() )
    KeBugCheckEx(0xA5u, 0x17uLL, v0, 1uLL, 0LL);
  v1 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v0 >= v1 )
    return v0 + *((unsigned __int16 *)AcpiInformation + 43) - v1;
  else
    return v0;
}
