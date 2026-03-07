bool __fastcall IopIsStandardFsctlIoControlCode(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx

  if ( a1 > 0x110030 )
  {
    v7 = a1 - 1114168;
    if ( !v7 )
      return 1;
    v8 = v7 - 12228;
    if ( !v8 )
      return 1;
    v9 = v8 - 4;
    if ( !v9 )
      return 1;
    v10 = v9 - 4108;
    if ( !v10 )
      return 1;
    return v10 == 32779;
  }
  else
  {
    if ( a1 == 1114160 )
      return 1;
    v1 = a1 - 589864;
    if ( !v1 )
      return 1;
    v2 = v1 - 524252;
    if ( !v2 )
      return 1;
    v3 = v2 - 4;
    if ( !v3 )
      return 1;
    v4 = v3 - 16;
    if ( !v4 )
      return 1;
    v5 = v4 - 4;
    if ( !v5 )
      return 1;
    return v5 == 12;
  }
}
