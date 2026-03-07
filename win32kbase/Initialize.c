int Initialize()
{
  void *v0; // rax
  int v1; // ebx
  void *v2; // rdi
  int v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+5Ch] [rbp-14h]

  v5 = 0;
  UIPrivelegeIsolation::fEnforce = 0;
  LODWORD(v0) = RtlQueryElevationFlags(&v5);
  if ( (v5 & 1) != 0 )
  {
    v1 = 0;
    ResultLength = 0;
    DestinationString = 0LL;
    v4 = gdwPolicyFlags;
    while ( 1 )
    {
      v0 = OpenCacheKeyEx(0LL, 49LL, 131097LL, &v4);
      v2 = v0;
      if ( !v0 )
        break;
      RtlInitUnicodeString(&DestinationString, L"EnableUIPI");
      if ( ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
      {
        v1 = v9;
        v4 = 0;
      }
      else if ( !v4 )
      {
        v1 = 1;
      }
      LODWORD(v0) = ZwClose(v2);
      if ( !v4 )
      {
        UIPrivelegeIsolation::fEnforce = 0;
        if ( !v1 )
          return (int)v0;
        break;
      }
    }
    UIPrivelegeIsolation::fEnforce = 1;
  }
  return (int)v0;
}
