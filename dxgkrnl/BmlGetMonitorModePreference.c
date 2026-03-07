__int64 __fastcall BmlGetMonitorModePreference(__int64 a1, int a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx
  int v7; // ecx
  int v8; // ecx
  char IsEDIDCapableOutputTechonology; // al
  __int64 v10; // r8
  _DWORD *v11; // r10
  unsigned int v12; // r9d
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // edx
  __int64 v17; // r10
  int v18; // edx
  int v19; // edx
  int v20; // edx
  __int64 v21; // r10
  __int64 v22; // r10

  v3 = *(_DWORD *)(a1 + 84) - 1;
  if ( !v3 )
  {
    if ( !(unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
      return BmlGetMonitorModeVSyncPreference(v21);
    if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v21 + 28), *(unsigned int *)(v21 + 32)) != 60 )
      return 0LL;
    if ( *(_DWORD *)(v22 + 20) == 800 )
      return 4 - (unsigned int)(*(_DWORD *)(v22 + 24) != 600);
    return 3LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v5 = a2 - 1;
    if ( !v5 )
      return 6LL;
    v15 = v5 - 1;
    if ( !v15 )
      return 6LL;
    v16 = v15 - 1;
    if ( !v16 )
      return 6LL;
    if ( v16 == 1 )
      return 8LL;
    return -1LL;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    v18 = a2 - 1;
    if ( !v18 )
      return 9LL;
    v19 = v18 - 1;
    if ( !v19 )
      return 9LL;
    v20 = v19 - 1;
    if ( !v20 )
      return 9LL;
    if ( v20 == 1 )
      return 10LL;
    return -1LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
    return 5LL;
  if ( v8 != 1 )
    return -1LL;
  IsEDIDCapableOutputTechonology = BmlIsEDIDCapableOutputTechonology(a3);
  v12 = 1;
  if ( !IsEDIDCapableOutputTechonology && v11[22] == 1 )
    return 11LL;
  v13 = *(_DWORD *)(v10 + 80);
  v14 = -1;
  if ( v13 == -1 || v13 == 1 || v13 == 2 || v13 == 3 || v13 == 14 )
  {
    if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound((unsigned int)v11[7], (unsigned int)v11[8]) != 60 )
      return 7LL;
    if ( *(_DWORD *)(v17 + 20) == 800 && *(_DWORD *)(v17 + 24) == 600 )
      return 4LL;
    return 3LL;
  }
  if ( v11[8] )
  {
    v14 = v11[7] / v11[8] + 1;
    if ( (unsigned int)v11[7] % (unsigned __int64)(unsigned int)v11[8] < (unsigned int)v11[8]
                                                                       - (unsigned int)v11[7]
                                                                       % (unsigned __int64)(unsigned int)v11[8] )
      v14 = v11[7] / v11[8];
  }
  if ( v14 - 24 > 0x33 )
  {
    return 0;
  }
  else if ( v14 <= 0x46 && v14 >= 0x32 )
  {
    if ( v14 == 60 )
    {
      if ( v11[5] == 1024 && v11[6] == 768 )
        return 4;
      else
        return 3;
    }
    else
    {
      return 2;
    }
  }
  return v12;
}
