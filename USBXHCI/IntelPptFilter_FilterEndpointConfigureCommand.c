__int64 __fastcall IntelPptFilter_FilterEndpointConfigureCommand(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r10
  int v5; // edx
  unsigned int v7; // edi
  unsigned __int8 v8; // cl
  unsigned int i; // r9d
  int v10; // r9d
  unsigned int v11; // ecx
  unsigned __int8 j; // dl
  int v13; // ebx
  int v14; // edx

  v3 = *(_DWORD **)(a2 + 72);
  v5 = -4;
  v7 = 1;
  v8 = 0;
  for ( i = *v3 & 0xFFFFFFFC; i; i &= i - 1 )
    ++v8;
  v10 = v8;
  v11 = v3[1] & 0xFFFFFFFC;
  for ( j = 0; v11; v11 &= v11 - 1 )
    ++j;
  v13 = j - v10;
  if ( v13 <= 0 )
  {
    if ( v13 < 0 && a3 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v5,
          16,
          16,
          (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids,
          -(char)v13);
      }
      IntelPptFilter_DecreaseEndpointCount(a1, -v13);
    }
    return 4;
  }
  if ( a3 )
    return 4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v5,
      16,
      14,
      (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids,
      v13);
  }
  if ( IntelPptFilter_CheckAndIncreaseEndpointCount(a1, v13) )
    return 4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v14,
      16,
      15,
      (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids);
  }
  *(_BYTE *)(a2 + 60) = 7;
  return v7;
}
