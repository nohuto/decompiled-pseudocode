__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  v2 = 0LL;
  v3 = 0LL;
  if ( byte_140CF7758 )
    return (unsigned int)dword_140C0B4D8;
  v1 = 1;
  if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v2) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C0B4D8 = v1;
  result = v1;
  byte_140CF7758 = 1;
  return result;
}
