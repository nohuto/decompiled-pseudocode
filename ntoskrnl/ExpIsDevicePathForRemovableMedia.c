__int64 __fastcall ExpIsDevicePathForRemovableMedia(_BYTE *a1)
{
  char v1; // r9
  unsigned int v2; // edx
  _BYTE *v3; // r8
  _BYTE *v4; // rbx
  _BYTE *v5; // r11
  _BYTE *v6; // r10
  char v7; // r9
  char v9; // al
  __int64 v10; // rcx

  v1 = *a1;
  v2 = 0;
  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (*a1 & 0x7F) == 0x7F )
    return 0LL;
  do
  {
    v7 = v1 & 0x7F;
    if ( v7 == 1 )
    {
      if ( v3[1] == 4 )
      {
        v10 = *(_QWORD *)(v3 + 4) - ExpUnknownDeviceGuid;
        if ( !v10 )
          v10 = *(_QWORD *)(v3 + 12) - qword_140C0DE28;
        if ( !v10 )
          v4 = v3;
      }
    }
    else if ( v7 == 4 )
    {
      v9 = v3[1];
      if ( v9 == 1 )
      {
        v5 = v3;
      }
      else if ( v9 == 4 )
      {
        v6 = v3;
      }
    }
    v3 += *((unsigned __int16 *)v3 + 1);
    v1 = *v3;
  }
  while ( (*v3 & 0x7F) != 0x7F );
  if ( !v4 || v5 )
    return 0LL;
  LOBYTE(v2) = v6 == 0LL;
  return v2;
}
