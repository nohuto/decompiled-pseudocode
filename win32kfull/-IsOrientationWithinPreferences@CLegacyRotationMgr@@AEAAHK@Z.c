__int64 __fastcall CLegacyRotationMgr::IsOrientationWithinPreferences(CLegacyRotationMgr *this, int a2)
{
  unsigned int v3; // ebx
  unsigned int ActivePpiPreference; // edx
  int v6; // edi
  int v7; // edi
  int v8; // ecx
  CLegacyRotationMgr *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = 0;
  ActivePpiPreference = CRotationMgr::GetActivePpiPreference(0LL);
  if ( !ActivePpiPreference )
    return 1LL;
  if ( ActivePpiPreference != 0x80000000 )
  {
    if ( ActivePpiPreference == 0x40000000 )
    {
      LODWORD(v9) = 0;
      if ( (int)GetCurrentOrientation((unsigned int *)&v9) >= 0 )
        return ((unsigned __int8)a2 ^ (unsigned __int8)~(_BYTE)v9) & 1;
      return 0LL;
    }
    if ( !a2 )
    {
      if ( dword_1C035D5E8 )
        return ActivePpiPreference & 2;
      else
        return ActivePpiPreference & 1;
    }
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return v3;
        v8 = dword_1C035D5E8 != 0 ? 1 : 8;
      }
      else
      {
        v8 = dword_1C035D5E8 != 0 ? 8 : 4;
      }
    }
    else
    {
      v8 = dword_1C035D5E8 != 0 ? 4 : 2;
    }
    return v8 & ActivePpiPreference;
  }
  return 0LL;
}
