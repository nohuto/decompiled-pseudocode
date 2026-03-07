__int64 __fastcall PnpiCmResourceToBiosGpioInterruptIoDescriptor(__int64 a1, __int64 a2)
{
  char v2; // al
  char v4; // r9
  unsigned int v5; // r10d
  unsigned int v6; // edx
  char *v7; // rcx
  char v8; // al

  v2 = *(_BYTE *)(a1 + 4);
  if ( v2 == 1 )
  {
    v4 = 0;
  }
  else
  {
    if ( v2 )
      return 3221225473LL;
    v4 = 1;
  }
  v5 = *(_DWORD *)(a2 + 16);
  v6 = 0;
  if ( v5 )
  {
    v7 = (char *)(a2 + 20);
    do
    {
      v8 = *v7;
      if ( v4 )
      {
        if ( v8 == 2 && (v7[2] & 0x10) != 0 )
        {
LABEL_10:
          *v7 = 0;
          return 0LL;
        }
      }
      else if ( v8 == -124 )
      {
        goto LABEL_10;
      }
      ++v6;
      v7 += 20;
    }
    while ( v6 < v5 );
  }
  return 3221225473LL;
}
