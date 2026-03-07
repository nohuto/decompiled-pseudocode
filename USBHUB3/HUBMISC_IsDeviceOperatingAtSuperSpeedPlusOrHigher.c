bool __fastcall HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rcx
  unsigned __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // r8d

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1632) & 0x1000) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(v2 + 204) & 0x100) != 0 )
    {
      v3 = *(unsigned int *)(v2 + 232);
      v4 = *(_DWORD *)(v2 + 188) & 0xF;
      v5 = *(_QWORD *)(v2 + 224);
      v6 = 0LL;
      if ( v3 )
      {
        while ( 1 )
        {
          v7 = *(_DWORD *)(v5 + 4 * v6);
          if ( (v7 & 0xF) == v4 && (v7 & 0x80u) == 0 )
            break;
          if ( ++v6 >= v3 )
          {
            v8 = 0LL;
LABEL_11:
            while ( 1 )
            {
              v9 = *(_DWORD *)(v5 + 4 * v8);
              if ( (v9 & 0xF) == v4 && (v9 & 0x80u) != 0 )
                break;
              if ( ++v8 >= v3 )
                return v1;
            }
            return (v9 & 0xC000) != 0;
          }
        }
        if ( (v7 & 0xC000) == 0 )
          goto LABEL_10;
        return 1;
      }
      else
      {
LABEL_10:
        v8 = 0LL;
        if ( v3 )
          goto LABEL_11;
      }
    }
  }
  return v1;
}
