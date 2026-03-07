__int64 __fastcall PiCMConvertDeviceKeyType(__int16 a1, int *a2)
{
  unsigned int v2; // r9d
  int v4; // ecx
  int v5; // eax
  int v6; // r10d

  v2 = 0;
  *a2 = 0;
  if ( !(_BYTE)a1 )
    return (unsigned int)-1073741811;
  if ( (unsigned __int8)a1 == 17 )
  {
    *a2 = 17;
    v4 = 529;
    v5 = 273;
    goto LABEL_5;
  }
  if ( (unsigned __int8)a1 == 18 )
  {
    *a2 = 18;
    v4 = 530;
    v5 = 274;
    goto LABEL_5;
  }
  if ( (unsigned __int8)a1 != 19 )
  {
    if ( (unsigned __int8)a1 == 20 )
    {
      *a2 = 20;
      v4 = 532;
      v5 = 276;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  *a2 = 19;
  v4 = 531;
  v5 = 275;
LABEL_5:
  v6 = a1 & 0xFF00;
  if ( v6 )
  {
    if ( v6 == 256 )
    {
      *a2 = v5;
      return v2;
    }
    if ( v6 == 512 )
    {
      *a2 = v4;
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
