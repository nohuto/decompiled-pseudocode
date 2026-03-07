__int64 __fastcall SdbpCheckFromStringVersion(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // esi
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  int v9; // r10d
  unsigned __int16 v10; // ax

  v4 = 1;
  if ( (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() && *a1 )
  {
    while ( 1 )
    {
      v5 = *a2;
      if ( !*a2 )
        break;
      v6 = *a1;
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0;
      if ( *a1 == 42 )
      {
        v9 = 1;
        ++a1;
      }
      else
      {
        while ( v6 >= 0x30u && v6 <= 0x39u )
        {
          ++a1;
          v7 = v6 + 2 * (5 * v7 - 24);
          v6 = *a1;
        }
      }
      while ( v5 >= 0x30u && v5 <= 0x39u )
      {
        if ( !v9 )
          v8 = v5 + 2 * (5 * v8 - 24);
        v5 = *++a2;
      }
      if ( !v9 && v7 != v8 )
        return v7 < v8;
      if ( *a1 )
      {
        if ( *a2 && *a1 != *a2 )
          return 0;
        ++a1;
      }
      if ( *a2 )
        ++a2;
      v10 = *a1;
      if ( (*a1 || *a2) && (!v4 || v10 || !v9) )
      {
        v4 = 0;
        if ( v10 )
          continue;
      }
      return v4;
    }
  }
  return v4;
}
